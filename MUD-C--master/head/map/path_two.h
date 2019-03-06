#ifndef PATH_TWO_H
#define PATH_TOW_H


const int PATH_WIDE = 60;
const int PATH_LENGTH = 10;


class Path_two: public Map
{
public:
    pair<int, int> operate();
    void ini();
    void show();
    void moster_attack();

private:
    int x;
    int y;
    char path_two[PATH_WIDE][PATH_LENGTH];
};

void Path_two::ini()
{
    x = 4;
    y = 8;

    memset(path_two, 0, sizeof(path_two));
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < PATH_LENGTH; j ++){
            path_two[i][j] = '*';
            path_two[PATH_WIDE - 1 - i][j] = '*';
        }
    }
    path_two[0][3] = path_two[0][6] = path_two[PATH_LENGTH - 1][3] = path_two[PATH_LENGTH - 1][6] = '-';
}

pair<int, int> Path_two::operate()
{
    char ch;
    srand(time(NULL));

    while(1){
        system("cls");
        if(path_two[x][y] == '*'){
            int t = rand() % 10;

            if(!t){
                system("cls");
                cout << "Attack coming!" << endl;
                system("pause");
            }
        }
        system("cls");
        show();
        ch = getch();
        switch(ch){
        case 72://Up
            x -= 2;
            //cout<<"UP";
            break;
        case 80: //down
            x += 2;
            break;
        case 75://left
            y -= 2;
            break;
        case 77://right
            y += 2;
            break;
        default:
            break;
        }//end switch
    }//end whil
}

void Path_two::show()
{
    for(int i = 0; i < PATH_WIDE; i ++){
        for(int j = 0; j < PATH_LENGTH; j ++){
            if(i == x && j == y){
                cout << 'P';
            }
            else if(path_two[i][j] == 0){
                cout << ' ';
            }
            else{
                cout << path_two[i][j];
            }
        }
        cout << endl;
    }
}


#endif //PATH_TWO_H

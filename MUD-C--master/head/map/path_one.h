#ifndef PATH_ONE_H
#define PATH_ONE_H


const int PATH_ONE_WIDE = 10;
const int PATH_ONE_LENGTH = 60;


class Path_one: public Map
{
public:
	pair<int, int> operate();
	void ini();
	void show();
	void moster_attack();

private:
	int x;
	int y;
	char path_one[PATH_ONE_WIDE][PATH_ONE_LENGTH];
};

void Path_one::ini()
{
	x = 4;
	y = 8;

	memset(path_one, 0, sizeof(path_one));
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < PATH_ONE_LENGTH; j ++){
			path_one[i][j] = '*';
			path_one[PATH_ONE_WIDE - 1 - i][j] = '*';
		}
	}
	path_one[3][0] = path_one[6][0] = path_one[3][PATH_ONE_LENGTH - 1] = path_one[6][PATH_ONE_LENGTH - 1] = '-';
}

pair<int, int> Path_one::operate()
{
	char ch;
	srand(time(NULL));

    while(1){
        system("cls");
        if(path_one[x][y] == '*'){
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

void Path_one::show()
{
	for(int i = 0; i < PATH_ONE_WIDE; i ++){
		for(int j = 0; j < PATH_ONE_LENGTH; j ++){
			if(i == x && j == y){
				cout << 'P';
			}
			else if(path_one[i][j] == 0){
				cout << ' ';
			}
			else{
				cout << path_one[i][j];
			}
		}
		cout << endl;
	}
}



#endif //PATH_ONE_H

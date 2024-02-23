#include<iostream>
#include<ctime>
using namespace std;

bool isBoxEmpty(char box[],int size){
   
    for(int i = 0;i < size;i++){
        if(box[i] == ' ') return true;
    }
    return false;
}


void vypis(char item[]) {
    cout << "     |     |   \n";
    cout << "  " << item[0] << "  |  " << item[1] << "  |  " << item[2] << '\n';
    cout << "     |     |   \n";
    cout << "----------------\n";
    cout << "     |     |   \n";
    cout << "  " << item[3] << "  |  " << item[4] << "  |  " << item[5] << '\n';
    cout << "     |     |   \n";
    cout << "----------------\n";
    cout << "     |     |   \n";
    cout << "  " << item[6] << "  |  " << item[7] << "  |  " << item[8] << '\n';
    cout << "     |     |   \n";
    cout << '\n';
    cout << '\n';
}


int main(){

    char item[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int size = sizeof(item) / sizeof(item[0]);
    int input;

    cout << "**********************\n";
    cout << "*  Tic Tac Toe Game  *\n";
    cout << "**********************\n";
    cout << '\n';

    vypis(item);

    while(isBoxEmpty(item,size)){
        cin >> input;
        if(item[input - 1] == ' '){
            item[input - 1] = 'X';
            vypis(item);
        }
        else cout << "This box is already taken!\n";    
    }
    
    return 0;
}

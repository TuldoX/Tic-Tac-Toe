#include<iostream>
#include<ctime>
using namespace std;

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
}


int main(){

    char item[9] = {'X','X','X','X','X','X','X','X','X'};
    int input;

    cout << "**********************\n";
    cout << "*  Tic Tac Toe Game  *\n";
    cout << "**********************\n";
    cout << '\n';

    vypis(item);

    cout << "Choose the box. (from 1 - 9): ";
    cin >> input;


    return 0;
}

#include<iostream>
#include<ctime>
using namespace std;

bool isBoxEmpty(char box[], int size) {
    for (int i = 0; i < size; i++) {
        if (box[i] == ' ') return true;
    }
    return false;
}

int pcChar(char box[], int size) {
    int i;
    while (true) {
        i = rand() % 9;
        if (isBoxEmpty(box, size)) {
            if (box[i] == ' ') {
                return i;
            }
        } else {
            i = rand() % 9;
        }
    }
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

int main() {

    srand(time(NULL));

    char item[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
    int size = sizeof(item) / sizeof(item[0]);
    int input;

    cout << "**********************\n";
    cout << "*  Tic Tac Toe Game  *\n";
    cout << "**********************\n";
    cout << '\n';

    while (isBoxEmpty(item, size)) {
        vypis(item);
        cin >> input;
        if (item[input - 1] == ' ') {
            item[input - 1] = 'X';
            if (!isBoxEmpty(item, size)) {
                cout << "No empty boxes left. Game over!" << endl;
                break;
            }
            int j = pcChar(item, size);
            item[j] = 'O';
        }
        else cout << "This box is already taken!\n";
    }
    vypis(item); 
    return 0;
}

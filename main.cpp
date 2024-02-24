#include<iostream>
#include<ctime>
using namespace std;

bool winner(char box[]){
    if(
        (box[0] == box[1] && box[1] == box[2]) && box[0] != ' '|| 
        (box[3] == box[4] && box[4] == box[5])  && box[3] != ' '|| 
        (box[6] == box[7] && box[7] == box[8])  && box[6] != ' '||
        (box[0] == box[3] && box[3] == box[6])  && box[0] != ' '|| 
        (box[1] == box[4] && box[4] == box[7])  && box[1] != ' '|| 
        (box[2] == box[5] && box[5] == box[8])  && box[2] != ' '||
        (box[0] == box[4] && box[4] == box[8])  && box[0] != ' '|| 
        (box[2] == box[4] && box[4] == box[6])   && box[2] != ' '
    ) return true;
    else return false;
}

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
        cout << "Choose a box (from up, 1 - 9): ";
        cin >> input;
        if (item[input - 1] == ' ') {
            item[input - 1] = 'X';
            if(winner(item)){
                vypis(item);
                cout << "Player wins!";
                return 0;
            }
            if (!isBoxEmpty(item, size)) {
                cout << "No empty boxes left. Game over!" << endl;
                break;
            }
            int j = pcChar(item, size);
            item[j] = 'O';
            if(winner(item)){
                vypis(item);
                cout << "PC wins!";
                return 0;
            }
        }
        else cout << "This box is already taken!\n";       
    }
    if (!winner(item)) {
        vypis(item);
        cout << "The game is a draw!";
    }
    return 0;
}

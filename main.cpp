#include <iostream>

#define sq(x) x*x       //macro for sqaure
using namespace std;

const int WIDTH = 50;
const int HEIGHT = 25;

void SnakeBoard(){
    for(int i = 0; i < HEIGHT; i++){
        cout << "\t|";
        for (int j = 0; j < WIDTH - 2 ; j++){
            if(i == 0){
                cout << "^";
            }
            else if(i == HEIGHT-1){
                cout << "_";
            }
            else
                cout << " ";
        }
        cout << "|" << endl;
    }
}
int main()
{
    SnakeBoard();
    return 0;
}

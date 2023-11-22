#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "*********DESIGNED BY MIT******\n";
    srand(time(NULL));

    int number;
    int guesses;
    int tries = 5;
    int current_tries = 0;
    number = (rand() % 100) + 1;

    do{
        cout << "Guess the number ";
        cin >> guesses;
        if(guesses < number){
            cout << "You're lower\n\n";
            current_tries++;
        }else if(guesses > number){
            cout << "You're too high\n\n";
            current_tries++;
        }else{
            cout << "You're correct !!!\n\n";
            break;
        }
        if (current_tries == tries+1){
            cout << "The number was " << number << endl;
            cout << "Try again later\n";
        }
    }while(current_tries <=  tries);
    return 0;
}

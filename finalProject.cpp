#include <iostream>

using namespace std;

void wordGuess();
int main() {

    cout << "welcome to the mystery word game, where you will guess the mystery word" << endl;
    cout << "lets start!" << endl;
    wordGuess();


}

void wordGuess(){
    int counter = 0;
    int *count = &counter;
    char mysteryWord[8] = {"mystery"};
    char *myst1 = &mysteryWord[0];
    char *pointer = myst1;
    bool check = false;
    bool *c = &check;
    int counter1 , counter2, counter3;
    int *c1 = &counter1, *c2 = &counter2, *c3 = &counter3;



    char a[7];
    char *a1 = &a[0];
    char *a2 = a1;
    for (*c1 = 0; *c1 < 7; ++(*c1), (a1)++) {
        cout << "please guess a letter: ";
        cin >> *a1;
        myst1 = pointer;
        *count = 0;
        for (*c2 = 0; *c2 < 7; ++(*c2), myst1++) {
            *c = false;
            a1 = a2;
            for (*c3 = 0; *c3 <= *c1; ++(*c3), (a1)++) {
                if (*a1 == *myst1) {
                    cout << *myst1;
                    (*count)++;
                    *c = true;
                }
            }
            if (!*c) {
                cout << "*";
            }
        }
        if (*count == 7) {
            cout << "You guessed the word";
            return;
        }
        cout << endl;
        a1 = a2;
        a1 += *c1;
        }
    cout << "you are a failure!!!";
}


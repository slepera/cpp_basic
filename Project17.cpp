#include <iostream>
#include<unistd.h>
using namespace std;

string phrases[] = {"piece of cake","all in a day's work","behind the scenes","catching some z's","dancing in the rain","early bird gets the worm","finding your feet","going the extra mile","hitting the jackpot","in the nick of time","jumping for joy","keeping up appearances","living on cloud nine","making waves","no pain, no gain","on cloud nine","playing by ear","quiet as a mouse","raining cats and dogs","shooting for the stars","taking the plunge","under the weather","walking on sunshine","x marks the spot","you snooze, you lose","a dime a dozen","biting the bullet","crying over spilled milk","don't count your chickens before they hatch","every cloud has a silver lining","flying by the seat of your pants","getting cold feet","hitting the nail on the head","ignorance is bliss","just the tip of the iceberg","killing two birds with one stone","letting the cat out of the bag","making a mountain out of a molehill","no stone unturned","once in a blue moon","putting the cart before the horse","rome wasn't built in a day","stealing someone's thunder","the early bird catches the worm","up in arms","variety is the spice of life","waiting for the other shoe to drop","you can't judge a book by its cover","a bird in the hand is worth two in the bush","actions speak louder than words"};

void play()
{
    string secret_phrase = phrases[rand() % sizeof(phrases) / sizeof(phrases[0])];
    string guess_phrase;
    int charsguessed[26]={0};
    for(int i = 0; i < secret_phrase.length(); i++)
    {
        if(secret_phrase[i]==' ') guess_phrase+= ' ';
        else guess_phrase+= '*';
    }
    int mistakes = 0;

    while (true)
    {
        string guess;
        system("cls");
        cout << guess_phrase << endl;
        cout<<"Remaining attempts:"<< 5-mistakes<<endl;
        cout << "Enter your guess: ";
        getline(cin,guess);
        if(guess.size()==1){
            char guesschar=guess[0];
            if(charsguessed[guesschar-97]==1){
                system("cls");
                cout << guess_phrase << endl;
                cout<<"Remaining attempts:"<< 5-mistakes<<endl;
                cout<<"You already tried this guess!";
                sleep(1);
            }
            else{
                charsguessed[guesschar-97]=1;
                bool foundchar=false;
                for (int i=0; i < guess_phrase.length(); i++)
                {
                    if (secret_phrase[i] == guesschar)
                    {
                        guess_phrase[i] = guesschar;
                        foundchar=true;
                    }
                }
                if(!foundchar) mistakes++;
            }
        }
        else{
            if (secret_phrase == guess){
                guess_phrase=secret_phrase;
                system("cls");
                cout << guess_phrase << endl;
                cout<<"Remaining attempts:"<< 5-mistakes<<endl;
                cout << "You won! The phrase was \"" << secret_phrase <<"\""  << endl;
                break;
            }
            else mistakes++;
        }

        if (mistakes >= 5)
        {
            system("cls");
            cout << guess_phrase << endl;
            cout<<"Remaining attempts:"<< 5-mistakes<<endl;
            cout << "You lost! The phrase was \"" << secret_phrase <<"\""<< endl;
            break;
        }
        if (secret_phrase == guess_phrase)
        {
            system("cls");
            cout << guess_phrase << endl;
            cout<<"Remaining attempts:"<< 5-mistakes<<endl;
            cout << "You won! The phrase was \"" << secret_phrase <<"\"" << endl;
            break;
        }
    }
}

int main()
{
    srand(time(0));
    cout << "Welcome to Guess The Phrase!";
    sleep(3);
    char playagain;
    while(true){
        play();
        cout<<endl<<"Do you want to play again?"<<endl<<"[Y]es      [N]o"<<endl;
        cin>>playagain;
        if(playagain=='n') break;
    }
}
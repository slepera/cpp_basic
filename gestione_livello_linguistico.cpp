#include <iostream>
#include "studente.h"
using namespace std;

const int N = 30;
int n_stud = 0;
studente studenti[N];

void ricerca()
{
    for(int i = 0; i < n_stud; i++)
    {
        studente s1 = studenti[i];
        for(int j = 0; j < n_stud; j++)
        {
            studente s2 = studenti[j];
            if((s1.c.a<s2.c.a)&&((s1.ll.c>s2.ll.c)||
            ((s1.ll.c==s2.ll.c)&&(s1.ll.i>s2.ll.i))))
            {
                cout<<s1.matricola<<endl;
            }
        }
    }
}


void inserimento()
{
    for(int i = 0; i < 5; i++)
    {
        studente s;
        s.matricola = rand()%100 + 1;
        s.c.a = rand()%5 + 1;
        s.c.s = rand()%10 + 65;
        s.ll.c = rand()%3 + 65;
        s.ll.i = rand()%3 + 1;
        studenti[n_stud] = s;
        n_stud++;
    }
}

void stampa()
{
    for(int i = 0; i < n_stud; i++)
    {
        studente s = studenti[i];
        cout<<s.matricola<<" ";
        cout<<s.c.a;
        cout<<s.c.s<<" ";
        cout<<s.ll.c;
        cout<<s.ll.i<<endl;
    }
}

int main()
{
    srand(time(NULL));
    inserimento();
    stampa();
    ricerca();
}
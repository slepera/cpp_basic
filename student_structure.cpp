#include <iostream>
using namespace std;


struct studente {
    string name;
    string surname;
    string class_id;
    float scores[5];
    string subjects[5] = {"info", "mat", "ing", "ita", "gin"};
};

int num_stud=0;
studente array_di_studenti[30];




float trova_voto(string cognome, string nome, string materia)
{
    for(int i = 0; i < num_stud; i++)
    {
        if(array_di_studenti[i].surname == cognome && array_di_studenti[i].name == nome)
        {
            for(int j = 0; j<5; j++)
            {
                if(materia == array_di_studenti[i].subjects[j])
                {
                    return array_di_studenti[i].scores[j];
                }
            }
        }
    }
    return -1;
}

void crea_studente()
{
    studente s;
    cout<<"inserisci il nome dello studente:";
    cin>>s.name;
    cout<<"inserisci il cognome dello studente:";
    cin>>s.surname;
    cout<<"inserisci la classe dello studente:";
    cin>>s.class_id;
    cout<<"inserisci i cinque voti dello studente:";
    cin>>s.scores[0]>>s.scores[1]>>s.scores[2]>>s.scores[3]>>s.scores[4];

    array_di_studenti[num_stud]=s;
    num_stud++;


}


int main()
{

    for(int i = 0; i < 2; i++)
    {
        crea_studente();
    }

    string cognome, nome, materia;
    cout<<"inserisci il cognome da cercare";
    cin>>cognome;
    cout<<"inserisci il nome da cercare";
    cin>>nome;
    cout<<"inserisci la materia da cercare";
    cin>>materia;
    

    float voto = trova_voto(cognome, nome, materia);

    cout<<voto;

}
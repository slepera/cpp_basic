#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;

        Student()
        {

        };
        Student(string n, int a)
        {
            age = a;
            name = n;
        };

};

int main()
{

    Student s;
    s.name = "Salvatore";
    s.age = 40;

    Student *s1 = new Student("Mario", 29);



    cout<<s[0].name<<" "<<s[0].age<<endl;
    cout<<s1->name<<" "<<s1->age<<endl;


}




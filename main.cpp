#include <iostream>
#include <map>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {};

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << name << " - " << age << endl;
    }

bool operator<(const Person &other) {
    return name<other.name;
    }

};

class People{
private:
    int age;
    string name;

public:
    People(){};
    People(int age, string name){
        this->age = age;
        this->name = name;
    }

    void printing() const {
        cout<< age << " .. " << name<<flush;
    }

    bool operator<(const People &othPeople) const {
        return name < othPeople.name;
    }

};

int main() {
    map<int, Person> persons;
    map<People , int> peoples;

    persons[0] = Person("SAID", 39);
    persons[1] = Person("Lahsen", 35);
    persons[2] = Person("Hicham", 42);
    persons[3] = Person("Mohamed", 46);

    peoples[People(39, "SAID")] = 39;
    peoples[People(39, "SAID")] = 40;
    peoples[People(39, "SAID")] = 44;
    peoples[People(39, "SAID")] = 46;


    for (map<int, Person>::iterator it = persons.begin(); it != persons.end(); ++it) {
//        cout<<it->first<<endl<<":"<<flush;
        it->second.print();
    }

    map<People,int>::iterator itr = peoples.begin();

    for ( ; itr != peoples.end() ; ++itr) {

        itr->first.printing();

//        cout << itr->second << flush;

    }
}
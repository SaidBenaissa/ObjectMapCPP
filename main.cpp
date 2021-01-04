#include <iostream>
#include <map>
using namespace std;

class Persom{
private:
    string name;
    int age;

public:
    Persom(){};

    Persom(string name, int age){
        this->name=name;
        this->age=age;
    }

    void print() {
        cout << name << " ---:--- " << age<<endl;
    }

};

int main(){
    map<int, Persom> persons;

    persons[0] = Persom("SAID",39);
    persons[1] = Persom("lahsen",35);
    persons[2] = Persom("Hicham",42);
    persons[3] = Persom("Mohamed",46);

    for (map<int,Persom>::iterator it = persons.begin(); it != persons.end() ; ++it) {
        it->second.print();
    }


}
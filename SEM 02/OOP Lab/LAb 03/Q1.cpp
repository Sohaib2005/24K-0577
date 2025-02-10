#include <iostream>
#include <string>
using namespace std;
class User {
    public:
    int age;
    string name;
    User(string name,int age) {
        this->name = name;
        this->age = age;
    }
};
int main() {
    /*Create a class User with two public fields: int Age and string Name. In the Main method, create an object of class
User and set Name to &quot;Teo&quot; and Age to 24. Then, output to the screen: &quot;My name is {Name} and I&#39;m {Age} years
old.&quot; using object fields for Name and Age.*/
User one("Teo",24);

cout <<"My name is " << one.name << " and I am " << one.age << " years old";
    return 0;
}

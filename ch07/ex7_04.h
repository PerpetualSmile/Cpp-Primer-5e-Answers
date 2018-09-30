#ifndef ex7_04_h
#define ex7_04_h


#include <iostream>
#include <string>
struct Person {
    std::string name;
    std::string address;
    const std::string &getName() const { return name; }
    const std::string &getAddress() const { return address;}
};

std::istream &read(std::istream &in, Person &person) {
    in >> person.name >> person.address;
    if(!in) person = Person();
    return in;
}

std::ostream &print(std::ostream &out, const Person &person) {
    out << person.name << person.address;
    return out;
}
#endif

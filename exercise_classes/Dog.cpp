#include "Dog.h"

#include <string>

using namespace std;


std::string Dog::get_name() {
     return name;
}
int  Dog::get_age() {
     return age;
} 
void Dog::set_name(std::string n){
    name = n;
}
void Dog::set_age(int a) {
   age = a;
}
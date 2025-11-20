#include "Dog.h"
 
 


 Dog::Dog(std::string name, int age) : name{name}, age{age} {}
//  Dog::Dog(std::string name, int age ) 
//  {
//     this->name = name;
//     this->age = age;
//     std::cout << "Calling Constructor" << '\n';
//  }  

Dog::Dog(const Dog &d) : name{d.name}, age{d.age} {
    std::cout << "Copy Constructor";
}

   
  std::string Dog::get_name() {
    std::cout << "The name is " << name;
    return name;
  }

  void Dog::set_name(std::string n)
  {
    name = n;
  }

  int Dog::get_age()
  {
    return age;
  }

  void Dog::set_age(int a)
  {
    age = a;
  }

  std::string speak() {
        return "Woof";
  }



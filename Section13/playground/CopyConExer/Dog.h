#ifndef _DOG_H_
#define _DOG_H_


#include <iostream>
#include <string>

class Dog {

private:
    std::string name;
    int age;




public:
  Dog(std::string name = "None", int age = 0);
  Dog(const Dog &d);
  std::string get_name();
  void set_name(std::string name);
  int get_age();
  void set_age(int age);
  int get_dog_years();
  std::string speak(); 


protected:


};

#endif
#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>


class Person {

    private:
    int socialID;
    std::string name;

    public:
        Person(std::string n, int id);

        // int getSocialID(int socialID);
        // void setSocialID();
         void setName(std::string name);
         std::string getName();

    protected:

}; //class

#endif
#include <iostream>
#include <memory>

class Rectangle {

    private:
    int length;
    int breadth;

    public:
         Rectangle(int l, int b)
         {
            length = l;
            breadth = b;
         }
 int area() 
 {
   return length * breadth;
 }
    protected:

};


int main() 
{
    std::unique_ptr<Rectangle> P1(new Rectangle(10,5));
    std::cout << P1->area() << std::endl;

}
#include <iostream>
using namespace std;
class Box {
   public:
Box(double l = 2.0, double b = 2.0)
{cout <<"Constructor called." << endl;
         length = l;
         breadth = b;}

      double Area() {
         return length * breadth;
      }
      int compare(Box box) {
         return this-> Area () > box. Area();
      }
private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
};
int main() {
   Box Box1(3.3, 1.2);    // Declare box1
   Box Box2(8.5, 6.0);    // Declare box2
   if(Box1.compare(Box2)) {
      cout << "Box2 is smaller than Box1"<< endl;
   } else {
      cout << "Box2 is equal to or larger than Box1"<< endl;
   }
   return 0;
}


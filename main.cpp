//To Do: Nate Roberts
//To Do: Calculate Rectangle Area and perimeter

#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;

  
  double area;
  int perimeter;  
  
  area = length*width;
perimeter = 2*length + 2*width;

cout << "Rectange Properties: " << endl;
cout << "Length = " << length << endl;
cout << "Width = " << width << endl;
cout << "Area = " << area << endl;
cout << "Perimeter = " << perimeter << endl;
}
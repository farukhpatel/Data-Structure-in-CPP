//class is a user defined data types
//object is an intance of a clsss
// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     int a;
//     // Student(){
//     //     // a=100;
//     //     //constructor is automatically called when object is created
//     //     cout<<"Default constructor";
//     // }
//      Student(&objadd){
        
        
//     }
    
//     // void giveInfo(int b)
//     // {
//     //     cout<<b;
//     //     a=b;
//     // }
//     // int Info()
//     // {
//     //  cout<<"Heloo"<<a;
//     //  return 0;
//     // }
// };

// int main(){
//     // creating of an object of class student
//     Student obj;
//     obj.a=100;
//     // Student obj2=obj;//its also a copy constructor in case its deep copy
//     // cout<<obj2.a;
//     // obj2.a=200;
//     // cout<<obj.a;
//     // cout<<obj2.a;
//     // // obj.giveInfo(10);
//     // obj.a=10;
//    Student obj2(obj);
//     // cout<<obj2.a;
//     // obj2.a=200;
//     // cout<<obj.a;
//     // cout<<obj2.a;
//     cout<<"done";
//     return 0;
// }

#include<iostream>
using namespace std;

class Point
{
public:
	int x, y;
public:
	Point(int x1, int y1) { x = x1; y = y1; }

	// Copy constructor
	Point(const Point &p1) {x = p1.x; y = p1.y; }

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
    p2.x=200;
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;
}

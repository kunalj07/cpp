 

 //program to demonstrate destructor and types of constructors. 

 #include<iostream.h> 

 #include<conio.h> 

 class demo 

 { 

         private: 

                int x,y; 

         public: 

                demo(); //constructor 

               ~demo(); //destructor 

               demo(int a,int b);  // parameterised constructor 

               demo(demo &q);   //copy constructor 

               void show();   //print or display 

 }; 

 demo::demo(demo &q) 

 { 

         x=q.x; 

         y=q.y; 

 } 

 demo::demo(int a,int b) 

 { 

         x=a; 

         y=b; 

 } 

 void demo:: show() 

 { 

         cout<<"value of a is->"<<x<<endl; 

         cout<<"value of b is->"<<y<<endl; 

 } 

 demo::demo() 

 { 

  cout<<"constructor called"<<endl; 

 } 

 demo::~demo() 

 { 

 cout<<"destructor called"<<endl; 

 } 

 void main() 

 { 

         clrscr(); 

         demo d; 

         demo d1(10,20); 

         d1.show(); 

         demo d3(d1); 

         d3.show(); 

         getch(); 

 }

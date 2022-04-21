 

 //program to demonstrate destructor by creating two objects. 

 #include<iostream.h> 

 #include<conio.h> 

 class demo 

 { 

         public: 

                demo(); 

               ~demo(); 

 }; 

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

         demo d1; 

         getch(); 

 }

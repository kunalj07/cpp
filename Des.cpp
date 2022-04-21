 

  

 //program to demonstrate destructor. 

 #include<iostream.h> 

 #include<conio.h> 

 class demo 

 { 

         public: 

  

               ~demo(); 

 }; 

  

 demo::~demo() 

 { 

 cout<<"destructor called"<<endl; 

 } 

 void main() 

 { 

         clrscr(); 

         demo d; 

  

         getch(); 

 }

 

 #include<iostream.h> 

 #include<conio.h> 

  

 class demo 

  

 { 

         private: 

                 int x,y; 

         public: 

                 demo(); 

                 demo(int a, int b); 

                 demo(demo &q); 

                ~demo(); 

                void show(); 

 }; 

 demo::demo(demo &q) 

 { 

  x=q.x; 

  y=q.y; 

 } 

 void demo:: show() 

 { 

 cout<<"X is:"<<x<<endl; 

 cout<<"Y is:"<<y<<endl; 

 } 

 demo::demo(int a, int b) 

 { 

  x=a; 

  y=b; 

 } 

  

 demo::demo() 

 { 

         cout<<"constructor called"<<endl; 

 } 

 demo::~demo() 

 { 

         cout<<"desctructor called"<<endl; 

 } 

  

 void main() 

 { 

  

         clrscr(); 

  

         demo d; 

         demo d1(10,20); 

         d1.show(); 

         demo w(d1); 

         w.show(); 

  

         getch();

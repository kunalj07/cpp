 

 //friend function  by using two classes 

 #include<iostream.h> 

 #include<conio.h> 

 class demo1;         //forward decleration 

 class demo           //decleration 

 { 

         private: 

                int a; 

         public: 

                void get_a(); 

                friend void add(demo s,demo1 s1);//decleration of friend function. 

                void show_a(); 

 }; 

  

 class demo1 

 { 

         private: 

                int b; 

                void get_b(); 

                void show_b(); 

                friend void add(demo s,demo1 s1); 

         public: 

 }; 

 //defination 

 void demo::get_a() 

 { 

         cout<<"enter value of a->"<<endl; 

         cin>>a; 

 } 

 void demo1::get_b() 

 { 

         cout<<"enter value of b->"<<endl; 

         cin>>b; 

 } 

 void demo::show_a() 

 { 

         cout<<"value of a is->"<<a<<endl; 

 } 

 void demo1::show_b() 

 { 

         cout<<"value of b is->"<<b<<endl; 

 } 

 void add(demo s,demo1 s1) 

 { 

         cout<<s.a+s1.b; 

 } 

  

 //function call 

 void main() 

 { 

         clrscr(); 

         demo d; 

         d.get_a(); 

         demo1 d1; 

         d1.get_b(); 

         d.show_a(); 

         d1.show_b(); 

         add(d,d1); 

  

  

         getch(); 

 }

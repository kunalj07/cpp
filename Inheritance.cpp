 

 //program for inheritance. 

 #include<iostream.h> 

 #include<conio.h> 

 class a 

 { 

        public: 

               void dispiay() 

               { 

                 cout<<"hello i am base class"<<endl; 

               } 

 }; 

 class b:public class a 

 { 

         public: 

                void display() 

                { 

                 cout<<"hello i am derived from base class."<<endl; 

                } 

 }; 

 int main() 

 { 

         clrscr(); 

         derived d1; 

         d1.display(); 

         d1.display(); 

         return 0; 

         getch(); 

 }

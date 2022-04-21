 

 //program for class 

 #include<iostream.h> 

 #include<conio.h> 

  

 class student 

  

      { 

         public: 

         int rollno; 

         char name[30]; 

           void display() 

           { 

           cout<<"inside class"; 

           } 

      }; 

 void main() 

 { 

         student s; 

         clrscr(); 

         cout<<"enter rollno"<<endl; 

         cin>>s.rollno; 

         cout<<"enter name"<<endl; 

         cin>>s.name; 

  

         cout<<"rollno is"<<s.rollno<<endl; 

         cout<<"name is"<<s.name<<endl; 

         s.display(); 

         getch(); 

 }

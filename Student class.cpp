 

 #include<iostream.h> 

 #include<conio.h> 

 class student 

 { 

  private: 

        int  rollno; 

        char sname[20]; 

  public: 

         void get(); 

         void put(); 

 }; 

 void student::get() 

 { 

         cout<<"enter rollno="; 

         cin>>rollno; 

         cout<<"enter name="; 

         cin>>sname; 

 } 

 void student::put() 

 { 

         cout<<rollno<<"\t\t"<<sname<<endl; 

 } 

 main() 

 { 

         int i; 

         clrscr(); 

         student s[3]; 

         for(i=0;i<3;i++) 

         { 

         s[i].get(); 

         } 

         cout<<"######################################################"<<endl; 

         cout<<"rollno\t\tname"<<endl; 

         cout<<"######################################################"<<endl; 

         for(i=0;i<3;i++) 

         { 

         s[i].put(); 

         } 

         getch(); 

  

 }

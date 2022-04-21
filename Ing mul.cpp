 

 #include<iostream.h> 

 #include<conio.h> 

 class student 

 { 

 protected: 

   int rollno; 

   char name[18]; 

 public: 

  void get(); 

  void put(); 

 }; 

 class mark:public student 

 { 

 protected: 

   int m1,m2; 

 public: 

  void get_mark(); 

  void put_mark(); 

 }; 

 class result:public mark 

 { 

 private: 

   int total; 

 public: 

  void display(); 

 }; 

 void student::get() 

 { 

 cout<<"enter student rollno="; 

 cin>>rollno; 

 cout<<"enter student name="; 

 cin>>name; 

 } 

 void student::put() 

 { 

 cout<<"student rollno is="<<rollno<<endl; 

 cout<<"student name is="<<name<<endl; 

 cout<<"************************************"<<endl; 

 } 

 void mark::get_mark() 

 { 

 get(); 

 cout<<"enter mark of 1st sub="; 

 cin>>m1; 

 cout<<"enter mark of 2nd sub="; 

 cin>>m2; 

 } 

  

  

 void mark::put_mark() 

 { 

 put(); 

 cout<<"marks of 1st sub="<<m1<<endl; 

 cout<<"marks of 2nd sub="<<m2<<endl; 

 cout<<"*************************************"<<endl; 

 } 

 void result::display() 

 { 

 get_mark(); 

 put_mark(); 

 total=m1+m2; 

 cout<<"total is="<<total<<endl; 

 } 

 main() 

 { 

 clrscr(); 

 result r; 

 r.display(); 

 getch(); 

 }

 

 #include<iostream.h> 

 #include<conio.h> 

  class one 

  { 

         int a,b; 

         public: 

         void seta(int x,int y) 

         { 

         a=x; 

         b=y; 

         } 

  friend int add(one); 

  }; 

  int add(one p) 

  { 

  return p.a+p.b; 

  } 

  void main() 

  { 

 int sum,a,b; 

 clrscr(); 

 one q1; 

 cout<<"\n enter the value of a:"; 

 cin>>a>>b; 

 q1.seta(a,b); 

 sum=add(q1); 

 cout<<"\n addition of a+b:"<<sum; 

 getch(); 

 }

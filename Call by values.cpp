 

 //program demonstate parameter passing technique (call by value) 

 #include<iostream.h> 

 #include<conio.h> 

 void swap(int a,int b); 

 void main() 

 { 

         int a,b; 

         clrscr(); 

         cout<<"Enter A:"; 

         cin>>a; 

         cout<<"Enter B:"; 

         cin>>b; 

         cout<<"before Swapping"<<endl; 

         cout<<a<<"\t"<<b<<endl; 

         swap(a,b); 

  

         getch(); 

 } 

 void swap(int x, int y) 

 { 

         int t; 

         t=x; 

         x=y; 

         y=t; 

         cout<<"After swapping"<<endl; 

         cout<<x<<"\t"<<y<<endl; 

  

 }

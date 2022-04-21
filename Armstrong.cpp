 

 #include<iostream.h> 

 #include<conio.h> 

 void main() 

 { 

         int sum=0,n,r,t; 

         clrscr(); 

         cout<<"enter number"; 

         cin>>n; 

         t=n; 

         while(n>0) 

         { 

          r=n%10; 

          sum=sum+(r*r*r); 

          n=n/10; 

         } 

         if(sum==t) 

         { 

         cout<<"number is Armstrong"; 

         } 

         else 

         { 

         cout<<"number is not Armstrong"; 

         } 

         getch(); 

 }

 

 #include<iostream.h> 

 #include<conio.h> 

 void main() 

 { 

         int rev=0,n,r,t; 

         clrscr(); 

         cout<<"enter number"; 

         cin>>n; 

         t=n; 

         while(n>0) 

         { 

          r=n%10; 

          rev=rev*10+r; 

          n=n/10; 

         } 

         if(rev==t) 

         { 

         cout<<"number is plaindrome"; 

         } 

         else 

         { 

         cout<<"number is not plaindrome"; 

         } 

         getch(); 

 }

 

 #include<iostream.h> 

 #include<conio.h> 

 void main() 

 { 

         int rev=0,n,r; 

         clrscr(); 

         cout<<"enter number"; 

         cin>>n; 

         while(n>0) 

         { 

          r=n%10; 

          rev=rev*10+r; 

          n=n/10; 

         } 

         cout<<"rev number is"<<rev; 

         getch(); 

 }

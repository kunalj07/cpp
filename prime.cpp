 

 #include<iostream.h> 

 #include<conio.h> 

 main() 

 { 

         int no,i,c=0; 

         clrscr(); 

         cout<<"enter number "; 

         cin>>no; 

  

         for(i=1;i<=no;i++) 

            { 

            if(no%i==0) 

                { 

                c++; 

                } 

            } 

         if(c==2) 

             { 

             cout<<"the number is prime"; 

             } 

         else 

             { 

             cout<<"number is not prime"; 

             } 

         getch(); 

  

 }

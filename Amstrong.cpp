 

 //program to check whether number is amstrong or not 

 #include<iostream.h> 

 #include<conio.h> 

 void main() 

 { 

         int no,temp,r,result=0; 

         clrscr(); 

         cout<<"Enter the actual number="; 

         cin>>no; 

         temp=no; 

         textcolor(CYAN); 

         textbackground(RED); 

         while(no>0) 

         { 

                 r=no%10; 

                 result=(r*r*r)+result; 

                 no=no/10; 

         } 

         cprintf("*************************************************************output*******************************************\n\n\n"); 

         cout<<" "; 

         if(temp==result) 

         { 

                 cout<<"Number is Amstrong"; 

         } 

         else 

         { 

                 cout<<"Number is not Amstrong"; 

         } 

  

         getch(); 

 }

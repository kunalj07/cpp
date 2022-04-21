 
 ​//​program by using parameterized constructor.printing 
 ​#​include​<​iostream.h​> 
 ​#​include​<​conio.h​> 
  
 ​class​ ​demo 
 ​{ 
 ​        ​private: 
 ​                ​int​ a,b,c; 
 ​        ​public: 
 ​                ​demo​(​int​ x,​int​ y); 
 ​                ​void​ ​print​(); 
 ​}; 
 ​demo::demo​(​int​ x,​int​ y) 
 ​{ 
 ​        a=x; 
 ​        b=y; 
 ​} 
 ​void​ ​demo::print​() 
 ​{ 
 ​cout<<​"​value of a->​"​<<a<<endl; 
 ​cout<<​"​value of b->​"​<<b<<endl; 
 ​} 
 ​void​ ​main​() 
 ​{ 
 ​        ​clrscr​(); 
 ​        demo ​d​(​10​,​20​); 
  
 ​        d.​print​(); 
 ​        ​getch​(); 
 ​}

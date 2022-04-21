 
 ​//​program by using parameterized constructor.addition 
 ​#​include​<​iostream.h​> 
 ​#​include​<​conio.h​> 
  
 ​class​ ​demo 
 ​{ 
 ​        ​private: 
 ​                ​int​ a,b,c; 
 ​        ​public: 
 ​                ​demo​(​int​ x,​int​ y); 
 ​                ​void​ ​print​(); 
 ​                ​void​ ​add​(); 
 ​}; 
 ​demo::demo​(​int​ x,​int​ y) 
 ​{ 
 ​        a=x; 
 ​        b=y; 
 ​} 
 ​void​ ​demo::add​() 
 ​{ 
 ​        c=a+b;​//​addition 
 ​} 
 ​void​ ​demo::print​() 
 ​{ 
 ​cout<<​"​addition of two numbers is->​"​<<c<<endl; 
 ​} 
 ​void​ ​main​() 
 ​{ 
 ​        ​clrscr​(); 
 ​        demo ​d​(​10​,​20​); 
 ​        d.​add​(); 
 ​        d.​print​(); 
 ​        ​getch​(); 
 ​}

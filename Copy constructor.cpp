 
 ​//​program by using copy constructor.printing 
 ​#​include​<​iostream.h​> 
 ​#​include​<​conio.h​> 
  
 ​class​ ​demo 
 ​{ 
 ​        ​private: 
 ​                ​int​ a,b; 
 ​        ​public: 
 ​                ​demo​(​int​ x,​int​ y); 
 ​                ​demo​(demo &q); 
 ​                ​void​ ​print​(); 
 ​}; 
 ​demo::demo​(​int​ x,​int​ y) 
 ​{ 
 ​        a=x; 
 ​        b=y; 
 ​} 
 ​demo::demo​(demo &q) 
 ​{ 
 ​ a=q.​a​; 
 ​ b=q.​b​; 
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
 ​        demo ​d1​(d); 
 ​        d1.​print​(); 
 ​        ​getch​(); 
 ​}

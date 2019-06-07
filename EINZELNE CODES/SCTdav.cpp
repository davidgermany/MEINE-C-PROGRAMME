#include <iostream>


int main (){
	double a =0;
	double G= 0;
	double A =0;
	double H =0;
	double W=0;
	sct:;
	std::cout<<"SIN COS TAN programm\n was willst du berechnen?\n \n 1/sin für SIN\n 2/cos für COS \n 3/tan für TAN\n\t";
	std::cin>> a;
	
if (a==1 || a==11)
{    //start von if 1
 
	std::cout<<" gib ein was du weisst. (gegenkathete, hypotenuse oder sinus eines winkels) \nes werden genau 2 werte benötigt! \n gib 0 ein wenn du dieses wissen willst\n\n GEGENKATHETE des Winkels\tG\n\t ";
	
	std::cin>> G;
	std::cout<<"\nok, jetzt hypothenuse\t H\n\t";
	 std::cin>>H;
	 std::cout<< "k, jetz den winkel sinus\tW\n\t"   ;
	 std::cin>> W;
	 
	 if(G==0){//start von sin
	 	G=W*H;
std::cout<<"\nG = W*H ="<<G ;        
}

else if (H==0)
{
	H=G/W;
	std::cout<<"H= G/W = "<< H;
}

else if (W==0)
{
	W=G/H;
	std::cout<<"W= G/H = "<< W;
}
} //ende sin



else if (a==2){ //start
		std::cout<<" gib ein was du weisst. (Ankathete, hypotenuse oder cosinus eines winkels) \nes werden genau 2 werte benötigt! \n gib 0 ein wenn du dieses wissen willst\n\n ANKATHETE des winkels\tG\n\t ";
	
	std::cin>> A;
	std::cout<<"\nok, jetzt hypothenuse\t H\n\t";
	 std::cin>>H;
	 std::cout<< "k, jetz den cosinus vom winkel \tW\n\t"   ;
	 std::cin>> W;
	 
	 if(A==0){//start von cos
	 	A=W*H;
std::cout<<"\nA = W*H ="<<G ;        
}

else if (H==0)
{
	H=A/W;
	std::cout<<"H= A/W = "<< H;
}

else if (W==0)
{
	W=A/H;
	std::cout<<"cosinuswert vom W= A/H = "<< W;
}
} //ende cos

else if (a==3){
	std::cout<<" gib ein was du weisst. (Ankathete, Gegenkathete oder tan des winkels) \nes werden genau 2 werte benötigt! \n gib 0 ein wenn du diesen wert benötigst \n\n ANKATHETE des winkels\tG\n\t ";
	
	std::cin>> A;
	std::cout<<"\nok, \t H\n\t";
	 std::cin>>H;
	 std::cout<< "k, jetz den cosinus vom winkel \tW\n\t"   ;
	 std::cin>> W;
	 
	 if(A==0){//start von cos
	 	A=G/W;
std::cout<<"\nA = W*H ="<<G ;        
}

else if (H==0)
{
	G=A*W;
	std::cout<<"H= A/W = "<< H;
}

else if (W==0)
{
	W=G/A;
	std::cout<<"cosinuswert vom W= A/H = "<< W;
}
} //ende tan
	

	

}	


	
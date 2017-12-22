#include <iostream>
#include <String>
/* columna de texto, un examen*/
using namespace std;
int main(int argc, char** argv)
{
	char respuesta;
	int sumatoria=0;
	float promedio=2;
 string  nombre="", grupo="" , carrera="" ,fecha="";

 cout<<"ingrese tu nombre"<<endl;
  
 cin>>nombre ;
  
 cout<<"ingrese tu grupo"<<endl;
 cin>>grupo;
 
 cout<<"ingrese tu carrera"<<endl;
 cin>>carrera;
 
 cout<<"ingrese la fecha de hoy"<<endl;
 cin>>fecha;
  cout<<" bienvenido al examen "<<"tu nombre es \n"<<nombre << " Eres del grupo \n"<< grupo << " la carrera es \n"<< carrera << " La fecha   es \n"<< fecha <<endl;
 
 cout<<"¿que es c++?"<<"\n a)lenguaje de programacion b)una salida  c)Switch"<<endl;
 cin >> respuesta;
 
 if(respuesta == 'a' )
 {
 	cout << "respuesta correcta" << endl;
 	sumatoria += 2;
 	//sumatoria = sumatoria + 2;
 }
 else
 {
 	cout << "respuesta incorrecta" << endl;
 }
 
  cout<<" En la estructura de programas de C++ ¿Qué tipo de programación usamos?"<<"\n a)cout b)cin c)para incluir las librerias"<<endl;
         cin >>respuesta;
  
              if(respuesta == 'c' )
 {
 	cout << "respuesta correcta" << endl;
 	sumatoria += 2;
  
 }
 else
 {
 	cout << "respuesta incorrecta" << endl;
 }
    

 cout<<" En la estructura de programas de C++ ¿Qué tipo de programación usamos?"<<"\n a)falso b)modular c)Switch"<<endl;	
 	   cin>>respuesta;
 	     
		     if(respuesta == 'b' )
 {
 	cout << "respuesta correcta" << endl;
 	sumatoria += 2;
  
 }
 else
 {
 	cout << "respuesta incorrecta" << endl;
 }
  
		  

 cout<<"En C++ ¿A qué le llamamos función?"<<"\n a)seccion del programa b)secuencia de escape c)resolucion de un problema"<<endl;
 	   cin>>respuesta;
		 
    	     if(respuesta == 'c' )
 {
 	cout << "respuesta correcta" << endl;
 	sumatoria += 2;
  
 }
 else
 {
 	cout << "respuesta incorrecta" << endl;
 }
  

 cout<<"¿Qué es una cadena?"<<"\n a)un conjunto de signos "<<" b)una combinacion de letras, numeros o carateres especiales c)cout  "<<endl;  	
       cin>>respuesta;
	   
	    	  if(respuesta == 'b' )
 {
 	cout << "respuesta correcta" << endl;
 	sumatoria += 2;
  
 }
 else
 {
 	cout << "respuesta incorrecta"<< endl;
 }
 	     
 	                
cout<<"numero de respuestas corretas "<<sumatoria<<endl;
    
    
cout<<"numero de preguntas incorretas"<<sumatoria<<endl;

cout<<"promedio de respueta"<<sumatoria<<endl;

   sumatoria=promedio/5; 


	return 0;
}

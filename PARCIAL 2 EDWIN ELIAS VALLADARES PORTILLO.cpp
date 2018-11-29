#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos
#include <fstream>//Uso de ficheros
#include <stdlib.h>//para gestión de memoria dinámica, control de procesos y otras
//Esta programacion fue hecha por EDWIN ELIAS VALLADARES PORTILLO (VP18007)
//Parcial 2 de Programacion I (Ciclo 2)
using namespace std;
double factorial(int n);//Variable para TAYLOR
double taylor(int n, int x);//Variable para TAYLOR
void li(){ //Declaracion de una funcion, no retorna ni recibe nada.
	system ("cls");//La declaracion anterior es para esta funcion de limpiado de pantalla
}
void pa(){//Declaracion de una funcion, no retorna ni recibe nada.
	system ("pause");//La declaracion anterior es para esta funcion de mantener la pantalla pausada
}
void menuu()//Aca empieza el menu
	{
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                     M    E     N     U                                      |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                 1) F I B O N A C C I                                        |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|.............................................................................................|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                 2) S E R I E S   D E   T A Y L O R                          |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|.............................................................................................|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                 3) V E R    R E S U L T A D O S                             |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|.............................................................................................|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                 4) S A L I R                                                |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                 I N G R E S E   L O     Q U E     D E S E A     H A C E R:                  |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;	
	}

int main() {
	system ("color a0");//El cambio de color
	int op;//Variable entera para el menu
	int e;//Variable para Fibonacci
	int q = 0;//Variable para Fibonacci
	int w = 1;//Variable para Fibonacci
	int t = 1;//Variable para Fibonacci
	int n;//Variable para Taylor
    int x;//Variable para Taylor
    ofstream fs("Almacen de Datos.txt");
    fs<<"Opcion           Nombre de Opcion               Resultado"<<endl;
	cout << "" <<endl;
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "" <<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "\t|.............................................................................................|"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                           B   I    E   N   V   E   N   I   D   O   S                        |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                    A  C  A             R  E  S  O  L  V  E  M  O  S                         |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|         P  R  O  B  L  E  M  A  S         D  E           F  I  B  O  N  A  C  C  I          |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                            Y                                                |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|                         S  E  R  I  E  S     D  E    T  A Y  L  O  R                        |"<<endl;
		cout << "\t|                                                                                             |"<<endl;
		cout << "\t|.............................................................................................|"<<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;	
		pa();//Pausar la pantalla con mi funcion
		li();//Limpiar la pantalla con mi funcion 
	do //El do que ayuda a repetir el menu
	{
		menuu();//Acá empieza el void que habia hecho arriba para el menu
		cin>> op;//Datos guardados en la variable de tipo entero
		switch (op)
		{	
		case 1://El procedimiento que se hace para cuando elige la opcion 1 del menu
			pa();//Pausar la pantalla con mi funcion  
			li();//Limpiar la pantalla con mi funcion
			cout << "\t|++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
			cout << "\t|................................................................|"<<endl;
			cout << "\t| I N G R E S E   E L   N U M E R O    D E    D A T O S:         |";cin>>e;                                               
			cout << "\t|                                                                |"<<endl;
			cout << "\t| 1  ";//Aca imprimo el primer numero que siempre sera 1
			for (int a=1; a<e; a++){//El ciclo for que empieza desde 0 hasta que sea menor al numero ingresado por el usuario
				t = q + w;//Esta suma es 0 + 1
				cout <<t<<"  ";//Aca se imprime el valor de 1
				q = w;// Q que es 0 pasa a tomar el valor de 1 que es W
				w = t;// W que es 0 pasa a tomar el valor de 1 que es T
			}
			cout<< "\n";
			cout << "\t|                                                                |"<<endl;
			cout << "\t|................................................................|"<<endl;
			cout << "\t|++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		break;//Aca se detiene el caso 1
        case 2://El procedimiento que se hace para cuando elige la opcion 2 del menu
        pa();//Pausar la pantalla con mi funcion  
		li();//Limpiar la pantalla con mi funcion
        cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "\t|.....................................................................................|"<<endl;
		cout << "\t| I N G R E S E   E L   N U M E R O   D E   T E R M I N O S    Q U E    D E S E A :   |";cin>>n;
		cout << "\t| D    I    G     I     T     E            E    L          V    A    L    O    R  :   |";cin>>x;
		printf(" \t|El valor de Taylor para n = %d, x = %d es de %f|\n", n, x, taylor(n, x));//CODIGO PARA TAYLOR
        break;//Aca se detiene el caso 2
        case 3://El procedimiento que se hace para cuando elige la opcion 3 del menu
       
		if (e > 0) {//Condicion para mostrar cuando aun hay datos
			cout << "\t| 1  ";//Aca imprimo el primer numero que siempre sera 1
				for (int a=1; a<e; a++){//El ciclo for que empieza desde 0 hasta que sea menor al numero ingresado por el usuario
				t = q + w;//Esta suma es 0 + 1
				cout <<t<<"  ";//Aca se imprime el valor de 1
				q = w;// Q que es 0 pasa a tomar el valor de 1 que es W
				w = t;// W que es 0 pasa a tomar el valor de 1 que es T
		}
		}
		if (n < 0){//Condicion para mostrar cuando aun no hay datos
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "\t|.....................................................................................|"<<endl;
		cout << "\t|      N O   H A Y   D A T O S   P A R A   L A   S E R I E   D E    T A Y L O R       |"<<endl;
		cout << "\t|.....................................................................................|"<<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		}
		if (x > 0){//Condicion para mostrar cuando aun hay datos
		cout <<endl;
		cout << "\t|.....................................................................................|"<<endl;
		printf(" \t|             El valor de Taylor para n = %d, x = %d es de %f|\n", n, x, taylor(n, x));	
		cout << "\t|.....................................................................................|"<<endl;
		cout << "\t|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;	
		}
		
		
		break;//Aca se detiene el caso 3
    	}
    	pa();//Pausar la pantalla con mi funcion  
		li();//Limpiar la pantalla con mi funcion
 	}while( op!=4);//Esto significa que hasta que se oprima el 4 podra salirse
 	fs.close();
 	cout << " P R O G R A M A C I O N    H E C H A    P O R:"<<endl;
 	cout << "E D W I N    E L I A S    V A L L A D A R E S    P O R T I L L O (VP18007)"<<endl;
 	pa();//Pausar la pantalla con mi funcion 
	return 0;
}
 double taylor(int n, int x){//CODIGO PARA TAYLOR
        	double t, s = 0;//CODIGO PARA TAYLOR
        	for (int i = 0; i < n; i++){//CODIGO PARA TAYLOR
        		t = pow(x,i) / factorial(i);//CODIGO PARA TAYLOR
        		s += t;//CODIGO PARA TAYLOR
			}
			return s;//CODIGO PARA TAYLOR
		}
double factorial (int n){//CODIGO PARA TAYLOR
			double fac = 1;//CODIGO PARA TAYLOR
			for (int i = 2; i<= n; i++){//CODIGO PARA TAYLOR
				fac *= i;//CODIGO PARA TAYLOR
			}
			return fac;//CODIGO PARA TAYLOR
		}


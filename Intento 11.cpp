#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos
#include <stdlib.h>//para gestión de memoria dinámica, control de procesos y otras
//Esta programacion fue hecha por EDWIN ELIAS VALLADARES PORTILLO (VP18007)
//Lo que hace es un servicio de alquiler de autos en linea y poder alquilar su auto tambien
//Lastimosamente no pude añadir las imagenes intente modificando mi Dev C++ añadiendo librerias como 
//graphics.h, allegro, SFML, descargando archivos pero ninguna me funciono apropiadamente.
using namespace std;
void li(){ //Declaracion de una funcion, no retorna ni recibe nada.
	system ("cls");//La declaracion anterior es para esta funcion de limpiado de pantalla
}
void pa(){//Declaracion de una funcion, no retorna ni recibe nada.
	system ("pause");//La declaracion anterior es para esta funcion de mantener la pantalla pausada
}
	struct Cliente{//La primera estructura para que el cliente pueda añdir sus datos para el alquiler
	string nombre;//El nombre de él
	int edad;//Su edad
	int licencia;//Su licencia
}C1;//nombre de la estructura
	struct Alquiler{//La segunda estructura para que el cliente pueda añdir sus datos para alquilar su auto
	string marca;//La marca
	string modelo;//El modelo
	int anio;//El año
	int chasis;//El chasis
	int descrip;//Descripcion del auto
}A1;//nombre de la estructura
void menuu()//Aca empieza el menu
	{
		cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "|                M    E     N     U                         |"<<endl;
		cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << "|  1) Muestra de nuestros vehiculos para su disposicion     |"<<endl;
		cout << "|...........................................................|"<<endl;
		cout << "|  2) Si es nuevo, agreguese como cliente                   |"<<endl;
		cout << "|...........................................................|"<<endl;
		cout << "|  3) Agregar un nuevo vehiculo suyo para alquilarlo        |"<<endl;
		cout << "|...........................................................|"<<endl;
		cout << "|  4) Sugerencias o quejas                                  |"<<endl;
		cout << "|...........................................................|"<<endl;
		cout << "|  5) Clientes frecuentes                                   |"<<endl;
		cout << "|...........................................................|"<<endl;
		cout << "|  6) Salir                                                 |"<<endl;
		cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|"<<endl;
		cout << ". Ingrese lo que desea hacer:                               ."<<endl;
	}
int main() {
	int a, b, c , d, e, op;//Mis variables de tipo entero
	char z;//Mi variable en forma de caracter
	string pan;//Es para la opinion del cliente
	system ("color f0");//El cambio de color
	cout << "|***********************************************************|"<<endl;
	cout << "|                                                           |"<<endl;
	cout << "|              B I E N V E N I D O S                        |"<<endl;
	cout << "|     ESTE ES UN SISTEMA DE ALQUILER DE AUTOS EN LINEA      |"<<endl;
	cout << "|                                                           |"<<endl;
	cout << "|***********************************************************|"<<endl;
	cout << "|                                                           |"<<endl;
	cout << "|       	 ALQUILER DE AUTOS VALLADARES               |"<<endl;
	cout << "|         	  SIRVIENDOLE DESDE EL 2018                 |"<<endl;
	cout << "| ESPERAMOS QUE ALGUNO DE NUESTROS AUTOS SEA DE SU AGRADO   |"<<endl;
	cout << "|                                                           |"<<endl;
	cout << "|***********************************************************|"<<endl;
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
 			do//Condicion para que solo se pueda elegir una de esas 4 opciones
			{
			cout << "-----------------------------------------------------------------------------"<<endl;
			cout << "| Opcion 1                         | Opcion 2                                |"<<endl;
			cout << "-----------------------------------------------------------------------------"<<endl;
			cout << "| Nombre: Mazda 3 2.5              | Nombre: Toyota Corolla                  |"<<endl;
			cout << "| Año: 2010                        | Año: 2016                               |"<<endl;
			cout << "| Chasis: 3456D                    | Chasis: 7684T                           |"<<endl;
			cout << "| Descripcion: Es un auto familiar | Descripcion: Es un  auto comodo para    |"<<endl;
			cout << "| con caja secuencial, espacioso y | un viaje, muy veloz pero sobretodo es   |"<<endl;
			cout << "| asientos de cuero.               | muy seguro ante cualquier problema.     |"<<endl;
			cout << "-----------------------------------------------------------------------------"<<endl;
			cout << "-----------------------------------------------------------------------------"<<endl;
			cout << "| Opcion 3                         | Opcion 4                                |"<<endl;
			cout << "-----------------------------------------------------------------------------"<<endl;
			cout << "| Nombre: Nissan Sentra            | Nombre: Honda Civic                     |"<<endl;
			cout << "| Año: 2012                        | Año: 2018                               |"<<endl;
			cout << "| Chasis: 6743J                    | Chasis: 5748L                           |"<<endl;
			cout << "| Descripcion: Es un auto estandar | Descripcion: Es un auto para correr,si  |"<<endl;
			cout << "| con muy buen mantimiento,llantas | te gusta la potencia este es tu auto    |"<<endl;
			cout << "| nuevas y excelente motor.        | y con sus chequeos al dia.              |"<<endl;
			cout << "-----------------------------------------------------------------------------|"<<endl;
			if (A1.chasis > 0)//Condicion para poder añadir el auto
			{
				cout << "| Opcion 5                                                                   |"<<endl;
				cout << "|----------------------------------------------------------------------------|"<<endl;
				cout << "| Marca:" << A1.marca<<                                                     "|"<<endl;//Se muestran los resultados de la estructura 2
				cout << "| Modelo:"<< A1.modelo<<                                                    "|"<<endl;//Se muestran los resultados de la estructura 2
				cout << "| Anio:"<< A1.anio <<" anio "<<                                             "|"<<endl;//Se muestran los resultados de la estructura 2
				cout << "| Chasis:"<< A1.chasis<<                                                    "|"<<endl;//Se muestran los resultados de la estructura 2
				cout << "| Calificiacion:"<< A1.descrip<<                                            "|"<<endl;//Se muestran los resultados de la estructura 2
				fflush(stdin); //Para evitar el salto de linea
				cout << "-----------------------------------------------------------------------------|"<<endl;
			}
			cout <<" ¿Cual vehiculo es de su interes? : "<<endl;
			cin>>b;//Guardar datos
			pa();//Pausar la pantalla con mi funcion
			li();//Limpiar la pantalla con mi funcion
			}while (b < 0 || b > 5);//Condicion para que solo se pueda elegir una de esas 4 opciones
			//Tuve que poner hasta 5 porque sino cuando el cliente ya hubiera añadido su carro no iba a poder seleccionarlo
			cout << "Excelente opcion "<<endl;
			cout << "¿Cuantas horas en total lo alquilara?"<<endl;
			cin >> d;//Guardar los datos en esa variable
			cout << "--------------------------------------------------------------------"<<endl;
			cout << "|El costo sera de $100.00 si lo usa de 0 a 100 horas                |"<<endl; 
			cout << "|El costo sera de $200.00 si lo usa de 101 a 200 horas              |"<<endl;
			cout << "|El costo sera de $300.00 si lo usa mas de 300 horas                |"<<endl;
			cout << "--------------------------------------------------------------------"<<endl;
			cout << "|La politica de uso es que si el auto es alterado, daniado          |"<<endl;
			cout << "|o chocado el dueño debe cancelar los gastos de reparacion.         |"<<endl;
			cout << "|Y es libre de usarlo, mientras haya cancelado las horas de prestamo|"<<endl;
			cout << "--------------------------------------------------------------------"<<endl;
			pa();//Pausar la pantalla con mi funcion
		break;//Aca se detiene el caso 1
        case 2://El procedimiento que se hace para cuando elige la opcion 2 del menu
        	pa();//Pausar la pantalla con mi funcion
			li();//Limpiar la pantalla con mi funcion 
 			cout<<"\nCliente 1\n";//Estructura numero 1
			fflush(stdin); //Para evitar el salto de linea
			cout<<"Ingrese su nombre: "<<endl; 
			cin>>C1.nombre;//Se guardan los respectivos datos en la estructura C1
			fflush(stdin); //Para evitar el salto de linea
			cout<<"Ingrese edad: "<<endl;
			cin>>C1.edad;//Se guardan los respectivos datos en la estructura C1
			cout<<"Ingrese numero de licencia: "<<endl;
			cin>>C1.licencia;//Se guardan los respectivos datos en la estructura C1
			cout << "----------------------------------"<<endl;
			cout << "| D A T O S   D E L   S U J E T O |"<<endl;
			cout << "----------------------------------"<<endl;
			cout << "\nNombre: "<< C1.nombre;//Se muestran los resultados de la estructura 1
			cout << "\nEdad: "<< C1.edad <<" anios ";//Se muestran los resultados de la estructura 1
			cout << "\nLicencia: "<< C1.licencia<<endl;//Se muestran los resultados de la estructura 1
			fflush(stdin); //Para evitar el salto de linea
			pa();//Pausar la pantalla con mi funcion
			li();//Limpiar la pantalla con mi funcion
			cout << "Sus datos fueron aniadidos correctamente "<<endl;
        break;//Aca se detiene el caso 2
        case 3://El procedimiento que se hace para cuando elige la opcion 3 del menu
        	pa();//Pausar la pantalla con mi funcion
			li();//Limpiar la pantalla con mi funcion 
 			cout<<"\nCliente 1\n";
			fflush(stdin); //Para evitar el salto de linea
			cout<<"Ingrese la marca del auto: "<<endl; 
			cin>>A1.marca;//Se guardan los respectivos datos en la estructura A1
			cout<<"Ingrese el modelo del auto: "<<endl; 
			cin>>A1.modelo;//Se guardan los respectivos datos en la estructura A1
			fflush(stdin); //Para evitar el salto de linea
			cout<<"Ingrese anio del auto: "<<endl;
			cin>>A1.anio;//Se guardan los respectivos datos en la estructura A1
			cout<<"Ingrese numero de chasis: "<<endl;
			cin>>A1.chasis;//Se guardan los respectivos datos en la estructura A1
			cout<<"Calificacion (1-10) : "<<endl; 
			cin>>A1.descrip;//Se guardan los respectivos datos en la estructura A1
			cout << "------------------------------"<<endl;
			cout << "| D A T O S   D E L   A U T O |"<<endl;
			cout << "------------------------------"<<endl;
			cout<<"\nMarca: "<< A1.marca;//Se muestran los resultados de la estructura 2
			cout<<"\nModelo: "<< A1.modelo;//Se muestran los resultados de la estructura 2
			cout<<"\nAnio: "<< A1.anio <<" anio ";//Se muestran los resultados de la estructura 2
			cout<<"\nChasis: "<< A1.chasis;//Se muestran los resultados de la estructura 2
			cout<<"\nCalificacion (1-10) : "<< A1.descrip;//Se muestran los resultados de la estructura 2
			fflush(stdin); //Para evitar el salto de linea
        break;//Aca se detiene el caso 3
        case 4://El procedimiento que se hace para cuando elige la opcion 4 del menu
        	pa();//Pausar la pantalla con mi funcion
			li();//Limpiar la pantalla con mi funcion 
 			cout<< "La opinion de nuestros clientes vital para nosotros"<<endl;
 			cout<< "Por eso nuestro buzon de entrada es vital para nosotros"<<endl;
 			cout<< "---------------------------------------------------"<<endl;
 			cout<< "|           B   U   Z   O   N                      |"<<endl;
 			cout<< "|               D    E                             |"<<endl;
 			cout<< "|        S U G E R E N C I A S                     |"<<endl;
 			cout<< "|                                                  |"<<endl;
 			cout<< "---------------------------------------------------"<<endl;
 			pa();//Pausar la pantalla con mi funcion 
 			cout<< "Escriba su opinion: "<<endl;
 			cin>>pan;
 			cout<< "SU OPINION NOS AYUDA A SER MEJORES CADA DIA "<<endl;
			break;//Aca se detiene el caso 4
		case 5://El procedimiento que se hace para cuando elige la opcion 5 del menu
        	 if (C1.edad > 0)//La condicion para poder mostrar los datos del cliente
			 {
        		cout << "----------------------------------"<<endl;
				cout << "| D A T O S   D E L   S U J E T O |"<<endl;
				cout << "----------------------------------"<<endl;
				cout << "\nNombre: "<< C1.nombre;//Se muestran los resultados de la estructura 1
				cout << "\nEdad: "<< C1.edad <<" anios ";//Se muestran los resultados de la estructura 1
				cout << "\nLicencia: "<< C1.licencia<<endl;//Se muestran los resultados de la estructura 1
				fflush(stdin); //Para evitar el salto de linea
				
		}
			else;//Else que indica que se debe hacer lo opuesto al if
			//Ingeniera aca tuve problemas mostrandolo en consola porque siempre se mostraba lo que hay en 
			//el cout fue verdadero o falso la condicion
				(C1.edad < 0);
				cout << "Aun no hay clientes registrados "<<endl;
				
				
		break;//Aca se detiene el caso 5
   		}	
		cout<<endl<<endl;
    	pa();//Pausar la pantalla con mi funcion  
		li();//Limpiar la pantalla con mi funcion
 	}while(op!=6);//Esto significa que hasta que se oprima el 6 podra salirse
 	cout << " GRACIAS POR ENTRAR AL ALQUILER DE AUTOS VALLADARES EN LINEA"<<endl;
	return 0;//El final de la programacion
	}

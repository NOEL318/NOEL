#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
//Asigno el nombre al espacio
using namespace std;
//Creo el método gotoxy para centrar el texto con x,y en la consola
void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}
//Creo el método para la interfaz primaria
void interfaz(){
	//Imprimo lo siguiente
	gotoxy(50,2);printf("SISTEMA DE VENTAS");
	gotoxy(35,4);printf("ESTE ES UN SISTEMA DE VENTAS PARA UNA TIENDA");
	//Declaro "B" para el ciclo for de las animaciones
	int b;
	//Ciclo 1
	for(b=1;b<=117;b++){
		    gotoxy(b,1);printf("==");
		    gotoxy(1,2);printf("||");
		    gotoxy(1,3);printf("||");
		    gotoxy(1,4);printf("||");
        	}
    //Finzaliza el ciclo 1
    //Ciclo 2
    	for(b=1;b<=117;b++){
		    gotoxy(b,5);printf("==");
		    gotoxy(117,2);printf("||");
		    gotoxy(117,3);printf("||");
		    gotoxy(117,4);printf("||");
        	}
    //Finzaliza el ciclo 2
}
void tema1(){
	system("color 1f");
}
void tema2(){
	system("color f0");
}
void tema3(){
	system("color 4e");
}
void tema4(){
	system("color 0a");
}
void tema5(){
	system("color 5f");
}
void tema6(){
	system("color 2f");
}
void tema7(){
	system("color 0f");
}
void other(){
	int theme;
	int btheme;
	
	ofstream save("CONFIG",ios::in);
	ifstream see;
	see.open("CONFIG");
	scanf("%d", &theme);
	save<<theme<<endl;
	if(theme==1){
		tema1();
	}
	if(theme==2){
		tema2();
	}
	if(theme==3){
		tema3();
	}
	if(theme==4){
		tema4();
	}
	if(theme==5){
		tema5();
	}
	if(theme==6){
		tema6();
	}
	if(theme==7){
		tema7();
	}
}
void opycomp(){
	int theme;
	ifstream see;
	see.open("CONFIG");
	see>>theme;
	if(theme==1){
		tema1();
	}
	if(theme==2){
		tema2();
	}
	if(theme==3){
		tema3();
	}
	if(theme==4){
		tema4();
	}
	if(theme==5){
		tema5();
	}
	if(theme==6){
		tema6();
	}
	if(theme==7){
		tema7();
	}
}
void config(){
	system("cls");
	
	interfaz();
	gotoxy(49,7);printf("CONFIGURACI%cN", 224);
	gotoxy(35,9);printf("ELIJA UN TEMA: ");
	gotoxy(49,11);printf("FONDO-----------LETRA ");
	gotoxy(49,13);printf("1.-AZUL------------BLANCA ");
	gotoxy(49,15);printf("2.-BLANCO----------NEGRA ");
	gotoxy(49,17);printf("3.-ROJO------------AMARILLA ");
	gotoxy(49,19);printf("4.-NEGRO-----------VERDE");
	gotoxy(49,21);printf("5.-PURPURA---------BLANCA");
	gotoxy(49,23);printf("6.-VERDE-----------BLANCA ");
	gotoxy(49,25);printf("7.-NEGRO-----------BLANCA");
	gotoxy(59,27);
	int theme;
	other();
	system("cls");
}
//Declaro e inicializo el main (Funcion principal)
int main(){
	//Declaro la variable para escritura
	char nombreprod[50];
	//Declaro variable para reemplazo de información
	char nnombreprod[50];
	//Declaro la variable para escritura
    int IDproducto;
    //Declaro la variable para escritura
	int codigobarras;
	//Declaro la variable para escritura
	int precio;
	//Declaro la variable para escritura
	int cantidad;
	//Declaro la variable para reemplazo de informacion
	int ncantidad;
	//Declaro la opcion para elegir en el menu principal
	int op;
	//Declaro variable para comparación de ID
	int BUSCARID;
	//Declaro la variable para reemplazo de informacion
    int nIDproducto;
    //Declaro la variable para reemplazo de informacion
	int ncodigobarras;
	//Declaro la variable para reemplazo de informacion
	int nprecio;
	//Declaro variable para leer el user
	int user;
	//Declaro variable para leer la contraseña
	int contrasena;
	//Declaro variable para buscar usuario
	int buser;
	char name;
	//Declarar variable para buscar contraseña
	int bcontrasena;
	int continuar;
	int nncantidad;
	int cont;
	//Declar variable para leer ficheros
	ifstream clave;
	//Declado variable para leer ficheros en inventario
   	ifstream VERALTA;
   	//Declaro variable para crar ficheros
	ofstream TEMP;
	ofstream llevar;

	int theme;
	opycomp();
	if(theme>0 && theme<=7){
		
	}
	
	
   //Declaro la variable para crear ficheros
    ofstream Guar("CLAVES.txt",ios::app);
    /*Abro el archivo que contiene las claves del log in*/
	clave.open("CLAVES.txt");
	
	interfaz();
	//Imprimo los siguientes valores para la interfaz del log in
	gotoxy(35,10);printf("==================================================");
	gotoxy(35,15);printf("==================================================");
	gotoxy(35,11);printf("||");
	gotoxy(35,12);printf("||");
	gotoxy(35,13);printf("||");
	gotoxy(35,14);printf("||");
	gotoxy(83,11);printf("||");
	gotoxy(83,12);printf("||");
	gotoxy(83,13);printf("||");
	gotoxy(83,14);printf("||");
	gotoxy(37,12);printf("USUARIO: ");
	//Pido el usuario a buscar en el documento claves
	scanf("%d", &buser);
	gotoxy(37,13);printf("CLAVE:   ");
	//Pido la contraseña a buscar en el documento claves
	scanf("%d", &bcontrasena);
	//Hago una previzualización del archivo (Lectura adelantada) de usuario y contraseña
	clave>>user;
	clave>>contrasena;
	//Declaro de tipo bool la variable encontrado para comprobar el estado de log
	bool finded = true;
	//Ciclo para buscar en el focumento hasta que no llegue al fin
	while(!clave.eof()){
		//Vuelvo a hacer una lectura del fichero de usuario y contraseña
				clave>>user;
				clave>>contrasena;
				//Si los datos coinciden el estado es verdadero
				if(buser==user && bcontrasena==contrasena){
					finded==true;
				
				
				
	//Abro el ciclo principal que funcionara mientras el log sea correcto
	while(finded==true){
	//Limpio pantalla
	
	int theme;
	opycomp();
	if(theme>0 && theme<=7){
		
	}
	system("cls");
	//Llamo al metodo consola principal
    interfaz();
    gotoxy(100,3);printf("%d", user);
    //Imprimo los valores a elegir en el menu
    gotoxy(45,10);printf("1-.DAR DE ALTA UN PRODUCTO");
    gotoxy(45,12);printf("2-.VER PRODUCTOS EN ALTA");
    gotoxy(45,14);printf("3-.BUSCAR PRODUCTO EN EXISTENCIA");
    gotoxy(45,16);printf("4-.DAR DE BAJA UN PRODUCTO");
    gotoxy(45,18);printf("5-.MODIFICAR");
    gotoxy(45,20);printf("6-.CONFIGURACI%cN", 224);
    gotoxy(45,22);printf("7-.VENDER");
    //Seteo el cursor en esta posición
    gotoxy(54,22);
    //Escaneo la opcion "op"
    scanf("%d", &op);
    //Switch del menu con las opciones
    switch(op){
    	//Opción 1
        case 1:
       	    {
       	    //Limpio pantalla
       		system("cls");
       		//Llamo al metodo interfaz
       		interfaz();
       		gotoxy(100,3);printf("%d", user);
       		//Creo el fichero ALTA para guardar los productos
       		ofstream Guardar("ALTA.txt",ios::app);
       		//Muestro el titulo
       		gotoxy(49,7);printf("DAR DE ALTA UN PRODUCTO");
       		//Muestro texto pidiendo los siguientes datos
        	gotoxy(35,9);printf("TECLEE EL NOMBRE DEL PRODUCTO: ");
        	//Pido nombre del producto
       		scanf("%s",&nombreprod);
       		gotoxy(35,11);printf("DIGITE EL CODIGO DE BARRAS: ");
       		//Pido codigo de barras
       		scanf("%d",&codigobarras);
       		gotoxy(35,13);printf("DIGITE EL ID QUE USARA PARA IDENTIFICAR SU PRODUCTO: ");
       		//Pido el ID del producto
       		scanf("%d",&IDproducto);
       		gotoxy(35,15);printf("DIGITE LA CANTIDAD: ");
       		//Pido la cantidad con la que se cuenta actualmente
       		scanf("%d",&cantidad);
       		gotoxy(35,17);printf("DIGITE EL PRECIO UNITARIO:: ");
       		//Pido precio del producto
       		scanf("%d",&precio);
       		//Los guardo en el fichero
        	Guardar<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
        	//Cambio el color de la pantalla
       		system("color 0a");
       		//Imprimo un estatus
       		gotoxy(40,20);printf("SU PRODUCTO SE DIO DE ALTA CORRECTAMENTE");
       		//Finalizo en case
       		break;
       		//Cierro el case
           	}
       	//Llamo al case 2
       	case 2:{
       		//Limpiar pantalla
         	system("cls");
         	//Llamo al metodo interfaz
       		interfaz();
       		gotoxy(100,3);printf("%d", user);
       		//Imprimo el titulo
       		gotoxy(49,7);printf("VER PRODUCTOS EN ALTA");
       		//Abro el fichero
			VERALTA.open("ALTA.txt");
			//Hago una lectura adelantada
			VERALTA>>IDproducto;
			//Ciclo hasta que no se llegue al final del doc
			while(!VERALTA.eof())
			    {
			    //Lectura adelantada de lo siguiente
               	VERALTA>>nombreprod;
               	VERALTA>>codigobarras;
               	VERALTA>>cantidad;
               	VERALTA>>precio;
               	//Dejo las 2 siguientes lineas
               	cout<<endl;
               	cout<<endl; 
               	//Imprimo los datos leidos en el proceso
       	    	cout<<"                                                 ID          "<<IDproducto<<endl;
       	        cout<<"                                                 NOMBRE      "<<nombreprod<<endl;
       	    	cout<<"                                                 CODIGO      "<<codigobarras<<endl;
       	    	cout<<"                                                 CANTIDAD    "<<cantidad<<endl;
       	    	cout<<"                                                 PRECIO      "<<precio<<endl;
       	    	//Dejo 2 lineas de separacion entre todos los resultados
       	    	cout<<endl;
       	    	cout<<endl;
       	    	//Lectura adelatada para el siguiente producto
       	        VERALTA>>IDproducto;
                }
                //Cierro el documento
                VERALTA.close();
                //Pauso la pantalla
                system("pause");
                //Cierro el case y lo pauso
				break;
			}
		case 3:{
			//Limpio pantalla
			system("cls");
			//Llamo al método interfaz
			interfaz();
			gotoxy(100,3);printf("%d", user);
			//Abro el fichero de ALTA de productos
			VERALTA.open("ALTA.txt",ios::in);
			//Declaro el status de la busqueda en bool = falso & falso = no encontrado
			bool encontrado=false;
			//Muestro el texto para el usuario
			gotoxy(35,7);printf("INGRESE EL ID A BUSCAR: ");
			//Pido el ID del producto
			scanf("%d", &BUSCARID);
			//Hago una lectura adelantada de la busqueda por ID
			VERALTA>>IDproducto;
			//Abro un bucle mientras no llegue a su final el fichero
			while(!VERALTA.eof()){
				//Hago lectura del nombre del prod
				VERALTA>>nombreprod;
				//Hago lectura del codig de barras
				VERALTA>>codigobarras;
				//Hago lectura de la cantidad
				VERALTA>>cantidad;
				//Hago lectura del precio
				VERALTA>>precio;
				//Bucle para buscar y comprobar si se encontró o no el producto
				if(IDproducto==BUSCARID){
					//defino la bool como true porwue coincide el resultado con lo buscado
					encontrado=true;
					//Muestro los resultados
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					cout<<endl;
					
				}
				//Hago una lectura para todo el bucle
				VERALTA>>IDproducto;
			}
			//Si no se encuentra lo buscado
			if(encontrado==false){
				//Color rojo y negro
				system("color 0c");
				//Mostrar
				gotoxy(40,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
			//Cierro el fichero
			VERALTA.close();
			//Cierro el case
			break;
		}
		//Inicio el case 4
		case 4:{
			//Imprimo pantalla
			system("cls");
			//Llamo al metodo interfaz
			interfaz();
			//Imprimo el user actual
			gotoxy(100,3);printf("%d", user);
			//Abro el fichero con los archivos
			VERALTA.open("ALTA.txt",ios::in);
			//Creo un archivo temporal para la eliminación del los archivos
			ofstream TEMP("TEMP.txt",ios::app);
			VERALTA>>IDproducto;
			//Declaro una variable para la busqueda del producto a eliminar
			bool encontrado=false;
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A ELIMINAR: ");
			//Pido el ID
			scanf("%d", &BUSCARID);
			//Hago una lectura adelantada
			
			//Inicio un ciclo para buscar infinitamente el ID
			while(!VERALTA.eof()){
				
				//Hago una lectura de los datos 
				VERALTA>>nombreprod;
				VERALTA>>codigobarras;
				VERALTA>>cantidad;
				VERALTA>>precio;
				//Si se encuentra algo:
				if(IDproducto==BUSCARID){
					//bool es true porque si se encontro 
					encontrado=true;
					//Muestro los resultados
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					//Dejo una linea
					cout<<endl;
					
				}
				else{
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
				}
				//Hago una lectura
				VERALTA>>IDproducto;
			}
		
			
			//Si no se encuentra hacer
			if(encontrado==false){
				//color rojo y negro
				system("color 0c");
				//No se encontró el producto mostrar
				gotoxy(40,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
			//SI si se encontró guardar todo lo demas en el temporal excepto el producto buscado
			
			//Cerrar el archivo temp para modificarlo
			VERALTA.close();
			TEMP.close();
			//Cerrar le archivo veraalta para modificarlo
			
			//Eliminar el archivo cone l producto
			remove("ALTA.txt");
			//Renombrar el temporal como archivo primario
			rename("TEMP.txt", "ALTA.txt");
			//Cerrar el case 4
			break;
		}
		//Case 5
		case 5:{
			//Limpiar pantalla
			system("cls");
			//Llamar al metodo interfaz
			interfaz();
			//Imprimir el usuario
			gotoxy(100,3);printf("%d", user);
			//Abrir el archivo de alta
			VERALTA.open("ALTA.txt",ios::in);
			//Abrir archivo temporal para modificación
			ofstream TEMP("TEMP.txt",ios::out);
			//Bool de busqueda
			bool encontrado=false;
			//Mostrar texto para el usuario
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A MODIFICAR: ");
			//Pedir id
			scanf("%d", &BUSCARID);
			//Lectura adelantada de ID
			VERALTA>>IDproducto;
			while(!VERALTA.eof()){
				//Lectura de los datos completos
				VERALTA>>nombreprod;
				VERALTA>>codigobarras;
				VERALTA>>cantidad;
				//Si se encontró el id:
				VERALTA>>precio;
				//Comparacion de escaneado y encontrado por ID
				if(IDproducto==BUSCARID){
					//Se encontró el producto? si
					encontrado=true;
					//Mostrar lo entcontrado
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					cout<<endl;
					//Muestro texto para reemplazar datos y pido los reemplazos uno por uno
					gotoxy(25,17);printf("INGRESE EL NUEVO ID: ");
					scanf("%d",&nIDproducto);
					gotoxy(25,19);printf("INGRESE EL NUEVO NOMBRE: ");
					scanf("%s",&nnombreprod);
					gotoxy(25,21);printf("INGRESE EL NUEVO CODIGO DE BARRAS: ");
					scanf("%d",&ncodigobarras);
					gotoxy(25,23);printf("INGRESE LA NUEVA CANTIDAD: ");
					scanf("%d",&ncantidad);
					gotoxy(25,25);printf("INGRESE EL NUEVO PRECIO: ");
					scanf("%d",&nprecio);
					//Guardo este en el temporal ya creado
					TEMP<<nIDproducto<<"  "<<nnombreprod<<"  "<<ncodigobarras<<"  "<<ncantidad<<"  "<<nprecio<<endl;
					
				}
				//si no se encontró:
				else{
					//Guardar todo en el temporal
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
			}
			//Lectura adelantada
				VERALTA>>IDproducto;
			}
			//Si no se encontró:
			if(encontrado==false){
				//Color negro y rojo
				
				//Imprimir mensaje de status
				gotoxy(50,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
			//Cierro los ficheros (Archivos) para modificarlos
			VERALTA.close();
			TEMP.close();
			//Elimino el principal
			remove("ALTA.txt");
			//Y renombro el temporal como principal
			rename("TEMP.txt", "ALTA.txt");
			//Cierro el case 5
			system("color 0a");
			break;
		}
		case 6:{
			config();
			break;
		}
		case 7:{
			do{
			
			system("cls");
			//Llamar al metodo interfaz
			interfaz();
			//Imprimir el usuario
			gotoxy(100,3);printf("%d", user);
			//Abrir el archivo de alta
			VERALTA.open("ALTA.txt",ios::in);
			//Abrir archivo temporal para modificación
			ofstream TEMP("TEMP.txt",ios::out);
			ofstream VENTA("VENTA",ios::app);
			VENTA:
			//Bool de busqueda
			bool encontrado=false;
			
			//Mostrar texto para el usuario
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A VENDER: ");
			//Pedir id
			scanf("%d", &BUSCARID);
			//Lectura adelantada de ID
			VERALTA>>IDproducto;
			while(!VERALTA.eof()){
				//Lectura de los datos completos
				VERALTA>>nombreprod;
				VERALTA>>codigobarras;
				VERALTA>>cantidad;
				//Si se encontró el id:
				VERALTA>>precio;
				//Comparacion de escaneado y encontrado por ID
				if(IDproducto==BUSCARID){
					//Se encontró el producto? si
					encontrado=true;
					//Mostrar lo entcontrado
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					cout<<endl;
					//Muestro texto para reemplazar datos y pido los reemplazos uno por uno
					gotoxy(40,23);printf("INGRESE LA CANTIDAD A LLEVAR: ");
					scanf("%d",&ncantidad);
					nncantidad=cantidad-ncantidad;
					//Guardo este en el temporal ya creado
					VENTA<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<nncantidad<<"  "<<precio<<endl;
					TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<ncantidad<<"  "<<precio<<endl;
					
				}
				//si no se encontró:
				else{
					//Guardar todo en el temporal
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
			}
			//Lectura adelantada
				VERALTA>>IDproducto;
			}
			//Si no se encontró:
			if(encontrado==false){
				//Color negro y rojo
				
				//Imprimir mensaje de status
				gotoxy(50,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
			gotoxy(40,25);printf("SEGUIRA COMPRANDO (1-SI) (0-NO): ");
			scanf("%d", &cont);
			//Cierro los ficheros (Archivos) para modificarlos
			VERALTA.close();
			TEMP.close();
			//Elimino el principal
			remove("ALTA.txt");
			//Y renombro el temporal como principal
			rename("TEMP.txt", "ALTA.txt");
			//Cierro el case 5
			
			}while(cont==1);
			break;
		}
		//Si no se selecciona una opcion valida en el menu
		default:
			//Llamar al metodo interfaz
			interfaz();
			//Establecer color en rojo y negro
			system("color 0c");
			//Limpio la pantalla
			system("cls");
			//Imprimo el mensaje de error
			gotoxy(50,14);printf("ID DE OPCI%cN NO ENCONTRADO", 224);
			//cierro el case default
		break;
		
		
		}
		//mensaje para cada terminar proceso de cada sub menu
	gotoxy(35,27);printf("PRESIONA CUALQUIER TECLA PARA SALIR AL MENU PRINCIPAL");
	//Hago una pausa
	getch();
}
}
//si no pasa el log in:
else{
				//Color rojo y negro
				system("color 0c");
				//Mostrar texto de error
				gotoxy(45,17);printf("USUARIO Y/O CLAVE INCORRECTOS");
				gotoxy(45,19);printf("SE TE HA BLOQUEADO EL PROGRAMA");
				//Sonidos de advertencias y pausas entre los mismos
				Beep(500,500);
				Sleep(500);
				Beep(500,500);
				Sleep(500);
				Beep(500,500);
				abort();
			}
			//Lectura de datos para el log in
			clave>>user;
		clave>>contrasena;
		//Cerrar el fichero de las claves de ingreso
clave.close();
}}

#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>

using namespace std;

void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}


void interfaz(){
	
	int b;
	
	gotoxy(50,2);printf("SISTEMA DE VENTAS");
	gotoxy(35,4);printf("ESTE ES UN SISTEMA DE VENTAS PARA UNA TIENDA");

	for(b=1;b<=117;b++){
		gotoxy(b,1);printf("==");
		gotoxy(1,2);printf("||");
		gotoxy(1,3);printf("||");
		gotoxy(1,4);printf("||");
    }


    for(b=1;b<=117;b++){
	    gotoxy(b,5);printf("==");
	    gotoxy(117,2);printf("||");
	    gotoxy(117,3);printf("||");
	    gotoxy(117,4);printf("||");
    }

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


int main(){

	char nombreprod[50];

	char nnombreprod[50];

    int IDproducto;

	int codigobarras;

	int precio;

	int cantidad;

	int ncantidad;

	int op;

	int BUSCARID;

    int nIDproducto;
  
	int ncodigobarras;

	int nprecio;

	int user;

	int contrasena;

	int buser;
	
	char name;

	int bcontrasena;
	
	int continuar;
	
	int nncantidad;
	
	int cont;
	
	char nombreprov[50];
	
	char nombrerep[50];
	
	char dias[50];
	
	int ingresos;
	
	int noprov;
	
	int bnoprov;
	
	ofstream REGISTRAR;
	
	ifstream clave;

   	ifstream VERALTA;

	ofstream TEMP;
	
	int theme;
	
	opycomp();
	
	if(theme>0 && theme<=7){
		
	}
	
    ofstream Guar("CLAVES.txt",ios::app);

	clave.open("CLAVES.txt");
	
	interfaz();
	
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
	scanf("%d", &buser);
	
	gotoxy(37,13);printf("CLAVE:   ");
	scanf("%d", &bcontrasena);

	clave>>user;

	bool finded = true;

	while(!clave.eof()){
	
				clave>>contrasena;
				
				if(buser==user && bcontrasena==contrasena){
					
					finded==true;
				
				
				

	while(finded==true){

	//39
	int theme;
	
	opycomp();
	
	if(theme>0 && theme<=7){
		
	}
	system("cls");

    interfaz();
    
    gotoxy(100,3);printf("%d", user);

    gotoxy(45,9);printf("1-.DAR DE ALTA UN PRODUCTO");
    gotoxy(45,11);printf("2-.VER PRODUCTOS EN ALTA");
    gotoxy(45,13);printf("3-.BUSCAR PRODUCTO EN EXISTENCIA");
    gotoxy(45,15);printf("4-.DAR DE BAJA UN PRODUCTO");
    gotoxy(45,17);printf("5-.MODIFICAR");
    gotoxy(45,19);printf("6-.CONFIGURACI%cN", 224);
    gotoxy(45,21);printf("7-.VENDER");
    gotoxy(45,23);printf("8-.AGREGAR A STOCK");
    gotoxy(45,25);printf("9-.REPORTE DE INGRESOS");

    gotoxy(54,29);

    scanf("%d", &op);

    switch(op){

        case 1: {

       		system("cls");

       		interfaz();
       		
       		gotoxy(100,3);printf("%d", user);
       		
       		ofstream Guardar("ALTA.txt",ios::app);
   
       		gotoxy(49,7);printf("DAR DE ALTA UN PRODUCTO");
       
        	gotoxy(35,9);printf("TECLEE EL NOMBRE DEL PRODUCTO (SIN ESPACIOS): ");
       		scanf("%s",&nombreprod);
       		
       		gotoxy(35,11);printf("DIGITE EL CODIGO DE BARRAS: ");
       		scanf("%d",&codigobarras);
       		
       		gotoxy(35,13);printf("DIGITE EL ID QUE USARA PARA IDENTIFICAR SU PRODUCTO: ");
       		scanf("%d",&IDproducto);
       		
       		gotoxy(35,15);printf("DIGITE LA CANTIDAD: ");
       		scanf("%d",&cantidad);
       		
       		gotoxy(35,17);printf("DIGITE EL PRECIO UNITARIO: ");
       		scanf("%d",&precio);
       		
        	Guardar<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
        	
       		system("color 0a");
       		
       		gotoxy(40,20);printf("SU PRODUCTO SE DIO DE ALTA CORRECTAMENTE");
      
       		break;
       		
           	}





       	case 2:{

         	system("cls");
      
       		interfaz();
       		gotoxy(100,3);printf("%d", user);
       	
       		gotoxy(49,7);printf("VER PRODUCTOS EN ALTA");
       		
			VERALTA.open("ALTA.txt");
			
			VERALTA>>IDproducto;
			
			while(!VERALTA.eof()){
			    
               	VERALTA>>nombreprod;
               	
               	VERALTA>>codigobarras;
               	
               	VERALTA>>cantidad;
               	
               	VERALTA>>precio;
               
               	cout<<endl;
               	cout<<endl; 
               	
       	    	cout<<"                                                 ID          "<<IDproducto<<endl;
       	        cout<<"                                                 NOMBRE      "<<nombreprod<<endl;
       	    	cout<<"                                                 CODIGO      "<<codigobarras<<endl;
       	    	cout<<"                                                 CANTIDAD    "<<cantidad<<endl;
       	    	cout<<"                                                 PRECIO      "<<precio<<endl;
       	    
       	    	cout<<endl;
       	    	cout<<endl;
       	    	
       	        VERALTA>>IDproducto;
       	        
                }
           
           
            VERALTA.close();
                
            system("pause");
                
			break;
			}
			
			
			
			
			
		case 3:{
			system("cls");
			
			interfaz();
			
			gotoxy(100,3);printf("%d", user);
		
			VERALTA.open("ALTA.txt",ios::in);
		
			bool encontrado=false;
			
			gotoxy(35,7);printf("INGRESE EL ID A BUSCAR: ");
			scanf("%d", &BUSCARID);
		
			VERALTA>>IDproducto;
			
			while(!VERALTA.eof()){
				
				VERALTA>>nombreprod;
				
				VERALTA>>codigobarras;
				
				VERALTA>>cantidad;
			
				VERALTA>>precio;
			
				if(IDproducto==BUSCARID){
				
					encontrado=true;
				
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					
					cout<<endl;
					
				}
			
			VERALTA>>IDproducto;
			
			}
			
			if(encontrado==false){
			
				system("color 0c");
			
				gotoxy(40,14);cout<<"ID NO ENCONTRADO"<<endl;
				
			}
		
			VERALTA.close();
			
			break;
		}
		
		case 4:{
		
			system("cls");
		
			interfaz();
		
			gotoxy(100,3);printf("%d", user);
		
			VERALTA.open("ALTA.txt",ios::in);
		
			ofstream TEMP("TEMP.txt",ios::app);
			
			VERALTA>>IDproducto;
		
			bool encontrado=false;
			
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A ELIMINAR: ");
			scanf("%d", &BUSCARID);
		
			while(!VERALTA.eof()){
				
				VERALTA>>nombreprod;
				
				VERALTA>>codigobarras;
				
				VERALTA>>cantidad;
				
				VERALTA>>precio;
				
				if(IDproducto==BUSCARID){
				
					encontrado=true;
					cout<<endl;
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
			
					cout<<endl;
					
				}
				
				else{
					
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
				
				}
				
				VERALTA>>IDproducto;
			}
		
			
		
			if(encontrado==false){
			
				system("color 0c");
			
				gotoxy(40,14);cout<<"ID NO ENCONTRADO"<<endl;
				
			}

			VERALTA.close();
			
			TEMP.close();
		
			remove("ALTA.txt");
		
			rename("TEMP.txt", "ALTA.txt");
		
			break;
		}
	
		case 5:{
		
			system("cls");
			
			interfaz();
			
			gotoxy(100,3);printf("%d", user);
		
			VERALTA.open("ALTA.txt",ios::in);
			
			ofstream TEMP("TEMP.txt",ios::out);
	
			bool encontrado=false;
		
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A MODIFICAR: ");
	
			scanf("%d", &BUSCARID);
		
			VERALTA>>IDproducto;
			while(!VERALTA.eof()){
				
				VERALTA>>nombreprod;
				VERALTA>>codigobarras;
				VERALTA>>cantidad;
				
				VERALTA>>precio;
				
				if(IDproducto==BUSCARID){
					
					encontrado=true;
					cout<<endl;
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					cout<<endl;
					
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
				
					TEMP<<nIDproducto<<"  "<<nnombreprod<<"  "<<ncodigobarras<<"  "<<ncantidad<<"  "<<nprecio<<endl;
					
				}
			
				else{
				
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
			}
			
				VERALTA>>IDproducto;
			}
		
			if(encontrado==false){
				system("color 0c");
				gotoxy(50,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
		
			VERALTA.close();
			TEMP.close();
			
			remove("ALTA.txt");
		
			rename("TEMP.txt", "ALTA.txt");
		
			system("color 0a");
			break;
		}
		case 6:{
			system("cls");
			int configop;
			int nuser;
			int ncontrasena;
			ofstream Guar("CLAVES.txt",ios::app);
			clave.open("CLAVES.txt");
			interfaz();
			gotoxy(50,9);printf("CONFIGURACI%cN",224);
			gotoxy(45,11);printf("1-.DAR DE ALTA UN USUARIO");
    		gotoxy(45,13);printf("2-.TEMA");
    		gotoxy(45,15);printf("3-.VER ALTA DE PROVEEDORES");
    		gotoxy(45,17);printf("4-.DAR DE ALTA UN PROVEEDOR");
    		gotoxy(45,19);printf("5-.DAR DE BAJA UN PROVEEDOR");
    		gotoxy(54,21);cin>>configop;
    		switch(configop){
    			case 1:{
    				system("cls");
    				interfaz();
    				gotoxy(50,7);printf("DAR DE ALTA UN USUARIO");
    				gotoxy(45,9);printf("INGRESE LOS DATOS DEL NUEVO USUARIO: ");
    				gotoxy(55,13);printf("USUARIO: ");
					scanf("%d", &nuser);
					gotoxy(55,15);printf("CLAVE:   ");
					scanf("%d", &ncontrasena);
					Guar<<nuser<<"  "<<ncontrasena<<endl;
					break;
				}
				case 2:{
					config();
					break;
				}
				case 3:{
					
        		 	system("cls");
        	 	
       				interfaz();
       				gotoxy(100,3);printf("%d", user);
       				
       				gotoxy(49,7);printf("LISTA DE PROVEEDORES\n");
       				
					VERALTA.open("PROVEEDORES.txt");
					
					VERALTA>>noprov;
				
					while(!VERALTA.eof())
			  		  {
			  			VERALTA>>nombreprov;
			  			
			  			VERALTA>>nombrerep;
			  			
			  			VERALTA>>dias;
			  			
			  			cout<<endl;
       	    			cout<<endl;
       	    			cout<<"                                                NUMERO DE PROVEEDOR:       "<<noprov<<endl;
       	   			 	cout<<"                                                NOMBRE:                    "<<nombreprov<<endl;
       		   		    cout<<"                                                REPARTIDOR:                "<<nombrerep<<endl;
      	 	 	 	  	cout<<"                                                DIAS QUE SURTE:            "<<dias<<endl;
       	  		  	
       	  		  		cout<<endl;
       	    			cout<<endl;
       	    	
       	        		VERALTA>>noprov;
                	}
                
                	VERALTA.close();
                
                	system("pause");
                	
					break;
					}
				case 4:{
					system("cls");
       	
       				interfaz();
       				gotoxy(100,3);printf("%d", user);
       	
       				ofstream Guard("PROVEEDORES.txt",ios::app);
       	
       				gotoxy(49,7);printf("DAR DE ALTA UN PROVEEDOR");
       				
       				gotoxy(35,9);printf("DIGITE EL NUMERO DE PROVEEDOR: ");
       				scanf("%d",&noprov);
       		
        			gotoxy(35,11);printf("TECLEE LA MARCA (SIN ESPACIOS): ");
       				scanf("%s",&nombreprov);
       				
       				gotoxy(35,13);printf("DIGITE EL NOMBRE O NOMBRES DEL REPARTIDOR (SIN ESPACIOS): ");
       				scanf("%s",&nombrerep);
       				
       				gotoxy(35,15);printf("DIGITE LA LETRA DEL DIA EN QUE SURTE (SIN ESPACIOS): ");
       				scanf("%s",&dias);
       		
        			Guard<<noprov<<"  "<<nombreprov<<"  "<<nombrerep<<"  "<<dias<<endl;
     
       				system("color 0a");
       		
       				gotoxy(40,20);printf("SU PROVEEDOR SE DIO DE ALTA CORRECTAMENTE");
   
       				break;
					}
				case 5:{
					system("cls");
		
					interfaz();
		
					gotoxy(100,3);printf("%d", user);
			
					VERALTA.open("PROVEEDORES.txt",ios::in);
		
					ofstream TEMP("TEMP.txt",ios::app);
			
					
		
					bool encontrado=false;
			
					gotoxy(35,7);printf("INGRESE EL ID DEL PROVEEDOR A ELIMINAR: ");
					scanf("%d", &bnoprov);
					VERALTA>>noprov;
					while(!VERALTA.eof()){
					
						VERALTA>>nombreprov;
						
						VERALTA>>nombrerep;
						
			  			VERALTA>>dias;
				
						if(noprov==bnoprov){
				
							encontrado=true;
								cout<<endl;
								cout<<"                                                 NUMERO DE PROOVEDOR:        "<<noprov<<endl;
       	        			    cout<<"                                                 MARCA:                      "<<nombreprov<<endl;
        	   				 	cout<<"                                                 REPARTIDOR:                 "<<nombrerep<<endl;
        	   				 	cout<<"                                                 DIAS QUE SURTE:             "<<dias<<endl;
        	    			
								cout<<endl;
					
						}
				
					else{
					
						TEMP<<noprov<<"  "<<nombreprov<<"  "<<nombrerep<<"  "<<dias<<endl;
				
					}
				
					VERALTA>>noprov;
				}
		
			
		
			if(encontrado==false){
			
				system("color 0c");
			
				gotoxy(40,14);cout<<"ID NO ENCONTRADO"<<endl;
				
			}

			VERALTA.close();
			
			TEMP.close();
		
			remove("PROVEEDORES.txt");
		
			rename("TEMP.txt", "PROVEEDORES.txt");
					break;
				}
				
			}
			
			break;
		}
		case 7:{
			do{
			
			system("cls");
			
			interfaz();
	
			gotoxy(100,3);printf("%d", user);
		
			VERALTA.open("ALTA.txt",ios::in);
		
			ofstream TEMP("TEMP.txt",ios::out);
			ofstream VENTA("VENTA",ios::app);
			
			
		
			bool encontrado=false;
			
	
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A VENDER: ");
		
			scanf("%d", &BUSCARID);
			VERALTA>>IDproducto;
			while(!VERALTA.eof()){
				
				VERALTA>>nombreprod;
				VERALTA>>codigobarras;
				VERALTA>>cantidad;
				int i;
				
				VERALTA>>precio;
				if(IDproducto==BUSCARID){
				
					encontrado=true;
				
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					cout<<endl;
					
					gotoxy(40,23);printf("INGRESE LA CANTIDAD A LLEVAR: ");
					scanf("%d",&ncantidad);
					nncantidad=cantidad-ncantidad;
					i+=precio;
					
					VENTA<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<ncantidad<<"  "<<precio<<endl;
					TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<nncantidad<<"  "<<precio<<endl;
					
					
				}
				
				else{
			
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
			}
			
				VERALTA>>IDproducto;
			}
		
			if(encontrado==false){
				//Color negro y rojo
				
		
				gotoxy(50,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
			gotoxy(40,25);printf("SEGUIRA COMPRANDO (1-SI) (0-NO): ");
			scanf("%d", &cont);
		
			VERALTA.close();
			TEMP.close();
		
			remove("ALTA.txt");
		
			rename("TEMP.txt", "ALTA.txt");
		
			
			}while(cont==1);
			
			
			
			if(cont==0){
				
			ifstream VENTA;
			int t;
			t=0;
         	system("cls");
         
       		interfaz();
       		gotoxy(100,3);printf("%d", user);
       		
       		gotoxy(49,7);printf("VER PRODUCTOS EN EL TICKET");
       	
			VENTA.open("VENTA");
			ofstream REGISTRAR("INGRESOS.txt",ios::app);
		
			VENTA>>IDproducto;
		
			while(!VENTA.eof())
			    {
			    
               	VENTA>>nombreprod;
               	VENTA>>codigobarras;
               	VENTA>>cantidad;
               	VENTA>>precio;
               
               	cout<<endl;
               	cout<<"                                                 "<<nombreprod<<"          "<<ncantidad<<"         $"<<precio<<endl;
               	precio=cantidad*precio;
       	    	t+=precio;
       	    	REGISTRAR<<t<<endl;
       	    
       	        VENTA>>IDproducto;
                }
                
                cout<<"                                                 SU TOTAL A PAGAR ES DE: $"<<t<<" PESOS"<<endl;
            
                VENTA.close();
                REGISTRAR.close();
                remove("VENTA");
               
                system("pause");
			}
			break;
		}
		case 8:{
			do{
			
			system("cls");
			
			interfaz();
		
			gotoxy(100,3);printf("%d", user);
			
			VERALTA.open("ALTA.txt",ios::in);
		
			ofstream TEMP("TEMP.txt",ios::out);
			
		
			bool encontrado=false;
			
		
			gotoxy(35,7);printf("INGRESE EL ID DEL PRODUCTO A AUMENTAR STOCK: ");
		
			scanf("%d", &BUSCARID);
			
			VERALTA>>IDproducto;
			while(!VERALTA.eof()){
				
				VERALTA>>nombreprod;
				VERALTA>>codigobarras;
				VERALTA>>cantidad;
			
				VERALTA>>precio;
				
				if(IDproducto==BUSCARID){
				
					encontrado=true;
				
					cout<<"                                                 ID         "<<IDproducto<<endl;
       	            cout<<"                                                 NOMBRE     "<<nombreprod<<endl;
        	    	cout<<"                                                 CODIGO     "<<codigobarras<<endl;
        	    	cout<<"                                                 CANTIDAD   "<<cantidad<<endl;
					cout<<"                                                 PRECIO     "<<precio<<endl;
					cout<<endl;
					
					gotoxy(40,23);printf("INGRESE LA CANTIDAD DEL PRODUCTO LLEGADO: ");
					scanf("%d",&ncantidad);
					nncantidad=cantidad+ncantidad;
				
					TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<nncantidad<<"  "<<precio<<endl;
					
				}
			
				else{
					
				TEMP<<IDproducto<<"  "<<nombreprod<<"  "<<codigobarras<<"  "<<cantidad<<"  "<<precio<<endl;
			}
		
				VERALTA>>IDproducto;
			}
		
			if(encontrado==false){
			
				
			
				gotoxy(50,14);cout<<"ID NO ENCONTRADO"<<endl;
			}
			gotoxy(40,25);printf("SEGUIRA AGREGANDO (1-SI) (0-NO): ");
			scanf("%d", &cont);
	
			VERALTA.close();
			TEMP.close();
		
			remove("ALTA.txt");
	
			rename("TEMP.txt", "ALTA.txt");
		
			
			}while(cont==1);
			break;
		}
			case 9:{
			int t;
			int i;
			ifstream INGRESO;
			system("cls");
         	
       		interfaz();
       		gotoxy(100,3);printf("%d", user);
       	
       		gotoxy(49,7);printf("REPORTE DE INGRESOS");
       		
			INGRESO.open("INGRESOS.txt");
		
			INGRESO>>t;
			
			
			while(!INGRESO.eof())
			    {
               
               	cout<<endl;
       	    	i+=t;
       	    
       	        INGRESO>>t;
                }
                
                cout<<"                                           SU TOTAL DE INGRESOS ES DE: $"<<i<<" PESOS"<<endl;
            i=0;
                INGRESO.close();
        
                system("pause");
                break;
			}
	
		default:

			interfaz();
		
			system("color 0c");
	
			system("cls");
		
			gotoxy(50,14);printf("ID DE OPCI%cN NO ENCONTRADO", 224);
	
		break;
		}
		
		
		
		
	
	gotoxy(35,27);printf("PRESIONA CUALQUIER TECLA PARA SALIR AL MENU PRINCIPAL");

	getch();
}
clave>>contrasena;	
}
clave>>user;
}

if(finded==false){
		
				system("color 0c");
			
				gotoxy(45,17);printf("USUARIO Y/O CLAVE INCORRECTOS");
				gotoxy(45,19);printf("SE TE HA BLOQUEADO EL PROGRAMA");
		
				Beep(500,500);
				Sleep(500);
				Beep(500,500);
				Sleep(500);
				Beep(500,500);
				abort();
			}

	
clave.close();
}

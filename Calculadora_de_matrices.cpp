#include <iostream>
#include <cstdlib>

using namespace std;
void traspuesta();
void suma();
void resta();
void multiplicacion();
int main()
{
	int f = 0, c = 0;
    int opcion;
    
    Inicio:
    	system("CLS");
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. suma" << endl;
        cout << "2. resta" << endl;
        cout << "3. mutiplicacion" << endl;
        cout << "4. traspuesta" << endl;
        cout << "0. salir"<< endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
            	system("CLS");
            	suma();
                system("pause>nul"); 
                goto Inicio;
            
                
            case 2:              
                system("CLS");
                resta();
                system("pause>nul"); 
                goto Inicio;
                break;
                
            case 3:                
                system("CLS");
                multiplicacion();
                system("pause>nul");          
                goto Inicio;
                break;

            case 4:
            	system("CLS");
            	traspuesta();
            	system("pause>nul");
            	goto Inicio;
            	break;
            case 0:
    
            	break;
        }         
    return 0;
}

void suma(){
	cout<<"\nSUMA DE MATRICES \n"<< endl;
	int filas, columnas;
	cout<<"Numero de Filas"<< endl;
	cin>>filas;
    cout<<"Numero de columnas"<< endl;
	cin>>columnas;
	int arreglo[filas][columnas];
	int arreglo2[filas][columnas];
	int resultado[filas][columnas];
	cout<<"Arreglo 1"<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo[i][j];
		}
	}

    cout<<"Arreglo 2"<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo2[i][j];
		}
	}

	cout<<endl<<"los valores ingresados son en el arreglo 1 son "<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<arreglo[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"los valores ingresados son en el arreglo 2 son "<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<arreglo2[i][j]<<" ";
		}
		cout<<endl;
	}
	
    for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    resultado[i][j] = arreglo[i][j] + arreglo2[i][j];
		}
	}
	
	
	cout<<endl<<"el resultado es "<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<resultado[i][j]<<" ";
		}
		cout<<endl;
	}
}

void resta(){
	cout<<"\nRESTA DE MATRICES \n"<< endl;
	int filas, columnas;
	cout<<"Numero de Filas"<< endl;
	cin>>filas;
    cout<<"Numero de columnas"<< endl;
	cin>>columnas;
	int arreglo[filas][columnas];
	int arreglo2[filas][columnas];
	int resultado[filas][columnas];
	cout<<"Arreglo 1"<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo[i][j];
		}
	}

    cout<<"Arreglo 2"<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo2[i][j];
		}
	}

	cout<<endl<<"los valores ingresados son en el arreglo 1 son "<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<arreglo[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	cout<<endl<<"los valores ingresados son en el arreglo 2 son "<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<arreglo2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//resta de las dos matrices.
    for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    resultado[i][j] = arreglo[i][j] - arreglo2[i][j];
		}
	}
	
	//resultado
	cout<<endl<<"el resultado es "<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<resultado[i][j]<<" ";
		}
		cout<<endl;
	}
}

void multiplicacion(){
	cout<<"\nMULTIPLICACION DE MATRICES \n"<< endl;
	int filasA, columnasA;
	int filasB, columnasB;
	cout<<"Numero de Filas de A"<< endl;
	cin>>filasA;
    cout<<"Numero de columnas de A"<< endl;
	cin>>columnasA;
	int arreglo[filasA][columnasA];
	system("CLS");
	cout<<"Numero de Filas de B"<< endl;
	cin>>filasB;
    cout<<"Numero de columnas de B"<< endl;
	cin>>columnasB;
	int arreglo2[filasB][columnasB];
	int resultado[filasA][columnasB];
	system("CLS");
	cout<<"Arreglo 1"<<endl;
	for (int i = 0; i < filasA; i++){
		for (int j = 0; j < columnasA; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo[i][j];
		}
		system("CLS");
	}

    cout<<"Arreglo 2"<<endl;
	for (int i = 0; i < filasB; i++){
		for (int j = 0; j < columnasB; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo2[i][j];
		}
		system("CLS");
	}

	cout<<endl<<"los valores ingresados en el arreglo 1 son "<<endl;
	for (int i = 0; i < filasA; i++){
		for (int j = 0; j < columnasA; j++){
		    cout<<arreglo[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"los valores ingresados en el arreglo 2 son "<<endl;
	for (int i = 0; i < filasB; i++){
		for (int j = 0; j < columnasB; j++){
		    cout<<arreglo2[i][j]<<" ";
		}
		cout<<endl;
	}
	
    for (int i = 0; i < filasA; i++){
		for (int j = 0; j < columnasB; j++){
			resultado [i][j]= 0;
			for(int k = 0; k< columnasA; k++)
		    resultado[i][j] += (arreglo[i][k] * arreglo2[k][j]);
		}
	}
	
	
	cout<<endl<<"el resultado es "<<endl;
	for (int i = 0; i < filasA; i++){
		for (int j = 0; j < columnasB; j++){
		    cout<<resultado[i][j]<<" ";
		}
		cout<<endl;
	}
}

void traspuesta(){
	cout<<"\nTRASPUESTA DE MATRICES \n"<< endl;
    int filas, columnas;
    cout<<"Numero de Filas"<< endl;
	cin>>filas;
    cout<<"Numero de columnas"<< endl;
	cin>>columnas;
    int arreglo[filas][columnas];
	cout<<"Arreglo 1"<<endl;
	for (int i = 0; i < filas; i++){
	   	for (int j = 0; j < columnas; j++){
			cout<<"ingrese el valor de la posicion ["<<i+1<<" "<<j+1<<"]"<<endl;
		    cin>>arreglo[i][j];
		}
	}  
	
	cout<<endl<<"Matriz ingresada"<<endl;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
		    cout<<arreglo[i][j]<<"   ";
		}
		cout<<endl;
	}  
		
	cout<<endl<<"Traspuesta de la Matriz"<<endl;
	for (int i = 0; i < columnas; i++){
		for (int j = 0; j < filas; j++){
		    cout<<arreglo[j][i]<<"  ";
		}
		cout<<endl;
	}         	
}

#include <iostream>
#include <cstdlib>

using namespace std;
//se declara la función de producto donde los parametros F_A y F_B son las filas de la matriz A y B respectivamente y C_A y C_B son las Columnas de la matriz A y B respectivamente.
double** matrix_product(double**A,int F_A,int C_A, double**B,int F_B,int C_B);
//Se inicializa la funcion para crear una matriz MxN
double** get_Matrix(int M,int N);

//Se hace el Main
int main(){
//Se inicializan las matrices con el valor de sus dimensiones 
double**A;
int F_A;
int C_A; 
double**B;
int F_B;
int C_B;
double**C;
//Se pide al usuario el valor de las dimensiones de ambas matrices
cout<<"Ingrese el numero de filas de Matriz A"<<endl;
cin>>F_A;

cout<<"Ingrese el numero de Columnas de Matriz A"<<endl;
cin>>C_A;
	
cout<<"Ingrese el numero de filas de Matriz B"<<endl;
cin>>F_B;
	
cout<<"Ingrese el numero de Columnas de Matriz B"<<endl;
cin>>F_B;
//Se verifica que las Columnas de A sean iguales a las filas de B
if(C_A==F_B){
//Inicializamos A
A=get_Matrix(F_A,C_A);
//Inicializamos B
B=get_Matrix(F_B,C_B);
//Los multiplicamos
C=matrix_product(A, F_A,C_A, B, F_B, C_B)
}	
	

return(0);
}



//Se hace la función para multiplicar matricez
double** matrix_product(double**A,int F_A,int C_A, double**B,int F_B,int C_B){
 //inicializo la matriz respuesta c con dimensiones[C_A,F_B]
 double **C = new double*[F_A];
 int i;
 for(i=0;i<F_A;i++){
 C[i]=new double[C_B]; 
 }
// Ahora se ingresan los valores en la matriz c
 //Los primeros dos for con indices i y j ubica la matriz en la posicion i,j.	
 for(i=0;i<F_A;i++){
  for(int j=0;i<C_B;j++){
   //Este for recorre en la dimension C_A=F_B para hacer la suma de la multiplicacion de matricez
   for(int n=0;n<C_A;n++){
     C[i][j]+=A[i][n]*B[n][j];
   }
  } 
 }
return(C);
}



//Se hace la funcion para crear una matriz MxN

double** get_Matrix(int M,int N){
//Se imprime las dimensiones
cout<<"Se ingresaron las dimensiones:"<<M<<","<<N<<endl;
//Se inicializa la matriz de MxN
double **C = new double*[M];
 int i;
 for(i=0;i<M;i++){
 C[i]=new double[N]; 
 }
//Ahora se ingresan los valores en la matriz 
//Los dos primeros for ubican la matriz C en la posicion i,j
for(i=0;i<M;i++){
  for(int j=0;i<N;j++){
   //Aqui se le pide al usuario que ingrese el numero en la posicio i,j en la matriz C. Se imprime la peticion. 
   cout<<"Ingrese el valor para la posicion:"<<i<<","<<j<<endl;
   cin>>C[i][j];
   // se imprime el valor ingresado para confirmar
   cout<<"El valor ingresado es:"<<C[i][j]<<endl;
  }
 }
//Se imprime el mensaje para mostrar la matriz ingresada.
cout<<"La matriz ingresada es:"<<endl;
//Se imprime la matriz
for(i=0;i<M;i++){
 for(int j=0;i<N;j++){
  //Se imprime la fila j
   cout<<C[i][j]<<" ";
  }
 //Se baja una fila de impresion en la consola 
  cout<<endl;
 }
//Se retorna la matriz
}








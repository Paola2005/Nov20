#include<iostream>
using namespace std;
int main()
{
	int E;
	cout<<"\n Cantidad de estudiantes a procesar: ";
	cin>>E;
	char Estud[E][40];
	cin.ignore();//sirve para evitar el retorno de cargo
	int X=0;
	while(X<=E-1)
	{
		cout<<"\n\n Ingrese el nombre del estudiante: "<<X+1<<" ";
		cin.getline(Estud[X],40);
		
		
		X++;
	}
	
	//Ingresar los nombres de cursos 
	int C;
	cout<<"\n Cantidad de cursos a procesar: ";
	cin>>C;
	char Curso[C][40];
	cin.ignore();//sirve para evitar el retorno de cargo
	int Y=0;
	while(Y<=C-1)
	{
		cout<<"\n\n Ingrese el nombre del curso: "<<Y+1<<" ";
		cin.getline(Curso[Y],40);
		
		
		Y++;
	}
	
	
	
	
	//Ingresar las notas
	float Notas[E][C];
	
	for(int h=0;h<=E-1;h=h+1)//Filas
	{
		
		cout<<"\n\n Para el estudiante "<<Estud[h];
		for(int k=0;k<=C-1;k=k+1)//Columnas
		{
			
			cout<<"\n Digite la nota del curso "<<Curso[k];
			cin>>Notas[h][k];
			
		}
	}
	
	float Proest[E];	
	
	int F=0;
	
	do
	{
		float SumaFilas=0;
		int D=0;
		while(D<=C-1)
		{
			SumaFilas=SumaFilas+Notas[F][D];
			D=D+1;
		}
		Proest[F]=SumaFilas/C;
		
		F=F+1;
	
		
	}
	while (F<=E-1);
	//Imprimir nombre del estudiante y su promedio 
	for(int B=0; B<=E-1; B++)
	{
		cout<<"\n\n"<<Estud[B]<<"\t"<<Proest[B];
		
	}
	
	
	
	float Procur[C];	
	
	int Cur=0;
	
	do
	{
		float SumaColumnas=0;
		int Est=0;
		while(Est<=E-1)
		{
			SumaColumnas=SumaColumnas+Notas[Est][Cur];
			Est=Est+1;
		}
		Procur[Cur]=SumaColumnas/E;
		
		Cur=Cur+1;
	
		
	}
	while (Cur<=C-1);
	
	for(int B=0; B<=C-1; B++)
	{
		cout<<"\n\n"<<Curso[B]<<"\t"<<Procur[B];
		
	}
	return 0;
}


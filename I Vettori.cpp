#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define N 100
                          
void generaVettoreCasuale(int vett[], int dim)
{
	int i;
	for(i=0; i<dim; i++)
	{
		//vett[i]=rand()%200;   //genera numeri tra 0 e 100
		vett[i]=(rand()%100)+1;//genera numeri tra 1 e 100
		
	}
}

void visualizzaVettore(int vett[], int dim)
{
	int i;
	cout<<"Vettore: "<<endl;
	for(i=0; i<dim; i++)
	{
		cout<<vett[i]<<"  ";
	}
}

float calcolaMedia(int vett[], int dim)
{
	float m;
	
	
	return m;
}

int main() {
	int vett[N];
	int dim;
	srand(time(NULL));
	do{
		cout<<"Inserisci dimensione del vettore. Max "<<N<<endl;
		cin>>dim;
	}while (dim<0 || dim>N);
	
	generaVettoreCasuale(vett,dim);
	visualizzaVettore(vett,dim);
	cout<<calcolaMedia(vett,dim);
}

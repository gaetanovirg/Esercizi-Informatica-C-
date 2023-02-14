#include <iostream>
#include <ctime>
#define n 5
using namespace std;
void generaVettoreCasuale(int vett[], int dim)
{
	int i;
	for(i=0; i<dim; i++)
	{
		vett[i]=(rand()%n)+1;
		
	}
}
void visualizzaVettore (int vett[],int dim)
{
	cout<<"Vettore : "<<endl;
    for (int i=0;i<dim;i++)
    {
        cout<<vett[i]<<" ";
    }
}
void invertiElementi (int vett[],int dim)
{
	for (int i=n-1;i<dim;i--)
		cout<<vett[i];
}
int main ()

int vett[n];
int dim;
cout<<"Inserisci dimensione vettore ";
cin>>dim;
generaVettoreCasuale(vett,dim);

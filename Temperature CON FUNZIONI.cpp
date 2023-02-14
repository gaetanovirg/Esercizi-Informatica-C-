#include <iostream>
#define vettore 5
using namespace std;
void stampaVettore (float temp[])
{
	cout<<"Vettore : ";
	for (int i=0;i<vettore;i++)
	{
		cout<<"I vettori popolati sono"<<temp[i]<<endl;
	}
}
float calcolaMedia (float temp [])
{
	int m,s;
	for (int i=0;i<vettore;i++)
	{
		s=s+temp[i];
	}
	m=s/m;
	return m;
}
float tempMin(float temp[])
{
   float min=1000;
   for(int i=0;i<vettore;i++)
   {
       if(temp[i]<min)
       {
           min=temp[i];
       }
   }
   return min;
}
float tempMax(float temp[])
{
   float max=-1000;
   for(int i=0;i<vettore;i++)
   {
       if(temp[i]>max)
       {
           max=temp[i];
       }
       return max;
   }
}
float superioreMedia (float temp[],media)
{
	for(int i=0;i<vettore;i++)
    {
        if(temp[i]>media)
        {
            cout<<"La temperatura del giorno e' sopra la media:"<<i<<endl;
        }
    }
}
float inferioreMedia (float temp[],media)
{
	for(int i=0;i<vettore;i++)
    {
        if(temp[i]<media)
        {
            cout<<"La temperatura del giorno e' minore dela media:"<<i<<endl;
        }
    }
}
float mediaSottoMedia (float temp [],media)
{
	int mediaSeconda,sommaSeconda;
	for (int i=0;i<vettore;i++)
	{
		if(temp[i]<media)
   		 {
        sommaSeconda=sommaSeconda+temp[i];
    	}
	}
	
    mediaSeconda=sommaSeconda/vettore;
}
int main () {
		
		float massima,minima,mediaSottoMedia,vettoreStampato,media;
		float temp[vettore];
		cout<<"Inserisci le temperature nel vettore"<<endl;
		for (int i=0; i<vettore;i++)
		{
			cin>>temp[i];
		}
}


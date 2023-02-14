#include <iostream>
using namespace std;
void aggiungi_uno (int *n)
{
	*n=*n+1;
}
void s
int main () {
	int *n=1;
	aggiungi_uno(&n);
	cout<<*n;
}

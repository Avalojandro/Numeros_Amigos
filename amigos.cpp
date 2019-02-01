#include <stdio.h>
int main()
{
int n1,n2,s1,s2;
printf ("Ingrese el primer numero entero: ");
scanf ("%d", &n1);
while (n1<=0) {
	printf ("Ingrese el primer numero entero: ");
	scanf ("%d", &n1);
	}
printf ("Ingrese el segundo numero entero: ");
scanf ("%d", &n2);	
	while (n2<=0) {
		printf ("Ingrese el segundo numero entero: ");
        scanf ("%d", &n2);	
		}
		for (int i=1;i<n1;i++){
		if (n1%i==0) {
			s1=s1+i;
		}
	}

/*if (s1==n2 && s1==n1) {
	printf ("Son amigos");
}*/
}

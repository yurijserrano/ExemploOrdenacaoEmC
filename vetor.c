
#include <stdio.h>
#include <stdlib.h>




int main()
{

	int v[] = {5, 6, 2, 7, 9, 1, 8, 3, 7};
	int i=0,j=0;
	int u=0;
	int k = v[0];
	int flagi;
	int flagj;
	int flagu;
	int flagt;
	int temp;
	int t;
	int tam = (9/2) + (9%2);
	int cont = 0;
	j=tam;
	t=tam;
	
	

	while((i<tam && j<=8) || (u<tam && t<=8))
	{
		printf("ANTES I:%d,J:%d\n",i,j);
		printf("ANTES U:%d,T:%d\n",u,t);
		

		if(i==3 && j ==9)
			cont=1;



		if(cont==0)
		{
			if(v[i] < k)
			{	
				flagi=0;
				i++;			
			}
			else
			{
				flagi=1;
			}

			if(v[j] >= k)
			{
				flagj=0;
				j++;
			}
			else
			{
				flagj=1;
			}


			if(flagi==1 && flagj==1)
			{
				temp = v[j];
				v[j] = v[i];
				v[i] = temp;
				flagi=0;
				flagj=0;
				i++;
				j++;
			
			}

		}

		if(i==3 && j==9)
		{
			if(v[u] < k)
			{	
				flagu=0;
				u++;			
			}
			else
			{
				flagu=1;
			}

			if(v[t] == k)
			{
				flagt=1;
				
			}
			else
			{
				flagt=0;
				t++;
			}


			if(flagu==1 && flagt==1)
			{
				temp = v[t];
				v[t] = v[u];
				v[u] = temp;
				flagu=0;
				flagt=0;
				u++;
				t++;
			
			}
		}

	printf("DEPOIS I:%d,J:%d\n",i,j);
	printf("DEPOIS U:%d,T:%d\n",u,t);

	}


	printf("TAM:%d\n",tam );

	printf("{");
	for(i=0;i<9;i++)
		printf("%d,",v[i]);

	printf("}");
	printf("\n\n");


	system("PAUSE");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
/*
1.Dada la estructura
eVehiculo crear una función constructora base y una parametrizada *
2. Dada la estructura del punto anterior
declarar una variable con valores y guardarla en un archivo de texto. *
3. Dada la estructura del punto anterior
declarar una variable con valores y guardarla en un archivo binario *
*/

typedef struct{

   int id;
   char marca[20];
   int tipo;
   float peso;

}eVehiculo;

int vehiculo (int id,char* marca,int tipo,float peso);
int cargar(int id,char* marca,int tipo,float peso,int (*pFuncion)(int,char*,int,float));
int vehiculo_guardarArrayEnTexto(eVehiculo* array,int limite,char* pathArchivo);
int main()
{
    eVehiculo moto;
    int id= 0;
    char marca[20]="Yamaha";
    int tipo=2;
    float peso=120;

   vehiculo(id,marca,tipo,peso);
   cargar(id,marca,tipo,peso,vehiculo);

   moto.id=0;
   moto.marca="honda";
   moto.peso=125;
   moto.tipo=1;

   vehiculo_guardarArrayEnTexto(moto,1,"data.csv");






    return 0;
}

int vehiculo (int id,char* marca,int tipo,float peso)
{
	printf("\n %d  - %s - %d  - %f \n",id,marca,tipo, peso);
	return 0;
}

int cargar(int id,char* marca,int tipo,float peso,int (*pFuncion)(int,char*,int,float))
{
	return pFuncion (id,marca,tipo,peso);
}


int vehiculo_guardarArrayEnTexto(eVehiculo* array,int limite,char* pathArchivo)
{
	int retorno=-1;
	int i;
	FILE* fpArchivo;
	char auxMarca;
	float auxPeso;
	int auxId;
	int auxTipo;

	if(array!=NULL && limite>0 && pathArchivo!=NULL)
	{
		fpArchivo=fopen(pathArchivo,"w");
		if(fpArchivo!=NULL)
		{
			retorno=0;
			for(i=0;i<limite;i++)
			{
				if(*(array+i)!=NULL)
				{
					if( array.id==auxId &&
                        strcmp(array.marca,auxMarca)==0 &&
                        array.peso=auxPeso;
                        array.tipo=auxTipo;
					{
						fprintf(fpArchivo,"%d,%s,%f\n",auxId,auxNombre,auxAltura);

					}
				}
			}
			fclose(fpArchivo);
		}
	}

	return retorno;
}





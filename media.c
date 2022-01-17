#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
//	setlocale(LC_ALL, "Portuguese");
	int i;
	float sum, average;
	printf("Programa que calcula a media de notas de uma sala de aula.\n");
	int quantAlunos;
	printf("Insira quantos alunos terao suas notas caluladas: ");
	scanf("%d",&quantAlunos);
	float notas[quantAlunos];
	printf("Insira as notas desses alunos: [Use . para separar as casas decimais, ex: 4.0]\n");
	//recebendo todas as notas desses alunos
	for(i=0;i<quantAlunos;i++){
		scanf("%f",&notas[i]);
	}
	printf("Aguarde, fazendo calculos....\n");
	for(i=0;i<quantAlunos;i++){
		sum = sum + notas[i];
	}
	average = sum/quantAlunos;
	printf("%.2f\n",sum);
	printf("Media: %.2f",average);
	
	//testar se os valores estão sendo inseridos corretamente no vetor	
	/*for(i=0;i<alunos;i++){
		printf("%.2f \n",notas[i]);
	}*/
	
	return 0;
}
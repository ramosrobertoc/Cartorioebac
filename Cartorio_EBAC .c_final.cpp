#include <stdio.h> //biblioteca de comunica��o com usu�rio 
#include <stdlib.h>//biblioteca de aloca��o de espa�os em memoria 
#include <locale.h>//biblioteca de aloca��o de texto por regi�o
#include <string.h>//biblioteca responsavel por cuidar das strings

int registro ()// fun�ao para cadastro de alunos no sistema 
{	//inicio cria��o de variaveis/string	
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite o CPF a ser cadastrado:");//coletando informa��o
	scanf("%s", cpf);//referese a string cpf
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores da string

	FILE *file; // Cria o arquivo
	file = fopen(arquivo, "w"); // Nomeia o arquivo "w" escreve no arquivo
	fprintf(file,cpf); // Salva o valor da variavel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a");// Abre o arquivo
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("cls");//Limpando a tela 
	
	printf("Registro feito com sucesso.");
	system("pause");
	

	
}
		
int consulta ()
{
	setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//Buscando sting nos arquivos
	{
		printf("\nEssas s�o as informa��es do usu�rio:\n");
		printf("%s", conteudo);
		printf("\n\n");
		fclose(file);
		system ("pause");
	}
}
	
	int deletar ()
	{	printf("Voc� escolheu deletar nomes!\n\n");
		system("pause");	
		
		char cpf[40];
		
		printf("\nDigite o CPF a ser deletado:\n");
		scanf("%s",cpf);//Buscando a variavel cpf na string
				
		FILE*file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
			printf("O CPF n�o se encontra no sistema!\n");
			system("pause");
			return 0; // Comando para voltar ao menu inicial
		}
		fclose(file);
			
		
			printf("\nVoc� quer deletar este CPF do sistema?\n");
			printf("\nConfirme sua escolha: \n\n1- Para voltar\n\n2-Para deletar\n\n");	
			
			getchar();//fun��o para ler opcao atraves de caracteres
			char opcao;//criando op��o
			opcao = getchar();//
			
			{
				if (opcao == '2')
				
			{  
				remove (cpf);//deletando do banco de dados
				printf("\n\nCPF deletado do sistema!\n\n");
				system ("pause");
			}
				else
			{
				printf ("retorne ao menu inicial.\n");
				system ("pause");	
				system ("cls");
			}
			
			
			}
	}
	





	int main ()
		{
	
		int opcao=0; //Definindo vari�veis
		int laco=1;
	
		for (laco=1;laco=1;)
		{
		system("cls");
	
		setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
		printf("###Cart�rio da EBAC###\n\n"); //inicio do menu
		printf("Escolha a opc�o desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Op��o:)"); //fim do menu
	
		scanf("%d",&opcao); //armazenando a escolha do usu�rio
	
		system ("cls");
	
	
		switch(opcao)//inicio de sele��o
		{
		case 1:
			registro();//chamada de fun��es
		break;
		
		case 2:
			consulta();
		break;
		
		case 3:
			deletar();
		break;
		
		default:
		printf("Essa op��o n�o est� disponivel!\n");
		system("pause");
		break;}
		//fim de sele��o
		
		}
		
				
		}//Esse codigo foi feito por Roberto C Ramos
	
	
		
	
	
	
	


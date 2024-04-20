#include <stdio.h> //biblioteca de comunicação com usuário 
#include <stdlib.h>//biblioteca de alocação de espaços em memoria 
#include <locale.h>//biblioteca de alocação de texto por região
#include <string.h>//biblioteca responsavel por cuidar das strings

int registro ()// funçao para cadastro de alunos no sistema 
{	//inicio criação de variaveis/string	
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite o CPF a ser cadastrado:");//coletando informação
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
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//Buscando sting nos arquivos
	{
		printf("\nEssas são as informações do usuário:\n");
		printf("%s", conteudo);
		printf("\n\n");
		fclose(file);
		system ("pause");
	}
}
	
	int deletar ()
	{	printf("Você escolheu deletar nomes!\n\n");
		system("pause");	
		
		char cpf[40];
		
		printf("\nDigite o CPF a ser deletado:\n");
		scanf("%s",cpf);//Buscando a variavel cpf na string
				
		FILE*file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
			printf("O CPF não se encontra no sistema!\n");
			system("pause");
			return 0; // Comando para voltar ao menu inicial
		}
		fclose(file);
			
		
			printf("\nVocê quer deletar este CPF do sistema?\n");
			printf("\nConfirme sua escolha: \n\n1- Para voltar\n\n2-Para deletar\n\n");	
			
			getchar();//função para ler opcao atraves de caracteres
			char opcao;//criando opção
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
	
		int opcao=0; //Definindo variáveis
		int laco=1;
	
		for (laco=1;laco=1;)
		{
		system("cls");
	
		setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
		printf("###Cartório da EBAC###\n\n"); //inicio do menu
		printf("Escolha a opcão desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Opção:)"); //fim do menu
	
		scanf("%d",&opcao); //armazenando a escolha do usuário
	
		system ("cls");
	
	
		switch(opcao)//inicio de seleção
		{
		case 1:
			registro();//chamada de funções
		break;
		
		case 2:
			consulta();
		break;
		
		case 3:
			deletar();
		break;
		
		default:
		printf("Essa opção não está disponivel!\n");
		system("pause");
		break;}
		//fim de seleção
		
		}
		
				
		}//Esse codigo foi feito por Roberto C Ramos
	
	
		
	
	
	
	


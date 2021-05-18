#include <stdio.h> //As bibliotecas aqui.
#include <string.h> 
#include <locale.h> 
#include <stdlib.h>
#include <iostream> // As duas tabelas mais desconhecidas entre as tabelas. Serve para utilizar-mos a ferramenta stringstream e strncpy que nos permitem fazer string dentro de Switch Case;
#include <sstream>
using namespace std; // Ferramenta de input e output, tamb�m da suporte ao nosso switch case especial;

int main () {
	setlocale (LC_ALL, "portuguese"); //Serve para aceitar caracteres especiais e acentos, que eu uso bastante.
	int posto, i;
	char CEP [8], Cidade [3];
	
	do {
		system ("cls || clear"); // Adiciona a capacidade do algoritmo limpar a tela tanto em Linux como em Windows;
		printf("---------------|Projeto Interdisciplinar|---------------\n"); // Cabe�alho de charme;
		printf ("Ol�, seja bem vindo! Sou seu assistente virutal de direcionamento.\nPor favor, insira aqui os d�gitos de seu CEP sem o travess�o.\nCom isso, iremos redirecion�-lo para o posto de vacina��o mais pr�ximo:\n"); //Apresenta��o do programa;
		fgets (CEP, 8, stdin); 
		fflush (stdin); // D� uma limpada, para prevenir;
		int len = strlen(CEP); // Determina o tamanho da string, neste caso ser� igual ao CEP.
        if(CEP[len-1] == '\n' ){ // Primeiro passo da Gambiarra. Usando a String do CEP vamos come�ar a separar os 3 primeiros caracteres do resto dos algarismos;
        	CEP[len-1] = 0;
        }
		if (strlen(CEP) != 7){ // O 7 se deve ao fato de que o �ltimo vetor � nulo;
			printf("\n-----------------------------\n"); //Sec��o dedicada a alertar o usu�rio sobre as limita��es impostas ao c�digo;
            printf("Para podermos redirecion�-lo, precisamos de um CEP v�lido!\n");
            printf("Por favor, insira seu CEP e n�o se esque�a de ignorar o travess�o!\n");
            printf("-----------------------------\n\n");
            system("pause"); // Finaliza e reinicia o comando, n�o deixa a tela polu�da;
		} else if (CEP [0]!= '7') { // O sete de deve pelo char j� possuir 1 de tamanho base. Isso � a condicional apenas, nada com se preocupar ainda;
			printf ("Por favor, insira um CEP brasiliense v�lido.\n");
			system ("pause"); // Refresh na tela do c�digo;
		} 
		
	} while (strlen(CEP) != 7 || CEP [0] != '7'); 
		strncpy (Cidade, CEP, 3); //Realiza a c�pia do conte�do de uma vari�vel a outra.
		stringstream ss; //Isso � a gente ligando a string ao ss, o que significa que iremos agora, finalmente, enganar o c�digo e usar a string com um 'disfarce';
		ss << Cidade; // String menor que Cidade, que vale [3] pois � o n�mero de casas do CEP que precisamos para determinar a cidade;
		ss >> posto; // String menor que posto, porque posto s�o os casos no nosso switch case gambiarrado;

			system ("cls || clear"); 
			switch (posto){
				case 731:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Sobradinho: \n\n ");
				printf ("          Centro de Sa�de Sobradinho 01         /        Complexo de Sa�de de Sobradinho\n");
				printf ("Endere�o: Quadra 14 � �rea Especial � n�. 22/23 /         Rodovia DF-420\n");
				printf ("Telefone: (61)35912779                         /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 9 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 720: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um postos para Taguatinga Sul: \n\n ");
				printf ("          Unidade B�sica de Sa�de N� 05.\n");
				printf ("Endere�o: Taguatinga, Setor D Sul, AE 23 \n");
				printf ("Telefone: (61) 3561-2072 \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 9 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 724:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Gama: \n\n ");
				printf ("          Estacionamento Bezerr�o\n");
				printf ("Endere�o: Estacionamento Bezerr�o\n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 716: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Jardim Bot�nico, Lago Sul e S�o Sebasti�o: \n\n ");
				printf ("        Unidade B�sica de Sa�de Lago Sul             /        Policl�nica Lago Sul\n");
				printf ("Endere�o: Setor de Habita��es Individuais Sul, QI 21 /         SHIS QI 21\n");
				printf ("Telefone: (61) 3366-2530                            /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 10 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 715:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Lago Norte, Itapo�, Parano�: \n\n ");
				printf ("        �rea Especial C - Sa�de N� 10             /        Unidade B�sica De Sa�de 03 \n");
				printf ("Endere�o: SHIN, QI 3, �rea Especial               /         Quadra 378, Conjunto A/E 04 - Del Lago II \n");
				printf ("Telefone: (61) 2017-1145                          /          (61) 2017-1550\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 733: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Planaltina: \n\n ");
				printf ("          Jardim De Inf�ncia Casa Da Viv�ncia\n");
				printf ("Endere�o: Ae 09, St. de �reas Especiais Norte \n");
				printf ("Telefone: (61) 3901-4462    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 727:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Brazl�ndia: \n\n ");
				printf ("          UBS 1 Brazl�ndia\n");
				printf ("Endere�o: EQ 6/8 Conjunto 10, Lt. 1 \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
                case 719: 
                printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para �guas Claras: \n\n ");
				printf ("          Centro Universit�rio Unieuro\n");
				printf ("Endere�o: Av. das Castanheiras, s/n - Lote 3700 \n");
				printf ("Telefone: (61) 3445-5888    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 18 horas, apenas em dia �til.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 725: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Santa Maria: \n\n ");
				printf ("          N�cleo de Insp. De Sa�de de Sta. Maria\n");
				printf ("Endere�o: Quadra 102 Conjunto A, B, C e D s/n� - pr�dio ao lado do hospital \n");
				printf ("Telefone: (61) 3385-4755    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 18 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 708: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Planalto: \n\n ");
				printf ("          Regi�o Central\n");
				printf ("Endere�o: Setor M�dico Hospitalar Norte, Quadra 01- �rea Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 707:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Norte: \n\n ");
				printf ("          Centro de Sa�de n�13\n");
				printf ("Endere�o: Asa Norte EQN 114/115 - �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 9 �s 19 horas, apenas em dias �teis.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 702: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Taguatinga Norte: \n\n ");
				printf ("          Regi�o Central\n");
				printf ("Endere�o: Setor M�dico Hospitalar Norte, Quadra 01- �rea Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 717: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para N�cleo Bandeirante e Candangol�ndia: \n\n ");
				printf ("          Centro de Sa�de n�2 -  N�cleo Bandeirante    \n");
				printf ("Endere�o: �rea Especial 03, 3� Avenida              \n");
				printf ("Telefone: (61) 3386-3031                         \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 7 �s 16 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 722: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Ceil�ndia: \n\n ");
				printf ("          Centro de Sa�de n� 3                 /        UBS 16� - Ceil�ndia \n");
				printf ("Endere�o: St. M QNM 15                         /         Ceil�ndia, SHSN, Trecho 1, Etapa 1, Qd. 500, AE 2\n");
				printf ("Telefone: -                                   /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 6 �s 17 horas, apenas em dia �til.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 721: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Taguatinga: \n\n ");
				printf ("          UBS 1� - Taguatinga\n");
				printf ("Endere�o: QNG, AE 18/19, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 7 �s 19 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break; 
				case 723: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Samambaia: \n\n ");
				printf ("          UBS 2� Samambaia\n");
				printf ("Endere�o: QS 611, AE 2, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 703: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Norte: \n\n ");
				printf ("          UBS 2� Asa Norte\n");
				printf ("Endere�o: EQN 114/115, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 700: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Sul: \n\n ");
				printf ("          UBS 1� Asa Sul \n");
				printf ("Endere�o: SGAS 612, Lotes 38/39, L2 Sul \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break; 
				case 706: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Cruzeiro: \n\n ");
				printf ("          UBS n� 2 Cruzeiro Velho\n");
				printf ("Endere�o: Setor Escolar, Lote 4, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 712: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Estrutural: \n\n ");
				printf ("          UBS 2� Estrutural \n");
				printf ("Endere�o: AE 1, Setor Central \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 718: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Riacho Fundo: \n\n ");
				printf ("         UBS 1� Riacho Fundo 1                    /        UBS 2� Riacho Fundo 2  \n");
				printf ("Endere�o: QN 9, �rea Especial 11                  /        QC 1, Conjunto 10, Lote 1, Riacho Fundo 2\n");
				printf ("Telefone: -                                      /        -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, apenas em dia �til.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				case 726: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Recanto das Emas: \n\n ");
				printf ("          UBS 3� - Recanto das Emas \n");
				printf ("Endere�o: QD 104/105, �rea Especial\n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				break;
				default: 
				printf ("---------------|Projeto Interdisciplinar|---------------\n");
				printf ("Desculpe, em sua regi�o n�o h� postos de sa�de pr�ximos.\n Busque a regi�o administrativa mais pr�xima, atrav�s do site de contato: http://www.saude.df.gov.br/locaisdevacinacao/ \n\n");
				printf ("--------------------------------------------------------");
				break;
				}
	  	} 

/* Fontes:
http://linguagemc.com.br/a-biblioteca-string-h/
https://pt.stackoverflow.com/questions/348049/o-que-�-o-using-namespace
https://www.tutorialspoint.com/cplusplus-stream-classes-structure
https://www.geeksforgeeks.org/c-stream-classes-structure/
*/


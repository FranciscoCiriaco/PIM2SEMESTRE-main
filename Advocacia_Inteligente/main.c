        /*
        Programa para gerenciar um escrit�rio de advocacia.
        */

        /*
        Bibliotecas utilizadas.
        */
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

        /*
        Estruturas que ser�o utilizadas para organizar e salvar os dados do programa.
        */

typedef struct {
    char nome[30], endereco[100], telefone[15], sexo[2], cpf[10], idade[3], bairro[80];
    int escritorio, n;
}cadcliente;

typedef struct {
    char nome[30], endereco[100], telefone[15], sexo[2], cpf[10], idade[3], func[15], bairro[80];
    int escritorio, n;
}cadfuncionario;

typedef struct {
    char nome[30], endereco[100], telefone[15], sexo[2], cpf[10], idade[3], espec[15], bairro[80];
    int escritorio, n;
}cadadvogado;

typedef struct {
    char nome[30], nomem[30], telefone[15], espec[15], hora[6], status[15]; float v_consulta; int mes_consulta, escritorio, dia;
}consulta;

typedef struct {
    char coment[300]; float nota;
}avaliacao;
        /*
        In�cio da fun��o login.
        */

void FazerLogin () {
        /*
        Declara��es de vari�veis de login.
        */

    char login[15] = "unip", login1[15], senha[15] = "unip123", senha1[15];
        /*
        Processo de login, assim que iniciado o programa, o sistema pede login e senha, caso os dados informados n�o coincidirem
        com os dados de login corretos o sistema ira imprimir uma mensagem na tela informando que os dados est�o
        inv�lidos �LOGIN OU SENHA INV�LIDOS� �TENTE NOVAMENTE� caso os dados informados coincidirem com os dados de login
         o usu�rio recebera uma mensagem impressa informando o sucesso no login �LOGIN SUCCESS�.
        */

    do {
        printf("\n=-=-=-=-=-=-=-=-=-= FAZER LOGIN =-=-=-=-=-=-=-=-=-=\n"); printf("\nUSU�RIO: ");
        scanf("%s", &login1);
        printf("SENHA: ");
        scanf("%s", &senha1);

        if (strcmp(login, login1) != 0 || strcmp(senha, senha1) != 0){
            printf("\n->->->->->->-> LOGIN OU SENHA INV�LIDOS <-<-<-<-<-<");
            printf("\n->->->->->->->->-> TENTE NOVAMENTE <-<-<-<-<-<-<-<-\n");
        }else {printf("\n=-=-=-=-=-=-=-=-=-= LOGIN SUCCESS =-=-=-=-=-=-=-=-=\n\n");
        }
    }while(strcmp(login, login1) != 0 || strcmp(senha, senha1) != 0);
    system("pause");
    system("cls");
}

        /*
        Inicio da fun��o principal.

        */
void main () {
        /*
        Configura��o da l�ngua portuguesa.
        */

    setlocale(LC_ALL, "Portuguese");
        /*
        Declara��es de vari�veis din�micas.
        */

    cadcliente cp[100];
    cadfuncionario cf[100];
    cadadvogado cm[100];
    consulta cc[100];
    avaliacao av[100];

    int i = 0, tam = 100, op, mais_atende, cad_feitop = 0, cad_feito = 0, cad_feitof = 0, cad_feitom = 0, cad_feitoc = 0, achou, tam_cadastrado = 0, cont1 = 0, cont2 = 0, cont3 = 0, mes, dia, u;
    char resposta, login[15] = "teste", login1[15], senha[15] = "teste", senha1[15], data[7], nstatus[10], nome[30], espm[20], func[20], resposta1[50];
    float fat_diario, fat_mensal; FazerLogin();
        /*
        Impress�o do menu de op��es.
        */

    do {
        printf("	\n");
        printf("->->->-> SEJA BEM-VINDO <-<-<-<-<-<-<-<-<-<-<-<-<-<\n");
        printf("->-> ADVOCACIA INTELIGENTE <-<-<-<-<-<-<-<-<-<-<-<-\n");

        printf("\n*********** CADASTROS *****************************\n\n");
        printf("[1] CADASTRAR FUNCION�RIO\n");
        printf("[2] CADASTRAR ADVOGADO\n");
        printf("[3] CADASTRAR CLIENTE\n");

        printf("\n*********** ALTERAR DADOS **************************\n\n");
        printf("[4] ALTERAR DADOS DE FUNCION�RIO\n");
        printf("[5] ALTERAR DADOS DE ADVOGADO\n");
        printf("[6] ALTERAR DADOS DE CLIENTE\n");

        printf("\n*********** CONSULTAS *****************************\n\n");
        printf("[7] MARCAR CONSULTA \n");
        printf("[8] VER CONSULTAS DO DIA\n");
        printf("[9] CANCELAR CONSULTA\n");

        printf("\n*********** RELAT�RIOS *****************************\n\n");
        printf("[10] FATURAMENTO DI�RIO E MENSAL\n");

        printf("\n*********** BUSCAR *********************************\n\n");
        printf("[11] BUSCAR ADVOGADO POR ESPECIALIDADE\n");

        printf("\n*********** REGISTRO DE AVALI��ES E LOGOFF *********\n\n");
        printf("[12] AVALIE NOSSO ATENDIMENTO\n");
        printf("[0] SAIR \n");
        printf("\nEscolha uma op��o:");
        scanf("%d", &op);

    switch(op){

        /*
        Case 1: Ao iniciar o cadastro de usuario devera evidencia o nome, o endere�o,bairro eo n� da casa, o telefone, o sexo,
        idade,cpf ea funcao do funcionario para obter um registro  de um possivel candidato.Caso quiser adicionar mais canditado
        e so  digitar"s",quando for mencionado se Deseja fazer outro cadastro (s/n),caso contrario "n" sera finalizado o
        cadastro.
        */
        case 1:

        do{
            fflush(stdin);
            printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\t    ESCRITORIO ADVOCACIA: \n");
            fflush(stdin);
            printf("Informe o nome do funcion�rio: ");
            gets(cf[i].nome);
            strlwr(cf[i].nome);
            printf("Informe o endere�o do funcion�rio: ");
            gets(cf[i].endereco);
            strlwr(cf[i].endereco);
            printf("Informe o bairro do funcion�rio: ");
            gets(cf[i].bairro);
            printf("Informe o n�: "); scanf("%d", &cf[i].n);
            fflush(stdin);
            printf("Informe o telefone do funcion�rio: ");
            gets(cf[i].telefone);
            printf("Informe o sexo do funcion�rio (f/m): ");
            gets(cf[i].sexo);
            fflush(stdin);
            printf("Informe a idade do funcion�rio: ");
            gets(cf[i].idade);
            printf("Informe o CPF do funcion�rio: ");
            gets(cf[i].cpf);
            printf("Informe a fun��o do funcion�rio: ");
            gets(cf[i].func);
            strlwr(cf[i].func);
            printf("\n~~~~~~~~~~~ CADASTRO REALIZADO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\nDeseja fazer outro cadastro (s/n)?: ");
            resposta = getche();
            resposta = tolower(resposta);
            printf("\n\n"); i++;
            cad_feitof++; cad_feito = 1;

        }while (resposta == 's' && i < tam);
    break;
        /*
        Case 2: Ao iniciar o cadastro de usuario devera evidencia o nome do advogado, o endere�o,bairro eo n� da casa, o telefone, o sexo,
        idade, cpf ea especialidade do advogado para obter um registro  de um possivel advogado.Caso quiser adicionar mais advogados
        e so digitar "s",quando for mencionado se Deseja fazer outro cadastro (s/n),caso contrario "n" sera finalizado o
        cadastro.
        */
        case 2:
        do{
            fflush(stdin);
            printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\t    ESCRITORIO ADVOCACIA: \n");
            fflush(stdin);
            printf("Informe o nome do advogado: ");
            gets(cm[i].nome);
            printf("Informe o endere�o do advogado: ");
            gets(cm[i].endereco);
            printf("Informe o bairro do advogado: ");
            gets(cm[i].bairro);
            printf("Informe o n�: "); scanf("%d", &cm[i].n);
            fflush(stdin);
            printf("Informe o telefone do advogado: ");
            gets(cm[i].telefone);
            printf("Informe o sexo do advogado (f/m): ");
            gets(cm[i].sexo);
            fflush(stdin);
            printf("Informe a idade do advogado: ");
            gets(cm[i].idade);
            printf("Informe o CPF do advogado: ");
            gets(cm[i].cpf);
            printf("Digite a especialidade do advogado:");
            gets(cm[i].espec);
            printf("\n~~~~~~~~~~~ CADASTRO REALIZADO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\nDeseja fazer outro cadastro (s/n)?: ");
            resposta = getche();
            resposta = tolower(resposta);
            printf("\n\n");
            i++;
            cad_feitom++; cad_feito = 1;
        }while (resposta == 's' && i < tam);
    break;
        /*
        Case 3: Ao iniciar o cadastro de usu�rio devera evidencia o nome do cliente, o endere�o, bairro eo n� da casa, o telefone, o sexo,
        idade,cpf ea func�o do cliente para obter um registro  de um possivel cliente.Caso quiser adicionar mais cliente
        e so "s",quando for mencionado se Deseja fazer outro cadastro (s/n),caso contrario "n" sera finalizado o cadastro.
        */
        case 3:
        do{
            fflush(stdin);
            printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\t    ESCRITORIO ADVOCACIA: \n");
            fflush(stdin);
            printf("Informe o nome do cliente: ");
            gets(cp[i].nome);
            printf("Informe o endere�o do cliente: ");
            gets(cp[i].endereco);
            printf("Informe o bairro do cliente: ");
            gets(cp[i].bairro);
            printf("Informe o n�: ");
            scanf("%d", &cp[i].n);
            fflush(stdin);
            printf("Informe o telefone do cliente: ");
            gets(cp[i].telefone);
            printf("Informe o sexo do cliente (f/m): ");
            gets(cp[i].sexo);
            fflush(stdin);
            printf("Informe a idade do cliente: ");
            gets(cp[i].idade);
            printf("Informe o CPF do cliente: ");
            gets(cp[i].cpf);
            printf("\n~~~~~~~~~~~ CADASTRO REALIZADO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\nDeseja fazer outro cadastro (s/n)?: ");
            resposta = getche();
            resposta = tolower(resposta);
            printf("\n\n");
            i++;
            cad_feitop++; cad_feito = 1;
        }while (resposta == 's' && i < tam);
    break;

        /*
        Case 4: o usu�rio entra com um nome de funcion�rio para realizar a pesquisa, caso ainda n�o houver nenhum funcion�rio cadastrado
        o sistema imprime uma mensagem informando que n�o � funcion�rios cadastrados, se tiver funcion�rios cadastrados o sistema faz uma busca pelo nome informado
        e se n�o coincidir com nenhum nome j� cadastrado ele retorno uma mensagem impressa dizendo que n�o a nenhum funcion�rio cadastrado com aquele nome
        e se o sistema encontrar ele imprimira todos os dados de cadastro do funcion�rio pesquisado, ap�s a impress�o o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usu�rio para o menu inicial.
        */
        case 4:
            if(cad_feitof == 0)
                    printf("\nVoc� ainda n�o cadastrou nenhum funcion�rio.\n\n");
                else{
                    fflush(stdin);
                    printf("\nInforme o nome do funcion�rio: ");
                    gets(nome);
                    strlwr(nome);
                    achou = 0;
                    for (i = 0; i < cad_feitof; i++){
                        strlwr(cf[i].nome);
                        if (strcmp(nome, cf[i].nome) == 0){
                            achou = 1;
                            printf("\n	");
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Nome do funcion�rio: %s\n", cf[i].nome);
                            printf("Endere�o do funcion�rio: %s\n", cf[i].endereco);
                            printf("Bairro do funcion�rio: %s\n", cf[i].bairro);
                            printf("N�: %d\n", cf[i].n);
                            printf("Telefone do funcion�rio: %s\n", cf[i].telefone);
                            printf("Sexo do funcion�rio: %s\n", cf[i].sexo);
                            printf("Idade do funcion�rio: %s\n", cf[i].idade);
                            printf("CPF do funcion�rio: %s\n", cf[i].cpf);
                            printf("Fun��o do funcion�rio: %s\n", cf[i].func);
                            printf("\n\nDeseja alterar os dados do funcion�rio? (s/n): ");
                            resposta = getche();
                            resposta = tolower(resposta);
                            printf("\n");
                        if(resposta == 's'){
                            fflush(stdin);
                            printf("\n\nInforme o novo endere�o do funcion�rio:");
                            scanf("%s", &cf[i].endereco);
                            fflush(stdin);
                            printf("Informe o novo bairro do funcion�rio: ");
                            scanf("%s", &cf[i].bairro);
                            fflush(stdin);
                            printf("Informe o novo n�: ");
                            scanf("%d", &cf[i].n);
                            fflush(stdin);
                            printf("Informe o novo telefone do funcion�rio:");
                            scanf("%s", &cf[i].telefone);
                            fflush(stdin);
                            printf("Informe o novo CPF do funcion�rio:");
                            scanf("%s", &cf[i].cpf);
                            printf("\n~~~~~~~~~~~ DADOS ALTERADOS ~~~~~~~~~~~~~~~~~~~\n");
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Nome do funcion�rio: %s\n", cf[i].nome);
                            printf("Endere�o do funcion�rio: %s\n", cf[i].endereco);
                            printf("Bairro do funcion�rio: %s\n", cf[i].bairro);
                            printf("N�: %d\n", cf[i].n);
                            printf("Telefone do funcion�rio: %s\n", cf[i].telefone);
                            printf("Sexo do funcion�rio (f/m): %s\n", cf[i].sexo);
                            printf("Idade do funcion�rio: %s\n", cf[i].idade);
                            printf("CPF do funcion�rio: %s\n", cf[i].cpf);
                            printf("Fun��o do funcion�rio: %s\n\n", cf[i].func);
                        }
                        }
                        if (strcmp(nome, cf[i].nome) != 0)
                            printf("\nNenhum funcion�rio com o nome digitado foi encontrado.\n\n");
                    }
                    }
    break;

        /*
        Case 5: o usu�rio entra com um nome de advogado para realizar a pesquisa, caso ainda n�o houver nenhum advogado cadastrado
        o sistema imprime uma mensagem informando que n�o � advogados cadastrados, se tiver advogados cadastrados o sistema faz uma busca pelo nome informado
        e se n�o coincidir com nenhum nome j� cadastrado ele retorno uma mensagem impressa dizendo que n�o a nenhum advogado cadastrado com aquele nome
        e se o sistema encontrar ele imprimira todos os dados de cadastro do advogado pesquisado, ap�s a impress�o o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usu�rio para o menu inicial.
        */
        case 5:
            if(cad_feitom == 0)
                printf("\n\nVoc� ainda n�o cadastrou nenhum advogado.\n\n");
                else{
                    fflush(stdin);
                    printf("\nInforme o nome do advogado: ");
                    gets(nome);
                    strlwr(nome);
                    achou = 0;
                    for (i = 0; i < cad_feitom; i++){
                        strlwr(cm[i].nome);
                        if (strcmp(nome, cm[i].nome) == 0){
                            achou = 1;
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Nome do advogado: %s\n", cm[i].nome);
                            printf("Endere�o do advogado: %s\n", cm[i].endereco);
                            printf("Bairro do advogado: %s\n", cm[i].bairro);
                            printf("N�: %d\n", cm[i].n);
                            printf("Telefone do advogado: %s\n", cm[i].telefone);
                            printf("Sexo do advogado: %s\n", cm[i].sexo);
                            printf("Idade do advogado: %s\n", cm[i].idade);
                            printf("CPF do advogado: %s\n", cm[i].cpf);
                            printf("Especialidade do advogado: %s\n", cm[i].espec);
                            printf("\n\nDeseja alterar os dados do advogado? (s/n): ");
                            resposta = getche();
                            resposta = tolower(resposta);
                            if(resposta == 's'){
                                printf("\nInforme o novo endere�o do advogado:");
                                scanf("%s", &cm[i].endereco);
                                fflush(stdin);
                                printf("\nInforme o novo bairro do advogado:");
                                scanf("%s", &cm[i].bairro);
                                fflush(stdin);
                                printf("\nInforme o novo n�:");
                                scanf("%d", &cm[i].n);
                                fflush(stdin);
                                printf("\nInforme o novo telefone do advogado:");
                                scanf("%s", &cm[i].telefone);
                                fflush(stdin);
                                printf("\nInforme o novo CPF do advogado:");
                                scanf("%s", &cm[i].cpf);
                                printf("\n~~~~~~~~~~~ STATUS ALTERADO ~~~~~~~~~~~~~~~~~~~\n");
                                printf("\t    ESCRITORIO ADVOCACIA: \n");
                                printf("Nome do advogado: %s\n", cm[i].nome);
                                printf("Endere�o do advogado: %s\n", cm[i].endereco);
                                printf("Bairro do advogado: %s\n", cm[i].bairro);
                                printf("N�: %d\n", cm[i].n);
                                printf("Telefone do advogado: %s\n", cm[i].telefone);
                                printf("Sexo do advogado: %s\n", cm[i].sexo);
                                printf("Idade do advogado: %s\n", cm[i].idade);
                                printf("CPF do advogado: %s\n", cm[i].cpf);
                                printf("Especialidade do advogado: %s\n", cm[i].espec);
                            }
                        }
                        if (strcmp(nome, cp[i].nome) != 0)
                            printf("\nNenhum advogado com o nome digitado foi encontrado.\n\n");
                    }
                    }
    break;

        /*
        Case 6: o usu�rio entra com um nome de cliente para realizar a pesquisa, caso ainda n�o houver nenhum cliente cadastrado
        o sistema imprime uma mensagem informando que n�o � clientes cadastrados, se tiver clientes cadastrados o sistema faz uma busca pelo nome informado
        e se n�o coincidir com nenhum nome j� cadastrado ele retorno uma mensagem impressa dizendo que n�o a nenhum cliente cadastrado com aquele nome
        e se o sistema encontrar ele imprimira todos os dados de cadastro do cliente pesquisado, ap�s a impress�o o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usu�rio para o menu inicial.
        */
        case 6:
            if(cad_feitop == 0)
                printf("\n\nVoc� ainda n�o cadastrou nenhum cliente.\n\n");
            else{
                fflush(stdin);
                printf("\nInforme o nome do cliente: ");
                gets(nome);
                strlwr(nome);
                achou = 0;
                for (i = 0; i < cad_feitop; i++){ strlwr(cp[i].nome);
                    if (strcmp(nome, cp[i].nome) == 0){
                        achou = 1;
                        printf("\n	");
                        printf("\t    ESCRITORIO ADVOCACIA: \n");
                        printf("Nome do cliente: %s\n", cp[i].nome);
                        printf("Endere�o do cliente: %s\n", cp[i].endereco);
                        printf("Bairro do cliente: %s\n", cp[i].bairro);
                        printf("N�: %d\n", cp[i].n);
                        printf("Telefone do cliente: %s\n", cp[i].telefone);
                        printf("Sexo do cliente (f/m): %s\n", cp[i].sexo);
                        printf("Idade do cliente: %s\n", cp[i].idade);
                        printf("CPF do cliente: %s\n", cp[i].cpf);
                        printf("\n\nDeseja alterar os dados do cliente? (s/n): ");
                        resposta = getche();
                        resposta = tolower(resposta);
                        if(resposta == 's'){
                                printf("\nInforme o novo endere�o do cliente:");
                                scanf("%s", &cp[i].endereco);
                                fflush(stdin);
                                printf("\nInforme o novo bairro do cliente:");
                                scanf("%s", &cp[i].bairro);
                                fflush(stdin);
                                printf("\nInforme o novo n�:"); scanf("%d", &cp[i].n);
                                fflush(stdin);
                                printf("Informe o novo telefone do cliente:");
                                scanf("%s", &cp[i].telefone);
                                printf("Informe o novo CPF do cliente:");
                                scanf("%s", &cp[i].cpf);
                                printf("\n***********DADOS ALTERADOS	\n");
                                printf("\t    ESCRITORIO ADVOCACIA: \n");
                                printf("Nome do cliente: %s\n", cp[i].nome);
                                printf("Endere�o do cliente: %s\n", cp[i].endereco);
                                printf("Endere�o do cliente: %s\n", cp[i].endereco);
                                printf("Bairro do cliente: %s\n", cp[i].bairro);
                                printf("N�: %d\n", cp[i].n);
                                printf("Telefone do cliente: %s\n", cp[i].telefone);
                                printf("Sexo do cliente (f/m): %s\n", cp[i].sexo);
                                printf("Idade do cliente: %s\n", cp[i].idade);
                                printf("CPF do cliente: %s\n", cp[i].cpf);
                        }
                    }
                    if (strcmp(nome, cp[i].nome) != 0)
                        printf("Nenhum cliente com o nome digitado foi encontrado.\n");
                }
                }
    break;

        /*
        Case 7: Caso o usuario escollha a op��o 7 para cadastrar uma consulta o sistema ira imprimir o escrit�rio, usuario devera entar com os dados do cliente que
        deseja agendar a consulta, informar qual advogado e e a especialidade do mesmo, sera necessario informar o valor da consulta, dia, mes e horario, apos sera
        necessario definir o status da consulta e assim finalizar o cadastro, ap�s finalizar o sistema pergunta se o usuario deseja
        fazer um novo cadastro se "s" o sistema ira voltar pra o inicio de um novo cadastro de consulta, casso contrario "n" ele retorna o usu�rio para o menu inicial.
        */
        case 7:
            do{
                fflush(stdin);
                printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
                printf("\t    ESCRITORIO ADVOCACIA: \n");
                if(cc[i].escritorio == 1)
                    cont1++;
                else if (cc[i].escritorio == 2) cont2++;
                    else if(cc[i].escritorio == 3) cont3++;
                        fflush(stdin);
                        printf("Informe o nome do cliente: ");
                        gets(cc[i].nome);
                        printf("Digite o telefone do cliente:");
                        fflush(stdin);

                        gets(cc[i].telefone);
                        printf("Informe o nome do advogado: ");
                        gets(cc[i].nomem);
                        printf("Informe a especialidade do advogado:");
                        gets(cc[i].espec);
                        printf("Informe o valor da consulta: ");
                        scanf("%f", &cc[i].v_consulta);
                        fflush(stdin);
                        printf("Informe o dia da consulta: ");
                        scanf("%d", &cc[i].dia);
                        printf("Informe o m�s da consulta: ");
                        scanf("%d", &cc[i].mes_consulta);
                        fflush(stdin);
                        printf("Informe a hora da consulta: ");
                        gets(cc[i].hora);
                        fflush(stdin);
                        printf("Status da consulta: ");
                        gets(cc[i].status);
                        printf("\n~~~~~~~~~~~ CADASTRO REALIZADO ~~~~~~~~~~~~~~~~~~~\n");
                        printf("\nDeseja fazer outro cadastro (s/n)?: ");
                        resposta = getche();
                        resposta = tolower(resposta);
                        printf("\n\n");
                        i++;
                        cad_feitoc++;
            }while (resposta == 's' && i < tam);
    break;

        /*
        Case 8: Para realizar uma pesquisa de consulta, o sistema ir� fazer uma comparac�o do dia e m�s que foi digitado,
        com os dias e meses j� cadastrados no sistema, para assim encontrar e exibir os dados da consulta buscada.
        Caso for digitado um dia diferente do que est� cadastrado no sistema, ele exibir� a seguinte mensagem
        "Consulta n�o encontrada".
        */
        case 8:
            if(cad_feitoc == 0)
                printf("\nVoc� ainda n�o marcou nenhuma consulta.\n\n");
                else{
                    fflush(stdin);
                    printf("\nInforme o dia: ");
                    scanf("%d", &dia);
                    printf("\nInforme o m�s: ");
                    scanf("%d", &mes); achou = 0;
                    for (i = 0; i < cad_feitoc; i++){
                        if (cc[i].dia == dia && cc[i].mes_consulta == mes ){
                            achou = 1;
                            printf("\n	");
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Cliente: %s\n", cc[i].nome);
                            printf("Advogado: %s\n", cc[i].nomem);
                            printf("Setor: %s\n", cc[i].espec);
                            printf("Valor da consulta R$: %.2f\n", cc[i].v_consulta);
                            printf("Dia da consulta: %d \n", cc[i].dia);
                            printf("M�s da consulta: %d \n", cc[i].mes_consulta);
                            printf("Hora da consulta: %s \n", cc[i].hora);
                            printf("Status: %s \n", cc[i].status);
                        }
                    if (cc[i].dia != dia)
                        printf("\n Consulta n�o encontrada.\n");
                    }
                    }
    break;

        /*
        Case 9: Para alterar o status de uma consulta, � realizada uma verifica��o a partir do nome do cliente digitado, caso o cliente n�o existir,
        � retornado a mensagem de "Nenhum cliente com o nome digitado agendado para hoje". Caso contr�rio, � realizado
        a altera��o do status da consulta, no qual o usuario realizar�.
        */
        case 9:
            if(cad_feitoc == 0)
                printf("\nVoc� ainda n�o marcou nenhuma consulta.\n\n");
            else{
                fflush(stdin);
                printf("\nInforme o nome do cliente: ");
                gets(nome);
                strlwr(nome); achou = 0;
                for (i = 0; i < cad_feitoc; i++){ strlwr(cc[i].nome);
                    if (strcmp(nome, cc[i].nome) == 0){ achou = 1;
                        printf("\n	");
                        printf("\t    ESCRITORIO ADVOCACIA: \n");
                        printf("Cliente: %s\n", cc[i].nome);
                        printf("Advogado: %s\n", cc[i].nomem);
                        printf("Setor: %s\n", cc[i].espec);
                        printf("Valor da consulta R$: %.2f\n", cc[i].v_consulta);
                        printf("Dia da consulta: %d \n", cc[i].dia);
                        printf("M�s da consulta: %d \n", cc[i].mes_consulta);
                        printf("Hora da consulta: %s \n", cc[i].hora);
                        printf("Status: %s \n", cc[i].status);
                        printf("\n\nDeseja alterar o status da consulta? (s/n): ");
                        resposta = getche();
                        resposta = tolower(resposta);
                        if(resposta == 's'){
                            printf("\nInforme o status da consulta:");
                            scanf("%s", &cc[i].status);
                            printf("\n~~~~~~~~~~~ STATUS ALTERADO ~~~~~~~~~~~~~~~~~~~\n");
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Cliente: %s\n", cc[i].nome);
                            printf("Advogado: %s\n", cc[i].nomem);
                            printf("Setor: %s\n", cc[i].espec);
                            printf("Valor da consulta R$: %.2f\n", cc[i].v_consulta);
                            printf("Dia da consulta: %d \n", cc[i].dia);
                            printf("M�s da consulta: %d \n", cc[i].mes_consulta);
                            printf("Hora da consulta: %s \n", cc[i].hora);
                            printf("Novo status: %s\n", cc[i].status);
                        }

                    }
                    if (strcmp(nome, cc[i].nome) != 0)
                        printf("\n Nenhum cliente com o nome digitado agendado para hoje.\n\n");
                    }
                }
    break;

        /*
        Case 10: Para o sistema fornecer o faturamento mensal, ele primeiro ir� checar se h� consulta marcada, caso n�o houver, ser�
        exibido na tela a seguinte mensagem: "Voc� ainda n�o marcou nenhuma consulta". Caso houver, ser� pedido para o usuario digitar
        o m�s que ele deseja vizualizar o faturamento, depois de inserido o m�s, o sistema far� uma busca para encontrar o
        faturamento mensal para o m�s inserido, e realizar o calculo necess�rio do faturamento mensal, logo ap�s ele exibe
        o valor do faturamento. Se o usuario digitar um ms que n�o foi cadastrado a seguinte tela ser� exibida "Nenhum faturamento
        registrado neste m�s"


        No faturamento di�rio o sistema ir� pedir para o usu�rio digitar o m�s e o dia que deseja vizualizar o faturamento, assim que
        o usu�rio digitar o m�s e dia desejado, ser� exibido na tela o faturamento daquele determinado dia digitado. Caso o usuario digitar
        um dia n�o cadastrado a seguinte mensagem ser� exibida: "Nenhum faturamento resgistrado neste dia".
        */
        case 10:
            if(cad_feitoc == 0)
                printf("\nVoc� ainda n�o marcou nenhuma consulta.\n\n");
            else{
                printf("\n~~~~~~~~~~~ FATURAMENTO MENSAL ~~~~~~~~~~~~~~~~~~~\n\n");
                printf("\nDigite o m�s que deseja ver o faturamento:");
                    scanf("%d", &mes);
                    fat_mensal = 0;
                    for(i = 0; i < cad_feitoc; i++){
                        if(mes == cc[i].mes_consulta){
                            fat_mensal = fat_mensal + cc[i].v_consulta;
                        }
                        if(cc[i].mes_consulta != mes)
                            printf("\nNenhum faturamento registrado neste m�s.\n\n");
                    }
                    printf("\nFaturamento Mensal R$: %.2f\n", fat_mensal);
                    printf("\n~~~~~~~~~~~ FATURAMENTO DI�RIO ~~~~~~~~~~~~~~~~~~~\n\n");
                    printf("\nDigite o m�s que deseja ver o faturamento:");
                    scanf("%d", &mes); fflush(stdin);
                    printf("\n\nDigite o dia do m�s que deseja ver o faturamento:");
                    scanf("%d", &dia);
                    fat_diario = 0;
                    for (i = 0; i < cad_feitoc; i++){
                        if(cc[i].mes_consulta == mes && cc[i].dia == dia){
                            fat_diario = cc[i].v_consulta + fat_diario;

                        }

                        if(cc[i].mes_consulta != mes || cc[i].dia != dia)
                            printf("\nNenhum faturamento resgistrado neste dia.\n\n");

                    }
                    printf("\nFaturamento Di�rio R$: %.2f\n", fat_diario);
                }
    break;

        /*
        case 11: o usu�rio entra com a especialidade do advogado para realizar a pesquisa, caso ainda n�o houver nenhum advogado cadastrado
        o sistema imprime uma mensagem informando que n�o � advogados cadastrados, se tiver funcion�rios cadastrados o sistema faz uma busca pela especialiade informada
        e se n�o coincidir com nenhuma especialidade j� cadastrada ele retorno uma mensagem impressa dizendo que n�o a nenhum advogado com esta especialidade cadastrada
        e se o sistema encontrar um advogado com a especialidade ele imprimira todos os advogados com a especialiade pesquisada, ap�s a impress�o o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usu�rio para o menu inicial.
        */
        case 11:
            if(cad_feitom == 0)
                printf("\nNenhum advogado cadastrado.\n\n");
            else{
                fflush(stdin);
                printf("\nInforme a especialidade do advogado: ");
                gets(espm);
                achou = 0;
                for (i = 0; i < cad_feitom; i++){
                    if (strcmp(espm, cm[i].espec) == 0){ achou = 1;
                    if (cm[i].espec == -1)
                    printf("\nNenhum advogado dessa especialidade cadastrado.\n\n");
                    else{
                        printf("\n\n\n~~~~~~~~~~~ MOSTRANDO TODOS OS ADVOGADOS COM A ESPECIALIDADE BUSCADA~~~~~~~~\n");
                        printf("\n	");
                        printf("\t    ESCRITORIO ADVOCACIA: \n");
                        printf("Advogado: %s\n", cm[i].nome);
                        printf("CPF: %s\n", cm[i].cpf);
                        printf("Telefone: %d\n", cm[i].telefone);
                        printf("Especialidade: %s \n\n", cm[i].espec);
                    }
                    }
                }
                if (achou == 0)
                    printf("\nNenhum advogado dessa especialidade cadastrado.\n\n");
                }
    break;

        /*
        Case 12: Caso o cliente queira registrar uma avalia��o , poder� pontuar uma nota de 0 h� 10 "nota do atendimento" e se diver elogios ou
        reclama��o poder� mencionar quando aparecer "Digite seu elogio ou reclama��o". Caso tiver interesse em salver mais notas e so
        "s" quando for perguntado a senguinte frase "Deseja fazer outra avalia��o?" se for conviniente e so precionar "n" e vai printar
        suas avalia��o.
        */
        case 12:
            do{
                printf("\n\nNota do atendimento:");
                scanf("%f", &av[i].nota);
                fflush(stdin);
                printf("Digite seu elogio ou reclama��o:");
                gets(av[i].coment);
                printf("\n\nDeseja fazer outra avalia��o? (s/n): ");
                resposta = getche();
                resposta = tolower(resposta);
                tam_cadastrado++;
                i++;
            }while(resposta == 's' && i < tam);
    printf("\n\nDeseja ver as avalia��es do nosso atendimento? (s/n):");
    resposta = getche(); resposta = tolower(resposta);
    if(resposta == 's'){
        printf("\n\n\n~~~~~~~~~~~ TODAS AS AVALIA��ES ~~~~~~~~~~~~~~~~~~~\n");
        for (i = 0; i <tam_cadastrado; i++){
            printf("\nNota: %2.f \n", av[i].nota);
            printf("Coment�rio: %s \n", av[i].coment);
            printf("\n	\n");
        }
    }
    break;
        /*
        Case 0: Caso o usuario selecione a op��o 0 o sistema ira finalizar e fechar o programa.
        */
        case 0: printf("\n~~~~~~~~~~~ PROGRAMA FINALIZADO ~~~~~~~~~~~~~~~~~~~\n\n");
    break;

    default: printf("\nEssa op��o n�o existe. Escolha uma op��o v�lida! \n\n");

    }
    system("pause");
    system("cls");
    }while(op != 0);
}


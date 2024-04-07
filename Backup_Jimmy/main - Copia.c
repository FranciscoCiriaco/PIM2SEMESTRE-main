#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

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
    char nome[30], nomem[30], telefone[15], espec[15], hora[6], status[15]; int v_consulta, mes_consulta, escritorio, dia;
}consulta;

typedef struct {
    char coment[300]; float nota;
}avaliacao;

void FazerLogin () {
    char login[15] = "unip", login1[15] = "unip", senha[15] = "unip123", senha1[15]="unip123";
    do {
        printf("\n=-=-=-=-=-=-=-=-=-= FAZER LOGIN =-=-=-=-=-=-=-=-=-=\n"); printf("\nUSUÁRIO: ");
        scanf("%s", login1);
        printf("SENHA: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) != 0 || strcmp(senha, senha1) != 0){
            printf("\n->->->->->->-> LOGIN OU SENHA INVÁLIDOS <-<-<-<-<-<");
            printf("\n->->->->->->->->-> TENTE NOVAMENTE <-<-<-<-<-<-<-<-\n");
        }else {printf("\n=-=-=-=-=-=-=-=-=-= LOGIN SUCCESS =-=-=-=-=-=-=-=-=\n\n");
        }
    }while(strcmp(login, login1) != 0 || strcmp(senha, senha1) != 0);
    system("pause");
    system("cls");
}


void main () {

    setlocale(LC_ALL, "Portuguese");

    cadcliente cp[100];
    cadfuncionario cf[100];
    cadadvogado cm[100];
    consulta cc[100];
    avaliacao av[100];

    int i = 0, tam = 100, op, mais_atende, cad_feitop = 0, cad_feito = 0, cad_feitof = 0, cad_feitom = 0, cad_feitoc = 0, achou, tam_cadastrado = 0, cont1 = 0, cont2 = 0, cont3 = 0, mes, dia, u;
    char resposta, login[15] = "teste", login1[15], senha[15] = "teste", senha1[15], data[7], nstatus[10], nome[30], espm[20], func[20], resposta1[50];
    float fat_diario, fat_mensal; FazerLogin();

    do {
        printf("	\n");
        printf("->->->-> SEJA BEM-VINDO <-<-<-<-<-<-<-<-<-<-<-<-<-<\n");
        printf("->-> ADVOCACIA INTELIGENTE <-<-<-<-<-<-<-<-<-<-<-<-\n");

        printf("\n*********** CADASTROS *****************************\n\n");
        printf("[1] CADASTRAR FUNCIONÁRIO\n");
        printf("[2] CADASTRAR ADVOGADO\n");
        printf("[3] CADASTRAR CLIENTE\n");

        printf("\n*********** ALTERAR DADOS **************************\n\n");
        printf("[4] ALTERAR DADOS DE FUNCIONÁRIO\n");
        printf("[5] ALTERAR DADOS DE ADVOGADO\n");
        printf("[6] ALTERAR DADOS DE CLIENTE\n");

        printf("\n*********** CONSULTAS *****************************\n\n");
        printf("[7] MARCAR CONSULTA \n");
        printf("[8] VER CONSULTAS DO DIA\n");
        printf("[9] CANCELAR CONSULTA\n");

        printf("\n*********** RELATÓRIOS *****************************\n\n");
        printf("[10] FATURAMENTO DIÁRIO E MENSAL\n");

        printf("\n*********** BUSCAR *********************************\n\n");
        printf("[11] BUSCAR ADVOGADO POR ESPECIALIDADE\n");

        printf("\n*********** REGISTRO DE AVALIÇÕES E LOGOFF *********\n\n");
        printf("[12] AVALIE NOSSO ATENDIMENTO\n");
        printf("[0] SAIR \n");
        printf("\nEscolha uma opção:");
        scanf("%d", &op);

    switch(op){
        case 1:
        do{
            fflush(stdin);
            printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\nInforme o escritório: ");
            scanf("%d", &cf[i].escritorio);
            fflush(stdin);
            printf("Informe o nome do funcionário: ");
            gets(cf[i].nome);
            strlwr(cf[i].nome);
            printf("Informe o endereço do funcionário: ");
            gets(cf[i].endereco);
            strlwr(cf[i].endereco);
            printf("Informe o bairro do funcionário: ");
            gets(cf[i].bairro);
            printf("Informe o nº: "); scanf("%d", &cf[i].n);
            fflush(stdin);
            printf("Informe o telefone do funcionário: ");
            gets(cf[i].telefone);
            printf("Informe o sexo do funcionário (f/m): ");
            gets(cf[i].sexo);
            fflush(stdin);
            printf("Informe a idade do funcionário: ");
            gets(cf[i].idade);
            printf("Informe o CPF do funcionário: ");
            gets(cf[i].cpf);
            printf("Informe a função do funcionário: ");
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
        case 2:
        do{
            fflush(stdin);
            printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\nInforme o escritório: ");
            scanf("%d", &cm[i].escritorio);
            fflush(stdin);
            printf("Informe o nome do advogado: ");
            gets(cm[i].nome);
            printf("Informe o endereço do advogado: ");
            gets(cm[i].endereco);
            printf("Informe o bairro do advogado: ");
            gets(cm[i].bairro);
            printf("Informe o nº: "); scanf("%d", &cm[i].n);
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
        case 3:
        do{
            fflush(stdin);
            printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
            printf("\nInforme o escritório: ");
            scanf("%d", &cp[i].escritorio);
            fflush(stdin);
            printf("Informe o nome do cliente: ");
            gets(cp[i].nome);
            printf("Informe o endereço do cliente: ");
            gets(cp[i].endereco);
            printf("Informe o bairro do cliente: ");
            gets(cp[i].bairro);
            printf("Informe o nº: ");
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
        case 4:
            if(cad_feitof == 0)
                    printf("\nVocê ainda não cadastrou nenhum funcionário.\n\n");
                else{
                    fflush(stdin);
                    printf("\nInforme o nome do funcionário: ");
                    gets(nome);
                    strlwr(nome);
                    achou = 0;
                    for (i = 0; i < cad_feitof; i++){
                        strlwr(cf[i].nome);
                        if (strcmp(nome, cf[i].nome) == 0){
                            achou = 1;
                            printf("\n	");
                            printf("\nUnidade: %d\n", cf[i].escritorio);
                            printf("Nome do funcionário: %s\n", cf[i].nome);
                            printf("Endereço do funcionário: %s\n", cf[i].endereco);
                            printf("Bairro do funcionário: %s\n", cf[i].bairro);
                            printf("Nº: %d\n", cf[i].n);
                            printf("Telefone do funcionário: %s\n", cf[i].telefone);
                            printf("Sexo do funcionário: %s\n", cf[i].sexo);
                            printf("Idade do funcionário: %s\n", cf[i].idade);
                            printf("CPF do funcionário: %s\n", cf[i].cpf);
                            printf("Função do funcionário: %s\n", cf[i].func);
                            printf("\n\nDeseja alterar os dados do funcionário? (s/n): ");
                            resposta = getche();
                            resposta = tolower(resposta);
                            printf("\n");
                        if(resposta == 's'){
                            fflush(stdin);
                            printf("\n\nInforme o novo endereço do funcionário:");
                            scanf("%s", &cf[i].endereco);
                            fflush(stdin);
                            printf("Informe o novo bairro do funcionário: ");
                            scanf("%s", &cf[i].bairro);
                            fflush(stdin);
                            printf("Informe o novo nº: ");
                            scanf("%d", &cf[i].n);
                            fflush(stdin);
                            printf("Informe o novo telefone do funcionário:");
                            scanf("%s", &cf[i].telefone);
                            fflush(stdin);
                            printf("Informe o novo CPF do funcionário:");
                            scanf("%s", &cf[i].cpf);
                            printf("\n~~~~~~~~~~~ DADOS ALTERADOS ~~~~~~~~~~~~~~~~~~~\n");
                            printf("\nUnidade: %d\n", cf[i].escritorio);
                            printf("Nome do funcionário: %s\n", cf[i].nome);
                            printf("Endereço do funcionário: %s\n", cf[i].endereco);
                            printf("Bairro do funcionário: %s\n", cf[i].bairro);
                            printf("Nº: %d\n", cf[i].n);
                            printf("Telefone do funcionário: %s\n", cf[i].telefone);
                            printf("Sexo do funcionário (f/m): %s\n", cf[i].sexo);
                            printf("Idade do funcionário: %s\n", cf[i].idade);
                            printf("CPF do funcionário: %s\n", cf[i].cpf);
                            printf("Função do funcionário: %s\n\n", cf[i].func);
                        }
                        }
                        if (strcmp(nome, cf[i].nome) != 0)
                            printf("\nNenhum funcionário com o nome digitado foi encontrado.\n\n");
                    }
                    }
    break;
        case 5:
            if(cad_feitom == 0)
                printf("\n\nVocê ainda não cadastrou nenhum advogado.\n\n");
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
                            printf("\n	"); printf("\nUnidade: %d\n", cm[i].escritorio);
                            printf("Nome do advogado: %s\n", cm[i].nome);
                            printf("Endereço do advogado: %s\n", cm[i].endereco);
                            printf("Bairro do advogado: %s\n", cm[i].bairro);
                            printf("Nº: %d\n", cm[i].n);
                            printf("Telefone do advogado: %s\n", cm[i].telefone);
                            printf("Sexo do advogado: %s\n", cm[i].sexo);
                            printf("Idade do advogado: %s\n", cm[i].idade);
                            printf("CPF do advogado: %s\n", cm[i].cpf);
                            printf("Especialidade do advogado: %s\n", cm[i].espec);
                            printf("\n\nDeseja alterar os dados do advogado? (s/n): ");
                            resposta = getche();
                            resposta = tolower(resposta);
                            if(resposta == 's'){
                                printf("\nInforme o novo endereço do advogado:");
                                scanf("%s", &cm[i].endereco);
                                fflush(stdin);
                                printf("\nInforme o novo bairro do advogado:");
                                scanf("%s", &cm[i].bairro);
                                fflush(stdin);
                                printf("\nInforme o novo nº:");
                                scanf("%d", &cm[i].n);
                                fflush(stdin);
                                printf("\nInforme o novo telefone do advogado:");
                                scanf("%s", &cm[i].telefone);
                                fflush(stdin);
                                printf("\nInforme o novo CPF do advogado:");
                                scanf("%s", &cm[i].cpf);
                                printf("\n~~~~~~~~~~~ STATUS ALTERADO ~~~~~~~~~~~~~~~~~~~\n");
                                printf("\nUnidade: %d\n", cm[i].escritorio);
                                printf("Nome do advogado: %s\n", cm[i].nome);
                                printf("Endereço do advogado: %s\n", cm[i].endereco);
                                printf("Bairro do advogado: %s\n", cm[i].bairro);
                                printf("Nº: %d\n", cm[i].n);
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
        case 6:
            if(cad_feitop == 0)
                printf("\n\nVocê ainda não cadastrou nenhum cliente.\n\n");
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
                        printf("\nUnidade: %d\n", cp[i].escritorio);
                        printf("Nome do cliente: %s\n", cp[i].nome);
                        printf("Endereço do cliente: %s\n", cp[i].endereco);
                        printf("Bairro do cliente: %s\n", cp[i].bairro);
                        printf("Nº: %d\n", cp[i].n);
                        printf("Telefone do cliente: %s\n", cp[i].telefone);
                        printf("Sexo do cliente (f/m): %s\n", cp[i].sexo);
                        printf("Idade do cliente: %s\n", cp[i].idade);
                        printf("CPF do cliente: %s\n", cp[i].cpf);
                        printf("\n\nDeseja alterar os dados do cliente? (s/n): ");
                        resposta = getche();
                        resposta = tolower(resposta);
                        if(resposta == 's'){
                                printf("\nInforme o novo endereço do cliente:");
                                scanf("%s", &cp[i].endereco);
                                fflush(stdin);
                                printf("\nInforme o novo bairro do cliente:");
                                scanf("%s", &cp[i].bairro);
                                fflush(stdin);
                                printf("\nInforme o novo nº:"); scanf("%d", &cp[i].n);
                                fflush(stdin);
                                printf("Informe o novo telefone do cliente:");
                                scanf("%s", &cp[i].telefone);
                                printf("Informe o novo CPF do cliente:");
                                scanf("%s", &cp[i].cpf);
                                printf("\n***********DADOS ALTERADOS	\n");
                                printf("\nUnidade: %d\n", cp[i].escritorio);
                                printf("Nome do cliente: %s\n", cp[i].nome);
                                printf("Endereço do cliente: %s\n", cp[i].endereco);
                                printf("Endereço do cliente: %s\n", cp[i].endereco);
                                printf("Bairro do cliente: %s\n", cp[i].bairro);
                                printf("Nº: %d\n", cp[i].n);
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
        case 7:
            do{
                fflush(stdin);
                printf("\n~~~~~~~~~~~ INICIANDO O CADASTRO ~~~~~~~~~~~~~~~~~~~\n");
                printf("\nInforme a escritório: ");
                scanf("%d", &cc[i].escritorio);
                if(cc[i].escritorio == 1)
                    cont1++;
                else if (cc[i].escritorio == 2) cont2++;
                    else if(cc[i].escritorio == 3) cont3++;
                        fflush(stdin);
                        printf("Informe o nome do cliente: ");
                        gets(cc[i].nome);
                        printf("Digite o telefone do cliente:");
                        gets(cc[i].telefone);
                        printf("Informe o nome do advogado: ");
                        gets(cc[i].nomem);
                        printf("Informe a especialidade do advogado:");
                        gets(cc[i].espec);
                        printf("Informe o valor da consulta: ");
                        scanf("%d", &cc[i].v_consulta);
                        fflush(stdin);
                        printf("Informe o dia da consulta: ");
                        scanf("%d", &cc[i].dia);
                        printf("Informe o mês da consulta: ");
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
        case 8:
            if(cad_feitoc == 0)
                printf("\nVocê ainda não marcou nenhuma consulta.\n\n");
                else{
                    fflush(stdin);
                    printf("\nInforme o dia: ");
                    scanf("%d", &dia);
                    printf("\nInforme o mês: ");
                    scanf("%d", &mes); achou = 0;
                    for (i = 0; i < cad_feitoc; i++){
                        if (cc[i].dia == dia && cc[i].mes_consulta == mes ){
                            achou = 1;
                            printf("\n	");
                            printf("\nUnidade %d \n", cc[i].escritorio);
                            printf("Cliente: %s\n", cc[i].nome);
                            printf("Advogado: %s\n", cc[i].nomem);
                            printf("Setor: %s\n", cc[i].espec);
                            printf("Valor da consulta: %d\n", cc[i].v_consulta);
                            printf("Dia da consulta: %d \n", cc[i].dia);
                            printf("Mês da consulta: %d \n", cc[i].mes_consulta);
                            printf("Hora da consulta: %s \n", cc[i].hora);
                            printf("Status: %s \n", cc[i].status);
                        }
                    if (cc[i].dia != dia)
                        printf("\nNenhuma consulta agendada para hoje.\n");
                    }
                    }
    break;
        case 9:
            if(cad_feitoc == 0)
                printf("\nVocê ainda não marcou nenhuma consulta.\n\n");
            else{
                fflush(stdin);
                printf("\nInforme o nome do cliente: ");
                gets(nome);
                strlwr(nome); achou = 0;
                for (i = 0; i < cad_feitoc; i++){ strlwr(cc[i].nome);
                    if (strcmp(nome, cc[i].nome) == 0){ achou = 1;
                        printf("\n	");
                        printf("\nUnidade %d \n", cc[i].escritorio);
                        printf("Cliente: %s\n", cc[i].nome);
                        printf("Advogado: %s\n", cc[i].nomem);
                        printf("Setor: %s\n", cc[i].espec);
                        printf("Valor da consulta: %d\n", cc[i].v_consulta);
                        printf("Dia da consulta: %d \n", cc[i].dia);
                        printf("Mês da consulta: %d \n", cc[i].mes_consulta);
                        printf("Hora da consulta: %s \n", cc[i].hora);
                        printf("Status: %s \n", cc[i].status);
                        printf("\n\nDeseja alterar o status da consulta? (s/n): ");
                        resposta = getche();
                        resposta = tolower(resposta);
                        if(resposta == 's'){
                            printf("\nInforme o status da consulta:");
                            scanf("%s", &cc[i].status);
                            printf("\n~~~~~~~~~~~ STATUS ALTERADO ~~~~~~~~~~~~~~~~~~~\n");
                            printf("\nUnidade %d \n", cc[i].escritorio);
                            printf("Cliente: %s\n", cc[i].nome);
                            printf("Advogado: %s\n", cc[i].nomem);
                            printf("Setor: %s\n", cc[i].espec);
                            printf("Valor da consulta: %d\n", cc[i].v_consulta);
                            printf("Dia da consulta: %d \n", cc[i].dia);
                            printf("Mês da consulta: %d \n", cc[i].mes_consulta);
                            printf("Hora da consulta: %s \n", cc[i].hora);
                            printf("Novo status: %s\n", cc[i].status);
                        }
                    }
                    if (strcmp(nome, cc[i].nome) != 0)
                        printf("\nNenhum cliente com o nome digitado agendado para hoje.\n\n");
                    }
                }
    break;
        case 10:
            if(cad_feitoc == 0)
                printf("\nVocê ainda não marcou nenhuma consulta.\n\n");
            else{
                printf("\n~~~~~~~~~~~ FATURAMENTO MENSAL ~~~~~~~~~~~~~~~~~~~\n\n");
                printf("\nDigite o mês que deseja ver o faturamento:");
                    scanf("%d", &mes);
                    for(i = 0; i < cad_feitoc; i++){
                        if(mes == cc[i].mes_consulta){
                            fat_mensal = fat_mensal + cc[i].v_consulta;
                            printf("\n\nUnidade %d:", cc[i].escritorio);
                            printf("\nFaturamento diário: %2.f\n", fat_mensal);
                        }
                        if(cc[i].mes_consulta != mes)
                            printf("\nNenhum faturamento registrado neste mês.\n\n");
                    }
                    printf("\n~~~~~~~~~~~ FATURAMENTO DIÁRIO ~~~~~~~~~~~~~~~~~~~\n\n");
                    printf("\nDigite o mês que deseja ver o faturamento:");
                    scanf("%d", &mes); fflush(stdin);
                    printf("\n\nDigite o dia do mês que deseja ver o faturamento:");
                    scanf("%d", &dia);
                    for (i = 0; i < cad_feitoc; i++){
                        if(cc[i].mes_consulta == mes && cc[i].dia == dia){
                            fat_diario = cc[i].v_consulta + fat_diario;
                            printf("\nUnidade %d:", cc[i].escritorio);
                            printf("\nFaturamento diário: %2.f\n", fat_diario);
                        }
                        if(cc[i].mes_consulta != mes || cc[i].dia != dia)
                            printf("\nNenhum faturamento resgistrado neste dia.\n\n");
                    }
                }
    break;
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
                        printf("\nUnidade %d \n", cm[i].escritorio);
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
        case 12:
            do{
                printf("\n\nNota do atendimento:");
                scanf("%f", &av[i].nota);
                fflush(stdin);
                printf("Digite seu elogio ou reclamação:");
                gets(av[i].coment);
                printf("\n\nDeseja fazer outra avaliação? (s/n): ");
                resposta = getche();
                resposta = tolower(resposta);
                tam_cadastrado++;
                i++;
            }while(resposta == 's' && i < tam);
    printf("\n\nDeseja ver as avaliações do nosso atendimento? (s/n):");
    resposta = getche(); resposta = tolower(resposta);
    if(resposta == 's'){
        printf("\n\n\n~~~~~~~~~~~ TODAS AS AVALIAÇÕES ~~~~~~~~~~~~~~~~~~~\n");
        for (i = 0; i <tam_cadastrado; i++){
            printf("\nNota: %2.f \n", av[i].nota);
            printf("Comentário: %s \n", av[i].coment);
            printf("\n	\n");
        }
    }
    break;
        case 0: printf("\n~~~~~~~~~~~ PROGRAMA FINALIZADO ~~~~~~~~~~~~~~~~~~~\n\n");
    break;

    default: printf("\nEssa opção não existe. Escolha uma opção válida! \n\n");

    }
    system("pause");
    system("cls");
    }while(op != 0);
}


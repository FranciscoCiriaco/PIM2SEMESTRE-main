        /*
        Programa para gerenciar um escritório de advocacia.
        */

        /*
        Bibliotecas utilizadas.
        */
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

        /*
        Estruturas que serão utilizadas para organizar e salvar os dados do programa.
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
        Início da função login.
        */

void FazerLogin () {
        /*
        Declarações de variáveis de login.
        */

    char login[15] = "unip", login1[15], senha[15] = "unip123", senha1[15];
        /*
        Processo de login, assim que iniciado o programa, o sistema pede login e senha, caso os dados informados não coincidirem
        com os dados de login corretos o sistema ira imprimir uma mensagem na tela informando que os dados estão
        inválidos “LOGIN OU SENHA INVÁLIDOS” “TENTE NOVAMENTE” caso os dados informados coincidirem com os dados de login
         o usuário recebera uma mensagem impressa informando o sucesso no login “LOGIN SUCCESS”.
        */

    do {
        printf("\n=-=-=-=-=-=-=-=-=-= FAZER LOGIN =-=-=-=-=-=-=-=-=-=\n"); printf("\nUSUÁRIO: ");
        scanf("%s", &login1);
        printf("SENHA: ");
        scanf("%s", &senha1);

        if (strcmp(login, login1) != 0 || strcmp(senha, senha1) != 0){
            printf("\n->->->->->->-> LOGIN OU SENHA INVÁLIDOS <-<-<-<-<-<");
            printf("\n->->->->->->->->-> TENTE NOVAMENTE <-<-<-<-<-<-<-<-\n");
        }else {printf("\n=-=-=-=-=-=-=-=-=-= LOGIN SUCCESS =-=-=-=-=-=-=-=-=\n\n");
        }
    }while(strcmp(login, login1) != 0 || strcmp(senha, senha1) != 0);
    system("pause");
    system("cls");
}

        /*
        Inicio da função principal.

        */
void main () {
        /*
        Configuração da língua portuguesa.
        */

    setlocale(LC_ALL, "Portuguese");
        /*
        Declarações de variáveis dinâmicas.
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
        Impressão do menu de opções.
        */

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

        /*
        Case 1: Ao iniciar o cadastro de usuario devera evidencia o nome, o endereço,bairro eo n° da casa, o telefone, o sexo,
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
        /*
        Case 2: Ao iniciar o cadastro de usuario devera evidencia o nome do advogado, o endereço,bairro eo n° da casa, o telefone, o sexo,
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
        /*
        Case 3: Ao iniciar o cadastro de usuário devera evidencia o nome do cliente, o endereço, bairro eo n° da casa, o telefone, o sexo,
        idade,cpf ea funcão do cliente para obter um registro  de um possivel cliente.Caso quiser adicionar mais cliente
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

        /*
        Case 4: o usuário entra com um nome de funcionário para realizar a pesquisa, caso ainda não houver nenhum funcionário cadastrado
        o sistema imprime uma mensagem informando que não á funcionários cadastrados, se tiver funcionários cadastrados o sistema faz uma busca pelo nome informado
        e se não coincidir com nenhum nome já cadastrado ele retorno uma mensagem impressa dizendo que não a nenhum funcionário cadastrado com aquele nome
        e se o sistema encontrar ele imprimira todos os dados de cadastro do funcionário pesquisado, após a impressão o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usuário para o menu inicial.
        */
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
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
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
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
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

        /*
        Case 5: o usuário entra com um nome de advogado para realizar a pesquisa, caso ainda não houver nenhum advogado cadastrado
        o sistema imprime uma mensagem informando que não á advogados cadastrados, se tiver advogados cadastrados o sistema faz uma busca pelo nome informado
        e se não coincidir com nenhum nome já cadastrado ele retorno uma mensagem impressa dizendo que não a nenhum advogado cadastrado com aquele nome
        e se o sistema encontrar ele imprimira todos os dados de cadastro do advogado pesquisado, após a impressão o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usuário para o menu inicial.
        */
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
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
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
                                printf("\t    ESCRITORIO ADVOCACIA: \n");
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

        /*
        Case 6: o usuário entra com um nome de cliente para realizar a pesquisa, caso ainda não houver nenhum cliente cadastrado
        o sistema imprime uma mensagem informando que não á clientes cadastrados, se tiver clientes cadastrados o sistema faz uma busca pelo nome informado
        e se não coincidir com nenhum nome já cadastrado ele retorno uma mensagem impressa dizendo que não a nenhum cliente cadastrado com aquele nome
        e se o sistema encontrar ele imprimira todos os dados de cadastro do cliente pesquisado, após a impressão o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usuário para o menu inicial.
        */
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
                        printf("\t    ESCRITORIO ADVOCACIA: \n");
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
                                printf("\t    ESCRITORIO ADVOCACIA: \n");
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

        /*
        Case 7: Caso o usuario escollha a opção 7 para cadastrar uma consulta o sistema ira imprimir o escritório, usuario devera entar com os dados do cliente que
        deseja agendar a consulta, informar qual advogado e e a especialidade do mesmo, sera necessario informar o valor da consulta, dia, mes e horario, apos sera
        necessario definir o status da consulta e assim finalizar o cadastro, após finalizar o sistema pergunta se o usuario deseja
        fazer um novo cadastro se "s" o sistema ira voltar pra o inicio de um novo cadastro de consulta, casso contrario "n" ele retorna o usuário para o menu inicial.
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

        /*
        Case 8: Para realizar uma pesquisa de consulta, o sistema irá fazer uma comparacão do dia e mês que foi digitado,
        com os dias e meses já cadastrados no sistema, para assim encontrar e exibir os dados da consulta buscada.
        Caso for digitado um dia diferente do que está cadastrado no sistema, ele exibirá a seguinte mensagem
        "Consulta não encontrada".
        */
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
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Cliente: %s\n", cc[i].nome);
                            printf("Advogado: %s\n", cc[i].nomem);
                            printf("Setor: %s\n", cc[i].espec);
                            printf("Valor da consulta R$: %.2f\n", cc[i].v_consulta);
                            printf("Dia da consulta: %d \n", cc[i].dia);
                            printf("Mês da consulta: %d \n", cc[i].mes_consulta);
                            printf("Hora da consulta: %s \n", cc[i].hora);
                            printf("Status: %s \n", cc[i].status);
                        }
                    if (cc[i].dia != dia)
                        printf("\n Consulta não encontrada.\n");
                    }
                    }
    break;

        /*
        Case 9: Para alterar o status de uma consulta, é realizada uma verificação a partir do nome do cliente digitado, caso o cliente não existir,
        é retornado a mensagem de "Nenhum cliente com o nome digitado agendado para hoje". Caso contrário, é realizado
        a alteração do status da consulta, no qual o usuario realizará.
        */
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
                        printf("\t    ESCRITORIO ADVOCACIA: \n");
                        printf("Cliente: %s\n", cc[i].nome);
                        printf("Advogado: %s\n", cc[i].nomem);
                        printf("Setor: %s\n", cc[i].espec);
                        printf("Valor da consulta R$: %.2f\n", cc[i].v_consulta);
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
                            printf("\t    ESCRITORIO ADVOCACIA: \n");
                            printf("Cliente: %s\n", cc[i].nome);
                            printf("Advogado: %s\n", cc[i].nomem);
                            printf("Setor: %s\n", cc[i].espec);
                            printf("Valor da consulta R$: %.2f\n", cc[i].v_consulta);
                            printf("Dia da consulta: %d \n", cc[i].dia);
                            printf("Mês da consulta: %d \n", cc[i].mes_consulta);
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
        Case 10: Para o sistema fornecer o faturamento mensal, ele primeiro irá checar se há consulta marcada, caso não houver, será
        exibido na tela a seguinte mensagem: "Você ainda não marcou nenhuma consulta". Caso houver, será pedido para o usuario digitar
        o mês que ele deseja vizualizar o faturamento, depois de inserido o mês, o sistema fará uma busca para encontrar o
        faturamento mensal para o mês inserido, e realizar o calculo necessário do faturamento mensal, logo após ele exibe
        o valor do faturamento. Se o usuario digitar um ms que não foi cadastrado a seguinte tela será exibida "Nenhum faturamento
        registrado neste mês"


        No faturamento diário o sistema irá pedir para o usuário digitar o mês e o dia que deseja vizualizar o faturamento, assim que
        o usuário digitar o mês e dia desejado, será exibido na tela o faturamento daquele determinado dia digitado. Caso o usuario digitar
        um dia nâo cadastrado a seguinte mensagem será exibida: "Nenhum faturamento resgistrado neste dia".
        */
        case 10:
            if(cad_feitoc == 0)
                printf("\nVocê ainda não marcou nenhuma consulta.\n\n");
            else{
                printf("\n~~~~~~~~~~~ FATURAMENTO MENSAL ~~~~~~~~~~~~~~~~~~~\n\n");
                printf("\nDigite o mês que deseja ver o faturamento:");
                    scanf("%d", &mes);
                    fat_mensal = 0;
                    for(i = 0; i < cad_feitoc; i++){
                        if(mes == cc[i].mes_consulta){
                            fat_mensal = fat_mensal + cc[i].v_consulta;
                        }
                        if(cc[i].mes_consulta != mes)
                            printf("\nNenhum faturamento registrado neste mês.\n\n");
                    }
                    printf("\nFaturamento Mensal R$: %.2f\n", fat_mensal);
                    printf("\n~~~~~~~~~~~ FATURAMENTO DIÁRIO ~~~~~~~~~~~~~~~~~~~\n\n");
                    printf("\nDigite o mês que deseja ver o faturamento:");
                    scanf("%d", &mes); fflush(stdin);
                    printf("\n\nDigite o dia do mês que deseja ver o faturamento:");
                    scanf("%d", &dia);
                    fat_diario = 0;
                    for (i = 0; i < cad_feitoc; i++){
                        if(cc[i].mes_consulta == mes && cc[i].dia == dia){
                            fat_diario = cc[i].v_consulta + fat_diario;

                        }

                        if(cc[i].mes_consulta != mes || cc[i].dia != dia)
                            printf("\nNenhum faturamento resgistrado neste dia.\n\n");

                    }
                    printf("\nFaturamento Diário R$: %.2f\n", fat_diario);
                }
    break;

        /*
        case 11: o usuário entra com a especialidade do advogado para realizar a pesquisa, caso ainda não houver nenhum advogado cadastrado
        o sistema imprime uma mensagem informando que não á advogados cadastrados, se tiver funcionários cadastrados o sistema faz uma busca pela especialiade informada
        e se não coincidir com nenhuma especialidade já cadastrada ele retorno uma mensagem impressa dizendo que não a nenhum advogado com esta especialidade cadastrada
        e se o sistema encontrar um advogado com a especialidade ele imprimira todos os advogados com a especialiade pesquisada, após a impressão o sistema pergunta se o usuario deseja
        fazer uma nova pesquisa se "s" o sistema pedira um novo nome pra pesquisa, casso contrario "n" ele retorna o usuário para o menu inicial.
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
        Case 12: Caso o cliente queira registrar uma avaliação , poderá pontuar uma nota de 0 há 10 "nota do atendimento" e se diver elogios ou
        reclamação poderá mencionar quando aparecer "Digite seu elogio ou reclamação". Caso tiver interesse em salver mais notas e so
        "s" quando for perguntado a senguinte frase "Deseja fazer outra avaliação?" se for conviniente e so precionar "n" e vai printar
        suas avaliação.
        */
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
        /*
        Case 0: Caso o usuario selecione a opção 0 o sistema ira finalizar e fechar o programa.
        */
        case 0: printf("\n~~~~~~~~~~~ PROGRAMA FINALIZADO ~~~~~~~~~~~~~~~~~~~\n\n");
    break;

    default: printf("\nEssa opção não existe. Escolha uma opção válida! \n\n");

    }
    system("pause");
    system("cls");
    }while(op != 0);
}


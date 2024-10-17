#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaração de variáveis para armazenar opções e preços
    int opcao, opcao1, opcao2, opcao3;  // Variáveis para capturar a escolha do usuário no menu principal e submenus
    float xTudo = 30, xBurguer = 15, xSalada = 15, cocaCola = 6, agua = 2, pepsi = 5.5, sorvete = 7, pudim = 5, acai = 12, soma = 0, valorFinal, quant;  
    // Variáveis float para armazenar os preços dos itens e a soma total
    string nome;  // Variável string para armazenar o nome do cliente

    // Exibe o nome da lanchonete
    cout << "### LANCHONETE DA DALVA ###" << endl;

    // Solicita o nome do cliente
    cout << "Insira o seu primeiro nome: ";
    cin >> nome;  // Lê o nome do cliente
    cout << "\nBem vindo(a) Sr.(a) " << nome << endl;  // Exibe mensagem de boas-vindas

    do
    {
        // Exibe o cardápio principal
        cout << "\n\n### CARDAPIO ###" << endl;
        cout << "\n1. LANCHES" << endl;
        cout << "2. BEBIDAS" << endl;
        cout << "3. SOBREMESA" << endl;
        cout << "4. FINALIZAR" << endl;
        cout << "Escolha de 1 ate 4: " << endl;
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        switch(opcao)  // Inicia o controle de fluxo baseado na escolha do menu principal
        {
        case 1:
            // Caso o usuário escolha a opção 1 (Lanches)
            system("cls");  // Limpa a tela
            cout << "\nVoce escolheu opcao de lanches, escolha qual lanche." << endl;
            do
            {
                // Exibe o submenu de lanches
                system("cls");  // Limpa a tela
                cout << "\n1. Xtudo (R$ 30.00)" << endl;
                cout << "2. Xburguer (R$ 15.00)" << endl;
                cout << "3. Xsalada (R$ 15.00)" << endl;
                cout << "4. SAIR" << endl;
                cin >> opcao1;  // Lê a opção do submenu de lanches

                switch (opcao1)  // Controle de fluxo para o submenu de lanches
                {
                    case 1:
                        // Caso o usuário escolha o Xtudo
                        system("cls");
                        cout << "\nVoce escolheu XTUDO" << endl;
                        cout << "Digite a quantidade: ";  // Solicita a quantidade
                        cin >> quant;  // Lê a quantidade desejada
                        cout << "Voce escolheu " << quant << " XTUDO" << endl;
                        soma += (xTudo * quant);  // Atualiza o valor total
                        break;

                    case 2:
                        // Caso o usuário escolha o Xburguer
                        system("cls");
                        cout << "\nVoce escolheu XBURGUER" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " XBURGUER" << endl;
                        soma += (xBurguer * quant);  // Atualiza o valor total
                        break;

                    case 3:
                        // Caso o usuário escolha o Xsalada
                        system("cls");
                        cout << "\nVoce escolheu XSALADA" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " XSALADA" << endl;
                        soma += (xSalada * quant);  // Atualiza o valor total
                        break;

                    case 4:
                        // Caso o usuário deseje sair do submenu de lanches
                        system("cls");
                        cout << "\nVOLTANDO AO MENU ANTERIOR" << endl;
                        break;

                    default:
                        // Caso o usuário insira uma opção inválida
                        system("cls");
                        cout << "\nOperacao invalida, insira umas das opcoes do menu" << endl;
                        break;
                }
            }
            while (opcao1 != 4);  // Repete até que o usuário escolha sair (opção 4)
            break;

        case 2:
            // Caso o usuário escolha a opção 2 (Bebidas)
            system("cls");
            cout << "\nVoce escolheu opcao de bebidas, escolha qual bebida" << endl;
            do
            {
                // Exibe o submenu de bebidas
                system("cls");
                cout << "\n1. Agua (R$ 2.00)" << endl;
                cout << "2. Coca-Cola 600ml (R$ 6.00)" << endl;
                cout << "3. Pepsi 600ml (R$ 5.50)" << endl;
                cout << "4. SAIR" << endl;
                cin >> opcao2;  // Lê a opção do submenu de bebidas

                switch (opcao2)
                {
                    case 1:
                        // Caso o usuário escolha água
                        system("cls");
                        cout << "\nVoce escolheu Agua" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " Agua" << endl;
                        soma += (agua * quant);  // Atualiza o valor total
                        break;

                    case 2:
                        // Caso o usuário escolha Coca-Cola
                        system("cls");
                        cout << "\nVoce escolheu Coca-Cola" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " Coca-Cola" << endl;
                        soma += (cocaCola * quant);  // Atualiza o valor total
                        break;

                    case 3:
                        // Caso o usuário escolha Pepsi
                        system("cls");
                        cout << "\nVoce escolheu Pepsi" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " Pepsi" << endl;
                        soma += (pepsi * quant);  // Atualiza o valor total
                        break;

                    case 4:
                        // Caso o usuário deseje sair do submenu de bebidas
                        system("cls");
                        cout << "\nVOLTANDO AO MENU ANTERIOR" << endl;
                        break;

                    default:
                        // Caso o usuário insira uma opção inválida
                        system("cls");
                        cout << "\nOperacao invalida, insira umas das opcoes do menu" << endl;
                        break;
                }
            }
            while (opcao2 != 4);  // Repete até que o usuário escolha sair (opção 4)
            break;
        
        case 3:
            // Caso o usuário escolha a opção 3 (Sobremesas)
            system("cls");
            cout << "\nVoce escolheu sobremesa, escolha qual sobremesa" << endl;
            do
            {
                // Exibe o submenu de sobremesas
                system("cls");
                cout << "\n1. Sorvete (R$ 7.00)" << endl;
                cout << "2. Pudim (R$ 5.00)" << endl;
                cout << "3. Acai (R$ 12.00)" << endl;
                cout << "4. SAIR" << endl;
                cin >> opcao3;  // Lê a opção do submenu de sobremesas

                switch(opcao3)
                {
                    case 1:
                        // Caso o usuário escolha Sorvete
                        system("cls");
                        cout << "\nVoce escolheu Sorvete" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " Sorvete" << endl;
                        soma += (sorvete * quant);  // Atualiza o valor total
                        break;

                    case 2:
                        // Caso o usuário escolha Pudim
                        system("cls");
                        cout << "\nVoce escolheu Pudim" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " Pudim" << endl;
                        soma += (pudim * quant);  // Atualiza o valor total
                        break;

                    case 3:
                        // Caso o usuário escolha Açaí
                        system("cls");
                        cout << "\nVoce escolheu Acai" << endl;
                        cout << "Digite a quantidade: ";
                        cin >> quant;
                        cout << "Voce escolheu " << quant << " Acai" << endl;
                        soma += (acai * quant);  // Atualiza o valor total
                        break;

                    case 4:
                        // Caso o usuário deseje sair do submenu de sobremesas
                        system("cls");
                        cout << "\nVOLTANDO AO MENU ANTERIOR" << endl;
                        break;

                    default:
                        // Caso o usuário insira uma opção inválida
                        system("cls");
                        cout << "\nOperacao invalida, insira umas das opcoes do menu" << endl;
                        break;
                }
            }
            while (opcao3 != 4);  // Repete até que o usuário escolha sair (opção 4)
            break;

        case 4:
            // Caso o usuário escolha finalizar o pedido
            system("cls");
            cout << "\nFinalizando o pedido." << endl;
            if (soma >= 50)  // Verifica se o total é maior ou igual a 50 para aplicar desconto
            {
                valorFinal = (soma - ((soma * 10) / 100));  // Aplica desconto de 10%
                cout << "\nValor total com desconto: " << valorFinal << endl;  // Exibe o valor final com desconto
                cout << "Muito Obrigado pela preferencia Sr.(a) " << nome << endl;
            }  
            else
            {
                // Caso o total seja menor que 50, não há desconto
                cout << "\nValor total sem desconto: " << soma << endl;
                cout << "Muito Obrigado pela preferencia Sr.(a) " << nome << endl;
            }
            break;

        default:
            // Caso o usuário insira uma opção inválida no menu principal
            cout << "\nOpcao invalida!" << endl;
            break;
        }
    }
    while (opcao != 4);  // Repete o menu principal até que o usuário escolha finalizar (opção 4)

    echo "# First-College-Project-in-C-" >> README.md;
    git init;
    git add README.md;
    git commit -m "first commit";
    git branch -M main;
    git remote add origin https://github.com/AlexYurio-o/First-College-Project-in-C-.git
    git push -u origin main;

    return 0;  // Finaliza o programa
}
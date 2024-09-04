// Importar bibliotecas
#include <iostream>
#include <cmath> // Corrigido de math.h para cmath, que é mais comum em C++
#include <locale>

using namespace std;

int main()
{
    // Declaração de variáveis
    float a, b, c;

    // Solicitar ao usuário o valor das variáveis
    cout << "\n\nEntre com o valor do coeficiente angular a: ";
    cin >> a;

    // Verificar se 'a' é zero
    if (a == 0)
    {
        cout << "\n\nNão é uma equação do segundo grau!" << endl;
        return 1; // Encerrar o programa se não for uma equação do segundo grau
    }

    cout << "\n\nEntre com o valor do coeficiente b: ";
    cin >> b;

    cout << "\n\nEntre com o valor do termo independente c: ";
    cin >> c;

    // Calcular o delta da equação
    float Delta = (b * b) - 4 * a * c;

    // Verificar o valor de Delta
    if (Delta > 0)
    {
        cout << "\n\nExistem duas raízes reais para a equação!" << endl;
    }
    else if (Delta == 0)
    {
        cout << "\n\nExiste apenas uma raiz real para a equação!" << endl;
    }
    else
    {
        cout << "\n\nNão existem raízes reais que solucionam a equação!" << endl;
        return 1; // Encerrar o programa se não houver raízes reais
    }

    // Calcular as raízes da equação
    float x1, x2;
    float sqrtDelta = sqrt(Delta); // Calcular a raiz quadrada de Delta

    x1 = (-b + sqrtDelta) / (2 * a);
    x2 = (-b - sqrtDelta) / (2 * a);

    // Apresentar os valores para o usuário
    cout << "\n\nO valor do delta é igual a: " << Delta << endl;
    cout << "\n\nO valor da raiz x1 é: " << x1 << endl;
    cout << "\n\nO valor da raiz x2 é: " << x2 << endl;

    return 0;
}

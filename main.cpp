#include <iostream>

using namespace std;

int main()
{
    float kw_consumo_mes, valor_consumo_mensal, tarifa_ip, valor_final;

    cout << "Informe KW consumido no mes: ";
    cin >> kw_consumo_mes;

    valor_consumo_mensal = kw_consumo_mes * 0.87415;

    tarifa_ip = 1.575/100 * valor_consumo_mensal + 27.81;

    valor_final = valor_consumo_mensal + tarifa_ip;

    cout << "O valor do Consumo Mensal foi de: " << valor_consumo_mensal << endl;
    cout << "O valor da Tarifa de Iluminacao Publica foi de: " << tarifa_ip << endl;
    cout << "O valor final da conta de energia foi de: " << valor_final << endl;

    return 0;
}

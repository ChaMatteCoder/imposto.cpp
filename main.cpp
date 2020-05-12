#include <bits/stdc++.h>

using namespace std;

int main()
{

 double ganhoSalario, ganhoServicos, ganhoCapital, gastoMedico, gastoEducacao;
 double impostoSalario, impostoServico, impostoCapital;
 double maximoDedutivel, gastosDedutiveis, impostoBruto;
 double abatimento, impostoDevido;

 // 1 LEITURA DOS DADOS:

 cout << "Renda anual com salario: ";
 cin >> ganhoSalario;
 cout << "Renda anual com prestacao de servico: ";
 cin >> ganhoServicos;
 cout << "Renda anual com ganho de capital: ";
 cin >> ganhoCapital;
 cout << "Gastos Medicos: ";
 cin >> gastoMedico;
 cout << "Gastos educacionais: ";
 cin >> gastoEducacao;

// 2 CALCULOS CONSOLIDADO DE RENDA:

double salarioMensal = ganhoSalario / 12.0;

if (salarioMensal < 3000.0){
    impostoSalario = 0.0;
}
else if (salarioMensal < 5000.0){
    impostoSalario = ganhoSalario * 0.10;
}
else {
    impostoSalario = ganhoSalario * 0.20;
}

impostoServico = ganhoServicos * 0.15;

impostoCapital = ganhoCapital * 0.20;

// 3 CALCULOS DAS DEDUCOES:

impostoBruto = impostoSalario + impostoServico + impostoCapital;

maximoDedutivel = impostoBruto * 0.30;

gastosDedutiveis = gastoEducacao + gastoMedico;

// CALCULOS FINAIS

if (gastosDedutiveis > maximoDedutivel){
    abatimento = maximoDedutivel;
}
else {
    abatimento = gastosDedutiveis;
}

impostoDevido = impostoBruto - abatimento;

// 4 RELATORIO:

 cout << fixed << setprecision(2);
 cout << endl << "RELATORIO DE IMPOSTO DE RENDA" << endl << endl;
 cout << "CONSOLIDADO DE RENDA:" << endl;
 cout << "Imposto sobre salario: " << impostoSalario << endl;
 cout << "Imposto sobre servicos: " << impostoServico << endl;
 cout << "Imposto sobre ganho de capital: " << impostoCapital << endl;

 cout << endl << "DEDUCOES: " << endl;
 cout << "Maximo dedutivel: " << maximoDedutivel << endl;
 cout << "Gastos dedutiveis: " << gastosDedutiveis << endl;

 cout << endl << "RESUMO:" << endl;
 cout << "Imposto bruto total: " << impostoBruto << endl;
 cout << "Abatimento: " << abatimento << endl;
 cout << "Imposto devido: " << impostoDevido << endl;




    return 0;
}

#include <iostream>

int main(){
    int numb, x1, x2, x3, x4;

    printf("Digite um numerop de 4 digitos:")
    scanf("%d", &numb);

    if(numb < 1000 ||numb > 9999){
        cout <<"Erro: o numero deve ter exatamente 4 digitios." << endl;
            return 1;
    }

    x1 = numb/1000;
    x2 = (numb/100)%10;
    x3 = (numb/10)%10;
    x4 = numb%10;

    if (x1 == x4 && x2 == x3) {
        cout << "O numero " << numb << " e um palindromo!" << endl;
    }

    return 0;
}
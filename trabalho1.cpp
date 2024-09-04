#include <iostream>
using namespace std;

int main () {
    int nomedopersonagem;
    int aparencia;
    int raca;
    int classe;
    int historia;
    
    char escolha;

    cout<< "em um mundo muito distante havia uma justiceira, chamada:" <<endl;
    cout <<" escolha o nome da sua personagem:" <<endl;
    cin>> escolha;

  switch (nomedopersonagem){
    case 1:
    cout<<"Britney Spears."<<endl;
     break;
    case 2:
    cout<<"Amelia Sofia"<<endl;
     break;
    case 3:
    cout<<" Aurora Beatriz."<<endl;
    break;
    }

     cout << " deseja ver qual a aparencia da sua justiceira?";
    cin >> escolha;

    if (escolha == 's')
    {
        switch (aparencia)
        {
        case 1:
            cout << "Loira do cabelo liso e curto, olhos azuis, estatura mediana, uma cicatriz no olho esquerdo, pela a invasao qundo estava fungindo para salvar sua propria vida, tropecou em uma raiz de arvore e fazendo um risco profundo em seu olho." << endl;
            break;
        case 2:
            cout << "ruiva do cabelo chaceado do tamanho medio, olhos verdes, estatura baixa, cicatriz de corte no pescoco na diagonal, devido a uma tentativa de assassinato na hora da invasao de sua vila." << endl;
            break;
        case 3:
            cout << "Morena do cablo ondulado do tamanho grande, olhos castanhos da cor de mel, estatura alta, cicatriz na parte de cima da orelha quando foi vitima de uma flechada quando estava fugindo de cacadores. " << endl;
            break;
        }
    }
    else
    {
        cout << "nao, desejo escolher";
    }

    cout << "voce deseja ver as habilidade da sua justiceira?";
    cin >> escolha;

    if (escolha == 's')
    {
        switch (historia)
        {
        case 1:
            cout << " a britney e boa com espadas e com armadilhas, porem e ruim com arcos e no ato de persuadir" << endl;
            break;
        case 2:
            cout << "aurora e boa com arcos e com a medicina mas e ruim com ediqueta e com magia" << endl;
            break;
        case 3:
            cout << "A Amelia e boa na luta e no idiomas mas e ruim na navegacao e na magia " << endl;
            break;
        }
    }
    else
    {
        cout << "nao, desejo ver";
    }


    cout<<" a justiceira era da raca:"<<endl;
    cout<<" escolha uma raca."
     cin>> escolha; 

    switch (raca){
    case 1:
    cout<<"Vampiro"<<endl;
     break;
    case 2:
    cout<<"Lobo"<<endl;
     break;
    case 3:
    cout<<" Bruxa"<<endl;
    break;}
    
    cout<<" a justiceira e uma ladra que rouba da burguesia para dar aos plebeus.\n  porem sua classe social e: \n escolha a classe social da justiceira:"<<endl;  
    cin>> escolha;

    switch (classe){
    case 1:
    cout<<"nobre"<<endl;
     break;
    case 2:
    cout<<"plebeu"<<endl;
     break;
    case 3:
    cout<<" servos"<<endl;
    break;}  

    cout<<" Sua jogadora faz parte de uma gangue de justiceiros chamada KGB que tem como intuito fazer justica aos aos inocentes, libertanto os plebeus da burguesia opressora que a classe alta impoe."








     

}
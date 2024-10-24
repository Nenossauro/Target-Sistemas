#include <iostream>

int main()
{
    /*
    Para mais fácil compilar, deixarei aqui o link do compilador online de c++:
    https://www.onlinegdb.com/online_c++_compiler
    */
    std::cout<<"Fibonacci"<<std::endl;
    int n,x, aux=3, temp, seg=1, pri=0;
    std::cout << "Qual termo você está buscando: ";
    std::cin >> x;
    std::cout << "Quantas iterações você deseja que ele rode para tentar achar o termo: ";
    std::cin >> n;

    std::cout << pri << std::endl << seg << std::endl;

    while(aux<=n){
        std:: cout << (pri+seg) << std::endl;
        if((pri+seg)==x){
            std:: cout << "Aqui está o termo!" << std:: endl;
            return 0;
        }
        else{
        temp = pri;
        pri = seg;
        seg = seg + temp;
        aux++;
        
        }
        
       
    }
    std:: cout << "Termo não encontrado :/" << std:: endl;
    return 0;
}

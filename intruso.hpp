#include <string>
#include<map>
#include<vector>


class Intruso{
    /*Continue a implementação da classe Intruso*/
    std::vector<std::vector<int> senha_conjuntos;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha(int num_senhas_vazadas);
};
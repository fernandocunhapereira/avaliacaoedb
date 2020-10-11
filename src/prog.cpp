#include <iostream>
#include "candidato.cpp"
#include "concurso.cpp"

int main(int argc, char const *argv[]){
	Candidato teste;
	teste.setNome("joao");
	teste.setResposta('T',1);
	teste.setResposta('f',2);
	std::cout<<teste.getNome()<<std::endl;
	std::cout<<teste.getResposta(1)<<std::endl;
	std::cout<<teste.getResposta(2)<<std::endl;

	Concurso vestibular;
	vestibular.setQuantidade(1000);
	vestibular.setContador(560);
	std::cout<<vestibular.getContador()<<std::endl;
	vestibular.addCandidato(teste);

return 0;
}
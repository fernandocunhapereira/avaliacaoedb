#include <iostream>
#include "candidato.cpp"
#include "concurso.cpp"
#include "questoes.cpp"

int main(int argc, char const *argv[]){

	char gabarito[10]={'A','B','C','D','E','E','D','C','B','A'};

	Candidato teste;
	teste.setNome("joao");
	teste.setResposta('A',0);
	teste.setResposta('B',1);
	teste.setResposta('C',2);
	teste.setResposta('x',3);
	teste.setResposta('E',4);
	teste.setResposta('x',5);
	teste.setResposta('D',6);
	teste.setResposta('x',7);
	teste.setResposta('B',8);
	teste.setResposta('A',9);
	std::cout<<teste.getNome()<<std::endl;
	std::cout<<teste.getResposta(1)<<std::endl;
	std::cout<<teste.getResposta(2)<<std::endl;

	Concurso vestibular;
	vestibular.setQuantidade(1000);
	vestibular.setContador(560); //APAGAR ESSE METODO, USANDO SÓ PARA TESTE
	std::cout<<vestibular.getContador()<<std::endl;
	vestibular.addCandidato(teste);

	Questoes questoes;

	for(int i=0;i<=9;i++){
		if(teste.getResposta(i)==gabarito[i]){
			questoes.setAcertos(i);
			std::cout<<"igual"<<std::endl;
		}else{
			std::cout<<"diferente"<<std::endl;
		}
	}

	teste.setNota(gabarito);
	std::cout<<teste.getNota()<<" nota do aluno"<<std::endl;
	questoes.imprimeAcertos();

return 0;
}
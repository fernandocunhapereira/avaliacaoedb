#include "questoes.hpp"

void Questoes::setAcertos(int i){
	this->acertos[i]=this->acertos[i]+1;
}

void Questoes::imprimeAcertos(){
	for(int i=0;i<=9;i++){
		std::cout<<acertos[i]<<" ";
	}
	std::cout<<std::endl;
}
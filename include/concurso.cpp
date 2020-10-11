#include "concurso.hpp"

Concurso::Concurso(){
	this->contador=0;
	this->quantidade=0;
}

Concurso::~Concurso(){

}

void Concurso::setQuantidade(long int quantidade){
	this->quantidade=quantidade;
	this->lista = new Candidato[quantidade];
}

void Concurso::setContador(long int x){//APAGAR ESSE METODO, USANDO SÓ PARA TESTE
	this->contador=x;
}

long int Concurso::getContador(){
	return this->contador;
}

void Concurso::addCandidato(Candidato candidato){
	if(contador<=quantidade){
		this->lista[contador]=candidato;
		contador++;
	}
}
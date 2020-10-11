#include "candidato.hpp"

std::string Candidato::getNome(){
	return this->nome;
}

char Candidato::getResposta(int x){
	return this->respostas[x];
}

void Candidato::setNome(std::string nome){
	this->nome=nome;
}

void Candidato::setResposta(char x, int y){
	this->respostas[y]=x;
}

void Candidato::setNota(){

}
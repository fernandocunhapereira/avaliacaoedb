#include "candidato.hpp"
#include "questoes.hpp"

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

void Candidato::setNota(char gabarito[10]){
	for(int i=0;i<=9;i++){
		if(respostas[i]==gabarito[i]){
			this->nota=this->nota+1;
		}
	}
}

int Candidato::getNota(){
	return this->nota;
}
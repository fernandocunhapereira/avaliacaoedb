#ifndef _CONCURSO_
#define _CONCURSO_
#include "candidato.hpp"

class Concurso{
private:
	Candidato* lista;
	long int quantidade;
	long int contador;

public:
	Concurso();
	~Concurso();
	void setQuantidade(long int quantidade);
	void addCandidato(Candidato candidato);
	void setContador(long int x);
	long int getContador();
	
};

#endif
#ifndef _CANDIDATO_
#define _CANDIDATO_

struct Candidato{
private:
	char respostas[10];
	std::string nome;
	int nota=0;
public:
	std::string getNome();
	void setNome(std::string nome);
	char getResposta(int x);
	void setResposta(char x, int y);
	void setNota();
};

#endif
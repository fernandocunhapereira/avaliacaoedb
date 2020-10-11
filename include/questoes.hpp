#ifndef _QUESTOES_
#define _QUESTOES_

struct Questoes{
private:
	long int acertos[10]={0,0,0,0,0,0,0,0,0,0};
	int numeroQuestoes[10]={1,2,3,4,5,6,7,8,9,10};
public:
	void setAcertos(int i);
	void imprimeAcertos();
};

#endif
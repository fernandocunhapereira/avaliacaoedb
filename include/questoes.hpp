#ifndef _QUESTOES_
#define _QUESTOES_

struct Questoes{
private:
	long int acertos[10];
	long int brancos[10];
public:
	void setAcertos(int i);
	void setBrancos(int i);
};

#endif
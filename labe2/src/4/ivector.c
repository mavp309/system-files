// TODO: Include appropriate headers
#include "ivector.h"
unsigned int inner_product(Ivector* v1, Ivector* v2, int* invalid){  
  // TODO: Complete the code
if( (v1==NULL || v2==NULL) || ( (v1->size) != (v2->size) ) )
	{*invalid=1;	
	return 0;}
unsigned int pdt=0;
for(unsigned int i=0;i< v1->size; i++)
{pdt=pdt+(v1->vec[i])*(v2->vec[i]);}
return pdt;
}


Ivector* add(Ivector* v1, Ivector* v2){
  // TODO: Complete the code
if((v1==NULL||v2==NULL)||((v1->size)!=(v2->size)))
{return NULL;}
Ivector* sum;
sum=malloc(sizeof(Ivector));
sum->size=v1->size;
sum->vec=malloc(sizeof(unsigned int)*(sum->size));
for (unsigned int i=0;i< v1->size;i++)
{sum->vec[i]=v1->vec[i]+v2->vec[i];}

return sum;

}


Ivector* scalarmult(Ivector* v, unsigned int c){
  // TODO: Complete the code
if(v==NULL)
return NULL;
Ivector* n;
n=malloc(sizeof(Ivector));
n->size=v->size;
n->vec=malloc(sizeof(unsigned int));
for(unsigned int i=0;i< v->size;i++)
{n->vec[i]=c*(v->vec[i]);}
return n;
}

void print(Ivector* v){
  // TODO: Complete the code
if(v==NULL)
return;
for(unsigned int i=0;i< v->size;i++)
{printf("%u ",v->vec[i]);}
}


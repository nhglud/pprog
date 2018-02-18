#include<stdio.h>
#include"nvector.h"
#include "stdlib.h"

nvector* nvector_alloc(int n){
  nvector* v = malloc(sizeof(nvector));
  (*v).size = n;
  (*v).data = malloc(n*sizeof(double));
  if( v==NULL ) fprintf(stderr,"error in nvector_alloc\n");
  return v;
}

void nvector_free(nvector* v){ free(v->data); free(v);};

void nvector_set(nvector* v, int i, double value){ (*v).data[i]=value; }

double nvector_get(nvector* v, int i){return (*v).data[i]; }

double nvector_dot_product(nvector* u, nvector* v) {
	double dotp = 0;
	for (int i = 0; i <= (*u).size; ++i)
	{
		dotp = dotp + (*u).data[i]*(*v).data[i];
	}
	return dotp;
}


void nvector_print(char* s, nvector* v)
{
	prinf("%S", s);
}


void nvector_set_zero(nvector* v){

for (int i = 0; i < (*v).size; ++i)
{
	(*v).data[i]=0;	
}
};

/* ... */


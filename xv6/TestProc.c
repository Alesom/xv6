#include "types.h"
#include "param.h"
#include "stat.h"
#include "user.h"

#define N  10

void loop(){
	int x;
	for(x=0; x<1144; x++)	;
}

int main(){
	int n,pid[N];
	for(n=0;n<N;n++){
		pid[n] = fork(n%4);
		if (pid[n] == 0){
			loop();
			exit();
		}
	}
	for(n=0;n<N;n++)
		wait();
	exit();
  return 0;
}

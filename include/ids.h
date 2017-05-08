#ifndef IDSHEADER

#define IDSHEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/reg.h>

typedef struct{
	char** directories;
	int numDirectories;
	int* sysCalls;
	int numSysCalls;
	int numCalled;
}Profile;

#endif

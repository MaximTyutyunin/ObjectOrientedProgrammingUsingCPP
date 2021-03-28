/**
 * This program creates a separate thread using the CreateThread() system call.
 */

#include <stdio.h>
#include <windows.h>


DWORD Sum; /* data is shared by the thread(s) */

/* the thread runs in this separate function */
DWORD WINAPI Summation(PVOID Param)
{
	DWORD Upper = *(DWORD*)Param;

	for (DWORD i = 0; i <= Upper; i++) {
		Sum += i;
		printf("nananan,ana,nananana,anana"); //printf is used in "C" and it is more expecive than cout from c++
	}

	return 0;
}


int main(int argc, char* argv[])
{
	DWORD ThreadId;
	HANDLE ThreadHandle;
	int Param;

	// do some basic error checking
	if (argc != 2) {
		fprintf(stderr, "An integer parameter is required\n");
		return -1;
	}

	Param = atoi(argv[1]);

	if (Param < 0) {
		fprintf(stderr, "an integer >= 0 is required \n");
		return -1;
	}

	// create the thread
	ThreadHandle = CreateThread(NULL, 0, Summation, &Param, 0, &ThreadId);

	if (ThreadHandle != NULL) {
		WaitForSingleObject(ThreadHandle, INFINITE);
		CloseHandle(ThreadHandle);
		// printf("sum = %d\n", Sum);
	}
	printf(" Batmaaaaan");
}
#ifndef THREADS_H
#define THREADS_H

// Function declarations
void initializePlayerArgument(void);  // Declare initializePlayerArgument
void gameThread(void);                // Declare gameThread
// Function prototype for colorcheck
int colorcheck(char tokenChar, char tokenCharX[]);

// DeclareD token arrays as extern
extern char tokenCharA[4];
extern char tokenCharB[4];
extern char tokenCharC[4];
extern char tokenCharD[4];


#endif // THREADS_H
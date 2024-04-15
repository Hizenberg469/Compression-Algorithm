#ifndef _MAIN_H
#define _MAIN_H

void CompressFile(FILE* input, BIT_FILE* output, int argc, char* argv[]);
void ExpandFile(BIT_FILE* input, FILE* output, int argc, char* argv[]);

extern char* Usage;
extern char* CompressionName;


#endif /* _MAIN_H */
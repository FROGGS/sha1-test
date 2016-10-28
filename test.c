#include <stdio.h>
#include <string.h>
#include "sha1.h"

void print_sha1(const char *str) {
    SHA1Context context;
    char output[80];
    SHA1Init(&context);
    SHA1Update(&context, str, strlen(str));
    SHA1Final(&context, output);
    fprintf(stderr, "%s\n", output);
}

int main() {
    print_sha1("");
    print_sha1("foobar");
    return 0;
}

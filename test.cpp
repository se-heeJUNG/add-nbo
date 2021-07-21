#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]) {
        if(argc != 3) {
                return -1;
        }

        FILE *fp, *fp2;
        fp = fopen(argv[1], "rb");
        fp2 = fopen(argv[2], "rb");

        int a, b, c;
        uint32_t num, num2;
        fread(&num, sizeof(uint32_t), 1, fp);
        fread(&num2, sizeof(uint32_t), 1, fp2);
        a = (ntohl(num));
        b = (ntohl(num2));
        c = a + b;
        printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", a, a, b, b, c, c);


        fclose(fp);
        fclose(fp2);
        return 0;
}


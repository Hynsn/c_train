#include <string.h>
#include <stdio.h>

int hex2_str(unsigned char *src, int srclen, char *des, int deslen) {
	unsigned char Hb;
	unsigned char Lb;

	if (deslen < srclen * 2) return 0;
	memset(des, 0, deslen);

	for (int i = 0; i < srclen;i++) {
		Hb = (src[i] & 0xF0) >> 4; // 高位
		if (Hb <= 9) Hb += 0x30; // 0~9
		else if (Hb >= 10 && Hb <= 15) Hb = Hb - 10 + 'A'; // 10~15
		else return 0;

		Lb = src[i] & 0x0F; // 低位
		if (Lb <= 9) Lb += 0x30;
		else if (Lb >= 10 && Lb <= 15) Lb = Lb - 10 + 'A';
		else return 0;

		des[i * 2] = Hb;
		des[i * 2 + 1] = Lb;
	}
	return 1;
}

int str2_hex(char *src, unsigned char *des) {
	unsigned char Hb, Lb;
	unsigned int len = strlen(src);
	for (int i = 0, j = 0; i < len; i++) {
		Hb = src[i];
		if (Hb >= 'A'&&Hb <= 'F') Hb = Hb - 'A' + 10;
		else if (Hb >= '0'&&Hb <= '9') Hb -= 0x30;
		else return 0;

		i++;
		Lb = src[i];
		if (Lb >= 'A'&&Lb <= 'F') Lb = Lb - 'A' + 10;
		else if (Lb >= '0'&&Lb <= '9') Lb -= 0x30;
		else return 0;

		des[j++] = (Hb << 4) | Lb;
	}
	return 1;
}

void print_hex(unsigned char* p){
    while (*p){
        printf(" %2x",*(p));
        p++;
    }
}

void str2hex_convert_test() {

	unsigned char src[] = { 0x12,0x34,0x56,0x78,0x90,0xab,0xbc,0xcd,0xde,0xef };
	char des[21];
    hex2_str(src, sizeof(src),des, sizeof(des));
	printf("\nsrc :%s ", des);
	print_hex(src);

    memset(src,0,sizeof(src));
	if (str2_hex(des, src)) {
	    printf("\n convert Ok .");
	    print_hex(src);
	}
	else printf("\nconvert failed .");
}
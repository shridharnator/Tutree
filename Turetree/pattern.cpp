#include "pattern.h"

void Pattern::pat()
{
	int flag = 0;
	for (int j = 0; j < 7; j++) {
		if (j != 0) {
			printf("\n");
			flag++;
		}
		if (flag != 0) {
			if (flag == 1) { ; }
			if (flag == 2) { ; }
			if (flag == 3) { printf(" "); }
			if (flag == 4) { printf(" "); }
			if (flag == 5) { printf("  "); }
			if (flag == 6) { printf("  "); }

			//for (int k = 0; k <flag ; k++) {
			//	printf(" ");
			//}
		}
		for (int i = 1; i < 8; i++) {
			if ((i + flag) < 8) {

				printf("%i ", i + flag);

			}
			//printf("\n");

		}

	}
	printf("\n");
	for (int i = 6; i > 0; i--) {
		if (i != 6) {
			printf("\n");
		}

		if (i == 1) { ; }
		if (i == 2) { ; }
		if (i == 3) { printf(" "); }
		if (i == 4) { printf(" "); }
		if (i == 5) { printf("  "); }
		if (i == 6) { printf("  "); }

		for (int j = i; j < 8; j++) {

			printf("%i ", j);
		}
	}
}

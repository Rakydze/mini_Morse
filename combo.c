#include <stdio.h>


int alphabet(char* c);

int alphabet(char* c) {
	int  one = 0, count = 0, character = 0;

	for (;((*c != ' ') && (*c != '\t') && (*c != '\n')); ++count) {
		if (count > 3) { 
			printf("Fail");
			character = 0;
			break;
		}
		/* one block */
		if ((count == 0) && (*c == '*') ) {
			character = 'E'; one = 1;
		} else if((count == 0) && (*c == '-')) {
			character = 'T'; one = 2;
		}
		/* two block */
		if ((count == 1) && (one == 1)) {
			if (*c == '*') {
				character = 'I'; one = one * 10 + 1;
			} else if( (*c == '-')) {
				character = 'A'; one = one * 10 + 2;
			} 
		} else if ((count == 1) && (one == 2)) { 
			if (*c == '*') {
				character = 'N'; one = one * 10 + 1;
			} else if((*c == '-')) {
				character = 'M'; one = one * 10 + 2;
			}
		}
		/* three block */
		if ((count == 2) && ( one == 11)) {
			if (*c == '*') {
				character = 'S'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'U'; one = one * 10 + 2;
			}
		} else if ((count == 2) && ( one == 12)) {
			if (*c == '*') {
				character = 'R'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'W'; one = one * 10 + 2;  
			}
		} else if ((count == 2) && ( one == 21)) {
			if (*c == '*') {
				character = 'D'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'K'; one = one * 10 + 2;
			}
		} else if ((count == 2) && ( one == 22)) {
			if (*c == '*') {
				character = 'G'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'O'; one = one * 10 + 2;
			}
		}
		/* four block */
		if ((count == 3) && ( one == 111)) {
			if (*c == '*') {
				character = 'H'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'V'; one = one * 10 + 2;
			}
		} else if ((count == 3) && ( one == 112)) {
			if (*c == '*') {
				character = 'F'; one = one * 10 + 1;
			}
		} else if ((count == 3) && ( one == 121)) {
			if (*c == '*') {
				character = 'L'; one = one * 10 + 1;
			}
		} else if ((count == 3) && ( one == 122)) {
			if (*c == '*') {
				character = 'P'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'J'; one = one * 10 + 2;
			}
		} else if ((count == 3) && ( one == 211)) {
			if (*c == '*') {
				character = 'B'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'Y'; one = one * 10 + 2;
			}
		} else if ((count == 3) && ( one == 221)) {
			if (*c == '*') {
				character = 'Z'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'Q'; one = one * 10 + 2;
			}
		} else if ((count == 3) && ( one == 212)) {
			if (*c == '*') {
				character = 'C'; one = one * 10 + 1;
			} else if (*c == '-') {
				character = 'X'; one = one * 10 + 2;
			}
		}
		*c = getchar();
	}
	return character;
}

int main() {

	char c;
    int zero = 0;

	c = getchar();
	for(;c != '\n';) {
		zero = alphabet(&c);
		if (zero == 0) {
			break;
		}
		putchar(zero);
		putchar(' ');
		c = getchar();
	}
	putchar('\n');

	return 0;
}

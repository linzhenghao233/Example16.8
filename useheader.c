/* useheader.c -- 使用names_st结构 */
#include <stdio.h>
#include "names_st.h"
//记住要链接names_st.c

int main(void) {
	names candidate;

	get_names(&candidate);
	printf("Let's welcome ");
	show_names(&candidate);
	printf(" to thiis program!\n");

	return 0;
}
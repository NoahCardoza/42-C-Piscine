#include <stdio.h>
#include "nmatch.c"

int main(void)
{
	char match1[] = "*b*";
	char string1[] = "abcbd";

	char match2[] = "a**";
	char string2[] = "abc";

	char match3[] = "*";
	char string3[] = "*a";

	char match4[] = "*";
	char string4[] = "**";

	char match5[] = "*b";
	char string5[] = "*ab";

	char match6[] = "a*";
	char string6[] = "a*a";

	char match7[] = "bb";
	char string7[] = "b";

	char match8[] = "*b";
	char string8[] = "b";

	char match9[] = "b*b*";
	char string9[] = "bbb";

	char match10[] = "b";
	char string10[] = "bb";

	int exps[] = {2, 3, 1, 1, 1, 1, 0, 1, 2, 0};
	
	char *matches[] = {match1, match2, match3, match4, match5,
					match6, match7, match8, match9, match10};
	char *strings[] = {string1, string2, string3, string4, string5,
					string6, string7, string8, string9, string10};
	
	char output[] = "%s || Exp: %-8d || Got: %-8d || Case: \"%s\" \"%s\"\n";
	
	for (int i = 0; i < (int)(sizeof(exps) / sizeof(int)); i++)
	{
		int result = nmatch(strings[i], matches[i]);
		char *res = result == exps[i] ? "Success" : "Failure";
		printf(output, res, exps[i], result, strings[i], matches[i]);
	}
}
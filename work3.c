#include <stdio.h>
int main(void)
{
	printf("1. 이진수 변환기 2. 이진수 덧셈기 3. 이진수 뺄셈기\n\n");

	int program;
	printf("번호를 선택하세요: ");
	scanf("%d", &program);

	int or1, or2;
	char e1, e2;
	int o1, o2, o3, o4, o5, o6, o7, o8;
	int t1, t2, t3, t4, t5, t6, t7, t8;
	int h1, h2, h3, h4, h5, h6, h7, h8;

	if (program == 1) { /*1번 프로그램 실행 */
		printf("8비트 이진수를 입력하세요: ");
		while ((e1 = getchar()) == ' ')
			;
		while ((o1 = getchar()) == ' ')
			;
		while ((o2 = getchar()) == ' ')
			;
		while ((o3 = getchar()) == ' ')
			;
		while ((o4 = getchar()) == ' ')
			;
		while ((o5 = getchar()) == ' ')
			;
		while ((o6 = getchar()) == ' ')
			;
		while ((o7 = getchar()) == ' ')
			;
		while ((o8 = getchar()) == ' ')
			;

		switch (o1) {
		case '0': //양수
			o1 -= 48; o2 -= 48; o3 -= 48; o4 -= 48; o5 -= 48; o6 -= 48; o7 -= 48; o8 -= 48;
			or1 = (o1 * 128) + (o2 * 64) + (o3 * 32) + (o4 * 16) + (o5 * 8) + (o6 * 4) + (o7 * 2) + (o8 * 1);
			printf("십진수로 %d입니다.\n", or1);
			goto real_end;
		default: //음수
			o1 = o1 == '1' ? '0' : '1';	o2 = o2 == '1' ? '0' : '1';	o3 = o3 == '1' ? '0' : '1';	o4 = o4 == '1' ? '0' : '1';	o5 = o5 == '1' ? '0' : '1';	o6 = o6 == '1' ? '0' : '1';	o7 = o7 == '1' ? '0' : '1';	o8 = o8 == '1' ? '0' : '1';
			o8 = (o8 + 1 == '2' ? '0' : '1'); if (o8 == '1') goto end;
			o7 = (o7 + 1 == '2' ? '0' : '1'); if (o7 == '1') goto end;
			o6 = (o6 + 1 == '2' ? '0' : '1'); if (o6 == '1') goto end;
			o5 = (o5 + 1 == '2' ? '0' : '1'); if (o5 == '1') goto end;
			o4 = (o4 + 1 == '2' ? '0' : '1'); if (o4 == '1') goto end;
			o3 = (o3 + 1 == '2' ? '0' : '1'); if (o3 == '1') goto end;
			o2 = (o2 + 1 == '2' ? '0' : '1'); if (o2 == '1') goto end;
			o1 = (o1 + 1 == '2' ? '0' : '1'); if (o1 == '1') goto end;
		end:
			o1 -= 48; o2 -= 48; o3 -= 48; o4 -= 48; o5 -= 48; o6 -= 48; o7 -= 48; o8 -= 48;
			or1 = (o1 * 128) + (o2 * 64) + (o3 * 32) + (o4 * 16) + (o5 * 8) + (o6 * 4) + (o7 * 2) + (o8 * 1);
			printf("십진수로 -%d입니다.\n", or1);}}
	else {
		{ /*2,3번 프로그램 실행*/
			printf("첫 번째 8비트 이진수를 입력하세요: ");
			while ((e1 = getchar()) == ' ')
				;
			while ((o1 = getchar()) == ' ')
				;
			while ((o2 = getchar()) == ' ')
				;
			while ((o3 = getchar()) == ' ')
				;
			while ((o4 = getchar()) == ' ')
				;
			while ((o5 = getchar()) == ' ')
				;
			while ((o6 = getchar()) == ' ')
				;
			while ((o7 = getchar()) == ' ')
				;
			while ((o8 = getchar()) == ' ')
				;
			printf("두 번째 8비트 이진수를 입력하세요: ");
			while ((e2 = getchar()) == ' ')
				;
			while ((t1 = getchar()) == ' ')
				;
			while ((t2 = getchar()) == ' ')
				;
			while ((t3 = getchar()) == ' ')
				;
			while ((t4 = getchar()) == ' ')
				;
			while ((t5 = getchar()) == ' ')
				;
			while ((t6 = getchar()) == ' ')
				;
			while ((t7 = getchar()) == ' ')
				;
			while ((t8 = getchar()) == ' ')
				;
			o1 -= 48; o2 -= 48; o3 -= 48; o4 -= 48; o5 -= 48; o6 -= 48; o7 -= 48; o8 -= 48;
			t1 -= 48; t2 -= 48; t3 -= 48; t4 -= 48; t5 -= 48; t6 -= 48; t7 -= 48; t8 -= 48;

		}
		if (program == 2)
		{
			h8 = o8 + t8; h7 = o7 + t7; h6 = o6 + t6; h5 = o5 + t5; h4 = o4 + t4; h3 = o3 + t3; h2 = o2 + t2; h1 = o1 + t1;

			(h8 >= 2 ? h8 -= 2, h7++ : h8);
			(h7 >= 2 ? h7 -= 2, h6++ : h7);
			(h6 >= 2 ? h6 -= 2, h5++ : h6);
			(h5 >= 2 ? h5 -= 2, h4++ : h5);
			(h4 >= 2 ? h4 -= 2, h3++ : h4);
			(h3 >= 2 ? h3 -= 2, h2++ : h3);
			(h2 >= 2 ? h2 -= 2, h1++ : h2);
			(h1 >= 2 ? h1 -= 2 : h1);

			if (h1 == 0) // 양수면
			{
				or2 = (h1 * 128) + (h2 * 64) + (h3 * 32) + (h4 * 16) + (h5 * 8) + (h6 * 4) + (h7 * 2) + (h8 * 1);
				printf("결과는 이진수로 %d%d%d%d%d%d%d%d 이고, 십진수로 %d입니다.\n", h1, h2, h3, h4, h5, h6, h7, h8, or2);

			}

			else if (h1 == 1) //음수면
			{
				h1 = h1 == 1 ? 0 : 1; h2 = h2 == 1 ? 0 : 1; h3 = h3 == 1 ? 0 : 1; h4 = h4 == 1 ? 0 : 1; h5 = h5 == 1 ? 0 : 1; h6 = h6 == 1 ? 0 : 1; h7 = h7 == 1 ? 0 : 1; h8 = h8 == 1 ? 0 : 1;
				h8 = (h8 + 1 == 2 ? 0 : 1); if (h8 == 1) goto twoend;
				h7 = (h7 + 1 == 2 ? 0 : 1); if (h7 == 1) goto twoend;
				h6 = (h6 + 1 == 2 ? 0 : 1); if (h6 == 1) goto twoend;
				h5 = (h5 + 1 == 2 ? 0 : 1); if (h5 == 1) goto twoend;
				h4 = (h4 + 1 == 2 ? 0 : 1); if (h4 == 1) goto twoend;
				h3 = (h3 + 1 == 2 ? 0 : 1); if (h3 == 1) goto twoend;
				h2 = (h2 + 1 == 2 ? 0 : 1); if (h2 == 1) goto twoend;
				h1 = (h1 + 1 == 2 ? 0 : 1); if (h1 == 1) goto twoend;
				//보수취함

			twoend:
				or2 = (h1 * 128) + (h2 * 64) + (h3 * 32) + (h4 * 16) + (h5 * 8) + (h6 * 4) + (h7 * 2) + (h8 * 1);
				h1 = h1 == 1 ? 0 : 1; h2 = h2 == 1 ? 0 : 1; h3 = h3 == 1 ? 0 : 1; h4 = h4 == 1 ? 0 : 1; h5 = h5 == 1 ? 0 : 1; h6 = h6 == 1 ? 0 : 1; h7 = h7 == 1 ? 0 : 1; h8 = h8 == 1 ? 0 : 1;
				h8 = (h8 + 1 == 2 ? 0 : 1); if (h8 == 1) goto twotwoend;
				h7 = (h7 + 1 == 2 ? 0 : 1); if (h7 == 1) goto twotwoend;
				h6 = (h6 + 1 == 2 ? 0 : 1); if (h6 == 1) goto twotwoend;
				h5 = (h5 + 1 == 2 ? 0 : 1); if (h5 == 1) goto twotwoend;
				h4 = (h4 + 1 == 2 ? 0 : 1); if (h4 == 1) goto twotwoend;
				h3 = (h3 + 1 == 2 ? 0 : 1); if (h3 == 1) goto twotwoend;
				h2 = (h2 + 1 == 2 ? 0 : 1); if (h2 == 1) goto twotwoend;
				h1 = (h1 + 1 == 2 ? 0 : 1); if (h1 == 1) goto twotwoend;

			twotwoend:
				printf("결과는 이진수로 %d%d%d%d%d%d%d%d 이고, 십진수로 -%d입니다.\n", h1, h2, h3, h4, h5, h6, h7, h8, or2);

			}
		}

		else if (program == 3) //뺄셈
		{
			h8 = o8 - t8; h7 = o7 - t7; h6 = o6 - t6; h5 = o5 - t5; h4 = o4 - t4; h3 = o3 - t3; h2 = o2 - t2; h1 = o1 - t1;

			(h8 < 0 ? h8 += 2, h7-- : h8);
			(h7 < 0 ? h7 += 2, h6-- : h7);
			(h6 < 0 ? h6 += 2, h5-- : h6);
			(h5 < 0 ? h5 += 2, h4-- : h5);
			(h4 < 0 ? h4 += 2, h3-- : h4);
			(h3 < 0 ? h3 += 2, h2-- : h3);
			(h2 < 0 ? h2 += 2, h1-- : h2);
			(h1 < 0 ? h1 += 2 : h1);

			if (h1 == 0) // 양수면
			{
				or2 = (h1 * 128) + (h2 * 64) + (h3 * 32) + (h4 * 16) + (h5 * 8) + (h6 * 4) + (h7 * 2) + (h8 * 1);
				printf("결과는 이진수로 %d%d%d%d%d%d%d%d 이고, 십진수로 %d입니다.\n", h1, h2, h3, h4, h5, h6, h7, h8, or2);
			}

			else if (h1==1) // 음수면
			{
				h1 = h1 == 1 ? 0 : 1; h2 = h2 == 1 ? 0 : 1; h3 = h3 == 1 ? 0 : 1; h4 = h4 == 1 ? 0 : 1; h5 = h5 == 1 ? 0 : 1; h6 = h6 == 1 ? 0 : 1; h7 = h7 == 1 ? 0 : 1; h8 = h8 == 1 ? 0 : 1;
				h8 = (h8 + 1 == 2 ? 0 : 1); if (h8 == 1) goto threeend;
				h7 = (h7 + 1 == 2 ? 0 : 1); if (h7 == 1) goto threeend;
				h6 = (h6 + 1 == 2 ? 0 : 1); if (h6 == 1) goto threeend;
				h5 = (h5 + 1 == 2 ? 0 : 1); if (h5 == 1) goto threeend;
				h4 = (h4 + 1 == 2 ? 0 : 1); if (h4 == 1) goto threeend;
				h3 = (h3 + 1 == 2 ? 0 : 1); if (h3 == 1) goto threeend;
				h2 = (h2 + 1 == 2 ? 0 : 1); if (h2 == 1) goto threeend;
				h1 = (h1 + 1 == 2 ? 0 : 1); if (h1 == 1) goto threeend;

			threeend:
				or2 = (h1 * 128) + (h2 * 64) + (h3 * 32) + (h4 * 16) + (h5 * 8) + (h6 * 4) + (h7 * 2) + (h8 * 1);
					h1 = h1 == 1 ? 0 : 1; h2 = h2 == 1 ? 0 : 1; h3 = h3 == 1 ? 0 : 1; h4 = h4 == 1 ? 0 : 1; h5 = h5 == 1 ? 0 : 1; h6 = h6 == 1 ? 0 : 1; h7 = h7 == 1 ? 0 : 1; h8 = h8 == 1 ? 0 : 1;
					h8 = (h8 + 1 == 2 ? 0 : 1); if (h8 == 1) goto threethreeend;
					h7 = (h7 + 1 == 2 ? 0 : 1); if (h7 == 1) goto threethreeend;
					h6 = (h6 + 1 == 2 ? 0 : 1); if (h6 == 1) goto threethreeend;
					h5 = (h5 + 1 == 2 ? 0 : 1); if (h5 == 1) goto threethreeend;
					h4 = (h4 + 1 == 2 ? 0 : 1); if (h4 == 1) goto threethreeend;
					h3 = (h3 + 1 == 2 ? 0 : 1); if (h3 == 1) goto threethreeend;
					h2 = (h2 + 1 == 2 ? 0 : 1); if (h2 == 1) goto threethreeend;
					h1 = (h1 + 1 == 2 ? 0 : 1); if (h1 == 1) goto threethreeend;

			threethreeend:
				printf("결과는 이진수로 %d%d%d%d%d%d%d%d 이고, 십진수로 -%d입니다.\n", h1, h2, h3, h4, h5, h6, h7, h8, or2);

			}

		}

			}

			





	
real_end:
	return 0;
}

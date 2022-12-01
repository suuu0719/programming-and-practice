#include <stdio.h>
#include <string.h>
#define I 20
#define J 2
#define K 1
#define L 20
void name_sort(int student[][J][K], char name[][L]);
void name_print(int student[][J][K], char name[][L]);
void num_sort(int student [][J][K], char name[][L]);
void grade_sort(int student[][J][K], char name[][L]);
void search(void);

int main(void)
{	
	int i, j, k, num;
	//학번,성적 배열 저장
	int student[I][J][K] = {
		{{20220001}, {98}},
		{{20220010}, {96}},
		{{20220002}, {88}},
		{{20220015}, {77}},
		{{20220009}, {82}},
		{{20220014}, {93}},
		{{20220020}, {84}},
		{{20220005}, {79}},
		{{20220016}, {90}},
		{{20220008}, {80}},
		{{20220012}, {89}},
		{{20220004}, {99}},
		{{20220018}, {78}},
		{{20220017}, {83}},
		{{20220003}, {92}},
		{{20220013}, {71}},
		{{20220007}, {72}},
		{{20220019}, {68}},
		{{20220011}, {95}},
		{{20220006}, {76}} };
	//이름 배열 저장
	char name[I][L] = {
		{"Sophia"}, {"Olivia"}, {"Riley"}, {"Emma"},
		{"Ava"}, {"Isabella"}, {"Aria"}, {"Amelia"},
		{"Mia"}, {"Liam"}, {"Noah"}, {"Jackson"},
		{"Aiden"}, {"Elijah"}, {"Grayson"}, {"Lucas"},
		{"Oliver"}, {"Caden"}, {"Mateo"}, {"David"} };
	while(1)
	{
		printf("번호를 선택하세요: ");
		scanf("%d", &num);
		if (num == 1) { //이름 오름차순 출력
			name_sort(student, name);}
		if (num == 2) { //학번 오름차순 출력
			num_sort(student, name);}
		if (num == 3) { //점수 내림차순 출력
			grade_sort(student, name);}
		if (num == 4) { //이름 검색
			search();}
		if (num == 5)
			break;
		else
			continue;
	}
	printf("종료\n");
	return 0;
}
void name_sort(int student[][J][K], char name[][L]) //이름 오름차순 배열
{
	int i, j;
	int num = 19;
	char tmp[L];
	int tmp2, tmp3;
	for (i=0; i<19; i++)
		for (j=19; j>i; j--)
			if (strcmp(name[j - 1], name[j]) > 0) {
				strcpy(tmp, name[j - 1]);
				strcpy(name[j - 1], name[j]); 
				strcpy(name[j], tmp);	
				tmp2 = student[j - 1][0][0];
				student[j - 1][0][0] = student[j][0][0];
				student[j][0][0] = tmp2;
				tmp3 = student[j - 1][1][0];
				student[j - 1][1][0] = student[j][1][0];
				student[j][1][0] = tmp3;
				}
	name_print(student, name);
	return;
}
void name_print(int student[][J][K], char name[][L]) //출력하는 곳
{
	int i;
	printf("%-12s %-10s %-5s\n", "이름", "학번", "점수");
	for (i = 0; i < 20; i++)
		printf("%-10s %-10d %-5d\n", name[i], student[i][0][0], student[i][1][0]);
	return;
} 
void num_sort(int student[][J][K], char name[][L]) //학번 오름차순 배열
{
	int i, j;
	int num = 19;
	char tmp[L];
	int tmp2, tmp3;
	for (i = 0; i < 19; i++)
		for (j = 19; j > i; j--)
			if (student[j - 1][0][0] > student[j][0][0]) {
				tmp2 = student[j - 1][0][0];
				student[j - 1][0][0] = student[j][0][0];
				student[j][0][0] = tmp2;
				strcpy(tmp, name[j - 1]);
				strcpy(name[j - 1], name[j]);
				strcpy(name[j], tmp);
				tmp3 = student[j - 1][1][0];
				student[j - 1][1][0] = student[j][1][0];
				student[j][1][0] = tmp3;
			}
	name_print(student, name);
	return;
}
void grade_sort(int student[][J][K], char name[][L]) //점수 내림차순 배열
{
	int i, j;
	int num = 19;
	char tmp[L];
	int tmp2, tmp3;
	for (i = 0; i < 19; i++)
		for (j = 19; j > i; j--)
			if (student[j - 1][1][0] < student[j][1][0]) {
				tmp2 = student[j - 1][0][0];
				student[j - 1][0][0] = student[j][0][0];
				student[j][0][0] = tmp2;
				strcpy(tmp, name[j - 1]);
				strcpy(name[j - 1], name[j]);
				strcpy(name[j], tmp);
				tmp3 = student[j - 1][1][0];
				student[j - 1][1][0] = student[j][1][0];
				student[j][1][0] = tmp3;
			}
	name_print(student, name);
	return;
}
void search(void)
{
	int i;
	int k = 0;
	char input[L] = "";
	int student[I][J][K] = {
		{{20220001}, {98}},
		{{20220010}, {96}},
		{{20220002}, {88}},
		{{20220015}, {77}},
		{{20220009}, {82}},
		{{20220014}, {93}},
		{{20220020}, {84}},
		{{20220005}, {79}},
		{{20220016}, {90}},
		{{20220008}, {80}},
		{{20220012}, {89}},
		{{20220004}, {99}},
		{{20220018}, {78}},
		{{20220017}, {83}},
		{{20220003}, {92}},
		{{20220013}, {71}},
		{{20220007}, {72}},
		{{20220019}, {68}},
		{{20220011}, {95}},
		{{20220006}, {76}} };
	char name[I][L] = {
		{"Sophia"}, {"Olivia"}, {"Riley"}, {"Emma"},
		{"Ava"}, {"Isabella"}, {"Aria"}, {"Amelia"},
		{"Mia"}, {"Liam"}, {"Noah"}, {"Jackson"},
		{"Aiden"}, {"Elijah"}, {"Grayson"}, {"Lucas"},
		{"Oliver"}, {"Caden"}, {"Mateo"}, {"David"} };
	do {
		printf("이름을 입력하세요: ");
		scanf("%s", input);
		for (i = 0; i < L; i++)
		{
			k = strcmp(input, name[i]);
			if (k == 0)
				break;
		}
	} while (k != 0);
	printf("%-12s %-10s %-5s\n", "이름", "학번", "점수");
	printf("%-10s %-10d %-5d\n", name[i], student[i][0][0], student[i][1][0]);
return;
}


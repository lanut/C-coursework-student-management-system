#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

//#include <stdio.h>//�����������
//#include <stdlib.h>//������ͣ������
/////*
////(C)1.6 �����ӷ���������
////���Ѷ�ϵ����3 ��
////������������
////�ֱ���������������ķ��Ӻͷ�ĸ������������ķ�������������������֮�͡�
////������Ҫ��
////�� �����ͱ����������������
////�� ����͵ķ��ӷ�ĸ�й����ӣ�Ӧ����Լ�֡�
////�� ����ʹ��� 1��Ӧ��Ϊ��������
////*/
//
//void intypeData(int* fm, int* fz);//�������ݲ��Ŵ�
//bool typeJudge(int fm, int fz);//�����жϣ�������󷵻ؼ٣�������ȷ������
//int scoreCalculate(int* fm, int* fz);//�������㣬���������������ֵ
//int greatestCommonFactor(int fm, int fz);//�����������
//void printOut(int* fm, int* fz, int integer);//�����
//
//int main()
//{
//	system("title �����ࣺ�����ӷ���������");//�޸ı���
//	int fm[3] = { 1,1,1 };//���ɷ�ĸ��ǰ�����Ǵ�������������һ���Ǵ𰸣�
//	int fz[3] = { 0,0,0 };//���ɷ��ӣ�ǰ�����Ǵ�������������һ���Ǵ𰸣�
//	int integer = 0;//���ɴ�����������
//	intypeData(fm, fz);//�������ݲ��Ŵ�
//	integer = scoreCalculate(fm, fz);//�������㲢�������������ֵ
//	printOut(fm, fz, integer);//�����
//	system("pause");//����ǰ��ͣ
//	return 0;
//}
//
//void intypeData(int* fm, int* fz)//�������ݲ��Ŵ�
//{
//	for (int i = 0; i < 2; i++)
//	{
//		printf("�������%d�����Ӻͷ�ĸ\n", i + 1);//��ʾ
//		scanf("%d%d", fz + i, fm + i);
//		if (!typeJudge(fm[i], fz[i]))//�����жϣ��������Ӧ��������
//		{
//			i--;//�ظ���������
//		}
//		system("pause");//��ֹ����
//		system("cls");//��ֹ������ִ����������
//	}
//}
//bool typeJudge(int fm, int fz)//�����жϣ�������󷵻ؼ٣�������ȷ������
//{
//	int flag = 0;//�ж��Ƿ�����������Ϊ1��
//	{//�����������
//		if (fz < 0)
//		{
//			printf("������󣺷���Ӧ�ô��ڵ���0\n");
//			flag = 1;
//		}
//		if (fm <= 0)
//		{
//			printf("������󣺷�ĸӦ�ô���0\n");
//			flag = 1;
//		}
//		if (fz >= fm)
//		{
//			printf("������󣺷���ӦС�ڷ�ĸ\n");
//			flag = 1;
//		}
//	}
//	if (1 == flag)//�ж��Ƿ�����������Ϊ1��
//	{
//		return false;
//	}
//	return true;
//}
//int scoreCalculate(int* fm, int* fz)//�������㲢�������������ֵ
//{
//	int integer = 0;//���ɴ�����
//	/*��������*/
//	fm[2] = fm[0] * fm[1];//��ĸ����
//	fz[2] = fz[0] * fm[1] + fz[1] * fm[0];//���Ӽ���
//	/*�ٷ�������Ϊ������*/
//	if (fm[2] <= fz[2])
//	{
//		integer = fz[2] / fm[2];
//		fz[2] %= fm[2];
//	}
//	if (fz[2] == 0)//�������Ϊ0���ⲻ��Ҫ����������
//	{
//		return integer;//���ش�������ֵ
//	}
//	/*��������*/
//	int maxnum = greatestCommonFactor(fm[2], fz[2]);//�����������
//	fm[2] /= maxnum;//Լ�ַ�ĸ
//	fz[2] /= maxnum;//Լ�ַ���
//	return integer;//���ش�������ֵ
//}
//int greatestCommonFactor(int fm, int fz)//�����������
//{//ע�⣬������������������
//	int maxnum = 0;//����������ֵĬ��ֵΪ0
//	for (int i = 1; i <= fz; i++)//�����������
//	{
//		if (0 == fz % i && 0 == fm % i)
//		{
//			maxnum = i;
//		}
//	}
//	return maxnum;//�������������ֵ
//}
//void printOut(int* fm, int* fz, int integer)//�����
//{
//	//����Լ����������
//	printf("��һ������Ϊ: %d/%d��\n�ڶ�������Ϊ: %d/%d��\n", fz[0], fm[0], fz[1], fm[1]);
//	printf("��Ϊ: ");
//	if (integer > 0)//�������������ֵ��Ϊ0�����������������ֵ
//	{
//		printf("%d", integer);
//	}
//	if (fz[2] != 0)//�������Ϊ0������Ҫ�������
//	{
//		printf("(%d/%d)\n", fz[2], fm[2]);//�������
//	}
//	if (fz[2] == 0 && integer == 0)//�������Ϊ0������Ҫ�������
//	{
//		printf("0\n");//�������
//	}
//}

/////*
////������������
////��֪һ����������Ӣ�ĵ��ʵĴʵ䣨1��n��100���������������ĳһ������ word���ֵ��еĵ��ʺ͸�������word �ĳ��Ⱦ������� 255����
////�������²�ѯ������
////�� word �ڴʵ��е�λ�á�
////�� �ʵ��н���һ���ַ��� word ��ƥ��ĵ���λ�á�
////�� �ʵ��б� word �ࣨ���٣�һ���ַ��������ַ��������ַ���ƥ�䣩�ĵ���λ�á�
////�� ��������ʱ�����ж�����ʷ�����������������һ�����ʵ�λ�á�
////������Ҫ��
////�� �ʵ����ı��ļ���ʽ��ţ�ÿ��һ�����ʡ�
////�� ������ɺ�����ҵ��ĵ����ڴʵ��е�λ���Լ��õ��ʣ���δ�ҵ�ָ�����ʣ�Ӧ������ʾ��Ϣ��
////*/
/////*ͷ�ļ�����*/
//#include <stdio.h>//�����������
//#include <string.h>//�����ַ����ıȽ�
//#include <stdlib.h>//������ͣ������
/////*������������*/
//FILE* openFile();//���ֵ��ļ�
//void readFile(FILE* fp);//��ȡ�ֵ��ļ�
//void output();//����ֵ䣨�����ã�
//void inTypeData(char* inType);//���뵥��
//int wordLenJudge(char* dictWord, char* typeWord);//���뵥�ʳ��ȱȽ��ж�
//void sarchCompleteMatch(char* inType);//������ȫƥ��ĵ���
//void sarchLenEqualMatch(char* inType);//���ҵ��ʳ�����Ȳ���ȫƥ��ĵ���
//void sarchLenUnequalMatch(char* inType);//�������볤�Ȳ���ȵĵ���
/////*ȫ�ֱ�������*/
//char dictionary[100][255] = { 0 };//ȫ�ִ����ֵ仺��
//int lenType;//ȫ�ּ������뵥�ʳ��ȣ������ظ�����
/////*��������*/
//int main()//������
//{
//	system("title �ַ����ࣺ����ƥ��");//�޸ı���
//	FILE* fp = NULL;//�½��ļ�ָ��
//	fp = openFile();//���ֵ��ļ�
//	readFile(fp);//��ȡ�ֵ��ļ�
//	output();//����ֵ䣨�����ã�
//	char inType[255] = { 0 };//��������ĵ��ʴ洢��
//	inTypeData(inType);//���뵥��
//	//printf("%d\n", lenType);//������ʵĳ��ȣ������ã�
//	sarchCompleteMatch(inType);//������ȫƥ��ĵ��ʣ���Ŀ��������1��
//	sarchLenEqualMatch(inType);//���ҵ��ʳ�����Ȳ���ȫƥ��ĵ��ʣ���Ŀ��������2��
//	sarchLenUnequalMatch(inType);//�������볤�Ȳ���ȵĵ��ʣ���Ŀ��������3��
//	system("pause");//����ǰ��ͣ
//	return 0;
//}
//FILE* openFile()//���ֵ��ļ�
//{
//	FILE* fp = NULL;
//	if ((fp = fopen(".\\dictionary.txt", "r")) == NULL)
//	{//�����ʧ�ܣ���������ر��ļ�
//		printf("�޷����ֵ��ļ�\n�������Ǹ�Ŀ¼��û���ֵ��ļ���\n");
//		system("pause");
//		exit(3);
//	}
//	return fp;
//}
//void readFile(FILE* fp)//��ȡ�ֵ��ļ�
//{
//	int i = 0;//�����ֵ�
//	while (!feof(fp))
//	{//����ֵ��Ƿ�������
//		fscanf(fp, "%s", dictionary[i]);
//		i++;
//	}
//}
//void output()//����ֵ䣨�����ã�
//{
//	int pMove = 0;//�����ֵ�
//	while (dictionary[pMove][0] != 0 && pMove < 100)//�ж��Ƿ�����ļ�ĩβ
//	{
//		puts(dictionary[pMove]);
//		pMove++;//���¶�ȡ
//	}
//	system("pause");
//	system("cls");//����
//}
//void inTypeData(char* inType)//���뵥��
//{
//	printf("�����뵥��\n");
//	scanf("%s", inType);
//	lenType = strlen(inType);//lenTypeΪ����ĵ���
//}
//int wordLenJudge(char* dictWord, char* typeWord)//���뵥�ʳ����ж�
//{//��ȫƥ��Ϊ�޲�������Ȳ�ƥ��Ϊ0��������ڳ���Ϊ1������С�ڳ���Ϊ-1������Ϊ2
//	int lenDict;
//	lenDict = strlen(dictWord);//lenDictΪ�ֵ�ĵ���
//	if (lenType == lenDict)//���ʳ�����Ȳ���ȫƥ��Ĳ���
//	{
//		if (strcmp(dictWord, typeWord) != 0)//�ų����������ȫƥ��ĵ���
//		{
//			return 0;//����0
//		}
//	}
//	else if (lenType == lenDict + 1)//���뵥�ʳ��ȴ����ֵ䵥�ʳ��ȵĲ���
//	{
//		return 1;//����1
//	}
//	else if (lenType == lenDict - 1)//���뵥�ʳ���С���ֵ䵥�ʳ��ȵĲ���
//	{
//		return -1;//����-1
//	}
//	return 2;//�����㵥�ʳ��̳����жϵķ���2
//}
//void sarchCompleteMatch(char* inType)//������ȫƥ��ĵ��ʣ���Ŀ��������1��
//{
//	int flag = 0;//�ж��Ƿ��������
//	int pMove = 0;//�����ֵ�
//	while (dictionary[pMove][0] != 0 && pMove < 100)//�ж��Ƿ�����ļ�ĩβ
//	{
//		if (strcmp(inType, dictionary[pMove]) == 0)//�ж��Ƿ���ȫƥ��
//		{
//			printf("%s�ڴʵ��е�λ����%d(��ȫƥ��ĵ���)\n", dictionary[pMove], pMove + 1);
//			flag = 1;//���ڷ�������
//			break;//�˳�ѭ���������ж�����ʷ��ϸ���������������һ�����ʵ�λ�ã���Ŀ��������4��
//		}
//		pMove++;//���¶�ȡ
//	}
//	if (flag == 0)//û���ҵ����������Ĳ�������Ŀ����Ҫ��2��
//	{
//		printf("%s��ȫƥ��ĵ����ڴʵ���û���ҵ�\n", inType);//����Ŀ����Ҫ��2��
//	}
//}
//void sarchLenEqualMatch(char* inType)//���ҵ��ʳ�����Ȳ���ȫƥ��ĵ��ʣ���Ŀ��������2��
//{
//	int flag = 0;//�ж��Ƿ��������
//	int pMove = 0;//�����ֵ�
//	while (dictionary[pMove][0] != 0 && pMove < 100)//�ж��Ƿ�����ļ�ĩβ
//	{
//		int lenUnMatch = 0;//��ƥ����ĸ�ĸ���
//		if (wordLenJudge(dictionary[pMove], inType) == 0)//���뵥�ʳ����жϣ���Ȳ�ƥ��Ϊ0
//		{
//			for (int j = 0; j < lenType; j++)//���Ҳ�ƥ����ĸ�ĸ���
//			{
//				if (dictionary[pMove][j] != inType[j])//��ĸ����ͬ�Ĳ���
//				{
//					lenUnMatch++;//��ƥ����ĸ�ĸ��� + 1
//				}
//			}
//			if (lenUnMatch == 1)//����һ����ĸ��ƥ������
//			{
//				printf("%s�ڴʵ��е�λ����%d(����һ����ĸ��ƥ��ĵ���)\n", dictionary[pMove], pMove + 1);
//				flag = 1;//���ڷ�������
//				break;//�˳�ѭ���������ж�����ʷ��ϸ���������������һ�����ʵ�λ�ã���Ŀ��������4��
//			}
//		}
//		pMove++;//���¶�ȡ
//	}
//	if (flag == 0)//û���ҵ����������Ĳ�������Ŀ����Ҫ��2��
//	{
//		printf("%s����һ����ĸ��ƥ��ĵ����ڴʵ���û���ҵ�\n", inType);
//	}
//}
//void sarchLenUnequalMatch(char* inType)//�������볤�Ȳ���ȵĵ��ʣ���Ŀ��������3��
//{
//	int flag = 0;//�ж��Ƿ��������
//	int pMove = 0;//�����ֵ�
//	while (dictionary[pMove][0] != 0 && pMove < 100)//�ж��Ƿ�����ļ�ĩβ
//	{
//		int unmatchWord = 0;//��ƥ�䵥�ʵĸ���
//		int j = 0;//������ĸ����ָ��
//		int lenDifference = wordLenJudge(dictionary[pMove], inType);
//		if (lenDifference == 1)//���볤�ȴ����ֵ�����
//		{
//			{//ͷ��ĸ��ͬ�����
//				for (j = 0, unmatchWord = 0; j < lenType - 1; j++)
//				{
//					if (dictionary[pMove][j] != inType[j])
//					{//�����ĸ��ƥ��
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//ͷ��ĸ��ͬ�����
//				{
//					printf("%s�ڴʵ��е�λ����%d(��ԭ���ʶ�(����)һ���ַ��ĵ���)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//���ڷ�������
//					break;//�˳�ѭ���������ж�����ʷ��ϸ���������������һ�����ʵ�λ�ã���Ŀ��������4��
//				}
//			}
//			{//β��ĸ��ͬ�����
//				for (j = 0, unmatchWord = 0; j < lenType - 1; j++)
//				{
//					if (dictionary[pMove][j] != inType[j + 1])
//					{//�����ĸ��ƥ��
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//β��ĸ��ͬ�����
//				{
//					printf("%s�ڴʵ��е�λ����%d(��ԭ���ʶ�(����)һ���ַ��ĵ���)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//���ڷ�������
//					break;//�˳�ѭ���������ж�����ʷ��ϸ���������������һ�����ʵ�λ�ã���Ŀ��������4��
//				}
//			}
//		}
//		if (lenDifference == -1)//���볤��С���ֵ�����
//		{
//			{//ͷ��ĸ��ͬ�����
//				for (j = 0, unmatchWord = 0; j < lenType; j++)
//				{
//					if (dictionary[pMove][j] != inType[j])
//					{//�����ĸ��ƥ��
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//ͷ��ĸ��ͬ�����
//				{
//					printf("%s�ڴʵ��е�λ����%d(��ԭ���ʶ�(����)һ���ַ��ĵ���)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//���ڷ�������
//					break;//�˳�ѭ���������ж�����ʷ��ϸ���������������һ�����ʵ�λ�ã���Ŀ��������4��
//				}
//			}
//			{//β��ĸ��ͬ�����
//				for (j = 0, unmatchWord = 0; j < lenType; j++)
//				{
//					if (dictionary[pMove][j + 1] != inType[j])
//					{//�����ĸ��ƥ��
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//β��ĸ��ͬ�����
//				{
//					printf("%s�ڴʵ��е�λ����%d(��ԭ���ʶ�(����)һ���ַ��ĵ���)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//���ڷ�������
//					break;//�˳�ѭ���������ж�����ʷ��ϸ���������������һ�����ʵ�λ�ã���Ŀ��������4��
//				}
//			}
//		}
//		pMove++;//���¶�ȡ
//	}
//	if (flag == 0)//û���ҵ����������Ĳ�������Ŀ����Ҫ��2��
//	{
//		printf("%s��ԭ���ʶ�(����)һ���ַ��ĵ����ڴʵ���û���ҵ�\n", inType);
//	}
//}

/*
������������
ΪѧУ���һ��ѧ���ɼ���Ϣ����ϵͳ��ϵͳ�ɶ�ѧ���ɼ����й�����ѯ��ͳ�ơ�
ϵͳ�û���������Ա��ѧ�����ࡣ
ѧ���ɼ���Ϣ��Ҫ������ѧ�ţ��������Ա����֤���룬��¼���롣���⻹�������� 3 �ſγ̵ĳɼ���
������Ҫ��
����Ա���ܣ�
	ʵ��ѧ���ɼ���Ϣ�Ĺ�����ӡ���ѯ��ɾ�����޸ġ���������̹��ܡ�
	��ѯҪ�󣺿ɰ�רҵ��ѯ�����༶��ѯ����ѧ�Ų�ѯ����ָ���γ̲�ѯѧ���ɼ���Ϣ��
	�ɰ�ָ���γ�. ָ��רҵ. ָ���༶�����ѧ���ɼ������ʱ��ָ���ɼ��������������. ���򣩣�������Ӧ����Գɼ��������������
	����ָ���γ̡�ָ���༶��ͳ�Ƹ��ſγ̵�ƽ���֡���߷֡���ͷ֡�
		���������Σ�100-90��89-80��79-70��69-60��60 ���£�������ռ�༶����������
	�ܰ��γ̡����༶ͳ�����ȫ��������Ϣ��������������ʽ��
ѧ�����ܣ�
	��ѯĳ�ſγ̵ĳɼ���
	��ѯȫ���γ̵ĳɼ���
	�޸ı������롣
�����ʾ��
	����Ա��ѧ����Ϣ����¼�룬���ṩע�Ṧ�ܡ�ѧ���û�����������½�󣬽�����Ӧ������
*/
/*ͷ�ļ�����*/
#include <stdio.h>//�����������
#include <string.h>//�����ַ����ıȽ�
#include <stdlib.h>//������ͣ�������Լ��޸ı���
/*����������*/
struct Person
{//��ʼ������������
	char stuId[12] = { 0 };//ѧ�ţ�11λ��
	char name[20] = { 0 };//����
	int sex = 0;//�Ա���Ϊ0��ŮΪ1
	char perId[19] = { 0 };//���֤��18λ��
	char password[13] = { 0 };//���λ��Ϊ13λ������
	int stuClass = 0;//�༶
	int sorce[3] = { 0 };//3�ſγ̳ɼ�
	int maxSorce = 0;
	int sumSorce = 0;
	//int age = 0;//����
};
typedef struct Students
{//������
	struct Person data;//��Ϊ������
	struct Students* next = NULL;
}stu;
//����Ա����
struct Admin
{
	char id[12] = { 0 };//ѧ�ţ�11λ��
	char name[20] = { 0 };//����
	char password[13] = { 0 };//���λ��Ϊ12λ������
}admin[6];
/*������������*/
int loginChoice();//�����¼�û�Ȩ��
void adminMain();//����Ա������
int loginVerificationAdmin();//����Ա��¼��֤
void loginModuleAdmin(char* id, char* password);//����Ա��¼����
void adminMenu(int i);//ѧ�������˵�
void studentsMain();//ѧ��������
void stuMenu(stu* myData);//ѧ�������˵�
stu* loginVerificationStu();//ѧ����¼��֤
void loginModule(char* stuId, char* password);//��¼����
stu* createHead();//��������ͷ
stu* creatNode(struct Person data);//�����ڵ�
void insertNodeByHead(stu* headNode, struct Person data);//ͷ�巨����ڵ�
void inputInformation(FILE* fp);//���ļ�¼����Ϣ������
void printList(stu* headNode);//�������
void printData(struct Person data);//�������ѧ������
void adminInput();//¼�����Ա����
FILE* readFile();//��ѧ���ļ�
FILE* readFileAdmin();//ֻ����ʽ�򿪹���Ա�ļ�
void stuSarchAllSorce(stu* myData);//ѧ����ѯ���пγ̵ĳɼ�
void stuSarchOneSorce(stu* myData);//ѧ����ѯĳ�ſγ̵ĳɼ�
void stuChangePassword(stu* myData);//ѧ���޸�����
void adminAggregationQuery();//���ܲ�ѯ����
void adminSingleQuery();//��ѧ�Ų�ѯ����ѧ��
void printSingleInformation(stu* stuNode);//�������ѧ��������Ϣ
void inputStuInformation();//���ѧ����Ϣ
void deleteStuInformation();//ɾ��ѧ����Ϣ
void modifyStuInformation();//�޸�ѧ������
void outputFile();//������Ϣ������


/*ȫ�ֱ�������*/
stu* list = createHead();//������ͷ
FILE* fp = readFile();//��д��ʽ���ļ�
/*��������*/
int main()//������
{
	system("title ����ϵͳ�ࣺѧ���ɼ�����");//�޸ı���
	inputInformation(fp);//���ļ�¼����Ϣ������
	int choice = loginChoice();//�����¼�û�Ȩ��
	switch (choice)
	{
	case 1:
		system("cls");
		adminMain();//����Ա������
		break;
	case 2:
		system("cls");
		studentsMain();//ѧ��������
		break;
	}
	return 0;
}
int loginChoice()//�����¼�û�Ȩ��
{
	int choice = 0;//�ж�
	while (true)//������ѭ��
	{
		printf("��ѡ���¼�û�:\n");
		printf("1: ����Ա\n");
		printf("2: ѧ��\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		default:
			printf("�����������������\n");
			system("pause");
			system("cls");
			break;
		}
	}
}
void adminMain()//����Ա������
{
	adminInput();//¼�����Ա����
	int adminId = loginVerificationAdmin();//ѧ����¼��֤
	int choice = 0;//ѡ�����
	while (1)
	{
		adminMenu(adminId);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1://���ܲ�ѯ����
			adminAggregationQuery();//���ܲ�ѯ����
			break;
		case 2://������ѯ����
			adminSingleQuery();//��ѧ�Ų�ѯ����ѧ��
			break;
		case 3://���ѧ����Ϣ
			inputStuInformation();//���ѧ����Ϣ
			break;
		case 4://�޸�ѧ����Ϣ
			modifyStuInformation();//�޸�ѧ������	
			break;
		case 5://ɾ��ѧ����Ϣ
			deleteStuInformation();//ɾ��ѧ����Ϣ
			break;
		case 0://���沢�˳�����
			outputFile();//������Ϣ������
			printf("�����ѱ��棬���򼴽��˳�\n");
			system("pause");//��ͣ
			exit(0);
			break;
		case -1://�������˳�����������
			printf("����δ���棬���򼴽��˳�\n");
			system("pause");//��ͣ
			exit(0);
			break;
		default:
			//�������
			printf("�������\n");
			break;
		}
		system("pause");
		system("cls");//����
	}
}
int loginVerificationAdmin()//����Ա��¼��֤
{
	system("title ����Ա��¼����");
	char id[12] = { 0 };//ѧ�ţ�11λ��
	char password[13] = { 0 };//����
	for (size_t i = 0; i < 3; i++)
	{
		printf("ѧ���ɼ���Ϣ����ϵͳ������Ա��\n");
		loginModuleAdmin(id, password);
		for (int num = 0; num < 6; num++) {
			if (strcmp(id, admin[num].id) == 0)
			{
				printf("�˻���ȷ\n");
				if (strcmp(password, admin[num].password) == 0)
				{
					printf("��¼�ɹ���");
					system("pause");
					system("cls");
					return num;//����
				}
			}
		}
		printf("��¼��Ϣ����\n");
		system("pause");
		system("cls");
	}
	printf("��¼��֤�����Ѵﵽ����\n�������˳�\n");
	system("pause");
	exit(0);
}
void loginModuleAdmin(char* id, char* password)//����Ա��¼����
{
	//printf("ѧ���ɼ���Ϣ����ϵͳ\n");
	printf("�������˺�\n");
	scanf("%s", id);
	printf("����������\n");
	scanf("%s", password);
}
void adminMenu(int i)//ѧ�������˵�
{//iΪ����Ա�±�
	system("title ����Աģʽ");//�޸ı���
	printf("%s����á�������Աģʽ��\n", admin[i].name);
	printf("���ܲ�ѯ���������룺1\n");
	printf("������ѯ���������룺2\n");
	printf("���ѧ����Ϣ�����룺3\n");
	printf("�޸�ѧ����Ϣ�����룺4\n");
	printf("ɾ��ѧ����Ϣ�����룺5\n");
	printf("���沢�˳����������룺0\n");
	printf("�������˳����������룺-1\n");
}
void studentsMain()//ѧ��������
{
	//struct Person myData;//������ʱ����
	stu* myData = NULL;
	myData = loginVerificationStu();//ѧ����¼��֤
	int choice = 0;//ѡ�����
	while (1)
	{
		stuMenu(myData);
		scanf("%d", &choice);
		switch (choice)
		{
		case 0://�˳�����
			printf("���򼴽��˳�\n");
			system("pause");//��ͣ
			exit(0);
			break;
		case 1://��ѯ���ſγ̵ĳɼ�
			stuSarchOneSorce(myData);
			break;
		case 2://��ѯ���пγ̵ĳɼ�
			stuSarchAllSorce(myData);
			break;
		case 3://��ѯ������Ϣ
			system("title ѧ����Ϣ���");
			system("cls");
			printf("**************************************\n");
			printSingleInformation(myData);
			printf("**************************************\n");
			break;
		case 4://�޸�����
			stuChangePassword(myData);
			break;
		default://�������
			printf("�������\n");
			break;
		}
		system("pause");
		system("cls");//����
	}
}
void stuMenu(stu* myData)//ѧ�������˵�
{
	system("title ѧ��ģʽ");//�޸ı���
	printf("%s����á�\n",myData->data.name);
	printf("��ѯ���ſγ̵ĳɼ������룺1\n");
	printf("��ѯ���пγ̵ĳɼ������룺2\n");
	printf("��ѯ������Ϣ�����룺3\n");
	printf("�޸����������룺4\n");
	printf("�˳����������룺0\n");
}
stu* loginVerificationStu()//ѧ����¼��֤
{//��������ڵ�
	system("title ѧ����¼����");
	struct Person myData;
	for (size_t i = 0; i < 3; i++)
	{
		printf("ѧ���ɼ���Ϣ����ϵͳ\n");
		loginModule(myData.stuId, myData.password);
		stu* pMove = list;//��������ָ��
		while (pMove != NULL)
		{
			if (strcmp(pMove->data.stuId, myData.stuId) == 0)
			{
				printf("ѧ����ȷ\n");
				if (strcmp(pMove->data.password, myData.password) == 0)
				{//������֤��¼��ȷ
					printf("��¼�ɹ���");
					system("pause");
					system("cls");
					return pMove;//���ظýڵ�
				}
			}
			pMove = pMove->next;
		}
		printf("��¼��Ϣ����\n");
		system("pause");
		system("cls");
	}
	printf("��¼��֤�����Ѵﵽ����\n�������˳�\n");
	system("pause");
	exit(0);
}
void loginModule(char* stuId, char* password)//��¼����
{
	//printf("ѧ���ɼ���Ϣ����ϵͳ\n");
	printf("������ѧ��\n");
	scanf("%s", stuId);
	printf("����������\n");
	scanf("%s", password);
}
stu* createHead()//��������ͷ
{
	//�ṹ��ָ���ɽṹ�����
	stu* headNode = (stu*)malloc(sizeof(stu));//�����ڴ�����
	headNode->next = NULL;//��ʼ��ָ���
	return headNode;
}
stu* creatNode(struct Person data)//�����ڵ�
{
	stu* newNode = (stu*)malloc(sizeof(stu));//�����ڴ�����
	newNode->data = data;//���ݵ�������������
	newNode->next = NULL;//��ʼ��ָ���
	return newNode;
}
void insertNodeByHead(stu* headNode, struct Person data)//ͷ�巨����ڵ�
{
	stu* newNode = creatNode(data);
	newNode->next = headNode->next;//�ȸ���next�ڵ�Ϊβ���
	headNode->next = newNode;//�ٰ��½ڵ�����һ���ڵ�
	//��������������Ϊ��ȫ�����ڵ�
}
void inputInformation(FILE* fp)//���ļ�¼����Ϣ������
{
	int maxSorce = 0;//�����ܳɼ�
	while (!feof(fp))//�Ƿ�����ļ�ĩβ
	{
		struct Person tempData;
		fscanf(fp, "%s", tempData.stuId);//ѧ��
		fscanf(fp, "%s", tempData.name);//����
		fscanf(fp, "%d", &(tempData.sex));//�Ա�
		fscanf(fp, "%s", tempData.perId);//���֤
		fscanf(fp, "%s", tempData.password);//����
		fscanf(fp, "%d", &(tempData.stuClass));//�༶
		for (size_t i = 0; i < 3; i++)//���ųɼ�
		{
			fscanf(fp, "%d", tempData.sorce + i);//�༶
		}
		tempData.sumSorce = tempData.sorce[0] + tempData.sorce[1] + tempData.sorce[2];//�ܳɼ�
		maxSorce = tempData.sorce[2];//��߷�
		for (size_t i = 0; i < 3; i++)
		{
			if (maxSorce < tempData.sorce[i])
			{
				maxSorce = tempData.sorce[i];
			}
		}
		tempData.maxSorce = maxSorce;
		insertNodeByHead(list, tempData);
	}
}
void printList(stu* headNode)//�������
{//choiseΪѡ���������Ļ
	stu* pMove = headNode->next;
	while (pMove != NULL)
	{
		printData(pMove->data);
		pMove = pMove->next;
	}
	printf("\n");
}
void printData(struct Person data)//�������
{
	printf("%s\t", data.stuId);//ѧ��
	printf("%s\t", data.name);//����
	//�Ա�
	if (0 == data.sex)
	{
		printf("�� ");
	}
	else if (1 == data.sex)
	{
		printf("Ů ");
	}
	printf("%-20s", data.perId);//���֤
	printf("%s\t", data.password);//����
	printf("%d ", data.stuClass);//�༶
	for (size_t i = 0; i < 3; i++)//���ųɼ�
	{
		printf("%3d ", data.sorce[i]);
	}
	putchar('\n');
}
void adminInput()//¼�����Ա����
{
	FILE* fp = NULL;//�½��ļ�ָ��
	fp = readFileAdmin();//ֻ����ʽ�򿪹���Ա�ļ�
	for (size_t i = 0; i < 6; i++)
	{
		fscanf(fp, "%s", admin[i].id);
		fscanf(fp, "%s", admin[i].name);
		fscanf(fp, "%s", admin[i].password);
	}
}
FILE* readFile()//��ѧ���ļ�
{
	FILE* fp = NULL;//�½��ļ�ָ��
	fp = fopen(".\\students.txt", "r+");//���ļ�
	if (fp == NULL)//����Ҳ����ļ�
	{
		printf("�޷���ѧ�������ļ����ļ������ر�\n");
		system("pause");
		exit(1);//�����˳�
	}
	return fp;
}
FILE* readFileAdmin()//ֻ����ʽ�򿪹���Ա�ļ�
{
	FILE* fp = NULL;//�½��ļ�ָ��
	fp = fopen(".\\admin.txt", "r");//���ļ�
	if (fp == NULL)//����Ҳ����ļ�
	{
		printf("�޷��򿪹���Ա�����ļ����ļ������ر�\n");
		system("pause");
		exit(1);//�����˳�
	}
	return fp;
}
void stuSarchAllSorce(stu* myData)//ѧ����ѯ���пγ̵ĳɼ�
{
	printf("3�ųɼ��ֱ�Ϊ��\n");
	for (size_t i = 0; i < 3; i++)
	{
		printf("%d ", myData->data.sorce[i]);
	}
	putchar('\n');
}
void stuSarchOneSorce(stu* myData)//ѧ����ѯĳ�ſγ̵ĳɼ�
{
	printf("��ѯ�γ̵Ŀ�Ŀ����������1��2��3��\n");
	int i;
	scanf("%d", &i);
	if (i < 1 || i > 3)
	{
		printf("�������\n");
		return;
	}
	printf("��Ŀ%d�ɼ�Ϊ%d\n", i, myData->data.sorce[i - 1]);
}
void stuChangePassword(stu* myData)//ѧ���޸�����
{
	int choice = 0;//0Ϊ���޸ģ�1234Ϊ�޸�
	char originPassword[13] = { 0 };
	char newPassword[100] = { 0 };
	char newPassword_2[13] = { 0 };
	printf("ȷ���޸�������\n�����롰1234�����޸ģ��������˳�\n(ע�������޸ĺ��˳���������µ�¼)\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1234:
		system("title �����޸�");
		while (1)
		{
			system("cls");
			printf("������ԭ����\n");
			size_t passwordLen = 0;
			scanf("%s", originPassword);
			switch (strcmp(originPassword, myData->data.password))
			{
			case 0:
				printf("������������(���ܳ���12λ�Ҳ����к���)\n");
				scanf("%s", newPassword);
				passwordLen = strlen(newPassword);
				if (passwordLen > 12)
				{//�����볬��12λ�����
					printf("�����볬��12λ\n");
					strcpy(newPassword, "\0");
					printf("�Ƿ�����޸����룿\n��������1��������������Ϊ�˳�\n");
					scanf("%d", &choice);
					if (choice != 1)
					{//�����������ֲ���
						printf("���˳��޸����벿��\n");
						return;
					}
					continue;
				}
				printf("���ٴ�����������\n");
				scanf("%s", newPassword_2);
				if (strcmp(newPassword, newPassword_2) != 0)
				{//�ظ������������������
					printf("��������������벻ƥ��\n");
					printf("�Ƿ�����޸����룿\n��������1��������������Ϊ�˳�\n");
					scanf("%d", &choice);
					if (choice != 1)
					{//�����������ֲ���
						printf("���˳��޸����벿��\n");
						return;
					}
					continue;
				}
				//�޸����벿��
				fclose(fp);
				strcpy(myData->data.password, newPassword);//¼�����뵽����
				printf("�����޸���ɣ������˳�����");
				outputFile();//������Ϣ������
				system("pause");
				exit(0);
				break;
			default://����ԭ�����������
				printf("�������\n");
				printf("�Ƿ�����޸����룿\n��������1��������������ΪΪ�˳�\n");
				scanf("%d", &choice);
				if (choice != 1)
				{//�����������ֲ���
					printf("���˳��޸����벿��\n");
					return;
				}
				continue;
				break;
			}
		}
		break;
	default:
		printf("���˳��޸����벿��\n");
		return;
		break;
	}
	
}
void adminAggregationQuery()//���ܲ�ѯ����
{
	stu* aggregationList = NULL;
	while (true)
	{
		{//��ӡ�˵�
			system("title ���ܲ�ѯ����");
			system("cls");
			printf("�ѽ�����ܲ�ѯ����\n");
			printf("�Ժ�Ϊ�����\n");
			printf("�԰༶����������1\n");
			printf("�Գɼ�����������2\n");
			printf("���˳�����������0\n");
		}
		int choice = 0;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:{//�༶����
			printf("������༶�ţ�\n");
			int stuClass = 0;
			scanf("%d", &stuClass);
			stu* pMove = list->next;
			while (pMove != NULL)
			{
				if (pMove->data.stuClass == stuClass)
				{
					printData(pMove->data);//���ѧ����Ϣ
				}
				pMove = pMove->next;
			}
		}
			break;
		case 2: {//�ɼ�����
			//�����˵���ӡ 
			{
				printf("��������Ҫ���ֵķ�����\n");
				printf("100-90���밴��1\n");
				printf("89-80���밴��2\n");
				printf("79-70���밴��3\n");
				printf("69-60���밴��4\n");
				printf("60�������밴��5\n");
				printf("�˳��������β����밴��0\n");
			}
			int stuPointArr = 0;
			scanf("%d", &stuPointArr);
			if (stuPointArr == 0)
			{
				return;
			}
			int stuClass;
			while (1)
			{
				printf("�������Ŀ��\n(1��2��3)\n");
				scanf("%d", &stuClass);
				if (stuClass <= 3 && stuClass >= 1)
				{
					break;
				}
				printf("����ʧ��\n");
			}
			stu* pMove = list->next;
			switch (stuPointArr)
			{
			case 1:{//100-90��
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 90)
					{
						printData(pMove->data);//���ѧ����Ϣ
					}
					pMove = pMove->next;
				}
				break;
			}
			case 2:{//89-80��
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 80 && pMove->data.sorce[stuClass-1] < 90)
					{
						printData(pMove->data);//���ѧ����Ϣ
					}
					pMove = pMove->next;
				}
				break;
			}
			case 3:{//79-70��
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 70 && pMove->data.sorce[stuClass-1] < 80)
					{
						printData(pMove->data);//���ѧ����Ϣ
					}
					pMove = pMove->next;
				}
				break;
			}
			case 4:{//69-60��
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 60 && pMove->data.sorce[stuClass-1] < 70)
					{
						printData(pMove->data);//���ѧ����Ϣ
					}
					pMove = pMove->next;
				}
				break;
			}
			case 5:{//60������
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] < 60)
					{
						printData(pMove->data);//���ѧ����Ϣ
					}
					pMove = pMove->next;
				}
				break;
			}
			default:
				printf("�������\n");
				break;
			}
		}
			break;
		case 0://�˳�����
			printf("�������˳�\n");
			return;
			break;
		default:
			printf("�������\n");
			break;
		}
			system("pause");
	}
}
void adminSingleQuery()//��ѧ�Ų�ѯ����ѧ��
{
	system("title ������ѯ");
	stu* pMove = NULL;
	int choice = 0;//�����Ƿ��������
	int flag = 0;//�ж��Ƿ���ҳɹ�
	char sarchStuid[12] = { 0 };//ѧ�Ų���
	while (true)
	{
		system("cls");
		flag = 0;//��ʼ��Ѱ������
		pMove = list->next;
		printf("������ѧ��\n");
		scanf("%s", sarchStuid);
		while (pMove != NULL)
		{
			if (strcmp(pMove->data.stuId, sarchStuid) == 0)
			{
				printf("���ҳɹ�\n**************************************\n");
				printSingleInformation(pMove);//�����������
				printf("**************************************\n");
				printf("�����ɣ�");
				//system("pause");
				flag = 1;//�ж���Ѱ�ҵ�
				break;
			}
			pMove = pMove->next;
		}
		if (0 == flag)
		{
			printf("����ʧ��\n");
		}
		printf("�Ƿ�������ң�(���롰1��Ϊ�ǣ��������˳�)\n");
		scanf("%d", &choice);
		if (choice != 1)
		{
			printf("������ѯ�������˳�");
			return;
		}
	}
}
void printSingleInformation(stu* stuNode)//�������ѧ��������Ϣ
{
	printf("ѧ�ţ�\t%s\n", stuNode->data.stuId);//ѧ��
	printf("������\t%s\n", stuNode->data.name);//����
	//�Ա�
	printf("�Ա�\t");
	if (0 == stuNode->data.sex)
	{
		printf("��\n");
	}
	else if (1 == stuNode->data.sex)
	{
		printf("Ů\n");
	}
	printf("���֤��%s\n", stuNode->data.perId);//���֤
	printf("���룺\t%s\n", stuNode->data.password);//����
	printf("�༶��\t%d\n", stuNode->data.stuClass);//�༶
	printf("�ɼ���\t");
	for (size_t i = 0; i < 3; i++)//���ųɼ�
	{
		printf("%-3d", stuNode->data.sorce[i]);
	}
	putchar('\n');
}
void inputStuInformation()//���ѧ����Ϣ
{
	int choice = 0;//�Ƿ���������Ϣ
	struct Person newStuData;
	int maxSorce = 0;
	printf("�Ƿ�ȷ����ӣ�(����ѡ1�������˳�)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	system("title ѧ����Ϣ��ӹ���");//�޸ı���
	system("cls");//�����Ļ
	while (1)
	{
		printf("ѧ�ţ�");//ѧ��
		scanf("%s", newStuData.stuId);
		printf("������");//����
		scanf("%s", newStuData.name);
		printf("�Ա�(��Ϊ0��ŮΪ1)��");//�Ա�
		scanf("%d", &(newStuData.sex));
		printf("���֤��");//���֤
		scanf("%s", newStuData.perId);
		printf("���룺");//����
		scanf("%s", newStuData.password);
		printf("3�Ű༶��");//�༶
		scanf("%d", &(newStuData.stuClass));
		printf("�ɼ���");
		for (size_t i = 0; i < 3; i++)//���ųɼ�
		{
			scanf("%d", newStuData.sorce + i);
		}
		newStuData.maxSorce = newStuData.sorce[0] + newStuData.sorce[1] + newStuData.sorce[2];
		maxSorce = newStuData.sorce[2];//��߷�
		for (size_t i = 0; i < 3; i++)
		{
			if (maxSorce < newStuData.sorce[i])
			{
				maxSorce = newStuData.sorce[i];
			}
		}
		newStuData.maxSorce = maxSorce;
		insertNodeByHead(list, newStuData);//�������ݵ�����
		putchar('\n');
		printf("�Ƿ������ӣ�(����ѡ1�������˳�)\n");
		scanf("%d", &choice);
		if (choice != 1)
		{
			return;
		}
	}
}
void deleteStuInformation()//ɾ��ѧ����Ϣ
{
	int choice = 0;//�Ƿ����ɾ��ѧ����Ϣ
	struct Person newStuData;
	//int maxSorce = 0;
	printf("�Ƿ�ȷ��ɾ����(����ѡ1�������˳�)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	system("title ѧ����Ϣɾ������");//�޸ı���
	system("cls");//�����Ļ
	char stuId[12] = { 0 };
	printf("������ѧ��\n");
	scanf("%s", stuId);//����ѧ��
	stu* pMove = list->next;
	while (pMove!=NULL)//���Ҹ����ݽڵ�
	{
		if (strcmp(pMove->data.stuId, stuId) == 0)
		{
			break;
		}
		pMove = pMove->next;
	}
	if (pMove == NULL)//�޷����ҽڵ�ʱ
	{
		printf("�޷��ҵ����ݣ�");
		return;
	}
	printSingleInformation(pMove);//���ѧ����Ϣ
	printf("�Ƿ�ɾ������Ϣ(����ѡ1�������˳�)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	stu* temp = pMove->next;//�½���ʱָ��
	pMove->data = temp->data;//�ýڵ�����Ϊ��һ�ڵ������
	temp = temp->next;
	free(pMove->next);
	pMove->next = temp;
	//pMove->next = pMove->next->next;
	//free(temp);
	putchar('\n');
	printf("��Ϣ��ɾ����");
}
void modifyStuInformation()//�޸�ѧ������
{
	int choice = 0;//�Ƿ�����޸�ѧ����Ϣ
	struct Person newStuData;
	int maxSorce = 0;
	printf("�Ƿ�ȷ���޸ģ�(����ѡ1�������˳�)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	system("title ѧ����Ϣ�޸Ĺ���");//�޸ı���
	system("cls");//�����Ļ
	char stuId[12] = { 0 };
	printf("������ѧ��\n");
	scanf("%s", stuId);//����ѧ��
	stu* pMove = list->next;
	while (pMove != NULL)//���Ҹ����ݽڵ�
	{
		if (strcmp(pMove->data.stuId, stuId) == 0)
		{
			break;
		}
		pMove = pMove->next;
	}
	if (pMove == NULL)//�޷����ҽڵ�ʱ
	{
		printf("�޷��ҵ����ݣ�");
		return;
	}
	printSingleInformation(pMove);//���ѧ����Ϣ
	printf("�Ƿ��޸ĸ���Ϣ(����ѡ1�������˳�)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	int changeChoice = 0;
	while (true)
	{
		{
			system("cls");
			printf("**********************\n");
			printSingleInformation(pMove);//���ѧ����Ϣ
			printf("**********************\n");
			printf("�޸���һ�\n");
			printf("1��ѧ��\t");
			printf("2������\n");
			printf("3���Ա�\t");
			printf("4�����֤\n");
			printf("5������\t");
			printf("6���༶\n");
			printf("7���ɼ�\n");
			printf("0���˳�\n");
		}
		scanf("%d", &changeChoice);
		switch (changeChoice)
		{
		case 1://ѧ��
			printf("������ѧ��\n");
			scanf("%s", pMove->data.stuId);
			break;
		case 2://����
			printf("����������\n");
			scanf("%s", pMove->data.name);
			break;
		case 3://�Ա�
			printf("�������Ա𣺣���Ϊ0��ŮΪ1��\n");
			int sex;
			scanf("%d", &sex);
			switch (sex)//�����Ŵ�
			{
			case 0:
				pMove->data.sex = 0;
				break;
			case 2:
				pMove->data.sex = 1;
				break;
			default:
				printf("�������\n");
				break;
			}
			break;
		case 4://���֤
			printf("���������֤\n");
			scanf("%s", pMove->data.perId);
			break;
		case 5://����
			printf("����������\n");
			scanf("%s", pMove->data.password);
			break;
		case 6://�༶
			printf("������༶\n");
			scanf("%d", &(pMove->data.stuClass));
			break;
		case 7://�ɼ�
			printf("�������Ŀ��\n");
			{
				int stuClass = 0;
				scanf("%d", &stuClass);
				if (stuClass > 3 || stuClass < 1)
				{
					printf("�������");
					system("pause");
					continue;
				}
				printf("�������Ŀ%d����\n", stuClass);
				scanf("%d", &(pMove->data.sorce[stuClass - 1]));
			}
			break;
		case 0://�˳�
			return;
			break;
		default:
			printf("�������");
			system("pause");
			continue;
			break;
		}
		printf("�޸�����ɣ�");
		system("pause");
	}
}
void outputFile()//������Ϣ������
{
	FILE* fp = fopen(".\\students.txt", "w+");
	stu* pMove = list->next;
	while (pMove != NULL)
	{
		fprintf(fp, "%s ", pMove->data.stuId);//ѧ��
		fprintf(fp, "%s ", pMove->data.name);//����
		fprintf(fp, "%d ", pMove->data.sex);//�Ա�
		fprintf(fp, "%s ", pMove->data.perId);//���֤
		fprintf(fp, "%s ", pMove->data.password);//����
		fprintf(fp, "%d ", pMove->data.stuClass);//�༶
		fprintf(fp, "%d %d %d", pMove->data.sorce[0], pMove->data.sorce[1], pMove->data.sorce[2]);//�༶
		if (pMove->next != NULL)
		{
			fprintf(fp, "\n");
		}
		pMove = pMove->next;
	}
}
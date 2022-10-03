#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

//#include <stdio.h>//负责输入输出
//#include <stdlib.h>//负责暂停与清屏
/////*
////(C)1.6 分数加法计算问题
////【难度系数】3 级
////【任务描述】
////分别给出两个正分数的分子和分母，按分数运算的方法，求这两个正分数之和。
////【功能要求】
////⑴ 加数和被加数都是真分数。
////⑵ 如果和的分子分母有公因子，应进行约分。
////⑶ 如果和大于 1，应化为带分数。
////*/
//
//void intypeData(int* fm, int* fz);//输入数据并排错
//bool typeJudge(int fm, int fz);//输入判断，输入错误返回假，输入正确返回真
//int scoreCalculate(int* fm, int* fz);//分数计算，并输出带分数的整值
//int greatestCommonFactor(int fm, int fz);//计算最大公因数
//void printOut(int* fm, int* fz, int integer);//输出答案
//
//int main()
//{
//	system("title 基础类：分数加法计算问题");//修改标题
//	int fm[3] = { 1,1,1 };//生成分母（前两个是待计算的数，最后一个是答案）
//	int fz[3] = { 0,0,0 };//生成分子（前两个是待计算的数，最后一个是答案）
//	int integer = 0;//生成带分数的整数
//	intypeData(fm, fz);//输入数据并排错
//	integer = scoreCalculate(fm, fz);//分数计算并输出带分数的整值
//	printOut(fm, fz, integer);//输出答案
//	system("pause");//结束前暂停
//	return 0;
//}
//
//void intypeData(int* fm, int* fz)//输入数据并排错
//{
//	for (int i = 0; i < 2; i++)
//	{
//		printf("请输入第%d个分子和分母\n", i + 1);//提示
//		scanf("%d%d", fz + i, fm + i);
//		if (!typeJudge(fm[i], fz[i]))//输入判断，输入错误应重新输入
//		{
//			i--;//重复该项输入
//		}
//		system("pause");//防止闪屏
//		system("cls");//防止闪屏，执行清屏操作
//	}
//}
//bool typeJudge(int fm, int fz)//输入判断，输入错误返回假，输入正确返回真
//{
//	int flag = 0;//判断是否错误，输入错误即为1。
//	{//输出错误类型
//		if (fz < 0)
//		{
//			printf("输入错误：分子应该大于等于0\n");
//			flag = 1;
//		}
//		if (fm <= 0)
//		{
//			printf("输入错误：分母应该大于0\n");
//			flag = 1;
//		}
//		if (fz >= fm)
//		{
//			printf("输入错误：分子应小于分母\n");
//			flag = 1;
//		}
//	}
//	if (1 == flag)//判断是否错误，输入错误即为1。
//	{
//		return false;
//	}
//	return true;
//}
//int scoreCalculate(int* fm, int* fz)//分数计算并输出带分数的整值
//{
//	int integer = 0;//生成带分数
//	/*分数计算*/
//	fm[2] = fm[0] * fm[1];//分母计算
//	fz[2] = fz[0] * fm[1] + fz[1] * fm[0];//分子计算
//	/*假分数化简为带分数*/
//	if (fm[2] <= fz[2])
//	{
//		integer = fz[2] / fm[2];
//		fz[2] %= fm[2];
//	}
//	if (fz[2] == 0)//如果分子为0，这不需要继续化简了
//	{
//		return integer;//返回带分数的值
//	}
//	/*分数化简*/
//	int maxnum = greatestCommonFactor(fm[2], fz[2]);//计算最大公因数
//	fm[2] /= maxnum;//约分分母
//	fz[2] /= maxnum;//约分分子
//	return integer;//返回带分数的值
//}
//int greatestCommonFactor(int fm, int fz)//计算最大公因数
//{//注意，输入的数必须是真分数
//	int maxnum = 0;//带分数的整值默认值为0
//	for (int i = 1; i <= fz; i++)//计算最大公因数
//	{
//		if (0 == fz % i && 0 == fm % i)
//		{
//			maxnum = i;
//		}
//	}
//	return maxnum;//输出带分数的整值
//}
//void printOut(int* fm, int* fz, int integer)//输出答案
//{
//	//输出自己所输入的数
//	printf("第一个分数为: %d/%d。\n第二个分数为: %d/%d。\n", fz[0], fm[0], fz[1], fm[1]);
//	printf("答案为: ");
//	if (integer > 0)//如果带分数的整值不为0，这输出带分数的整值
//	{
//		printf("%d", integer);
//	}
//	if (fz[2] != 0)//如果分子为0，则不需要输出分数
//	{
//		printf("(%d/%d)\n", fz[2], fm[2]);//输出分数
//	}
//	if (fz[2] == 0 && integer == 0)//如果分子为0，则不需要输出分数
//	{
//		printf("0\n");//输出分数
//	}
//}

/////*
////【任务描述】
////已知一个包含若干英文单词的词典（1≤n≤100），对任意输入的某一个单词 word（字典中的单词和给定单词word 的长度均不超过 255），
////进行如下查询操作：
////⑴ word 在词典中的位置。
////⑵ 词典中仅有一个字符与 word 不匹配的单词位置。
////⑶ 词典中比 word 多（或少）一个字符（除此字符外其余字符均匹配）的单词位置。
////⑷ 上述查找时，如有多个单词符合条件，仅输出其第一个单词的位置。
////【功能要求】
////⑴ 词典以文本文件格式存放，每行一个单词。
////⑵ 查找完成后，输出找到的单词在词典中的位置以及该单词，如未找到指定单词，应给出提示信息。
////*/
/////*头文件部分*/
//#include <stdio.h>//负责输入输出
//#include <string.h>//负责字符串的比较
//#include <stdlib.h>//负责暂停与清屏
/////*函数声明部分*/
//FILE* openFile();//打开字典文件
//void readFile(FILE* fp);//读取字典文件
//void output();//输出字典（测试用）
//void inTypeData(char* inType);//输入单词
//int wordLenJudge(char* dictWord, char* typeWord);//输入单词长度比较判断
//void sarchCompleteMatch(char* inType);//查找完全匹配的单词
//void sarchLenEqualMatch(char* inType);//查找单词长度相等不完全匹配的单词
//void sarchLenUnequalMatch(char* inType);//查找输入长度不相等的单词
/////*全局变量部分*/
//char dictionary[100][255] = { 0 };//全局创建字典缓存
//int lenType;//全局计算输入单词长度，避免重复计算
/////*函数部分*/
//int main()//主函数
//{
//	system("title 字符串类：单词匹配");//修改标题
//	FILE* fp = NULL;//新建文件指针
//	fp = openFile();//打开字典文件
//	readFile(fp);//读取字典文件
//	output();//输出字典（测试用）
//	char inType[255] = { 0 };//创建输入的单词存储串
//	inTypeData(inType);//输入单词
//	//printf("%d\n", lenType);//输出单词的长度（测试用）
//	sarchCompleteMatch(inType);//查找完全匹配的单词（题目任务描述1）
//	sarchLenEqualMatch(inType);//查找单词长度相等不完全匹配的单词（题目任务描述2）
//	sarchLenUnequalMatch(inType);//查找输入长度不相等的单词（题目任务描述3）
//	system("pause");//结束前暂停
//	return 0;
//}
//FILE* openFile()//打开字典文件
//{
//	FILE* fp = NULL;
//	if ((fp = fopen(".\\dictionary.txt", "r")) == NULL)
//	{//如果打开失败，这输出并关闭文件
//		printf("无法打开字典文件\n（可能是该目录下没有字典文件）\n");
//		system("pause");
//		exit(3);
//	}
//	return fp;
//}
//void readFile(FILE* fp)//读取字典文件
//{
//	int i = 0;//遍历字典
//	while (!feof(fp))
//	{//检测字典是否遍历完成
//		fscanf(fp, "%s", dictionary[i]);
//		i++;
//	}
//}
//void output()//输出字典（测试用）
//{
//	int pMove = 0;//遍历字典
//	while (dictionary[pMove][0] != 0 && pMove < 100)//判断是否读到文件末尾
//	{
//		puts(dictionary[pMove]);
//		pMove++;//向下读取
//	}
//	system("pause");
//	system("cls");//清屏
//}
//void inTypeData(char* inType)//输入单词
//{
//	printf("请输入单词\n");
//	scanf("%s", inType);
//	lenType = strlen(inType);//lenType为输入的单词
//}
//int wordLenJudge(char* dictWord, char* typeWord)//输入单词长短判断
//{//完全匹配为无操作，相等不匹配为0，输入大于长度为1，输入小于长度为-1，其余为2
//	int lenDict;
//	lenDict = strlen(dictWord);//lenDict为字典的单词
//	if (lenType == lenDict)//单词长度相等不完全匹配的操作
//	{
//		if (strcmp(dictWord, typeWord) != 0)//排除长度相等完全匹配的单词
//		{
//			return 0;//返回0
//		}
//	}
//	else if (lenType == lenDict + 1)//输入单词长度大于字典单词长度的操作
//	{
//		return 1;//返回1
//	}
//	else if (lenType == lenDict - 1)//输入单词长度小于字典单词长度的操作
//	{
//		return -1;//返回-1
//	}
//	return 2;//不满足单词长短初步判断的返回2
//}
//void sarchCompleteMatch(char* inType)//查找完全匹配的单词（题目任务描述1）
//{
//	int flag = 0;//判断是否符合条件
//	int pMove = 0;//遍历字典
//	while (dictionary[pMove][0] != 0 && pMove < 100)//判断是否读到文件末尾
//	{
//		if (strcmp(inType, dictionary[pMove]) == 0)//判断是否完全匹配
//		{
//			printf("%s在词典中的位置是%d(完全匹配的单词)\n", dictionary[pMove], pMove + 1);
//			flag = 1;//存在符合条件
//			break;//退出循环，即如有多个单词符合该条件，仅输出其第一个单词的位置（题目任务描述4）
//		}
//		pMove++;//向下读取
//	}
//	if (flag == 0)//没有找到符合条件的操作（题目功能要求2）
//	{
//		printf("%s完全匹配的单词在词典中没有找到\n", inType);//（题目功能要求2）
//	}
//}
//void sarchLenEqualMatch(char* inType)//查找单词长度相等不完全匹配的单词（题目任务描述2）
//{
//	int flag = 0;//判断是否符合条件
//	int pMove = 0;//遍历字典
//	while (dictionary[pMove][0] != 0 && pMove < 100)//判断是否读到文件末尾
//	{
//		int lenUnMatch = 0;//不匹配字母的个数
//		if (wordLenJudge(dictionary[pMove], inType) == 0)//输入单词长短判断，相等不匹配为0
//		{
//			for (int j = 0; j < lenType; j++)//查找不匹配字母的个数
//			{
//				if (dictionary[pMove][j] != inType[j])//字母不相同的操作
//				{
//					lenUnMatch++;//不匹配字母的个数 + 1
//				}
//			}
//			if (lenUnMatch == 1)//仅有一个字母不匹配的情况
//			{
//				printf("%s在词典中的位置是%d(仅有一个字母不匹配的单词)\n", dictionary[pMove], pMove + 1);
//				flag = 1;//存在符合条件
//				break;//退出循环，即如有多个单词符合该条件，仅输出其第一个单词的位置（题目任务描述4）
//			}
//		}
//		pMove++;//向下读取
//	}
//	if (flag == 0)//没有找到符合条件的操作（题目功能要求2）
//	{
//		printf("%s仅有一个字母不匹配的单词在词典中没有找到\n", inType);
//	}
//}
//void sarchLenUnequalMatch(char* inType)//查找输入长度不相等的单词（题目任务描述3）
//{
//	int flag = 0;//判断是否符合条件
//	int pMove = 0;//遍历字典
//	while (dictionary[pMove][0] != 0 && pMove < 100)//判断是否读到文件末尾
//	{
//		int unmatchWord = 0;//不匹配单词的个数
//		int j = 0;//创建字母遍历指针
//		int lenDifference = wordLenJudge(dictionary[pMove], inType);
//		if (lenDifference == 1)//输入长度大于字典的情况
//		{
//			{//头字母相同的情况
//				for (j = 0, unmatchWord = 0; j < lenType - 1; j++)
//				{
//					if (dictionary[pMove][j] != inType[j])
//					{//如果字母不匹配
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//头字母相同的情况
//				{
//					printf("%s在词典中的位置是%d(比原单词多(或少)一个字符的单词)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//存在符合条件
//					break;//退出循环，即如有多个单词符合该条件，仅输出其第一个单词的位置（题目任务描述4）
//				}
//			}
//			{//尾字母相同的情况
//				for (j = 0, unmatchWord = 0; j < lenType - 1; j++)
//				{
//					if (dictionary[pMove][j] != inType[j + 1])
//					{//如果字母不匹配
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//尾字母相同的情况
//				{
//					printf("%s在词典中的位置是%d(比原单词多(或少)一个字符的单词)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//存在符合条件
//					break;//退出循环，即如有多个单词符合该条件，仅输出其第一个单词的位置（题目任务描述4）
//				}
//			}
//		}
//		if (lenDifference == -1)//输入长度小于字典的情况
//		{
//			{//头字母相同的情况
//				for (j = 0, unmatchWord = 0; j < lenType; j++)
//				{
//					if (dictionary[pMove][j] != inType[j])
//					{//如果字母不匹配
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//头字母相同的情况
//				{
//					printf("%s在词典中的位置是%d(比原单词多(或少)一个字符的单词)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//存在符合条件
//					break;//退出循环，即如有多个单词符合该条件，仅输出其第一个单词的位置（题目任务描述4）
//				}
//			}
//			{//尾字母相同的情况
//				for (j = 0, unmatchWord = 0; j < lenType; j++)
//				{
//					if (dictionary[pMove][j + 1] != inType[j])
//					{//如果字母不匹配
//						unmatchWord++;
//					}
//				}
//				if (unmatchWord == 0)//尾字母相同的情况
//				{
//					printf("%s在词典中的位置是%d(比原单词多(或少)一个字符的单词)\n", dictionary[pMove], pMove + 1);
//					flag = 1;//存在符合条件
//					break;//退出循环，即如有多个单词符合该条件，仅输出其第一个单词的位置（题目任务描述4）
//				}
//			}
//		}
//		pMove++;//向下读取
//	}
//	if (flag == 0)//没有找到符合条件的操作（题目功能要求2）
//	{
//		printf("%s比原单词多(或少)一个字符的单词在词典中没有找到\n", inType);
//	}
//}

/*
【任务描述】
为学校设计一个学生成绩信息管理系统。系统可对学生成绩进行管理、查询和统计。
系统用户包括管理员和学生两类。
学生成绩信息主要包括：学号，姓名，性别，身份证号码，登录密码。此外还包括至少 3 门课程的成绩。
【功能要求】
管理员功能：
	实现学生成绩信息的管理：添加、查询、删除、修改、浏览、存盘功能。
	查询要求：可按专业查询，按班级查询，按学号查询，按指定课程查询学生成绩信息。
	可按指定课程. 指定专业. 指定班级等浏览学生成绩，浏览时可指定成绩的排序规则（升序. 降序），并按相应规则对成绩进行排序输出。
	根据指定课程、指定班级，统计各门课程的平均分、最高分、最低分、
		各个分数段（100-90，89-80，79-70，69-60，60 以下）人数和占班级人数比例。
	能按课程、按班级统计输出全部上述信息。自行设计输出格式。
学生功能：
	查询某门课程的成绩。
	查询全部课程的成绩。
	修改本人密码。
设计提示：
	管理员对学生信息进行录入，不提供注册功能。学生用户需根据密码登陆后，进行相应操作。
*/
/*头文件部分*/
#include <stdio.h>//负责输入输出
#include <string.h>//负责字符串的比较
#include <stdlib.h>//负责暂停与清屏以及修改标题
/*链表创建部分*/
struct Person
{//初始化数据域数据
	char stuId[12] = { 0 };//学号（11位）
	char name[20] = { 0 };//姓名
	int sex = 0;//性别：男为0，女为1
	char perId[19] = { 0 };//身份证（18位）
	char password[13] = { 0 };//最大位数为13位的密码
	int stuClass = 0;//班级
	int sorce[3] = { 0 };//3门课程成绩
	int maxSorce = 0;
	int sumSorce = 0;
	//int age = 0;//年龄
};
typedef struct Students
{//链表创建
	struct Person data;//此为数据域
	struct Students* next = NULL;
}stu;
//管理员创建
struct Admin
{
	char id[12] = { 0 };//学号（11位）
	char name[20] = { 0 };//姓名
	char password[13] = { 0 };//最大位数为12位的密码
}admin[6];
/*函数声明部分*/
int loginChoice();//输入登录用户权限
void adminMain();//管理员主程序
int loginVerificationAdmin();//管理员登录验证
void loginModuleAdmin(char* id, char* password);//管理员登录输入
void adminMenu(int i);//学生操作菜单
void studentsMain();//学生主程序
void stuMenu(stu* myData);//学生操作菜单
stu* loginVerificationStu();//学生登录验证
void loginModule(char* stuId, char* password);//登录输入
stu* createHead();//创建链表头
stu* creatNode(struct Person data);//创建节点
void insertNodeByHead(stu* headNode, struct Person data);//头插法插入节点
void inputInformation(FILE* fp);//从文件录入信息到链表
void printList(stu* headNode);//输出链表
void printData(struct Person data);//输出单个学生数据
void adminInput();//录入管理员数据
FILE* readFile();//打开学生文件
FILE* readFileAdmin();//只读方式打开管理员文件
void stuSarchAllSorce(stu* myData);//学生查询所有课程的成绩
void stuSarchOneSorce(stu* myData);//学生查询某门课程的成绩
void stuChangePassword(stu* myData);//学生修改密码
void adminAggregationQuery();//汇总查询功能
void adminSingleQuery();//按学号查询单个学生
void printSingleInformation(stu* stuNode);//竖向输出学生单个信息
void inputStuInformation();//添加学生信息
void deleteStuInformation();//删除学生信息
void modifyStuInformation();//修改学生数据
void outputFile();//导出信息到链表


/*全局变量部分*/
stu* list = createHead();//创建链头
FILE* fp = readFile();//可写方式打开文件
/*函数部分*/
int main()//主函数
{
	system("title 管理系统类：学生成绩管理");//修改标题
	inputInformation(fp);//从文件录入信息到链表
	int choice = loginChoice();//输入登录用户权限
	switch (choice)
	{
	case 1:
		system("cls");
		adminMain();//管理员主程序
		break;
	case 2:
		system("cls");
		studentsMain();//学生主程序
		break;
	}
	return 0;
}
int loginChoice()//输入登录用户权限
{
	int choice = 0;//判断
	while (true)//创建死循环
	{
		printf("请选择登录用户:\n");
		printf("1: 管理员\n");
		printf("2: 学生\n");
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
			printf("输入错误，请重新输入\n");
			system("pause");
			system("cls");
			break;
		}
	}
}
void adminMain()//管理员主程序
{
	adminInput();//录入管理员数据
	int adminId = loginVerificationAdmin();//学生登录验证
	int choice = 0;//选择操作
	while (1)
	{
		adminMenu(adminId);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1://汇总查询功能
			adminAggregationQuery();//汇总查询功能
			break;
		case 2://单个查询功能
			adminSingleQuery();//按学号查询单个学生
			break;
		case 3://添加学生信息
			inputStuInformation();//添加学生信息
			break;
		case 4://修改学生信息
			modifyStuInformation();//修改学生数据	
			break;
		case 5://删除学生信息
			deleteStuInformation();//删除学生信息
			break;
		case 0://保存并退出程序
			outputFile();//导出信息到链表
			printf("数据已保存，程序即将退出\n");
			system("pause");//暂停
			exit(0);
			break;
		case -1://不保存退出程序请输入
			printf("数据未保存，程序即将退出\n");
			system("pause");//暂停
			exit(0);
			break;
		default:
			//输入错误
			printf("输入错误\n");
			break;
		}
		system("pause");
		system("cls");//清屏
	}
}
int loginVerificationAdmin()//管理员登录验证
{
	system("title 管理员登录程序");
	char id[12] = { 0 };//学号（11位）
	char password[13] = { 0 };//密码
	for (size_t i = 0; i < 3; i++)
	{
		printf("学生成绩信息管理系统（管理员）\n");
		loginModuleAdmin(id, password);
		for (int num = 0; num < 6; num++) {
			if (strcmp(id, admin[num].id) == 0)
			{
				printf("账户正确\n");
				if (strcmp(password, admin[num].password) == 0)
				{
					printf("登录成功，");
					system("pause");
					system("cls");
					return num;//返回
				}
			}
		}
		printf("登录信息错误\n");
		system("pause");
		system("cls");
	}
	printf("登录验证次数已达到上限\n程序已退出\n");
	system("pause");
	exit(0);
}
void loginModuleAdmin(char* id, char* password)//管理员登录输入
{
	//printf("学生成绩信息管理系统\n");
	printf("请输入账号\n");
	scanf("%s", id);
	printf("请输入密码\n");
	scanf("%s", password);
}
void adminMenu(int i)//学生操作菜单
{//i为管理员下标
	system("title 管理员模式");//修改标题
	printf("%s，你好。（管理员模式）\n", admin[i].name);
	printf("汇总查询功能请输入：1\n");
	printf("单个查询功能请输入：2\n");
	printf("添加学生信息请输入：3\n");
	printf("修改学生信息请输入：4\n");
	printf("删除学生信息请输入：5\n");
	printf("保存并退出程序请输入：0\n");
	printf("不保存退出程序请输入：-1\n");
}
void studentsMain()//学生主程序
{
	//struct Person myData;//创建临时数据
	stu* myData = NULL;
	myData = loginVerificationStu();//学生登录验证
	int choice = 0;//选择操作
	while (1)
	{
		stuMenu(myData);
		scanf("%d", &choice);
		switch (choice)
		{
		case 0://退出程序
			printf("程序即将退出\n");
			system("pause");//暂停
			exit(0);
			break;
		case 1://查询单门课程的成绩
			stuSarchOneSorce(myData);
			break;
		case 2://查询所有课程的成绩
			stuSarchAllSorce(myData);
			break;
		case 3://查询所有信息
			system("title 学生信息输出");
			system("cls");
			printf("**************************************\n");
			printSingleInformation(myData);
			printf("**************************************\n");
			break;
		case 4://修改密码
			stuChangePassword(myData);
			break;
		default://输入错误
			printf("输入错误\n");
			break;
		}
		system("pause");
		system("cls");//清屏
	}
}
void stuMenu(stu* myData)//学生操作菜单
{
	system("title 学生模式");//修改标题
	printf("%s，你好。\n",myData->data.name);
	printf("查询单门课程的成绩请输入：1\n");
	printf("查询所有课程的成绩请输入：2\n");
	printf("查询所有信息请输入：3\n");
	printf("修改密码请输入：4\n");
	printf("退出程序请输入：0\n");
}
stu* loginVerificationStu()//学生登录验证
{//返回链表节点
	system("title 学生登录程序");
	struct Person myData;
	for (size_t i = 0; i < 3; i++)
	{
		printf("学生成绩信息管理系统\n");
		loginModule(myData.stuId, myData.password);
		stu* pMove = list;//创建遍历指针
		while (pMove != NULL)
		{
			if (strcmp(pMove->data.stuId, myData.stuId) == 0)
			{
				printf("学号正确\n");
				if (strcmp(pMove->data.password, myData.password) == 0)
				{//两次验证登录正确
					printf("登录成功，");
					system("pause");
					system("cls");
					return pMove;//返回该节点
				}
			}
			pMove = pMove->next;
		}
		printf("登录信息错误\n");
		system("pause");
		system("cls");
	}
	printf("登录验证次数已达到上限\n程序已退出\n");
	system("pause");
	exit(0);
}
void loginModule(char* stuId, char* password)//登录输入
{
	//printf("学生成绩信息管理系统\n");
	printf("请输入学号\n");
	scanf("%s", stuId);
	printf("请输入密码\n");
	scanf("%s", password);
}
stu* createHead()//创建链表头
{
	//结构体指针变成结构体变量
	stu* headNode = (stu*)malloc(sizeof(stu));//开辟内存区域
	headNode->next = NULL;//初始化指向空
	return headNode;
}
stu* creatNode(struct Person data)//创建节点
{
	stu* newNode = (stu*)malloc(sizeof(stu));//开辟内存区域
	newNode->data = data;//数据导入链表数据域
	newNode->next = NULL;//初始化指向空
	return newNode;
}
void insertNodeByHead(stu* headNode, struct Person data)//头插法插入节点
{
	stu* newNode = creatNode(data);
	newNode->next = headNode->next;//先复制next节点为尾结点
	headNode->next = newNode;//再把新节点变成上一个节点
	//即上面两部操作为完全拷贝节点
}
void inputInformation(FILE* fp)//从文件录入信息到链表
{
	int maxSorce = 0;//创建总成绩
	while (!feof(fp))//是否读到文件末尾
	{
		struct Person tempData;
		fscanf(fp, "%s", tempData.stuId);//学号
		fscanf(fp, "%s", tempData.name);//姓名
		fscanf(fp, "%d", &(tempData.sex));//性别
		fscanf(fp, "%s", tempData.perId);//身份证
		fscanf(fp, "%s", tempData.password);//密码
		fscanf(fp, "%d", &(tempData.stuClass));//班级
		for (size_t i = 0; i < 3; i++)//三门成绩
		{
			fscanf(fp, "%d", tempData.sorce + i);//班级
		}
		tempData.sumSorce = tempData.sorce[0] + tempData.sorce[1] + tempData.sorce[2];//总成绩
		maxSorce = tempData.sorce[2];//最高分
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
void printList(stu* headNode)//输出链表
{//choise为选择输出到屏幕
	stu* pMove = headNode->next;
	while (pMove != NULL)
	{
		printData(pMove->data);
		pMove = pMove->next;
	}
	printf("\n");
}
void printData(struct Person data)//输出数据
{
	printf("%s\t", data.stuId);//学号
	printf("%s\t", data.name);//姓名
	//性别
	if (0 == data.sex)
	{
		printf("男 ");
	}
	else if (1 == data.sex)
	{
		printf("女 ");
	}
	printf("%-20s", data.perId);//身份证
	printf("%s\t", data.password);//密码
	printf("%d ", data.stuClass);//班级
	for (size_t i = 0; i < 3; i++)//三门成绩
	{
		printf("%3d ", data.sorce[i]);
	}
	putchar('\n');
}
void adminInput()//录入管理员数据
{
	FILE* fp = NULL;//新建文件指针
	fp = readFileAdmin();//只读方式打开管理员文件
	for (size_t i = 0; i < 6; i++)
	{
		fscanf(fp, "%s", admin[i].id);
		fscanf(fp, "%s", admin[i].name);
		fscanf(fp, "%s", admin[i].password);
	}
}
FILE* readFile()//打开学生文件
{
	FILE* fp = NULL;//新建文件指针
	fp = fopen(".\\students.txt", "r+");//打开文件
	if (fp == NULL)//如果找不到文件
	{
		printf("无法打开学生数据文件，文件即将关闭\n");
		system("pause");
		exit(1);//程序退出
	}
	return fp;
}
FILE* readFileAdmin()//只读方式打开管理员文件
{
	FILE* fp = NULL;//新建文件指针
	fp = fopen(".\\admin.txt", "r");//打开文件
	if (fp == NULL)//如果找不到文件
	{
		printf("无法打开管理员数据文件，文件即将关闭\n");
		system("pause");
		exit(1);//程序退出
	}
	return fp;
}
void stuSarchAllSorce(stu* myData)//学生查询所有课程的成绩
{
	printf("3门成绩分别为：\n");
	for (size_t i = 0; i < 3; i++)
	{
		printf("%d ", myData->data.sorce[i]);
	}
	putchar('\n');
}
void stuSarchOneSorce(stu* myData)//学生查询某门课程的成绩
{
	printf("查询课程的科目：（请输入1、2、3）\n");
	int i;
	scanf("%d", &i);
	if (i < 1 || i > 3)
	{
		printf("输入错误\n");
		return;
	}
	printf("科目%d成绩为%d\n", i, myData->data.sorce[i - 1]);
}
void stuChangePassword(stu* myData)//学生修改密码
{
	int choice = 0;//0为不修改，1234为修改
	char originPassword[13] = { 0 };
	char newPassword[100] = { 0 };
	char newPassword_2[13] = { 0 };
	printf("确认修改密码吗？\n请输入“1234”来修改，其余则退出\n(注：密码修改后将退出程序后重新登录)\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1234:
		system("title 密码修改");
		while (1)
		{
			system("cls");
			printf("请输入原密码\n");
			size_t passwordLen = 0;
			scanf("%s", originPassword);
			switch (strcmp(originPassword, myData->data.password))
			{
			case 0:
				printf("请输入新密码(不能超过12位且不能有汉字)\n");
				scanf("%s", newPassword);
				passwordLen = strlen(newPassword);
				if (passwordLen > 12)
				{//新密码超过12位的情况
					printf("新密码超过12位\n");
					strcpy(newPassword, "\0");
					printf("是否继续修改密码？\n是则输入1，输入其他数字为退出\n");
					scanf("%d", &choice);
					if (choice != 1)
					{//输入其他数字部分
						printf("已退出修改密码部分\n");
						return;
					}
					continue;
				}
				printf("请再次输入新密码\n");
				scanf("%s", newPassword_2);
				if (strcmp(newPassword, newPassword_2) != 0)
				{//重复输入新密码错误的情况
					printf("两次输入的新密码不匹配\n");
					printf("是否继续修改密码？\n是则输入1，输入其他数字为退出\n");
					scanf("%d", &choice);
					if (choice != 1)
					{//输入其他数字部分
						printf("已退出修改密码部分\n");
						return;
					}
					continue;
				}
				//修改密码部分
				fclose(fp);
				strcpy(myData->data.password, newPassword);//录入密码到数据
				printf("密码修改完成，即将退出程序");
				outputFile();//导出信息到链表
				system("pause");
				exit(0);
				break;
			default://输入原密码错误的情况
				printf("密码错误\n");
				printf("是否继续修改密码？\n是则输入1，输入其他数字为为退出\n");
				scanf("%d", &choice);
				if (choice != 1)
				{//输入其他数字部分
					printf("已退出修改密码部分\n");
					return;
				}
				continue;
				break;
			}
		}
		break;
	default:
		printf("已退出修改密码部分\n");
		return;
		break;
	}
	
}
void adminAggregationQuery()//汇总查询功能
{
	stu* aggregationList = NULL;
	while (true)
	{
		{//打印菜单
			system("title 汇总查询功能");
			system("cls");
			printf("已进入汇总查询功能\n");
			printf("以何为汇总项？\n");
			printf("以班级汇总请输入1\n");
			printf("以成绩汇总请输入2\n");
			printf("以退出功能请输入0\n");
		}
		int choice = 0;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:{//班级汇总
			printf("请输入班级号：\n");
			int stuClass = 0;
			scanf("%d", &stuClass);
			stu* pMove = list->next;
			while (pMove != NULL)
			{
				if (pMove->data.stuClass == stuClass)
				{
					printData(pMove->data);//输出学生信息
				}
				pMove = pMove->next;
			}
		}
			break;
		case 2: {//成绩汇总
			//分数菜单打印 
			{
				printf("请输入想要区分的分数段\n");
				printf("100-90分请按：1\n");
				printf("89-80分请按：2\n");
				printf("79-70分请按：3\n");
				printf("69-60分请按：4\n");
				printf("60分以下请按：5\n");
				printf("退出分数区段查找请按：0\n");
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
				printf("请输入科目：\n(1、2、3)\n");
				scanf("%d", &stuClass);
				if (stuClass <= 3 && stuClass >= 1)
				{
					break;
				}
				printf("输入失败\n");
			}
			stu* pMove = list->next;
			switch (stuPointArr)
			{
			case 1:{//100-90分
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 90)
					{
						printData(pMove->data);//输出学生信息
					}
					pMove = pMove->next;
				}
				break;
			}
			case 2:{//89-80分
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 80 && pMove->data.sorce[stuClass-1] < 90)
					{
						printData(pMove->data);//输出学生信息
					}
					pMove = pMove->next;
				}
				break;
			}
			case 3:{//79-70分
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 70 && pMove->data.sorce[stuClass-1] < 80)
					{
						printData(pMove->data);//输出学生信息
					}
					pMove = pMove->next;
				}
				break;
			}
			case 4:{//69-60分
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] >= 60 && pMove->data.sorce[stuClass-1] < 70)
					{
						printData(pMove->data);//输出学生信息
					}
					pMove = pMove->next;
				}
				break;
			}
			case 5:{//60分以下
				while (pMove != NULL)
				{
					if (pMove->data.sorce[stuClass-1] < 60)
					{
						printData(pMove->data);//输出学生信息
					}
					pMove = pMove->next;
				}
				break;
			}
			default:
				printf("输入错误\n");
				break;
			}
		}
			break;
		case 0://退出功能
			printf("功能已退出\n");
			return;
			break;
		default:
			printf("输入错误\n");
			break;
		}
			system("pause");
	}
}
void adminSingleQuery()//按学号查询单个学生
{
	system("title 单个查询");
	stu* pMove = NULL;
	int choice = 0;//输入是否继续查找
	int flag = 0;//判断是否查找成功
	char sarchStuid[12] = { 0 };//学号查找
	while (true)
	{
		system("cls");
		flag = 0;//初始化寻找数据
		pMove = list->next;
		printf("请输入学号\n");
		scanf("%s", sarchStuid);
		while (pMove != NULL)
		{
			if (strcmp(pMove->data.stuId, sarchStuid) == 0)
			{
				printf("查找成功\n**************************************\n");
				printSingleInformation(pMove);//输出单行数据
				printf("**************************************\n");
				printf("输出完成，");
				//system("pause");
				flag = 1;//判断已寻找到
				break;
			}
			pMove = pMove->next;
		}
		if (0 == flag)
		{
			printf("查找失败\n");
		}
		printf("是否继续查找？(输入“1”为是，其余则退出)\n");
		scanf("%d", &choice);
		if (choice != 1)
		{
			printf("单个查询功能已退出");
			return;
		}
	}
}
void printSingleInformation(stu* stuNode)//竖向输出学生单个信息
{
	printf("学号：\t%s\n", stuNode->data.stuId);//学号
	printf("姓名：\t%s\n", stuNode->data.name);//姓名
	//性别
	printf("性别：\t");
	if (0 == stuNode->data.sex)
	{
		printf("男\n");
	}
	else if (1 == stuNode->data.sex)
	{
		printf("女\n");
	}
	printf("身份证：%s\n", stuNode->data.perId);//身份证
	printf("密码：\t%s\n", stuNode->data.password);//密码
	printf("班级：\t%d\n", stuNode->data.stuClass);//班级
	printf("成绩：\t");
	for (size_t i = 0; i < 3; i++)//三门成绩
	{
		printf("%-3d", stuNode->data.sorce[i]);
	}
	putchar('\n');
}
void inputStuInformation()//添加学生信息
{
	int choice = 0;//是否继续添加信息
	struct Person newStuData;
	int maxSorce = 0;
	printf("是否确认添加？(是则选1，其余退出)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	system("title 学生信息添加功能");//修改标题
	system("cls");//清空屏幕
	while (1)
	{
		printf("学号：");//学号
		scanf("%s", newStuData.stuId);
		printf("姓名：");//姓名
		scanf("%s", newStuData.name);
		printf("性别(男为0，女为1)：");//性别
		scanf("%d", &(newStuData.sex));
		printf("身份证：");//身份证
		scanf("%s", newStuData.perId);
		printf("密码：");//密码
		scanf("%s", newStuData.password);
		printf("3门班级：");//班级
		scanf("%d", &(newStuData.stuClass));
		printf("成绩：");
		for (size_t i = 0; i < 3; i++)//三门成绩
		{
			scanf("%d", newStuData.sorce + i);
		}
		newStuData.maxSorce = newStuData.sorce[0] + newStuData.sorce[1] + newStuData.sorce[2];
		maxSorce = newStuData.sorce[2];//最高分
		for (size_t i = 0; i < 3; i++)
		{
			if (maxSorce < newStuData.sorce[i])
			{
				maxSorce = newStuData.sorce[i];
			}
		}
		newStuData.maxSorce = maxSorce;
		insertNodeByHead(list, newStuData);//插入数据到链表
		putchar('\n');
		printf("是否继续添加？(是则选1，其余退出)\n");
		scanf("%d", &choice);
		if (choice != 1)
		{
			return;
		}
	}
}
void deleteStuInformation()//删除学生信息
{
	int choice = 0;//是否继续删除学生信息
	struct Person newStuData;
	//int maxSorce = 0;
	printf("是否确认删除？(是则选1，其余退出)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	system("title 学生信息删除功能");//修改标题
	system("cls");//清空屏幕
	char stuId[12] = { 0 };
	printf("请输入学号\n");
	scanf("%s", stuId);//输入学号
	stu* pMove = list->next;
	while (pMove!=NULL)//查找该数据节点
	{
		if (strcmp(pMove->data.stuId, stuId) == 0)
		{
			break;
		}
		pMove = pMove->next;
	}
	if (pMove == NULL)//无法查找节点时
	{
		printf("无法找到数据，");
		return;
	}
	printSingleInformation(pMove);//输出学生信息
	printf("是否删除该信息(是则选1，其余退出)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	stu* temp = pMove->next;//新建临时指针
	pMove->data = temp->data;//该节点数据为下一节点的数据
	temp = temp->next;
	free(pMove->next);
	pMove->next = temp;
	//pMove->next = pMove->next->next;
	//free(temp);
	putchar('\n');
	printf("信息已删除，");
}
void modifyStuInformation()//修改学生数据
{
	int choice = 0;//是否继续修改学生信息
	struct Person newStuData;
	int maxSorce = 0;
	printf("是否确认修改？(是则选1，其余退出)\n");
	scanf("%d", &choice);
	if (choice != 1)
	{
		return;
	}
	system("title 学生信息修改功能");//修改标题
	system("cls");//清空屏幕
	char stuId[12] = { 0 };
	printf("请输入学号\n");
	scanf("%s", stuId);//输入学号
	stu* pMove = list->next;
	while (pMove != NULL)//查找该数据节点
	{
		if (strcmp(pMove->data.stuId, stuId) == 0)
		{
			break;
		}
		pMove = pMove->next;
	}
	if (pMove == NULL)//无法查找节点时
	{
		printf("无法找到数据，");
		return;
	}
	printSingleInformation(pMove);//输出学生信息
	printf("是否修改该信息(是则选1，其余退出)\n");
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
			printSingleInformation(pMove);//输出学生信息
			printf("**********************\n");
			printf("修改哪一项？\n");
			printf("1：学号\t");
			printf("2：姓名\n");
			printf("3：性别\t");
			printf("4：身份证\n");
			printf("5：密码\t");
			printf("6：班级\n");
			printf("7：成绩\n");
			printf("0：退出\n");
		}
		scanf("%d", &changeChoice);
		switch (changeChoice)
		{
		case 1://学号
			printf("请输入学号\n");
			scanf("%s", pMove->data.stuId);
			break;
		case 2://姓名
			printf("请输入姓名\n");
			scanf("%s", pMove->data.name);
			break;
		case 3://性别
			printf("请输入性别：（男为0，女为1）\n");
			int sex;
			scanf("%d", &sex);
			switch (sex)//输入排错
			{
			case 0:
				pMove->data.sex = 0;
				break;
			case 2:
				pMove->data.sex = 1;
				break;
			default:
				printf("输入错误\n");
				break;
			}
			break;
		case 4://身份证
			printf("请输入身份证\n");
			scanf("%s", pMove->data.perId);
			break;
		case 5://密码
			printf("请输入密码\n");
			scanf("%s", pMove->data.password);
			break;
		case 6://班级
			printf("请输入班级\n");
			scanf("%d", &(pMove->data.stuClass));
			break;
		case 7://成绩
			printf("请输入科目几\n");
			{
				int stuClass = 0;
				scanf("%d", &stuClass);
				if (stuClass > 3 || stuClass < 1)
				{
					printf("输入错误，");
					system("pause");
					continue;
				}
				printf("请输入科目%d分数\n", stuClass);
				scanf("%d", &(pMove->data.sorce[stuClass - 1]));
			}
			break;
		case 0://退出
			return;
			break;
		default:
			printf("输入错误，");
			system("pause");
			continue;
			break;
		}
		printf("修改已完成，");
		system("pause");
	}
}
void outputFile()//导出信息到链表
{
	FILE* fp = fopen(".\\students.txt", "w+");
	stu* pMove = list->next;
	while (pMove != NULL)
	{
		fprintf(fp, "%s ", pMove->data.stuId);//学号
		fprintf(fp, "%s ", pMove->data.name);//姓名
		fprintf(fp, "%d ", pMove->data.sex);//性别
		fprintf(fp, "%s ", pMove->data.perId);//身份证
		fprintf(fp, "%s ", pMove->data.password);//密码
		fprintf(fp, "%d ", pMove->data.stuClass);//班级
		fprintf(fp, "%d %d %d", pMove->data.sorce[0], pMove->data.sorce[1], pMove->data.sorce[2]);//班级
		if (pMove->next != NULL)
		{
			fprintf(fp, "\n");
		}
		pMove = pMove->next;
	}
}
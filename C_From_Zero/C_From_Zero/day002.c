#include <stdio.h>


int main() {

	/*
	数据类型：
		数据类型可以决定变量存储什么数据（整数、小数、字符等）
		数据类型可以决定变量存储多大数据（32位、64位等）
		
	*/

	//一、四种基本整数类型定义
	//下面的演示是简写形式，，定义数据类型有完整形式，默认除了int外，其余三种定义时都需在关键字后加"int"，如：short int = 10

	//1、shrot 短整型,两个字节
	
	short a = 10;
	printf("我是short短整型数字：%d,我的字节数是%zu\n", a,sizeof(a));

	//2、int 整形，四个字节
	int b = 20;
	printf("我是int整型数字：%d,我的字节数是%zu\n", b, sizeof(b));

	//3、long 整形 长整型，对于Windows系统是四个字节，对于Linux系统是8个字节
	long c = 30L;
	printf("我是long长整型数字：%ld,我的字节数是%zu\n", c, sizeof(c));

	//4、long long 整形，八个字节
	long long d = 40LL;
	printf("我是long long超长整型数字：%lld,我的字节数是%zu\n", d, sizeof(d));

	//需要注意的是：“40LL”中的LL以及“30L”中的L，大小写都无所谓，默认大写，但“% lld”中必须使用小写。


	//补充：有符号整形定义（signed）
	signed int e = -50;
	printf("我是signed int有符号整型数字：%d,我的字节数是%zu\n", e, sizeof(e));  
	
	//补充：无符号整形定义（unsigned）
	unsigned short f = 60;
	printf("我是unsigned short无符号整型数字：%u,我的字节数是%zu\n", f, sizeof(f));  // 注意“%u”，不是“%d”




	//二、小数类型
	/*
	注意：
		小数的取值范围要大于整数的取值范围
		C语言中的小数类型默认位double型
		不可以和unsigned组合，unsigned只能和整数类型组合

	*/

	//1、float 单精度小数 占用四字节 精确到小数点后6位
	float g = 1.0F;  //默认六位小数
	printf("我是float类型数字：%f，我的字节数是%zu,保留三位小数是：%.3f\n", g, sizeof(g),g);

	//2、double 双精度小数 占用八字节 精确到小数点后15位
	double h = 2.8569;
	printf("我是double类型数字：%lf，我的字节数是%zu,保留三位小数是：%.3lf\n", h, sizeof(h),h);  //注意“%lf”

	//3、long double 高精度小数 占用八字节 精确到小数点后18~19位（不常用）
	long double i = 2.0456484648416548L;														 //注意“L”
	printf("我是long double类型数字：%lf，我的字节数是%zu,保留三位小数是：%.3lf\n", i, sizeof(i), i);  //注意“%lf”
	 




	//三、字符类型
	/*
	注意：char字符的值取自ASCII码表中的字母、数字、英文符号。内存占用一个字节
		
	*/

	char j = 'C';
	printf("我是char类型数字：%c，我的字节数是%zu\n" ,j, sizeof(j));

	char k = '2';
	printf("我是char类型数字：%c，我的字节数是%zu\n", k, sizeof(k));

	char l = '.';
	printf("我是char类型数字：%c，我的字节数是%zu\n", l, sizeof(l));

	char m = '中';														// 不会显示出来
	printf("我是char类型数字：%c，我的字节数是%zu\n", m, sizeof(m));






}
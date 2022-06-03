#if 0
#include <iostream>
using namespace std;
int main()
{
	//std::cout << "Enter two numbers:" << std::endl;
	cout << "Enter two numbers:";
	int v1 = 0;
	int	v2 = 0;
	std::cin >> v1 >> v2;// <==> cin >> v1;cin >> v2; 
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	return 0;
}
#endif 
#if 0  
/*

练习1.3：编写程序，在标准输出上打印Hello，World。

*/

#include <iostream>
using namespace std;
int main()
{
	cout << "Hello, World\n";

	return 0;
}
#endif
#if 0  
/*

练习1.4：我们的程序使用加法运算符+来将两个数相加。
编写程序使用乘法运算符＊，来打印两个数的积。

*/

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Input two numbers:";
	cin >> num1 >> num2;
	cout << num1 << " * " << num2 << " = " << num1*num2;
	return 0;
}
#endif
/*
练习1.6：解释下面程序片段是否合法。
std:: cout << "The sum of " << v1;
		   << " and " << v2;
		   << " is " << v1 + v2 << std::endl;

问题是在于，行模的分号，该程序片段应该是一个完整的表达式，在表达式最末端才需要使用分号进行分隔
*/



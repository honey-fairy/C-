#include<iostream>
#include<string>
using namespace std;
//1、从i=0开始遍历，计算出空格的数量，此时i的位置要在\0处
//2、新的数组长度就等度旧的数组长度+空格数*2，j 在 新长度的位置
//3、在保证i>0且i<j的条件下，arr[i]与arr[j]位置的值进行比较，如果为空就把20%填进去，每次填一个字符都要j--,填完之后i开始减，如果i位置不为空，就把i处的值赋给j位置
#if 0
//C语言
void Replace(char *arr, int len, int length)
{
	if(arr == NULL || length < 0)
	{
		return ;
	}
	int countBlank = 0;
	int index1 =0;
	int index2 = 0;
	while(arr[index1] != '\0')
	{
		if(arr[index1] == ' ')
		{
			countBlank++;
		}
		index1++;
	}
	int newLength = len + countBlank*2;
	if(newLength > length )
	{
		return ;
	}
	index2 = newLength;
	while(index1 > 0 && index1 < index2)
	{
		if(arr[index1] == ' ')
		{
			arr[index2--] = '0';
			arr[index2--] = '2';
			arr[index2--] = '%';
			index1--;
		}
		else
		{
			arr[index2--] = arr[index1--];
		}
	}
	int i = 0;
	while(arr[i] != '\0')
	{
		printf("%c",arr[i]);
		i++;
	}
	printf("\n");
}
#endif

#if 0
//C++
class Replace
{
public:
	void FullBlank(char *arr, int len, int length)
{
	if(arr == NULL || length < 0)
	{
		return ;
	}
	int countBlank = 0;
	int index1 =0;
	int index2 = 0;
	while(arr[index1] != '\0')
	{
		if(arr[index1] == ' ')
		{
			countBlank++;
		}
		index1++;
	}
	int newLength = len + countBlank*2;
	if(newLength > length )
	{
		return ;
	}
	index2 = newLength;
	while(index1 > 0 && index1 < index2)
	{
		if(arr[index1] == ' ')
		{
			arr[index2--] = '0';
			arr[index2--] = '2';
			arr[index2--] = '%';
			index1--;
		}
		else
		{
			arr[index2--] = arr[index1--];
		}
	}
	int i = 0;
	while(arr[i] != '\0')
	{
		cout<<arr[i];
		i++;
	}
	cout<<endl;
}
};
#endif

#if 0
//直接调用string类中的replace函数
//原型： **string& replace(size_t pos, size_t len, const string &str)
string ReplaceSpace(string iniString, int length)
{
	if(length <= 0) //字符串长度为空时，不用判断
	{
		return NULL;
	}
	string tag = " ";
	for(size_t i = 0; i<iniString.size(); i++)
	{
		if(iniString[i] == ' ')
		{
			iniString.replace(i,tag.size(),"%20"); //tag.size()计算空格的个数
		}
	}
	return iniString;
}


int main()
{
	char s[100] = "h l o d";
	Replace(s,strlen(s),sizeof(s)/sizeof(s[0]));
	/*Replace re;
	re.FullBlank(s,strlen(s),sizeof(s)/sizeof(s[0]));*/
	/*string str = "we are  happy!";
	cout<<ReplaceSpace(str,strlen(s));*/
	return 0;
}
#endif



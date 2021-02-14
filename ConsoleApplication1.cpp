// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//
#define _CRT_SECURE_NO_WARNINGS 1
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include<windows.h>//引入我们最终的，的头文件。windows，因为你要实现windows的窗口啊。
int main()
{
	char modeCommand[1024];
	sprintf(modeCommand, "mode con cols=%d lines=%d", 20, 10);
	system(modeCommand);
	//这三行实现的功能，就是调整我们exe文件原本黑框框的大小。
	while (MessageBox(NULL, _T("你喜欢我吗？"), _T("你愿不愿意做我女朋友？"), MB_YESNO) != IDYES){
		MessageBox(NULL, _T("我愿意给你做饭吃啊"), _T("我最喜欢你呀"), MB_OK);
		MessageBox(NULL, _T("我愿意给你系衣服啊"), _T("我最喜欢你呀"), MB_OK);
		MessageBox(NULL, _T("我愿意给你讲个事啊"), _T("我最喜欢你呀"), MB_OK);
		MessageBox(NULL, _T("我愿意给你做饭吃啊"), _T("我最喜欢你呀"), MB_OK);
	}
	MessageBox(NULL, _T("哈哈哈哈，你答应我啦"), _T("我最喜欢你呀"), MB_OK);
	return 0;
}

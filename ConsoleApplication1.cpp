// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//
#define _CRT_SECURE_NO_WARNINGS 1
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include<windows.h>//�����������յģ���ͷ�ļ���windows����Ϊ��Ҫʵ��windows�Ĵ��ڰ���
int main()
{
	char modeCommand[1024];
	sprintf(modeCommand, "mode con cols=%d lines=%d", 20, 10);
	system(modeCommand);
	//������ʵ�ֵĹ��ܣ����ǵ�������exe�ļ�ԭ���ڿ��Ĵ�С��
	while (MessageBox(NULL, _T("��ϲ������"), _T("��Ը��Ը������Ů���ѣ�"), MB_YESNO) != IDYES){
		MessageBox(NULL, _T("��Ը����������԰�"), _T("����ϲ����ѽ"), MB_OK);
		MessageBox(NULL, _T("��Ը�����ϵ�·���"), _T("����ϲ����ѽ"), MB_OK);
		MessageBox(NULL, _T("��Ը����㽲���°�"), _T("����ϲ����ѽ"), MB_OK);
		MessageBox(NULL, _T("��Ը����������԰�"), _T("����ϲ����ѽ"), MB_OK);
	}
	MessageBox(NULL, _T("�������������Ӧ����"), _T("����ϲ����ѽ"), MB_OK);
	return 0;
}

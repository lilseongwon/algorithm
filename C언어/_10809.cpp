#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char arr[100]; //���ڿ� �迭
	scanf("%s", &arr); //���ڿ� �Է�
	int position[26]; //�ڸ��迭 (a~z����)
	for (int i = 0; i < 26; i++) // �ڸ� ���� -1�� �ʱ�ȭ
		position[i] = -1;

	for (int j = 0; j < strlen(arr); j++) { // j = 0���� ���ڿ� ���̱��� �ݺ�
		char alpha = arr[j]; //���ĺ��� arr�ε���
		if (position[alpha - 'a'] == -1) //������ �ε���(���ĺ� - a�� �ε����� �ű��)�� -1(�⺻��)�϶�
			position[alpha - 'a'] = j; //j(�ε�����)����
		else
			continue; //�ƴϸ� ��Ƽ��
	}
	for (int k = 0; k < 26; k++) //a~z �ڸ��迭 ���
		printf("%d ", position[k]);
}

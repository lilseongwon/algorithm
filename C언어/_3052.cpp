#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int input, result = 0;  //�Է°� �����
	int remain[10];	 //�迭

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		remain[i] = input % 42; //�Է� % 42(=������)�� �迭 i�� ����
	}
	for (int i = 0; i < 10; i++) { //i�� ���ǹ�
		int count = 0;  //������ üũ�ϴ� count�ʱ�ȭ
		for (int j = i + 1; j++) { //���� j�����(i+j�� ���� �� �ڱ� �ڽ��� ������)
			if (remain[i] == remain[j]) count++;  //i�� j�� ���ٸ� ī��Ʈ + 1(���� ���� 3����� 1�� ���� 2���� 0�� �Ǵ� ��Ŀ����)
		}
		if (count == 0) result++; //ī��Ʈ�� 0�϶� ����� + 1
	}
	printf("%d", result); //����� ���
}
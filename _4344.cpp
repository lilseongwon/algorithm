#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int input, a; //���̽��� �л���
	scanf("%d", &input); //���̽� �Է�
	for (int i = 0; i < input; i++) { //���̽�����
		int score[1000], sum = 0; //score(�����迭), sum(�հ�)
		double avg = 0.00; //��� �ʱ�ȭ
		scanf("%d", &a); //�л��� �Է�
		for (int j = 0; j < a; j++) { //�л�������
			scanf("%d ", &score[j]); //�����迭 �Է�
			sum += score[j]; //���� �հ迡 ���ϱ�
		}
		avg = (double)sum / a; //(double)�հ� / a�� ��� ����
		int count = 0; //��� �Ѵ� �л�
		for (int j = 0; j < a; j++) {
			if (score[j] > avg) //��� ������
				count++; //ī��Ʈ + 1
		}
		printf("%.3f%%\n", (double)count * 100 / a); //�Ҽ��� 3�ڸ����� ����̻� * 100 / �л����� ���� ���ϱ�
	}
}
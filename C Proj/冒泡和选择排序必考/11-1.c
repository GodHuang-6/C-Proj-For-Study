//���ʵ�ֶԴӼ��������10�������������������
//��ð�ݷ�ʵ�ֶ�10������С��������

#include <stdio.h>

int main() {
	int a[10];
	int i,j,t;

	for(i = 0;i < 10;i++) {
		printf("Enter 10 integers");
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(j = 0;j < 9;j++) {
		for(i = 0;i < 9 - j;i++) {
			if(a[i] > a[i+1]) {
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	for(i = 0;i < 10;i++) {
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}

//��һ�ȶ���int a[]; int i,j,t;
//�ڶ���������ѭ��ΪΪn�Σ����뺯��Ҫ��&,���Ѿ�ÿ�����Ǽ������
//����t = a[i];a[i ] = a[i + 1];a[i + 1] = t; ��仰��ð������ĺ��Ĵ��룬
//printf("\n");Ҫ��""
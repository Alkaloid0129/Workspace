#include <stdio.h>

// ����ע�����ͺźͶ�Ӧ������
int inject[] = {1, 3, 5};
int numInject = sizeof(inject) / sizeof(inject[0]);

// ����ע������Ͷ�Ӧ��ʵ��ҩҺ����
float dose[] = {0.8, 2, 3, 4, 5};
int numDose = sizeof(dose) / sizeof(dose[0]);

// ����ע�������Χ
int min = 10;
int max = 180;

int main() {
    printf("���п��ܵ���Ϻ͵���ע�������\n");

    // ��������ע�����ͺ�
    for (int i = 0; i < numInject; i++) 
	{
        // ��������ע�����
        for (int j = 0; j < numDose; j++) 
		{
            // ��������ע�����
            for (int k = min; k <= max; k = k + 10) 
			{
                // ���㵥��ע�����
                float singleDose = dose[j] / inject[i] / k;
                printf("��ע�����Ϊ�� %.1f/%dml��ע�����Ϊ��%3d�Σ�����ע�����Ϊ��%.5fml\n", dose[j], inject[i], k, singleDose);
            }
        }
    }

    return 0;
}
#include <stdio.h>

// 定义注射器型号和对应的容量
int inject[] = {1, 3, 5};
int numInject = sizeof(inject) / sizeof(inject[0]);

// 定义注射剂量和对应的实际药液容量
float dose[] = {0.8, 2, 3, 4, 5};
int numDose = sizeof(dose) / sizeof(dose[0]);

// 定义注射次数范围
int min = 10;
int max = 180;

int main() {
    printf("所有可能的组合和单次注射剂量：\n");

    // 遍历所有注射器型号
    for (int i = 0; i < numInject; i++) 
	{
        // 遍历所有注射剂量
        for (int j = 0; j < numDose; j++) 
		{
            // 遍历所有注射次数
            for (int k = min; k <= max; k = k + 10) 
			{
                // 计算单次注射剂量
                float singleDose = dose[j] / inject[i] / k;
                printf("当注射剂量为： %.1f/%dml，注射次数为：%3d次，单次注射剂量为：%.5fml\n", dose[j], inject[i], k, singleDose);
            }
        }
    }

    return 0;
}
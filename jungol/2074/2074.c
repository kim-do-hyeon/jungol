#include <stdio.h>
void fill()
{
    int x = 1; // �� - ó������ 1
    int y = n / 2 + 1; // �� - �ʱⰪ �߾�
    int i; // �迭�� ������� ä�� �� (for ���� ����� ����)
    int end = n * n; // �迭�� ä�� ������ ��
 
    for (i = 1; i <= end; i++)   // �迭�� ä�� �� 1���� end����
    {
        arr[x][y] = i; // i�� �迭�� ���� ��ġ�� �ִ´�.
        if (i % n == 0) x++;  // ���� ������ ���� n�� ����̸� �Ʒ��� �̵�
        else
        {
            x--, y--; // ���� ���� �̵�
            if (x < 1) x = n; // x�� 0�̸� n����
            if (y < 1) y = n; // y�� 0�̸� n����
        }
    }
}

int main()
{
	
}
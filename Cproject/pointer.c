#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int * ptr);

int main(void)
{
  // ������

  // [ö��] : 101ȣ -> �޸� ������ �ּ�
  // [����] : 201ȣ
  // [�μ�] : 301ȣ
  // �� �� �տ� '��ȣ' �� �ɷ� ����
  // int chulsu = 1; // ��ȣ
  // int younghee = 2;
  // int minsu = 3;

  // printf("ö���� �ּ� : %d, ��ȣ : %d\n", &chulsu, chulsu);
  // printf("����� �ּ� : %d, ��ȣ : %d\n", &younghee, younghee);
  // printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &minsu, minsu);

  // // �̼Ǹ� !

  // // ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
  // int *MissionMan; // ������ ����
  // MissionMan = &chulsu;
  // printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", MissionMan, *MissionMan);

  // MissionMan = &younghee;
  // printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", MissionMan, *MissionMan);

  // MissionMan = &minsu;
  // printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", MissionMan, *MissionMan);

  // // �� ��° �̼� : �� ��ȣ�� 3�� ���ض�
  // MissionMan = &chulsu;
  // *MissionMan = *MissionMan * 3;
  // printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", MissionMan, *MissionMan);

  // MissionMan = &younghee;
  // *MissionMan = *MissionMan * 3;
  // printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", MissionMan, *MissionMan);

  // MissionMan = &minsu;
  // *MissionMan = *MissionMan * 3;
  // printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", MissionMan, *MissionMan);

  // // ������
  // // �̼Ǹ��� �ٲ� ��ȣ���� 2�� ���� !
  // int *spy = MissionMan;
  // printf("\n ... �����̰� �̼� �����ϴ� �� ... \n\n");
  // spy = &chulsu;
  // *spy = *spy - 2; // ö�� = ö�� - 2;
  // printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

  // spy = &younghee;
  // *spy = *spy - 2; 
  // printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

  // spy = &minsu;
  // *spy = *spy - 2; 
  // printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

  // printf("\n ... ö�� ���� �μ��� ���� ������ �ٲ� ��ȣ�� ���� ���� ... \n\n");

  // printf("ö���� �ּ� : %d, ��ȣ : %d\n", &chulsu, chulsu);
  // printf("����� �ּ� : %d, ��ȣ : %d\n", &younghee, younghee);
  // printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &minsu, minsu);

  // // �����.. �̼Ǹ��� ��� ���� �ּҴ� ... &MissionMan ���� Ȯ��
  // printf("�̼Ǹ��� �ּ� : %d\n", &MissionMan);
  // printf("�������� �ּ� : %d\n", &spy);

  // �迭 ?
  // int arr[3] = {5, 10, 15};
  // int *ptr = arr;
  // for(int i=0; i<3; i++)
  // {
  //   printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
  // }
  // for(int i=0; i<3; i++)
  // {
  //   printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
  // }
  // ptr[0] = 100;
  // ptr[1] = 200;
  // ptr[2] = 300;
  // for(int i=0; i<3; i++)
  // {
  //   // printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
  //   printf("�迭 arr[%d] �� �� : %d\n", i, *(arr + i));
  // }
  // for(int i=0; i<3; i++)
  // {
  //   // printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
  //   printf("������ ptr[%d] �� �� : %d\n", i, *(ptr + i));
  // }
  // // *(arr + i) == arr[i] �Ȱ��� ǥ��
  // // arr == arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
  // printf("arr ��ü�� �� : %d\n", arr);
  // printf("arr[0] �� �ּ� : %d\n", &arr[0]);

  // printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr); // *(arr + 0)
  // printf("arr[0] �� ���� �� : %d\n", *&arr[0]);

  // // *& �� �ƹ��͵� ���� �Ͱ� ����. & �� �ּ��̸�, * �� �� �ּ��� ���̱� ������,
  // // *& �� ���� ���ȴ�.
  // printf("arr[0] �� ���� �� : %d\n", *&*&*&*&*&*&*&arr[0]);
  // printf("arr[0] �� ���� �� : %d\n", arr[0]);

  // SWAP
  // int a = 10;
  // int b = 20;

  // printf("a �� �ּ� : %d\n", &a);
  // printf("b �� �ּ� : %d\n", &b);

  // // a �� b �� ���� �ٲ۴�.
  // printf("Swap �Լ� �� => a : %d , b : %d\n", a, b);
  // swap(a, b);
  // printf("Swap �Լ� �� => a : %d , b : %d\n", a, b);

  // // ���� ���� ���� (Call by Value) -> ���� �����Ѵٴ� �ǹ�

  // // �ּҰ��� �ѱ�� ? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ�� ... ö����ó��
  // printf("(�ּҰ� ����) Swap �Լ� �� => a : %d , b : %d\n", a, b);
  // swap_addr(&a, &b);
  // printf("(�ּҰ� ����)Swap �Լ� �� => a : %d , b : %d\n", a, b);

  // �迭�� ��, arr2 -> �ּ�
  int arr2[3] = { 10, 20, 30 };
  //changeArray(arr2);
  changeArray(&arr2[0]);
  for(int i=0; i<3; i++)
  {
    printf("%d\n", arr2[i]);
  }

  // scanf ���� &num �� ���� & �� ����ϴ� ����?

  return 0;
}

void swap(int a, int b)
{
  printf("(Swap �Լ� ��) a �� �ּ� : %d\n", &a);
  printf("(Swap �Լ� ��) b �� �ּ� : %d\n", &b);

  int temp = a;
  a = b;
  b = temp;
  printf("Swap �Լ� �� => a : %d , b : %d\n", a, b);
}

void swap_addr(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("(�ּҰ� ����)Swap �Լ� �� => a : %d , b : %d\n", *a, *b);
}

void changeArray(int * ptr)
{
  ptr[2] = 50;
}
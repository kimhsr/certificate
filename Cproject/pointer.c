#include <stdio.h>

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
  int arr[3] = {5, 10, 15};
  int *ptr = arr;
  for(int i=0; i<3; i++)
  {
    printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
  }
  for(int i=0; i<3; i++)
  {
    printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
  }
  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300;
  for(int i=0; i<3; i++)
  {
    // printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
    printf("�迭 arr[%d] �� �� : %d\n", i, *(arr + i));
  }
  for(int i=0; i<3; i++)
  {
    // printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
    printf("������ ptr[%d] �� �� : %d\n", i, *(ptr + i));
  }
  // *(arr + i) == arr[i] �Ȱ��� ǥ��
  // arr == arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
  printf("arr ��ü�� �� : %d\n", arr);
  printf("arr[0] �� �ּ� : %d\n", &arr[0]);

  printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr); // *(arr + 0)
  printf("arr[0] �� ���� �� : %d\n", *&arr[0]);

  // *& �� �ƹ��͵� ���� �Ͱ� ����. & �� �ּ��̸�, * �� �� �ּ��� ���̱� ������,
  // *& �� ���� ���ȴ�.
  printf("arr[0] �� ���� �� : %d\n", *&*&*&*&*&*&*&arr[0]);
  printf("arr[0] �� ���� �� : %d\n", arr[0]);

  return 0;
}
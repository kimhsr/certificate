#include <stdio.h>

struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;
};

int main(void)
{
  // [���� ���]
  // �̸� : ��������
  // �߸ų⵵ : 2017��
  // ���� : 50��
  // ���ۻ� : ����ȸ��

  char *name = "��������";
  int year = 2017;
  int price = 50;
  char *company = "����ȸ��";

  // [�Ǵٸ� ���� ���]
  // �̸� : ��������
  // �߸ų⵵ : 2017��
  // ���� : 50��
  // ���ۻ� : ����ȸ��

  char *name2 = "��������";
  int year2 = 2017;
  int price2 = 100;
  char *company2 = "����ȸ��";

  // ����ü ���
  struct GameInfo gameinfo1;
  gameinfo1.name = "��������";
  gameinfo1.year = 2017;
  gameinfo1.price = 50;
  gameinfo1.company = "����ȸ��";

  // ����ü ���
  printf("-- ���� ��� ���� --\n");
  printf("  ���Ӹ�    : %s\n", gameinfo1.name);
  printf("  �߸ų⵵  : %d\n", gameinfo1.year);
  printf("  ����      : %d\n", gameinfo1.price);
  printf("  ���ۻ�    : %s\n", gameinfo1.company);

  // ����ü�� �迭ó�� �ʱ�ȭ
  struct GameInfo gameinfo2 = {"��������", 2017, 100, "����ȸ��"};
  printf("-- ���� ��� ���� --\n");
  printf("  ���Ӹ�    : %s\n", gameinfo2.name);
  printf("  �߸ų⵵  : %d\n", gameinfo2.year);
  printf("  ����      : %d\n", gameinfo2.price);
  printf("  ���ۻ�    : %s\n", gameinfo2.company);

  // ����ü �迭
  struct GameInfo gameArray[2] = {
    {"��������", 2017, 50, "����ȸ��"},
    {"��������", 2017, 100, "����ȸ��"}
  };
  printf("-- ���� ��� ���� --\n");
  printf("  ���Ӹ�    : %s\n", gameArray[2]);
  printf("  �߸ų⵵  : %d\n", gameArray[2]);
  printf("  ����      : %d\n", gameArray[2]);
  printf("  ���ۻ�    : %s\n", gameArray[2]);

  
  // // ����ü ������
  // struct GameInfo *gamePtr; // �̼Ǹ�
  // gamePtr = 

  return 0;
}
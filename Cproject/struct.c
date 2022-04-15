#include <stdio.h>

struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;
};

int main(void)
{
  // [게임 출시]
  // 이름 : 덕봉게임
  // 발매년도 : 2017년
  // 가격 : 50원
  // 제작사 : 덕봉회사

  char *name = "덕봉게임";
  int year = 2017;
  int price = 50;
  char *company = "덕봉회사";

  // [또다른 게임 출시]
  // 이름 : 봉덕게임
  // 발매년도 : 2017년
  // 가격 : 50원
  // 제작사 : 봉덕회사

  char *name2 = "봉덕게임";
  int year2 = 2017;
  int price2 = 100;
  char *company2 = "봉덕회사";

  // 구조체 사용
  struct GameInfo gameinfo1;
  gameinfo1.name = "덕봉게임";
  gameinfo1.year = 2017;
  gameinfo1.price = 50;
  gameinfo1.company = "덕봉회사";

  // 구조체 출력
  printf("-- 게임 출시 정보 --\n");
  printf("  게임명    : %s\n", gameinfo1.name);
  printf("  발매년도  : %d\n", gameinfo1.year);
  printf("  가격      : %d\n", gameinfo1.price);
  printf("  제작사    : %s\n", gameinfo1.company);

  // 구조체를 배열처럼 초기화
  struct GameInfo gameinfo2 = {"봉덕게임", 2017, 100, "봉덕회사"};
  printf("-- 게임 출시 정보 --\n");
  printf("  게임명    : %s\n", gameinfo2.name);
  printf("  발매년도  : %d\n", gameinfo2.year);
  printf("  가격      : %d\n", gameinfo2.price);
  printf("  제작사    : %s\n", gameinfo2.company);

  // 구조체 배열
  struct GameInfo gameArray[2] = {
    {"덕봉게임", 2017, 50, "덕봉회사"},
    {"봉덕게임", 2017, 100, "봉덕회사"}
  };
  printf("-- 게임 출시 정보 --\n");
  printf("  게임명    : %s\n", gameArray[2]);
  printf("  발매년도  : %d\n", gameArray[2]);
  printf("  가격      : %d\n", gameArray[2]);
  printf("  제작사    : %s\n", gameArray[2]);

  
  // // 구조체 포인터
  // struct GameInfo *gamePtr; // 미션맨
  // gamePtr = 

  return 0;
}
#include <stdio.h>

int main(void)
{
  // 포인터

  // [철수] : 101호 -> 메모리 공간의 주소
  // [영희] : 201호
  // [민수] : 301호
  // 각 문 앞에 '암호' 가 걸려 있음
  // int chulsu = 1; // 암호
  // int younghee = 2;
  // int minsu = 3;

  // printf("철수네 주소 : %d, 암호 : %d\n", &chulsu, chulsu);
  // printf("영희네 주소 : %d, 암호 : %d\n", &younghee, younghee);
  // printf("민수네 주소 : %d, 암호 : %d\n", &minsu, minsu);

  // // 미션맨 !

  // // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
  // int *MissionMan; // 포인터 변수
  // MissionMan = &chulsu;
  // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", MissionMan, *MissionMan);

  // MissionMan = &younghee;
  // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", MissionMan, *MissionMan);

  // MissionMan = &minsu;
  // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", MissionMan, *MissionMan);

  // // 두 번째 미션 : 각 암호에 3을 곱해라
  // MissionMan = &chulsu;
  // *MissionMan = *MissionMan * 3;
  // printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", MissionMan, *MissionMan);

  // MissionMan = &younghee;
  // *MissionMan = *MissionMan * 3;
  // printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", MissionMan, *MissionMan);

  // MissionMan = &minsu;
  // *MissionMan = *MissionMan * 3;
  // printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", MissionMan, *MissionMan);

  // // 스파이
  // // 미션맨이 바꾼 암호에서 2를 빼라 !
  // int *spy = MissionMan;
  // printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
  // spy = &chulsu;
  // *spy = *spy - 2; // 철수 = 철수 - 2;
  // printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

  // spy = &younghee;
  // *spy = *spy - 2; 
  // printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

  // spy = &minsu;
  // *spy = *spy - 2; 
  // printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

  // printf("\n ... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ... \n\n");

  // printf("철수네 주소 : %d, 암호 : %d\n", &chulsu, chulsu);
  // printf("영희네 주소 : %d, 암호 : %d\n", &younghee, younghee);
  // printf("민수네 주소 : %d, 암호 : %d\n", &minsu, minsu);

  // // 참고로.. 미션맨이 사는 곳의 주소는 ... &MissionMan 으로 확인
  // printf("미션맨의 주소 : %d\n", &MissionMan);
  // printf("스파이의 주소 : %d\n", &spy);

  // 배열 ?
  int arr[3] = {5, 10, 15};
  int *ptr = arr;
  for(int i=0; i<3; i++)
  {
    printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
  }
  for(int i=0; i<3; i++)
  {
    printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
  }
  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300;
  for(int i=0; i<3; i++)
  {
    // printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
    printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
  }
  for(int i=0; i<3; i++)
  {
    // printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
    printf("포인터 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
  }
  // *(arr + i) == arr[i] 똑같은 표현
  // arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
  printf("arr 자체의 값 : %d\n", arr);
  printf("arr[0] 의 주소 : %d\n", &arr[0]);

  printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr); // *(arr + 0)
  printf("arr[0] 의 실제 값 : %d\n", *&arr[0]);

  // *& 는 아무것도 없는 것과 같다. & 는 주소이며, * 는 그 주소의 값이기 때문에,
  // *& 는 서로 상쇄된다.
  printf("arr[0] 의 실제 값 : %d\n", *&*&*&*&*&*&*&arr[0]);
  printf("arr[0] 의 실제 값 : %d\n", arr[0]);

  return 0;
}
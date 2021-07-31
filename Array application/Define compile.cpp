#ifndef H1_H         // 헤더파일의 중복 선언을 방지하기위해 사용
#define H1_H  // ->  H1_H은는 다른 조건 컴파일상수와의 충돌을 피하기 위해 클래스 이름으로 하는게 좋음 !(여기선 클래스 안쓰임) 

void gen_arr(int a[10]);
void print_arr(int b[10]);
void Swap(int *const, int *const);
void sort_arr(int k[10]);


int arr_sum(int c[10]);
int find_number(int s, int d[10]);

#endif 
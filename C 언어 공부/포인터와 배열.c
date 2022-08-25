#include <stdio.h>

int main()
{
  // 배열의 특성
  // 1. 배열의 주소는 연속되어 있다.
  // 2. 배열의 이름은 포인터 변수와 같은 기능을 하며, 첫번째 요소의 주소값을 나타낸다.
	int arr[5] = {10, 20, 30, 40, 50};
  // 아래와 같이 & 연산자를 쓰지 않아도 arr 이름 자체가 주소값이기 때문에, 바로 포인터에 대입이 가능하다. arr 이름은 배열의 첫번째 원소의 주소값이므로 arrPtr이 가리키고 있는 값을 출력해보면 첫번째 원소값인 10이 출력된다.
  // scanf로 입력받을 때 다른 자료형들은 다 & 연산자를 붙여줘야 하지만, 문자열은 붙여주지 않아도 되는 이유이기도 하다. 배열 이름이 주소값이기 때문에 굳이 & 연산자를 붙여서 주소값을 나타내줄 필요가 없는 것이다.
	int *arrPtr = arr;

	printf("%d\n", *arrPtr); // 10
	printf("%d\n", arr[0]); // 10

	return 0;
}
/**
 * Preprocessor Directives
 * - 전처리기 문법은 컴파일 시점 이전에 Preprocessor 작업을 명령
 * - `#`으로 구분되고, 한 줄 단위로 해석하므로 세미콜론 등의 EOL 마커 없음
 * 
 * `include` directive: 헤더파일의 정보를 (컴파일 시점 직전에) 이 코드에 추가
 * - C는 빌트인 함수가 없으므로, standard library를 import하는 과정이 필요
 * - 헤더 파일에는 메크로나, 함수 프로토타입 정보가 있음
 * - 헤더를 include하는 것이 함수를 추가하는 것은 아님:
 *   헤더를 추가하여 컴파일된 object file은 다른 object에서 이 파일을 찾으려고 시도: linking
*/
#include <stdio.h>

int main(void)
{
	/**
	 * C99 이전에는 반드시 Declaration -> Statement 순으로 작성
	 * C99 이후부터 Declaration과 Statement가 번갈아 나타나도 되도록 허용!
	 * 
	 * 두 종류의 Statement 사용: Function Call, Return
	 * - C99에서는 int main일 시, return statement가 없어도 return 0을 추가
	*/
	printf("To C, or not to C; that is the question.\n");
	return 0;
}

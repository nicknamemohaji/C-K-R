프로세스 실행시, `main` 함수(루틴)이 실행된다. 
- main함수의 리턴값은 프로세스의 exit code가 되므로 `int main`으로 선언
- main함수는 아무런 인자도 받지 않거나(`int main(void)`), 프로세스의 인자들을 받는다(`int main(int argc, char **argv)`)

프로세스 종료는 main함수에서 return 하는 방식도 있지만, `exit(3)` 함수를 이용하는 방식도 있다. 이때 exit 함수는 모든 함수에서 호출 가능하므로 다른 함수에서 종료할 때 유용하다. 

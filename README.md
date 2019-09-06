# 알고리즘 문제풀이

백준, 삼성, 프로그래머스

### 폴더의 경로 설명 :
문제출처/사용언어/문제번호/소스+문제풀이정리

### 문제 폴더의 양식 : 
문제번호_난이도_공부내용

### C++ 설정
c_cpp의 경우 컴파일러 버전 c++11에 맞춤.
vscode의 오류 발견은 c++17 버전으로 설정 (c_cpp_properties.json 설정 필요)

위 방법 대신 setting.json에 아래 코드 추가로 해결 가능
```json
"C_Cpp.default.intelliSenseMode": "clang-x64",
// 이쪽이 더 정확함
"C_Cpp.intelliSenseEngine": "Tag Parser",
```

to_string 메소드를 사용하는 경우 multiple definition of `vsnprintf' 에러 발생
 - download mingw-w64-install.exe
 - setup to Version: 6.3.0, Architecture: i686, Threads: posix, Exception: dwarf and Build revision: 2.
 - 환경변수 설정 (바꿔주면 됨)
이렇게 해결함.
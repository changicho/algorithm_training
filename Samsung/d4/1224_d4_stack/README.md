# 1224. [S/W 문제해결 기본] 6일차 - 계산기3

[링크](https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14tDX6AFgCFAYD&categoryId=AV14tDX6AFgCFAYD&categoryType=CODE)

| 난이도 | 정답률(\_%) |
| :----: | :---------: |
|   d4   |    90.90    |

## 설계

### 시간복잡도

테스트케이스는 10개이며, 각 케이스당 중위표기식의 최대 길이는 나와있지 않다.

시간제한은 최대 10초이다.

중위표기식을 후위표기식으로 변환하는데 O(N), 후위표기식을 계산하는데 O(N)의 시간복잡도가 발생하므로
최악의 경우 시간복잡도는 O(20N) 이며 이는 제한시간 내에 충분히 해결 가능하다.

### 공간복잡도

더하기와 곱하기 연산을 수행하므로 수는 정수만 가능하며 최대 크기를 선언해야 한다.

연산자의 경우 문자 형태로 선언한다.

### 후위 표기식

우선 중위 표기식을 후위 표기식으로 변환한다.

변환 방법은 다음과 같다.

- 숫자인 경우 바로 answer에 덧붙임
- 연산자인 경우 stack의 top과 현재연산자의 우선순위에 따라 분기처리한다
  - 현재 연산자가 top보다 우선순위가 높음
    - stack에 push
  - 현재 연산자가 top보다 우선순위가 낮음
    - 현재 연산자가 우선순위가 높아질 때까지 stack pop
    - pop한 연산자는 answer에 덧붙임

### 후위 표기식 계산

후위 표기식의 계산은 다음과 같이 수행한다.

숫자를 저장할 stack 배열을 선언한다.

현재 글자가 숫자인지, 연산자인지에 따라 다르다.

- 숫자인 경우 stack에 push
- 연산자인 경우
  - stack 의 top과 두번째 top을 pop하고 두 수를 연산해 stack에 push한다.

마지막에 stack에는 하나의 숫자만 남아있으며 이것이 연산 결과이다.

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      5       |       1        |

## 고생한 점
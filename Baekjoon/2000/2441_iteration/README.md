# 2441. 별 찍기 - 4

[링크](https://www.acmicpc.net/problem/2441)

|   난이도   | 정답률(\_%) |
| :--------: | :---------: |
| Bronze III |   73.533    |

## 설계

### 시간복잡도

N은 최대 100 까지이고, 찍히는 별의 갯수는 최대 1부터 N까지의 합 이므로 5050이다.

이는 제한시간 1초 내에 충분하다.

문제의 풀이법은 다음 두가지 이다.

1. 2차원 배열의 이용
2. 분기 처리로 공백, \* 출력

두 방법 모두 시간복잡도는 동일하므로 2차원 배열을 이용하는 방법을 선택함

### 2차원 배열의 이용

N은 최대 100 까지이므로 크기가 [100][100]인 2차원 배열을 선언한다.

배열 내에는 공백 혹은 \* 둘 중 하나의 데이터만 들어있으면 되므로 bool형식으로 선언한다.

```cpp
bool map[100][100];
```

문제의 조건에 따라 별을 채워넣는다.

- 첫번째 줄부터 아래로 순회한다.
- 현재 줄 에서 끝부터 별을 채워넣는다.
- 채워넣는 별의 갯수는 현재 줄이 몇번째 인지에 따라 다르다.

위를 코드로 바꾸고 index 처리를 수행하면 다음과 같다.

```cpp
for (int i = 0; i < N; i++) {
  for (int j = N - 1; j >= i; j--) {
    stars[i][j] = 1;
  }
}
```

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점

디버깅 과정 없이 머리로만 풀어 한번의 오답이 발생함
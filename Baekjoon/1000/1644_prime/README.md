# 1644. 소수의 연속 합

[링크](https://www.acmicpc.net/problem/1644)

|  난이도  | 정답률(\_%) |
| :------: | :---------: |
| Gold III |     42      |

## 설계

### 에라토스테네스의 체

에라토스테네스의 체를 이용해 N까지의 소수를 전부 구해 primes 벡터에 집어넣는다.

### 연속합

primes 벡터는 자동적으로 수가 오름차순으로 정렬되어있다.

따라서 현재 index부터 index를 증가시키며 더해보고 N과 sum이 같으면 count +=1, N > sum 인 경우 sum을 초기화 한뒤, 맨 처음 index를 1 증가시킨다

## 정리

| 내 코드 | 빠른 코드 |
| :-----: | :-------: |
|  36 ms  |           |

## 고생한 점
# 8458. 원점으로 집합

[링크](https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWzaq5KKk_ADFAVU&categoryId=AWzaq5KKk_ADFAVU&categoryType=CODE)

난이도 : d4
정답률 : \_12%

## 설계

### 제약조건

점은 최대 10개

### answer의 최대값

총 이동거리 diff의 값의 max는 2 X 10^9 이다.

1부터 10^5까지 더하는 경우 max를 충분히 넘기고도 남으므로

절대 모든점이 원점으로 돌아가지 못하는 경우를 제외하고는

answer의 값은 10^5를 넘지 않는다.

### 원점으로 이동할 수 없는 경우

모든 점의 원점으로부터의 거리가 짝수이거나 홀수여야 한다.
이 외에는 전부 원점으로 이동할 수 없다.

### 이동 처리

점의 x 좌표와 y좌표의 원점으로 부터의 거리를 구해 더한다.

이 더한 값을 diff라고 하자.

i = 0부터 증가시키며 각 점의 떨어진 길이에서 뺀다.

먼저 원점에 도착한 점의 경우 다른 점이 도착할 때 까지 +1, -1을 반복한다고 가정하자.

## 정리

내 코드 : 106 ms;
빠른 코드 : 10 ms;

처음에 각 점들의 diff를 구하고, 전부 홀수인지 짝수인지 판별한다.

이 조건을 만족하지 않으면 -1

전부 짝수이거나 홀수인 경우, 먼저 원점에 도달한 점은,
다른 점이 도착할 때까지 의미없는 이동을 반복할 것이다.

따라서 가장 큰 diff인 경우만 판별하면 된다.

모든 점의 diff == 0일수 있기 때문에 answer=0부터 for문을 수행한다.

max_diff에서 answer를 빼가면서, max_diff가 0 이하가 되었을 때 다음 두가지로 나뉜다.

- max_diff가 홀수(짝수)인데, 현재 answer가 홀수(짝수)
- max_diff가 홀수(짝수)인데, 현재 answer가 짝수(홀수)

위의 경우는 다음 answer, 그 다음 answer의 거리만큼 이동시켜 주어야 원점에 도달한다.
아래의 경우는 다음 answer의 거리만큼만 이동시켜 주면 원점에 도달한다.

## 고생한 점

계속 시간초과가 발생했다.

max_diff만 비교하는 경우에도 100 ms 이상 걸리는 것을 볼 때,

테스트 케이스 1000개는 우습게 볼 것이 아니다.
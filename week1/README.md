# Week 1 문제 풀이

## 📌 기능개발 (Programmers Level 2)
🔗 문제 링크: [기능개발](https://school.programmers.co.kr/learn/courses/30/lessons/42586)

### ✅ 풀이 접근법
  **- 각 기능별 며칠이 걸리는지 계산하여 `v` 벡터에 저장**
  👉 `(100 - progress + speed - 1) / speed` 를 이용한 **올림 공식**

    ```
    cpp
    v.push_back(((100 - progresses[i]) + speeds[i] - 1) / speeds[i]);
    ```
 
 **-큐 처럼 생각하여 top을 기준으로 두고, top보다 큰 수가 나올 때까지 pop**


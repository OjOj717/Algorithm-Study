
# # 브루트포스 알고리즘

<br>

## 📅 STUDY LOG 
**Created:** 2026.02.04 
**Last Updated:** 2026.02.04

---

## 🗝️ Key Concept

- **핵심 요약**: 가능한 모든 경우의 수를 하나도 빠짐없이 탐색하여 정답을 찾아내는 가장 단순하고 무식하지만 확실한 알고리즘 기법
<br>
- **관련 키워드**: #완전탐색 #전수조사 #순열 #조합 #재귀 #백트래킹
<br>
- **사용되는 상황**:
	1. 입력 크기(N)가 작아서 모든 경우를 계산해도 빨리 끝날 때.
	2. 복잡한 알고리즘을 생각하기 전, 정답 기준을 세우고 싶을 때.
	3. 경우의 수가 유한할 때.


---

## 📓 Theory

### 정의

 - **'Brute(무식한) + Force(힘)'**이라는 이름처럼, 지능적인 알고리즘을 사용하기보다 컴퓨터의 빠른 연산 능력을 믿고 모든 가능성을 시도해보는 방법
 <br>
 - **완전 탐색(Exhaustive Search)**이라고도 불린다

  

### 성질

1.  **완전성**: 이론적으로 해가 존재한다면 반드시 찾아냄
<br>
2. **단순성**: 설계와 구현이 매우 직관적이며 대체로 별도의 복잡한 자료나 수학적 증명이 필요 없음.
<br>
3.  **비효율성**:  데이터의 양이 조금만 늘어도 연산 횟수가 기하급수적으로 증가함

### 증명

<details>
<summary>증명 보기 (클릭)</summary>

  

특정 수학적 귀납법이 아닌 전수조사의 논리에 기반한다.
집합론적 관점에서 만약 어떤 집합 S가 모든 가능한 해를 포함하고 있다면,
$s \in S$인 모든 요소에 대해 조건 $P(s)$를 검사했을 때, $P(s)$가 참인 $s$를 찾는 과정은 논리적으로 완벽하다.
따라서 시간 복잡도만 허용된다면 가장 확실한 알고리즘입니다.

  

</details>


### 시각 자료
  

---

## ⌛ Complexity

- 시간 복잡도:

- 공간 복잡도:

- 추가 메모: 상수 요인, 최악/평균/최선


---
## ⚠️ Caution

- 입력 크기/경계값 주의

- 오버플로우 주의

- 특정 케이스에서 시간 초과가 날 수 있음

---

## ⚙️ Pseudocode

```text

# 의사코드 형태

function Example(input):

    initialize ...

    for i in range(0, n):

        ...

    return result

```

---

## 💻 구현 (Code snippets)

  
```python

# Python implementation

def example(arr):

    # TODO: 구현

    return None

  

if __name__ == "__main__":

    print(example([1,2,3]))

```

  
```cpp

// C++ implementation

#include <bits/stdc++.h>

using namespace std;

int main() {

    // TODO:

    return 0;

}

```

  
---

## ☑️ Beakjoon Problems

- **1000**  

  - 핵심 아이디어:  

  - 해법 요약:

  - 핵심 구현 포인트:

- **1001**

---

## 📝 Memo

<br>

> Written by **OjOj717**
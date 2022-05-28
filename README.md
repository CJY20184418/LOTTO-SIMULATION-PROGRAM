## 🎲 로또 시뮬레이션 프로그램


![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)

#### 📑 프로젝트 알고리즘
---
- rand() 함수로 난수를 생성하여 실행할 때마다 바뀌는 로또 번호를 생성
- 1부터 45의 숫자 중 발생된 7개의 로또 번호와 내가 입력한 6개의 번호가 동일한 개수에 따라 if문으로 그에 따른 당첨 결과를 출력


#### 👨‍👨‍👧‍👦 팀원
---
팀원|역할|
---|---|
김훈광|GUI 프로그래밍|
최준영|로또 시뮬레이션 프로그래밍 & read me 작성|
김동현|로또 시뮬레이션 프로그래밍 & read me 작성|
이채영|로또 시뮬레이션 프로그래밍 & read me 작성|


#### ✏️ 수정 사항
---
- [X] 1.로또의 2등과 3등은 보너스 번호의 차이만 있으므로, 구분할 수 있는 기준을 따로 생성해야 함.
 ``` c++
    if (count == 5)
    {
        for (int i = 0; i < 6; i++)
        {
            if (lotto[i] == number[6])
            {
                second++;
                break;
            }
        }
    }

 ```
 
- [X] 2. my num에 모두 같은 수를 입력할 , 그중 하나라도 lotto num과 동일할 경우 1등에 당첨되는 오류가 있으므로 my num에 같은 번호를 작성할 수 없도록 해야 함.
  ``` c++
    for (int i = 0; i<6; i++)
    { 
        for (int b = 0; b<6; b++)
            { if(i==b){ } else if(lotto[i] == lotto[b]){ printf("중복된 숫자는 입력할 수 없습니다."); exit(1); } } 
    }

- [ ] 3. 중복된 숫자가 입력되었을 때 프로그램이 종료되는 것이 아니라 다시 숫자를 입력할 수 있게 해야 함.


- [ ] 4. 1부터 45이외의 숫자가 입력되었을 때 숫자를 다시 입력할 수 있게 해야 함.

## 🎲 로또 시뮬레이션 프로그램


 ![iOS badge](https://img.shields.io/badge/%20-c%2B%2B-blue)       ![iOS badge](https://img.shields.io/badge/%20-GitHub-black)


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
- [X] 1.로또의 2등과 3등은 보너스 번호의 차이만 있으므로, 구분할 수 있는 기준을 따로 생성해야 함
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
    /* count(lotto num과 my num의 동일 개수)가 5일 때 number[6](7번째번호, bonus num)이 
    my num과 하나라도 일치할 경우 second==1, 불일치의 경우 second==0) */
 ```
 
- [X] 2. my num에 모두 같은 수를 입력하여, 그중 하나라도 lotto num과 동일할 경우 1등에 당첨되는 오류가 있으므로 my num에 같은 번호를 작성할 수 없도록 해야 함.
      for (int i = 0; i<6; i++)
        { 
            for (int b = 0; b<6; b++)
            { if(i==b){ } else if(lotto[i] == lotto[b]){ printf("중복된 숫자는 입력할 수 없습니다."); exit(1); } } 
        }

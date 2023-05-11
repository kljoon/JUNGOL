# 119 : 디버깅 - 형성평가4

### 문제
**다음의 프로그램을 작성하고 디버깅을 하며 ①, ②, ③ 위치의 값을 watches에서 a의 값을 출력하시오.**  
**즉, ①에서 a의 값,  ②에서 a의 값, ③에서 a의 값을 1,2,3과 바꾸어 출력하면 됩니다.**
  
  **(PC의 시간이 맞는지 확인하세요. 시간이 다르면 결과가 틀릴 수 있습니다.)**
  
![image](https://github.com/kljoon/JUNGOL/assets/117913703/1b4deaf4-0848-4db8-a56b-c3f5c996cb6e)

### 입력형식
**① ② ③ 의 값만 출력**

**Hint!**
``` python
# python 의 경우 p, q, r 위치에서의 a값들을 구하여 print(p, q, r) 에서 p, q, r 을 대신하여 작성한다.

from datetime import datetime

now = datetime.now()  
a = 0  
a = now.year - 1900 # p  
a += now.month - 1  # q  
a += now.day

print(p, q, r)      # r 
```

``` java
/* java의 경우 */

public class Main {

    public static void main(String[] args) {

        java.util.Calendar cal = java.util.Calendar.getInstance();

        int a = 0; a = cal.get ( java.util.Calendar.YEAR )-1900; //---① 

        a += cal.get ( java.util.Calendar.MONTH ); //---② 

        a += cal.get ( java.util.Calendar.DATE ) ; 

        System.out.printf("%d %d %d ", 1, 2, 3); //---③ //① ② ③에서의 a값을 1, 2, 3자리에 각각 써 넣는다. 
    }
}
```

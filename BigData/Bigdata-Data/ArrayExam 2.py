import numpy as np

x = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
              11, 12, 13, 14, 15, 16, 17, 18, 19, 20])

# 이 배열에서 3의 배수를 찾아라.
# 이 배열에서 4로 나누면 1이 남는 수를 찾아라
# 이 배열에서 3을 나누면 나누어지고 4로 나누면 1이 남는 수를 찾아라

print(x[x % 3 == 0])
print(x[x % 4 == 1])
print(x[(x % 3 == 0 ) & ( x % 4 == 1)])

#자료형
# - ndarray는 원소가 모두 같은 자료형이어야 함
# - 자료형을 직접 지정하려면 dtype 인수를 사용
# - 배열의 자료형을 알아보고자 할 때는 dtype 속성을 확인
# - float64 float은 dtype fullname 64는 비트 수
# bool    | b |  불리언            b
# int     | i |  정수             i8
# uint    | u |  부호 없는 정수      u8
# float   | f |  부동소수점         f8
# string_ | S |  바이트 문자열      S24
# Unicoe_ | U |  유니코드 문자열     U24

x = np.array([1,2,3])
print(x.dtype) # int64

x = np.array([1.0, 2.0, 3.0])
print(x.dtype) # float64

x = np.array([1,2,3.0])
print(x.dtype) # float64

x = np.array([1,2,3], dtype='f')
print(x.dtype) # float32
print(x[0]) # 1.0

x = np.array([1,2,3], dtype='U')
print(x.dtype) # <U1
print(x[0]) # 1

# 무한대와 Not a Number
# - 넘파이에는 무한대(np.inf)오 정이 불가능한 숫자(np.nan)이 정의됨
print(np.array([0, 1, -1, 0]) / np.array([1, 0, 0, 0])) # [  0.  inf -inf  nan]

print(np.log(0)) # -inf

print(np.exp(-np.inf)) # 0.0

# 배열 생성 방법
# -zeros : 모든 값을 0ㅇ로 설정하고 생성 (크기 설정 필요)
a = np.zeros(5) 
print(a) # 0. 0. 0. 0. 0.]

b = np.zeros((2,3))
print(b) # [[0. 0. 0.]
         #  [0. 0. 0.]]
         
c = np.zeros((5, 2), dtype = "i")
print(c) # [[0 0]
         #  [0 0]
         #  [0 0]
         #  [0 0]
         #  [0 0]]
         
# 배열 생성 방법
# - ones : 모든 값을 1로 설정하고 생성 (크기 설정 필요)
# - ones_list, zeros_lic : 크기 설정 없이 다른 배열과 같은 크기로 생성
e = np.ones((2, 3, 4), dtype="i8")
print(e) # [[[1 1 1 1]
         #   [1 1 1 1]
         #   [1 1 1 1]]

         #  [[1 1 1 1]
         #   [1 1 1 1]
         #   [1 1 1 1]]]
         
f = np.ones_like(b, dtype="f")
print(f) # [[1. 1. 1.]
         #  [1. 1. 1.]]

fg = np.zeros_like(b, dtype="f")
print(fg)
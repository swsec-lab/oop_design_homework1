# Homework 1 

## 📌 과제 개요
이 과제에서는 C++을 사용하여 학생들의 성적 정보를 관리하는 프로그램을 구현합니다. 이름, 학번, 중간/기말고사 점수를 저장하고, 다양한 기능을 통해 데이터를 처리합니다. `fillStudentRecord()` 함수는 이미 50명의 학생 데이터를 초기화하며, 나머지 기능은 여러분이 직접 구현해야 합니다.

## 🎯 학습 목표
- 구조체와 배열을 활용한 데이터 저장 및 검색
- 조건에 따른 최댓값 및 평균값 계산
- 함수 분할 및 모듈화된 프로그래밍
- C++ 기본 문법 및 입출력 처리

## 📂 제공 파일
- `homework1.h`: `StudentStruct` 정의 및 함수 선언
- `main.cpp`: 메인 로직과 구현해야 할 함수들 포함

## 🧩 구현해야 할 함수 목록
다음 함수들의 `TODO` 부분을 채워 완성하세요:

1. `findBestStudentInMidterm()` – 중간고사 최고 점수 학생의 ID 반환
2. `findBestStudentInFinal()` – 기말고사 최고 점수 학생의 ID 반환
3. `findBestStudent()` – 중간+기말 평균이 가장 높은 학생의 ID 반환
4. `findStudentByStudentID(int id)` – 주어진 학번을 가진 학생의 인덱스 반환
5. `modifyRecord(StudentStruct &student)` – 특정 학생 정보 수정
6. `addStudent(...)` – 새로운 학생 추가
7. `deleteStudent(int id)` – 특정 학생 삭제
8. `countNumberOfStudent()` – 현재 등록된 학생 수 반환
9. `getMidtermAverage()` – 중간고사 평균 계산
10. `getFinalAverage()` – 기말고사 평균 계산
11. `getTotalAverage()` – 중간+기말 평균 계산
12. `printStudentInfo(int id)` – 특정 학생의 이름과 학번 출력


## 🧪 테스트 방법
다 구현한 후, 아래 명령어를 통해 테스트를 실행하세요:

### Windows 사용자
```bash
.\test1.bat
```

### MacOS/Linux 사용자
```bash
/bin/bash test1.sh
```


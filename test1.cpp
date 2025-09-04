#include <iostream>
#include "homework1.h"

void printBestStudent()
{
    int bestMidtermId = findBestStudentInMidterm();
    int bestFinalId = findBestStudentInFinal();
    int bestTotalId = findBestStudent();

    std::cout << "Best Midterm Student:\n";
    printStudentInfo(bestMidtermId);

    std::cout << "Best Final Student:\n";
    printStudentInfo(bestFinalId);

    std::cout << "Best Total Score Student:\n";
    printStudentInfo(bestTotalId);
}
void printAverage()
{
    int numOfStudent = countNumberOfStudent();
    float midtermAvg = getMidtermAverage();
    float finalAvg = getFinalAverage();
    float totalAvg = getTotalAverage();

    std::cout << "# of Student: " << numOfStudent << std::endl;
    std::cout << "Midterm Average: " << midtermAvg << std::endl;
    std::cout << "Midterm Average: " << finalAvg << std::endl;;
    std::cout << "Midterm Average: " << totalAvg << std::endl;;
}

void printStudentList(){
    for(int id = 1000; id < 1100; ++id){
        printStudentInfo(id);        
    }
}

int main() {
    fillStudentRecord();

    std::cout << "---------------------------" << std::endl;
    std::cout << "Test 1" << std::endl;
    printBestStudent();
    printAverage();

    std::cout << "---------------------------" << std::endl;
    std::cout << "Test 2" << std::endl;
    StudentStruct charlie("Charlie", 1003, 70, 99.0);
    int idx = findStudentByStudentID(charlie.id);

    if(idx >= 0)
        modifyRecord(charlie);

    addStudent("Ana", 1051, 88, 65);
    addStudent("Suji", 1052, 90, 93);
    addStudent("Zhang", 1053, 100, 40);

    deleteStudent(1011);
    deleteStudent(1029);

    printBestStudent();
    printAverage();

    std::cout << "---------------------------" << std::endl;
    std::cout << "Test 3" << std::endl;
    printStudentList(); 
    
    return 0;
}
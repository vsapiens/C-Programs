// Erick Francisco González Martínez
// A01039859
// September, 2017
// Final Grade
// hw3_pr4.cpp
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>
#include <cmath>

using namespace std;
/*
 readMonthlyEvaluations
 Function that requests the user for the value of their monthly evaluations.
 Parameters: none
 Returns: fMyMonthlyEvaluations(floating point number) to be calculated in the mean.
 */
float readMonthlyEvaluations()
{
    float fMyMonthlyEvaluations;
    cout << "Please enter the value of your Monthly Evaluations (enter decimals if necessary)" <<endl;\
    cin >> fMyMonthlyEvaluations;
    return fMyMonthlyEvaluations;
}
/*
 readMiniProject
 Function that requests the user for the value of their project
 Parameters: none
 Returns: fMyMiniProject(floating point number) to be calculated in the mean.
 */

float readMiniProject()
{
        float fMyMiniProject;
    cout << "Please enter the value of your Mini Project (enter decimals if necessary)" <<endl;
    cin >> fMyMiniProject;
    return fMyMiniProject;
}
/*
 readSemanaI
 Function that requests the user for the value of their performance in Semana I
 Parameters: none
 Returns: fMySemanaI(floating point number) to be calculated in the mean.
 */

float readSemanaI()
{
    float fMySemanaI;
    cout << "Please enter the value of your Semana i (enter decimals if necessary)" <<endl;
    cin >> fMySemanaI;
    return fMySemanaI;
}
/*
 readFinalExam
 Function that requests the user for the value of their final exam
 Parameters: none
 Returns: fMySemanaI(floating point number) to be calculated in the mean.
 */
float readFinalExam()
{
    float fMyFinalExam;
    cout << "Please enter the value of your Final Exam (enter decimals if necessary)" <<endl;
    cin >> fMyFinalExam;
    return fMyFinalExam;
}
/*
 calculateFinalGrade
 This function calculate the volume.
 Parameters: fTheirMonthlyEvaluations (floating point number),fTheirMiniProject(floating point number), fTheirSemanaI (floating point number), fTheirFinalExam(floating point number) to calculate the mean.
 Returns: the mean calculated from multiplying all the values times the real percentile value.
 */

float calculateFinalGrade(float fTheirMonthlyEvaluations,float fTheirMiniProject, float fTheirSemanaI,float fTheirFinalExam)

{
    float fMyFinalGrade;
    
    fMyFinalGrade = (fTheirMonthlyEvaluations * 0.6)+ (fTheirMiniProject * 0.05) + (fTheirSemanaI *  0.05) + (fTheirFinalExam * 0.3);
    return fMyFinalGrade;
}
/*
 showResult
 This function will display the resulting mean onto the screen.
 Parameters: show the final grade (floating point number) result from the calculation
 Returns: nothing
 */
void showResult(float fMyFinalGrade){
    
    cout<< "The Final Grade is ";
    cout<< fMyFinalGrade <<endl;
}
/*
 main
 This function calls the input, processing and output functions that together calculates the mean
 Parameters: none
 Returns: 0 (program is ok)
 */

int main() {
    //First Section: declare and initialize Variables
    float fFinalGrade,fMonthlyEvaluations,fMiniProject,fSemanaI,fFinalExam;
    //Second Section: input function requesting values of all the evaluations
    fMonthlyEvaluations = readMonthlyEvaluations();
    fMiniProject = readMiniProject();
    fSemanaI = readSemanaI();
    fFinalExam = readFinalExam();
    //Third Section: Process data into information
    fFinalGrade = calculateFinalGrade(fMonthlyEvaluations,fMiniProject,fSemanaI,fFinalExam);
    //Fourth Section: provide results to the user
    showResult(fFinalGrade);
    return 0;
}

/*
 --->Analysis
 Input: (fMyMonthlyEvaluations,positive), (fMyMiniProject,positive), (fMySemanaI,positive),(fMyFinalExam,positive)
 Process: fMyFinalGrade = (fTheirMonthlyEvaluations * 0.6)+ (fTheirMiniProject * 0.05) + (fTheirSemanaI *  0.05) + (fTheirFinalExam * 0.3);
 Output: fMyFinalGrade
 
 --->Design
 
 Process "Grades"
	Escribir "Please enter the average of your monthly evaluations"
	Leer	Month
	Escribir "Please enter the value of your Mini-Project"
	Leer 	Project
	Escribir "Please enter the value of the I-Week"
	Leer 	Week
	Escribir "Please enter the value of your Final Exam"
	Leer 	Final
	Process
	Grade <- (0.05*Week+0.3*Final+0.05*Project+0.6*Month)
	Output
	Escribir "Your final grade is " grade "/100."

Test Cases
1. Average  Month: 80   Project:69    Week:100	  Final:80 -> Grade=80.45/100
2. Average  Month: 69   Project:100    Week:50	  Final:70 -> Grade=69.9
3.Average  Month: 70   Project:80    Week:75	  Final:65 -> Grade=69.25 */

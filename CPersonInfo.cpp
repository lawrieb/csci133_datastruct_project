// ============================================================================
// File: CPersonInfo.cpp
// ============================================================================
// Implementation file for the class CPersonInfo
// ============================================================================

#include <iostream>
#include <string>
#include <iomanip>
#include "CPersonInfo.h"

using namespace std;



// ==== CPersonInfo::CPersonInfo ===============================================
//
// This is the CPersonInfo constructor.  It sets the first and last name to the
// empty string and sets age, checking, and savings to zero.
//
// Input:
//       void
//       
// Output:
//       Nothing
//
// =============================================================================

CPersonInfo::CPersonInfo(): m_fname(""),m_lname(""),m_age(0),m_checking(0),m_savings(0)
{
	
}// End Default Constructor



// ==== CPersonInfo::CPersonInfo ===============================================
//
// This is the CPersonInfo type constructor.  It initializes the private data
// members to the arguments passed.
//
// Input:
//       fname      [IN]    - A const string reference variable that represents
//                              the first name of a person.
//       lname      [IN]    - A const string reference variable that represents
//                              the last name of a person.
//       age        [IN]    - An int for the person's age.
//       checking   [IN]    - A double for person's amount in their checking.
//       savings    [IN]    - A double for person's amount in their savings.
//       
// Output:
//       void
//
// =============================================================================

CPersonInfo::CPersonInfo(const std::string &fname, const std::string &lname,
               int age, double checking, double savings):
               m_fname(fname),m_lname(lname),m_age(age),m_checking(checking),m_savings(savings)
{
	
}// End Type Constructor



// ==== CPersonInfo::SetFirstName ==============================================
//
// This function assigns the first name to m_fname.
//
// Input:
//       fname      [IN]    - A const string reference variable that represents
//                              the first name of a person.
//       
// Output:
//       void
//
// =============================================================================

void		CPersonInfo::SetFirstName(const std::string &fname)
{
	m_fname = fname;
}// End SetFirstName()


// ==== CPersonInfo::SetLastName ===============================================
//
// This function assigns the last name to m_lname.
//
// Input:
//       lname      [IN]    - A const string reference variable that represents
//                              the last name of a person.
//       
// Output:
//       void
//
// =============================================================================

void		CPersonInfo::SetLastName(const std::string &lname)
{
	m_lname = lname;
}// End SetLastName()



// ==== CPersonInfo::SetAge ====================================================
//
// This function assigns the age to m_age.
//
// Input:
//       age        [IN]    - An int for the person's age.
//       
// Output:
//       void
//
// =============================================================================

void		CPersonInfo::SetAge(int age)
{
	m_age = age;
}// End SetAge()



// ==== CPersonInfo::SetChecking ===============================================
//
// This function assigns the checking to m_checking.
//
// Input:
//       checking   [IN]    - A double for person's amount in their checking.
//       
// Output:
//       void
//
// =============================================================================

void		CPersonInfo::SetChecking(double checking)
{
	m_checking = checking;
}// End SetChecking()



// ==== CPersonInfo::SetSavings ================================================
//
// This function assigns the savings to m_savings.
//
// Input:
//       savings    [IN]    - A double for person's amount in their savings.
//       
// Output:
//       void
//
// =============================================================================

void		CPersonInfo::SetSavings(double savings)
{
	m_savings = savings;
}// End SetSavings()



// ==== CPersonInfo::GetFirstName ==============================================
//
// This function returns the first name.
//
// Input:
//       void
//       
// Output:
//       A string that represents the first name of a person.
//
// =============================================================================

std::string	CPersonInfo::GetFirstName() const
{
	return m_fname;
}// End GetFirstName()



// ==== CPersonInfo::GetLastName ===============================================
//
// This function returns the last name.
//
// Input:
//       void
//
// Output:
//       A string that represents the last name of a person.
//
// =============================================================================

std::string  CPersonInfo::GetLastName() const
{
	return m_lname;	
}// End GetLastName()



// ==== CPersonInfo::GetAge ====================================================
//
// This function returns the age.
//
// Input:
//       void
//
// Output:
//       An int that represents the age of a person.
//
// =============================================================================

int			CPersonInfo::GetAge() const
{
	return m_age;
}// End GetAge()



// ==== CPersonInfo::GetChecking ===============================================
//
// This function returns the amount in checking.
//
// Input:
//       void
//
// Output:
//       A double that represents the amount in a person's checking account.
//
// =============================================================================

double		CPersonInfo::GetChecking() const
{
	return m_checking;
}// End GetChecking()



// ==== CPersonInfo::GetSavings ================================================
//
// This function returns the amount in savings.
//
// Input:
//       void
//
// Output:
//       A double that represents the amount in a person's savings account.
//
// =============================================================================

double		CPersonInfo::GetSavings() const
{
	return m_savings;
}// End GetSavings()



// ==== CPersonInfo::operator== ================================================
//
// This function checks if two CPersonInfo objects are the same (checks all
// member variables).
//
// Input:
//       rhs    [IN]    - A const CPersonInfo reference object.
//       
// Output:
//       Returns true if the objects are the same, false otherwise.
//
// =============================================================================

bool		CPersonInfo::operator==(const CPersonInfo &rhs)
{
	return (m_age == rhs.m_age);
}// End operator==



// ==== CPersonInfo::operator> =================================================
//
// This function checks if left-hand side CPersonInfo object is greater than
// right-hand side CPersonInfo object.
//
// Note: We are only checking for the data member m_age to be greater than. The
//          goal is to one day test if all data members or others.
//
// Input:
//       rhs    [IN]    - A const CPersonInfo reference object.
//
// Output:
//       Returns true if lhs age is greater than rhs age, otherwise false.
//
//
// =============================================================================

bool		CPersonInfo::operator>(const CPersonInfo &rhs)
{
	return (m_age > rhs.m_age);
}// End operator> +greaterthan


// ==== CPersonInfo::operator< =================================================
//
// This function checks if left-hand side CPersonInfo object is less than
// right-hand side CPersonInfo object.
//
// Note: We are only checking for the data member m_age to be less than. The
//          goal is to one day test if all data members or others.
//
// Input:
//       rhs    [IN]    - A const CPersonInfo reference object.
//
// Output:
//       Returns true if lhs age is less than rhs age, otherwise false.
//
// =============================================================================

bool		CPersonInfo::operator<(const CPersonInfo &rhs)
{
	return (m_age < rhs.m_age);
}// End operator< +lessthan



// ==== operator>> =============================================================
//
// The function overloads the extraction operator.  Its objective is to read the
// first name, last name, and age from a person and the dollar amount in their
// checking and savings account from the object ins.
//
// Input:
//       ins    [IN]        - An istream reference to read from.
//       person [IN/OUT]    - A CPersonInfo reference object to store what is
//                              read from ins.
// Output:
//       An istream reference.
//
// =============================================================================

std::istream&	operator>>(std::istream &ins, CPersonInfo &person)
{
	
	std::string  fname;
	std::string  lname;
	int          age;
	double       checking;
	double       savings;
	
	ins 	>>fname >> lname 
			>> age >> checking >> savings;

	person.SetFirstName(fname);
	person.SetLastName(lname);
	person.SetAge(age);
	person.SetChecking(checking);
	person.SetSavings(savings);
	
	return ins;
}// End operator>>



// ==== operator<< =============================================================
//
// This is the overloaded insertion operator. Its objective is to nicely display
// the person's information to the object outs.
//
// Input:
//       outs   [IN]        - An ostream reference to display to.
//       person [IN/OUT]    - A const CPersonInfo reference object to display.
//
// Output:
//       An ostream reference.
//
// =============================================================================


std::ostream&	operator<<(std::ostream &outs,const CPersonInfo &person)
{
	outs << "\n" << person.GetFirstName()
		 << "\t" << person.GetLastName()
		 << "\t" << person.GetAge()
		 << "\t" << fixed << setprecision(2) << setw(10) << person.GetChecking()
		 << "\t" << fixed << setprecision(2) << setw(10) << person.GetSavings();

	return outs;
}

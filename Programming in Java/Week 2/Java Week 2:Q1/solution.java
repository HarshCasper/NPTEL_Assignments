class Student { 
	// This is a method in class Student
    public void print() { 
		System.out.println("Hi! I am class STUDENT."); 
    } 
}

public class Question21{ 
    public static void main(String args[]){
    // Create an object of class Student

// Call 'print()' method of class Student

	// Create an object of inner class Student
	Student s1= new Student();
	// Access the 'print()' method of the inner class Student using the inner class object
	s1.print();
  }
  }

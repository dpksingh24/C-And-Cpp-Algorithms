class Student {
    // method define
    String name; // name <default> value is ----> NULL
    int rollNo; // rollNo <default> value is ----> 0
    // rollNO and name is instance variable ( if no value is assign then jvm will
    // assign )
    // each var has its own instance var
    {
        name = "jetha";
        rollNo = 123;
    }

    void show() {
        System.out.println("Name of student " + name);
        System.out.println("Rollno of student " + rollNo);
    }
}

class C2 {
    public static void main(String[] args) {
        Student st1;
        st1 = new Student();
        Student st2 = new Student();

        st2.name = "deepak";
        st2.rollNo = 7;

        st1.show();
        st2.show();
        // Every time an object is created using the new() keyword, at least one
        // constructor is called.
        // modifer <default> <public> <protected>
        // has a relation
        // is a relation ---> inharitace
        Student st1 = new Student();
        Student st2 = new Student();
        st1.show();
        st2.show();
    }
}
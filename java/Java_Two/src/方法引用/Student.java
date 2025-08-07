package 方法引用;

public class Student {
    private String name;
    private int age;

    public Student(String s){
        //这里的s依次表示流里面的每一个数据
        String[] arr = s.split(",");
        this.name = arr[0];
        this.age = Integer.parseInt(arr[1]);
    }

    public Student(){

    }

    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }

}

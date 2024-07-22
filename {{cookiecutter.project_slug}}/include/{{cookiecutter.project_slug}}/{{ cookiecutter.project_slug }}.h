#ifndef {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_H
#define {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_H

class MyClass {
public:
    MyClass();
    ~MyClass();

    void initialize();
    void update();
    static const std::string& getHelloWorldString();  // Declaration for the getter function
};

#endif // {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_H
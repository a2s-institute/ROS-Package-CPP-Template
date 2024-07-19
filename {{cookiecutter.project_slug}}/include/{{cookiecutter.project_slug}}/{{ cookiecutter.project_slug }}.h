#ifndef {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_H
#define {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_H

class MyClass {
public:
    MyClass();
    ~MyClass();

    void initialize();
    void update();
};

#endif // {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_H
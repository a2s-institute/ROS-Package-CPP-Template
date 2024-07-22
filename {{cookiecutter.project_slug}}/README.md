# {{ cookiecutter.project_name }}

{{ cookiecutter.description }}

## Introduction

This package is a ROS node.

### The available ROS topics
Please, follow this structure:

- `topic_1`
    - **Default:** `/{{ cookiecutter.project_slug }}/topic_1`
    - **Purpose:** the purpose.
    - **Use:**  Send an emply msg.

- `topic_2`
    - **Default:** `/{{ cookiecutter.project_slug }}/topic_2`
    - **Purpose:** the purpose.

### ROS parameters
Please, follow this structure:
- `{{ cookiecutter.project_slug }}_world_frame_name`
    - **Default:** `world`



## Installation

Follow these steps to build and run the package.

### Dependencies
Please, follow this structure:
1. first dependency: `sudo apt install first_dependency`
2. second dependency: `sudo apt install second_dependency`

### Build

```bash
cd ~/catkin_ws
catkin_make
```

### Formatting
```bash
sudo apt-get install clang-format
clang-format -i src/*.cpp include/{{ cookiecutter.project_slug }}/*.h
```

## Testing

```bash
catkin_make run_tests
```


## Run
```bash
source ~/catkin_ws/devel/setup.bash
roslaunch {{ cookiecutter.project_slug }} example.launch
```

## Update this repository as the template changes overtime
```bash
pip3 install cruft
cruft check
```

in case the template changed and you want to update your repo to the template

```bash
cruft update
```

## Created using ROS Package CPP Template

This repo is a template that uses [ROS Package CPP Template](https://github.com/a2s-institute/ROS-Package-CPP-Template) to initialize a ROS1 package using a standardize structure that allows loosely cupple the algorithm from ROS.
It aims to support automatic testing, formatting, and provide an exaustive template for the `README.md`.

## Getting started
```bash
pip3 install cruft
cruft create https://github.com/a2s-institute/ROS-Package-CPP-Template
```

## Check and update your project when the template is updated
To check if the template has been updated compared the version used for your project:
```bash
cruft check
```

To update your project based on the latest structure given by the template:
```bash
cruft update 
```

For more information visit the doc of [cruft](https://cruft.github.io/cruft/#updating-a-project).

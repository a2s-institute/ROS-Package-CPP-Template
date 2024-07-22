# ROS Package CPP Template

This repo is a template that uses [cookiecutter](https://cookiecutter.readthedocs.io/en/stable/) to initialize a ROS1 package using a standardize structure that allows loosely cupple the algorithm from ROS.
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

For more information visit the doc of [cruft](https://cruft.github.io/cruft/#updating-a-project)

## Contributing
Please consider to either raise an issue or contribute by sending a pull request. Thank you!
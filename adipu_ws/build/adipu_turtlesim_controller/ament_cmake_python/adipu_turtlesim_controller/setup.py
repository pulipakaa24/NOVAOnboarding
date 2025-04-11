from setuptools import find_packages
from setuptools import setup

setup(
    name='adipu_turtlesim_controller',
    version='0.0.0',
    packages=find_packages(
        include=('adipu_turtlesim_controller', 'adipu_turtlesim_controller.*')),
)

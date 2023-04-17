from setuptools import find_packages
from setuptools import setup

setup(
    name='lane_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('lane_msgs', 'lane_msgs.*')),
)

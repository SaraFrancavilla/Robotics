from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_msg_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('custom_msg_interfaces', 'custom_msg_interfaces.*')),
)

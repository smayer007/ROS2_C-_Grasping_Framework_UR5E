from setuptools import find_packages
from setuptools import setup

setup(
    name='robotiq_2f_urcap_adapter_socket',
    version='0.0.0',
    packages=find_packages(
        include=('robotiq_2f_urcap_adapter_socket', 'robotiq_2f_urcap_adapter_socket.*')),
)

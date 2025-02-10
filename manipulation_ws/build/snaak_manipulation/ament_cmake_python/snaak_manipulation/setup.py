from setuptools import find_packages
from setuptools import setup

setup(
    name='snaak_manipulation',
    version='0.0.1',
    packages=find_packages(
        include=('snaak_manipulation', 'snaak_manipulation.*')),
)

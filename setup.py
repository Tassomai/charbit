from distutils.core import setup, Extension

module = Extension('charbit', sources=['charbit.c'])
setup(name='charbit',
      version='1.0',
      description='Give access to the CHAR_BIT C macro',
      ext_modules=[module])

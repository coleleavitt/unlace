"""Third-party compiler support."""
from __future__ import annotations
from sys import version_info as _swig_python_version_info
if __package__ or '.' in __name__:
    from . import _ida_srclang
else:
    import _ida_srclang
try:
    import builtins as __builtin__
except ImportError:
    import __builtin__


def _swig_repr(self):
    try:
        strthis = 'proxy of ' + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ''
    return '<%s.%s; %s >' % (self.__class__.__module__, self.__class__.
        __name__, strthis)


def _swig_setattr_nondynamic_instance_variable(set):

    def set_instance_attr(self, name, value):
        if name == 'this':
            set(self, name, value)
        elif name == 'thisown':
            self.this.own(value)
        elif hasattr(self, name) and isinstance(getattr(type(self), name),
            property):
            set(self, name, value)
        else:
            raise AttributeError('You cannot add instance attributes to %s' %
                self)
    return set_instance_attr


def _swig_setattr_nondynamic_class_variable(set):

    def set_class_attr(cls, name, value):
        if hasattr(cls, name) and not isinstance(getattr(cls, name), property):
            set(cls, name, value)
        else:
            raise AttributeError('You cannot add class attributes to %s' % cls)
    return set_class_attr


def _swig_add_metaclass(metaclass):
    """Class decorator for adding a metaclass to a SWIG wrapped class - a slimmed down version of six.add_metaclass"""

    def wrapper(cls):
        return metaclass(cls.__name__, cls.__bases__, cls.__dict__.copy())
    return wrapper


class _SwigNonDynamicMeta(type):
    """Meta class to enforce nondynamic attributes (no new attributes) for a class"""
    __setattr__ = _swig_setattr_nondynamic_class_variable(type.__setattr__)


import weakref
SWIG_PYTHON_LEGACY_BOOL = _ida_srclang.SWIG_PYTHON_LEGACY_BOOL
from typing import Tuple, List, Union
import ida_idaapi
SRCLANG_C = _ida_srclang.SRCLANG_C
"""C.
"""
SRCLANG_CPP = _ida_srclang.SRCLANG_CPP
"""C++.
"""
SRCLANG_OBJC = _ida_srclang.SRCLANG_OBJC
"""Objective-C.
"""
SRCLANG_SWIFT = _ida_srclang.SRCLANG_SWIFT
"""Swift (not supported yet)
"""
SRCLANG_GO = _ida_srclang.SRCLANG_GO
"""Golang (not supported yet)
"""
SRCLANG_OBJCPP = _ida_srclang.SRCLANG_OBJCPP
"""Objective-C++.
"""


def select_parser_by_name(name: str) ->bool:
    """Set the parser with the given name as the current parser. Pass nullptr or an empty string to select the default parser. 
        
:returns: false if no parser was found with the given name"""
    return _ida_srclang.select_parser_by_name(name)


def select_parser_by_srclang(lang: 'srclang_t') ->bool:
    """Set the parser that supports the given language(s) as the current parser. The selected parser must support all languages specified by the given srclang_t. 
        
:returns: false if no such parser was found"""
    return _ida_srclang.select_parser_by_srclang(lang)


def get_selected_parser_name() ->str:
    """Get current parser name. 
        
:returns: success"""
    return _ida_srclang.get_selected_parser_name()


def set_parser_argv(parser_name: str, argv: str) ->int:
    """Set the command-line args to use for invocations of the parser with the given name 
        
:param parser_name: name of the target parser
:param argv: argument list
:returns: -1: no parser was found with the given name
:returns: -2: the operation is not supported by the given parser
:returns: 0: success"""
    return _ida_srclang.set_parser_argv(parser_name, argv)


def parse_decls_for_srclang(lang: 'srclang_t', til: 'til_t', input: str,
    is_path: bool) ->int:
    """Parse type declarations in the specified language 
        
:param lang: the source language(s) expected in the input
:param til: type library to store the types
:param input: input source. can be a file path or decl string
:param is_path: true if input parameter is a path to a source file, false if the input is an in-memory source snippet
:returns: -1: no parser was found that supports the given source language(s)
:returns: else: the number of errors encountered in the input source"""
    return _ida_srclang.parse_decls_for_srclang(lang, til, input, is_path)


def parse_decls_with_parser_ext(parser_name: str, til: 'til_t', input: str,
    hti_flags: int) ->int:
    """Parse type declarations using the parser with the specified name 
        
:param parser_name: name of the target parser
:param til: type library to store the types
:param input: input source. can be a file path or decl string
:param hti_flags: combination of Type formatting flags
:returns: -1: no parser was found with the given name
:returns: else: the number of errors encountered in the input source"""
    return _ida_srclang.parse_decls_with_parser_ext(parser_name, til, input,
        hti_flags)


def get_parser_option(parser_name: str, option_name: str) ->str:
    """Get option for the parser with the specified name 
        
:param parser_name: name of the target parser
:param option_name: parser option name
:returns: success"""
    return _ida_srclang.get_parser_option(parser_name, option_name)


def set_parser_option(parser_name: str, option_name: str, option_value: str
    ) ->bool:
    """Set option for the parser with the specified name 
        
:param parser_name: name of the target parser
:param option_name: parser option name
:param option_value: parser option value
:returns: success"""
    return _ida_srclang.set_parser_option(parser_name, option_name,
        option_value)


def parse_decls_with_parser(parser_name: str, til: 'til_t', input: str,
    is_path: bool) ->int:
    """Parse type declarations using the parser with the specified name 
        
:param parser_name: name of the target parser
:param til: type library to store the types
:param input: input source. can be a file path or decl string
:param is_path: true if input parameter is a path to a source file, false if the input is an in-memory source snippet
:returns: -1: no parser was found with the given name
:returns: else: the number of errors encountered in the input source"""
    return _ida_srclang.parse_decls_with_parser(parser_name, til, input,
        is_path)

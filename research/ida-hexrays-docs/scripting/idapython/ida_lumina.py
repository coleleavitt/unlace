from __future__ import annotations
from sys import version_info as _swig_python_version_info
if __package__ or '.' in __name__:
    from . import _ida_lumina
else:
    import _ida_lumina
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
SWIG_PYTHON_LEGACY_BOOL = _ida_lumina.SWIG_PYTHON_LEGACY_BOOL
from typing import Tuple, List, Union
import ida_idaapi


class lumina_op_res_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.lumina_op_res_vec_t_swiginit(self, _ida_lumina.
            new_lumina_op_res_vec_t(*args))
    __swig_destroy__ = _ida_lumina.delete_lumina_op_res_vec_t

    def push_back(self, *args) ->'lumina_op_res_t &':
        return _ida_lumina.lumina_op_res_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.lumina_op_res_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.lumina_op_res_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.lumina_op_res_vec_t_empty(self)

    def at(self, _idx: int) ->'lumina_op_res_t const &':
        return _ida_lumina.lumina_op_res_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.lumina_op_res_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.lumina_op_res_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.lumina_op_res_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.lumina_op_res_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.lumina_op_res_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.lumina_op_res_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.lumina_op_res_vec_t_truncate(self)

    def swap(self, r: 'lumina_op_res_vec_t') ->None:
        return _ida_lumina.lumina_op_res_vec_t_swap(self, r)

    def extract(self) ->'lumina_op_res_t *':
        return _ida_lumina.lumina_op_res_vec_t_extract(self)

    def inject(self, s: 'lumina_op_res_t *', len: int) ->None:
        return _ida_lumina.lumina_op_res_vec_t_inject(self, s, len)

    def __eq__(self, r: 'lumina_op_res_vec_t') ->bool:
        return _ida_lumina.lumina_op_res_vec_t___eq__(self, r)

    def __ne__(self, r: 'lumina_op_res_vec_t') ->bool:
        return _ida_lumina.lumina_op_res_vec_t___ne__(self, r)

    def begin(self, *args) ->'qvector< lumina_op_res_t >::const_iterator':
        return _ida_lumina.lumina_op_res_vec_t_begin(self, *args)

    def end(self, *args) ->'qvector< lumina_op_res_t >::const_iterator':
        return _ida_lumina.lumina_op_res_vec_t_end(self, *args)

    def insert(self, it: 'qvector< lumina_op_res_t >::iterator', x:
        'lumina_op_res_t const &') ->'qvector< lumina_op_res_t >::iterator':
        return _ida_lumina.lumina_op_res_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< lumina_op_res_t >::iterator':
        return _ida_lumina.lumina_op_res_vec_t_erase(self, *args)

    def find(self, *args) ->'qvector< lumina_op_res_t >::const_iterator':
        return _ida_lumina.lumina_op_res_vec_t_find(self, *args)

    def has(self, x: 'lumina_op_res_t const &') ->bool:
        return _ida_lumina.lumina_op_res_vec_t_has(self, x)

    def add_unique(self, x: 'lumina_op_res_t const &') ->bool:
        return _ida_lumina.lumina_op_res_vec_t_add_unique(self, x)

    def _del(self, x: 'lumina_op_res_t const &') ->bool:
        return _ida_lumina.lumina_op_res_vec_t__del(self, x)

    def __len__(self) ->int:
        return _ida_lumina.lumina_op_res_vec_t___len__(self)

    def __getitem__(self, i: int) ->'lumina_op_res_t const &':
        return _ida_lumina.lumina_op_res_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'lumina_op_res_t const &') ->None:
        return _ida_lumina.lumina_op_res_vec_t___setitem__(self, i, v)

    def append(self, x: 'lumina_op_res_t const &') ->None:
        return _ida_lumina.lumina_op_res_vec_t_append(self, x)

    def extend(self, x: 'lumina_op_res_vec_t') ->None:
        return _ida_lumina.lumina_op_res_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.lumina_op_res_vec_t_swigregister(lumina_op_res_vec_t)


class func_info_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.func_info_vec_t_swiginit(self, _ida_lumina.
            new_func_info_vec_t(*args))
    __swig_destroy__ = _ida_lumina.delete_func_info_vec_t

    def push_back(self, *args) ->'func_info_t &':
        return _ida_lumina.func_info_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.func_info_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.func_info_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.func_info_vec_t_empty(self)

    def at(self, _idx: int) ->'func_info_t const &':
        return _ida_lumina.func_info_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.func_info_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.func_info_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.func_info_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.func_info_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.func_info_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.func_info_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.func_info_vec_t_truncate(self)

    def swap(self, r: 'func_info_vec_t') ->None:
        return _ida_lumina.func_info_vec_t_swap(self, r)

    def extract(self) ->'func_info_t *':
        return _ida_lumina.func_info_vec_t_extract(self)

    def inject(self, s: 'func_info_t', len: int) ->None:
        return _ida_lumina.func_info_vec_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< func_info_t >::const_iterator':
        return _ida_lumina.func_info_vec_t_begin(self, *args)

    def end(self, *args) ->'qvector< func_info_t >::const_iterator':
        return _ida_lumina.func_info_vec_t_end(self, *args)

    def insert(self, it: 'func_info_t', x: 'func_info_t'
        ) ->'qvector< func_info_t >::iterator':
        return _ida_lumina.func_info_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< func_info_t >::iterator':
        return _ida_lumina.func_info_vec_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.func_info_vec_t___len__(self)

    def __getitem__(self, i: int) ->'func_info_t const &':
        return _ida_lumina.func_info_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'func_info_t') ->None:
        return _ida_lumina.func_info_vec_t___setitem__(self, i, v)

    def append(self, x: 'func_info_t') ->None:
        return _ida_lumina.func_info_vec_t_append(self, x)

    def extend(self, x: 'func_info_vec_t') ->None:
        return _ida_lumina.func_info_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.func_info_vec_t_swigregister(func_info_vec_t)


class func_info_and_frequency_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.func_info_and_frequency_vec_t_swiginit(self,
            _ida_lumina.new_func_info_and_frequency_vec_t(*args))
    __swig_destroy__ = _ida_lumina.delete_func_info_and_frequency_vec_t

    def push_back(self, *args) ->'func_info_and_frequency_t &':
        return _ida_lumina.func_info_and_frequency_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.func_info_and_frequency_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.func_info_and_frequency_vec_t_empty(self)

    def at(self, _idx: int) ->'func_info_and_frequency_t const &':
        return _ida_lumina.func_info_and_frequency_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.func_info_and_frequency_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_truncate(self)

    def swap(self, r: 'func_info_and_frequency_vec_t') ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_swap(self, r)

    def extract(self) ->'func_info_and_frequency_t *':
        return _ida_lumina.func_info_and_frequency_vec_t_extract(self)

    def inject(self, s: 'func_info_and_frequency_t', len: int) ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_inject(self, s, len)

    def begin(self, *args
        ) ->'qvector< func_info_and_frequency_t >::const_iterator':
        return _ida_lumina.func_info_and_frequency_vec_t_begin(self, *args)

    def end(self, *args
        ) ->'qvector< func_info_and_frequency_t >::const_iterator':
        return _ida_lumina.func_info_and_frequency_vec_t_end(self, *args)

    def insert(self, it: 'func_info_and_frequency_t', x:
        'func_info_and_frequency_t'
        ) ->'qvector< func_info_and_frequency_t >::iterator':
        return _ida_lumina.func_info_and_frequency_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< func_info_and_frequency_t >::iterator':
        return _ida_lumina.func_info_and_frequency_vec_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.func_info_and_frequency_vec_t___len__(self)

    def __getitem__(self, i: int) ->'func_info_and_frequency_t const &':
        return _ida_lumina.func_info_and_frequency_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'func_info_and_frequency_t') ->None:
        return _ida_lumina.func_info_and_frequency_vec_t___setitem__(self, i, v
            )

    def append(self, x: 'func_info_and_frequency_t') ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_append(self, x)

    def extend(self, x: 'func_info_and_frequency_vec_t') ->None:
        return _ida_lumina.func_info_and_frequency_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.func_info_and_frequency_vec_t_swigregister(
    func_info_and_frequency_vec_t)


class func_info_and_pattern_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.func_info_and_pattern_vec_t_swiginit(self, _ida_lumina.
            new_func_info_and_pattern_vec_t(*args))
    __swig_destroy__ = _ida_lumina.delete_func_info_and_pattern_vec_t

    def push_back(self, *args) ->'func_info_and_pattern_t &':
        return _ida_lumina.func_info_and_pattern_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.func_info_and_pattern_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.func_info_and_pattern_vec_t_empty(self)

    def at(self, _idx: int) ->'func_info_and_pattern_t const &':
        return _ida_lumina.func_info_and_pattern_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.func_info_and_pattern_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_truncate(self)

    def swap(self, r: 'func_info_and_pattern_vec_t') ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_swap(self, r)

    def extract(self) ->'func_info_and_pattern_t *':
        return _ida_lumina.func_info_and_pattern_vec_t_extract(self)

    def inject(self, s: 'func_info_and_pattern_t', len: int) ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_inject(self, s, len)

    def begin(self, *args
        ) ->'qvector< func_info_and_pattern_t >::const_iterator':
        return _ida_lumina.func_info_and_pattern_vec_t_begin(self, *args)

    def end(self, *args
        ) ->'qvector< func_info_and_pattern_t >::const_iterator':
        return _ida_lumina.func_info_and_pattern_vec_t_end(self, *args)

    def insert(self, it: 'func_info_and_pattern_t', x:
        'func_info_and_pattern_t'
        ) ->'qvector< func_info_and_pattern_t >::iterator':
        return _ida_lumina.func_info_and_pattern_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< func_info_and_pattern_t >::iterator':
        return _ida_lumina.func_info_and_pattern_vec_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.func_info_and_pattern_vec_t___len__(self)

    def __getitem__(self, i: int) ->'func_info_and_pattern_t const &':
        return _ida_lumina.func_info_and_pattern_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'func_info_and_pattern_t') ->None:
        return _ida_lumina.func_info_and_pattern_vec_t___setitem__(self, i, v)

    def append(self, x: 'func_info_and_pattern_t') ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_append(self, x)

    def extend(self, x: 'func_info_and_pattern_vec_t') ->None:
        return _ida_lumina.func_info_and_pattern_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.func_info_and_pattern_vec_t_swigregister(
    func_info_and_pattern_vec_t)


class func_info_pattern_and_frequency_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.func_info_pattern_and_frequency_vec_t_swiginit(self,
            _ida_lumina.new_func_info_pattern_and_frequency_vec_t(*args))
    __swig_destroy__ = _ida_lumina.delete_func_info_pattern_and_frequency_vec_t

    def push_back(self, *args) ->'func_info_pattern_and_frequency_t &':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_push_back(self
            , *args)

    def pop_back(self) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_empty(self)

    def at(self, _idx: int) ->'func_info_pattern_and_frequency_t const &':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_resize(self,
            *args)

    def grow(self, *args) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_grow(self,
            *args)

    def capacity(self) ->int:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_reserve(self,
            cnt)

    def truncate(self) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_truncate(self)

    def swap(self, r: 'func_info_pattern_and_frequency_vec_t') ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_swap(self, r)

    def extract(self) ->'func_info_pattern_and_frequency_t *':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_extract(self)

    def inject(self, s: 'func_info_pattern_and_frequency_t', len: int) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_inject(self,
            s, len)

    def begin(self, *args
        ) ->'qvector< func_info_pattern_and_frequency_t >::const_iterator':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_begin(self,
            *args)

    def end(self, *args
        ) ->'qvector< func_info_pattern_and_frequency_t >::const_iterator':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_end(self,
            *args)

    def insert(self, it: 'func_info_pattern_and_frequency_t', x:
        'func_info_pattern_and_frequency_t'
        ) ->'qvector< func_info_pattern_and_frequency_t >::iterator':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_insert(self,
            it, x)

    def erase(self, *args
        ) ->'qvector< func_info_pattern_and_frequency_t >::iterator':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_erase(self,
            *args)

    def __len__(self) ->int:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t___len__(self)

    def __getitem__(self, i: int
        ) ->'func_info_pattern_and_frequency_t const &':
        return _ida_lumina.func_info_pattern_and_frequency_vec_t___getitem__(
            self, i)

    def __setitem__(self, i: int, v: 'func_info_pattern_and_frequency_t'
        ) ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t___setitem__(
            self, i, v)

    def append(self, x: 'func_info_pattern_and_frequency_t') ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_append(self, x
            )

    def extend(self, x: 'func_info_pattern_and_frequency_vec_t') ->None:
        return _ida_lumina.func_info_pattern_and_frequency_vec_t_extend(self, x
            )
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.func_info_pattern_and_frequency_vec_t_swigregister(
    func_info_pattern_and_frequency_vec_t)


class insn_cmts_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.insn_cmts_t_swiginit(self, _ida_lumina.new_insn_cmts_t(
            *args))
    __swig_destroy__ = _ida_lumina.delete_insn_cmts_t

    def push_back(self, *args) ->'insn_cmt_t &':
        return _ida_lumina.insn_cmts_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.insn_cmts_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.insn_cmts_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.insn_cmts_t_empty(self)

    def at(self, _idx: int) ->'insn_cmt_t const &':
        return _ida_lumina.insn_cmts_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.insn_cmts_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.insn_cmts_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.insn_cmts_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.insn_cmts_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.insn_cmts_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.insn_cmts_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.insn_cmts_t_truncate(self)

    def swap(self, r: 'insn_cmts_t') ->None:
        return _ida_lumina.insn_cmts_t_swap(self, r)

    def extract(self) ->'insn_cmt_t *':
        return _ida_lumina.insn_cmts_t_extract(self)

    def inject(self, s: 'insn_cmt_t', len: int) ->None:
        return _ida_lumina.insn_cmts_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< insn_cmt_t >::const_iterator':
        return _ida_lumina.insn_cmts_t_begin(self, *args)

    def end(self, *args) ->'qvector< insn_cmt_t >::const_iterator':
        return _ida_lumina.insn_cmts_t_end(self, *args)

    def insert(self, it: 'insn_cmt_t', x: 'insn_cmt_t'
        ) ->'qvector< insn_cmt_t >::iterator':
        return _ida_lumina.insn_cmts_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< insn_cmt_t >::iterator':
        return _ida_lumina.insn_cmts_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.insn_cmts_t___len__(self)

    def __getitem__(self, i: int) ->'insn_cmt_t const &':
        return _ida_lumina.insn_cmts_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'insn_cmt_t') ->None:
        return _ida_lumina.insn_cmts_t___setitem__(self, i, v)

    def append(self, x: 'insn_cmt_t') ->None:
        return _ida_lumina.insn_cmts_t_append(self, x)

    def extend(self, x: 'insn_cmts_t') ->None:
        return _ida_lumina.insn_cmts_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.insn_cmts_t_swigregister(insn_cmts_t)


class user_stkpnts_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.user_stkpnts_t_swiginit(self, _ida_lumina.
            new_user_stkpnts_t(*args))
    __swig_destroy__ = _ida_lumina.delete_user_stkpnts_t

    def push_back(self, *args) ->'user_stkpnt_t &':
        return _ida_lumina.user_stkpnts_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.user_stkpnts_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.user_stkpnts_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.user_stkpnts_t_empty(self)

    def at(self, _idx: int) ->'user_stkpnt_t const &':
        return _ida_lumina.user_stkpnts_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.user_stkpnts_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.user_stkpnts_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.user_stkpnts_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.user_stkpnts_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.user_stkpnts_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.user_stkpnts_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.user_stkpnts_t_truncate(self)

    def swap(self, r: 'user_stkpnts_t') ->None:
        return _ida_lumina.user_stkpnts_t_swap(self, r)

    def extract(self) ->'user_stkpnt_t *':
        return _ida_lumina.user_stkpnts_t_extract(self)

    def inject(self, s: 'user_stkpnt_t', len: int) ->None:
        return _ida_lumina.user_stkpnts_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< user_stkpnt_t >::const_iterator':
        return _ida_lumina.user_stkpnts_t_begin(self, *args)

    def end(self, *args) ->'qvector< user_stkpnt_t >::const_iterator':
        return _ida_lumina.user_stkpnts_t_end(self, *args)

    def insert(self, it: 'user_stkpnt_t', x: 'user_stkpnt_t'
        ) ->'qvector< user_stkpnt_t >::iterator':
        return _ida_lumina.user_stkpnts_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< user_stkpnt_t >::iterator':
        return _ida_lumina.user_stkpnts_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.user_stkpnts_t___len__(self)

    def __getitem__(self, i: int) ->'user_stkpnt_t const &':
        return _ida_lumina.user_stkpnts_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'user_stkpnt_t') ->None:
        return _ida_lumina.user_stkpnts_t___setitem__(self, i, v)

    def append(self, x: 'user_stkpnt_t') ->None:
        return _ida_lumina.user_stkpnts_t_append(self, x)

    def extend(self, x: 'user_stkpnts_t') ->None:
        return _ida_lumina.user_stkpnts_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.user_stkpnts_t_swigregister(user_stkpnts_t)


class frame_mems_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.frame_mems_t_swiginit(self, _ida_lumina.
            new_frame_mems_t(*args))
    __swig_destroy__ = _ida_lumina.delete_frame_mems_t

    def push_back(self, *args) ->'frame_mem_t &':
        return _ida_lumina.frame_mems_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.frame_mems_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.frame_mems_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.frame_mems_t_empty(self)

    def at(self, _idx: int) ->'frame_mem_t const &':
        return _ida_lumina.frame_mems_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.frame_mems_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.frame_mems_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.frame_mems_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.frame_mems_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.frame_mems_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.frame_mems_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.frame_mems_t_truncate(self)

    def swap(self, r: 'frame_mems_t') ->None:
        return _ida_lumina.frame_mems_t_swap(self, r)

    def extract(self) ->'frame_mem_t *':
        return _ida_lumina.frame_mems_t_extract(self)

    def inject(self, s: 'frame_mem_t', len: int) ->None:
        return _ida_lumina.frame_mems_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< frame_mem_t >::const_iterator':
        return _ida_lumina.frame_mems_t_begin(self, *args)

    def end(self, *args) ->'qvector< frame_mem_t >::const_iterator':
        return _ida_lumina.frame_mems_t_end(self, *args)

    def insert(self, it: 'frame_mem_t', x: 'frame_mem_t'
        ) ->'qvector< frame_mem_t >::iterator':
        return _ida_lumina.frame_mems_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< frame_mem_t >::iterator':
        return _ida_lumina.frame_mems_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.frame_mems_t___len__(self)

    def __getitem__(self, i: int) ->'frame_mem_t const &':
        return _ida_lumina.frame_mems_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'frame_mem_t') ->None:
        return _ida_lumina.frame_mems_t___setitem__(self, i, v)

    def append(self, x: 'frame_mem_t') ->None:
        return _ida_lumina.frame_mems_t_append(self, x)

    def extend(self, x: 'frame_mems_t') ->None:
        return _ida_lumina.frame_mems_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.frame_mems_t_swigregister(frame_mems_t)


class extra_cmts_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.extra_cmts_t_swiginit(self, _ida_lumina.
            new_extra_cmts_t(*args))
    __swig_destroy__ = _ida_lumina.delete_extra_cmts_t

    def push_back(self, *args) ->'extra_cmt_t &':
        return _ida_lumina.extra_cmts_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.extra_cmts_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.extra_cmts_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.extra_cmts_t_empty(self)

    def at(self, _idx: int) ->'extra_cmt_t const &':
        return _ida_lumina.extra_cmts_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.extra_cmts_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.extra_cmts_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.extra_cmts_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.extra_cmts_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.extra_cmts_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.extra_cmts_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.extra_cmts_t_truncate(self)

    def swap(self, r: 'extra_cmts_t') ->None:
        return _ida_lumina.extra_cmts_t_swap(self, r)

    def extract(self) ->'extra_cmt_t *':
        return _ida_lumina.extra_cmts_t_extract(self)

    def inject(self, s: 'extra_cmt_t', len: int) ->None:
        return _ida_lumina.extra_cmts_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< extra_cmt_t >::const_iterator':
        return _ida_lumina.extra_cmts_t_begin(self, *args)

    def end(self, *args) ->'qvector< extra_cmt_t >::const_iterator':
        return _ida_lumina.extra_cmts_t_end(self, *args)

    def insert(self, it: 'extra_cmt_t', x: 'extra_cmt_t'
        ) ->'qvector< extra_cmt_t >::iterator':
        return _ida_lumina.extra_cmts_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< extra_cmt_t >::iterator':
        return _ida_lumina.extra_cmts_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.extra_cmts_t___len__(self)

    def __getitem__(self, i: int) ->'extra_cmt_t const &':
        return _ida_lumina.extra_cmts_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'extra_cmt_t') ->None:
        return _ida_lumina.extra_cmts_t___setitem__(self, i, v)

    def append(self, x: 'extra_cmt_t') ->None:
        return _ida_lumina.extra_cmts_t_append(self, x)

    def extend(self, x: 'extra_cmts_t') ->None:
        return _ida_lumina.extra_cmts_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.extra_cmts_t_swigregister(extra_cmts_t)


class skipped_funcs_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.skipped_funcs_t_swiginit(self, _ida_lumina.
            new_skipped_funcs_t(*args))
    __swig_destroy__ = _ida_lumina.delete_skipped_funcs_t

    def push_back(self, *args) ->'skipped_func_t &':
        return _ida_lumina.skipped_funcs_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.skipped_funcs_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.skipped_funcs_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.skipped_funcs_t_empty(self)

    def at(self, _idx: int) ->'skipped_func_t const &':
        return _ida_lumina.skipped_funcs_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.skipped_funcs_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.skipped_funcs_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.skipped_funcs_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.skipped_funcs_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.skipped_funcs_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.skipped_funcs_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.skipped_funcs_t_truncate(self)

    def swap(self, r: 'skipped_funcs_t') ->None:
        return _ida_lumina.skipped_funcs_t_swap(self, r)

    def extract(self) ->'skipped_func_t *':
        return _ida_lumina.skipped_funcs_t_extract(self)

    def inject(self, s: 'skipped_func_t', len: int) ->None:
        return _ida_lumina.skipped_funcs_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< skipped_func_t >::const_iterator':
        return _ida_lumina.skipped_funcs_t_begin(self, *args)

    def end(self, *args) ->'qvector< skipped_func_t >::const_iterator':
        return _ida_lumina.skipped_funcs_t_end(self, *args)

    def insert(self, it: 'skipped_func_t', x: 'skipped_func_t'
        ) ->'qvector< skipped_func_t >::iterator':
        return _ida_lumina.skipped_funcs_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< skipped_func_t >::iterator':
        return _ida_lumina.skipped_funcs_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.skipped_funcs_t___len__(self)

    def __getitem__(self, i: int) ->'skipped_func_t const &':
        return _ida_lumina.skipped_funcs_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'skipped_func_t') ->None:
        return _ida_lumina.skipped_funcs_t___setitem__(self, i, v)

    def append(self, x: 'skipped_func_t') ->None:
        return _ida_lumina.skipped_funcs_t_append(self, x)

    def extend(self, x: 'skipped_funcs_t') ->None:
        return _ida_lumina.skipped_funcs_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.skipped_funcs_t_swigregister(skipped_funcs_t)


class insn_ops_reprs_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.insn_ops_reprs_t_swiginit(self, _ida_lumina.
            new_insn_ops_reprs_t(*args))
    __swig_destroy__ = _ida_lumina.delete_insn_ops_reprs_t

    def push_back(self, *args) ->'insn_ops_repr_t &':
        return _ida_lumina.insn_ops_reprs_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.insn_ops_reprs_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.insn_ops_reprs_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.insn_ops_reprs_t_empty(self)

    def at(self, _idx: int) ->'insn_ops_repr_t const &':
        return _ida_lumina.insn_ops_reprs_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.insn_ops_reprs_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.insn_ops_reprs_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.insn_ops_reprs_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.insn_ops_reprs_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.insn_ops_reprs_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.insn_ops_reprs_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.insn_ops_reprs_t_truncate(self)

    def swap(self, r: 'insn_ops_reprs_t') ->None:
        return _ida_lumina.insn_ops_reprs_t_swap(self, r)

    def extract(self) ->'insn_ops_repr_t *':
        return _ida_lumina.insn_ops_reprs_t_extract(self)

    def inject(self, s: 'insn_ops_repr_t', len: int) ->None:
        return _ida_lumina.insn_ops_reprs_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< insn_ops_repr_t >::const_iterator':
        return _ida_lumina.insn_ops_reprs_t_begin(self, *args)

    def end(self, *args) ->'qvector< insn_ops_repr_t >::const_iterator':
        return _ida_lumina.insn_ops_reprs_t_end(self, *args)

    def insert(self, it: 'insn_ops_repr_t', x: 'insn_ops_repr_t'
        ) ->'qvector< insn_ops_repr_t >::iterator':
        return _ida_lumina.insn_ops_reprs_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< insn_ops_repr_t >::iterator':
        return _ida_lumina.insn_ops_reprs_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.insn_ops_reprs_t___len__(self)

    def __getitem__(self, i: int) ->'insn_ops_repr_t const &':
        return _ida_lumina.insn_ops_reprs_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'insn_ops_repr_t') ->None:
        return _ida_lumina.insn_ops_reprs_t___setitem__(self, i, v)

    def append(self, x: 'insn_ops_repr_t') ->None:
        return _ida_lumina.insn_ops_reprs_t_append(self, x)

    def extend(self, x: 'insn_ops_reprs_t') ->None:
        return _ida_lumina.insn_ops_reprs_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.insn_ops_reprs_t_swigregister(insn_ops_reprs_t)


class pattern_ids_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.pattern_ids_t_swiginit(self, _ida_lumina.
            new_pattern_ids_t(*args))
    __swig_destroy__ = _ida_lumina.delete_pattern_ids_t

    def push_back(self, *args) ->'pattern_id_t &':
        return _ida_lumina.pattern_ids_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.pattern_ids_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.pattern_ids_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.pattern_ids_t_empty(self)

    def at(self, _idx: int) ->'pattern_id_t const &':
        return _ida_lumina.pattern_ids_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.pattern_ids_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.pattern_ids_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.pattern_ids_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.pattern_ids_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.pattern_ids_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.pattern_ids_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.pattern_ids_t_truncate(self)

    def swap(self, r: 'pattern_ids_t') ->None:
        return _ida_lumina.pattern_ids_t_swap(self, r)

    def extract(self) ->'pattern_id_t *':
        return _ida_lumina.pattern_ids_t_extract(self)

    def inject(self, s: 'pattern_id_t', len: int) ->None:
        return _ida_lumina.pattern_ids_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< pattern_id_t >::const_iterator':
        return _ida_lumina.pattern_ids_t_begin(self, *args)

    def end(self, *args) ->'qvector< pattern_id_t >::const_iterator':
        return _ida_lumina.pattern_ids_t_end(self, *args)

    def insert(self, it: 'pattern_id_t', x: 'pattern_id_t'
        ) ->'qvector< pattern_id_t >::iterator':
        return _ida_lumina.pattern_ids_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< pattern_id_t >::iterator':
        return _ida_lumina.pattern_ids_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.pattern_ids_t___len__(self)

    def __getitem__(self, i: int) ->'pattern_id_t const &':
        return _ida_lumina.pattern_ids_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'pattern_id_t') ->None:
        return _ida_lumina.pattern_ids_t___setitem__(self, i, v)

    def append(self, x: 'pattern_id_t') ->None:
        return _ida_lumina.pattern_ids_t_append(self, x)

    def extend(self, x: 'pattern_ids_t') ->None:
        return _ida_lumina.pattern_ids_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.pattern_ids_t_swigregister(pattern_ids_t)


class pop_fun_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.pop_fun_vec_t_swiginit(self, _ida_lumina.
            new_pop_fun_vec_t(*args))
    __swig_destroy__ = _ida_lumina.delete_pop_fun_vec_t

    def push_back(self, *args) ->'pop_fun_t &':
        return _ida_lumina.pop_fun_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.pop_fun_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.pop_fun_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.pop_fun_vec_t_empty(self)

    def at(self, _idx: int) ->'pop_fun_t const &':
        return _ida_lumina.pop_fun_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.pop_fun_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.pop_fun_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.pop_fun_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.pop_fun_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.pop_fun_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.pop_fun_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.pop_fun_vec_t_truncate(self)

    def swap(self, r: 'pop_fun_vec_t') ->None:
        return _ida_lumina.pop_fun_vec_t_swap(self, r)

    def extract(self) ->'pop_fun_t *':
        return _ida_lumina.pop_fun_vec_t_extract(self)

    def inject(self, s: 'pop_fun_t', len: int) ->None:
        return _ida_lumina.pop_fun_vec_t_inject(self, s, len)

    def begin(self, *args) ->'qvector< pop_fun_t >::const_iterator':
        return _ida_lumina.pop_fun_vec_t_begin(self, *args)

    def end(self, *args) ->'qvector< pop_fun_t >::const_iterator':
        return _ida_lumina.pop_fun_vec_t_end(self, *args)

    def insert(self, it: 'pop_fun_t', x: 'pop_fun_t'
        ) ->'qvector< pop_fun_t >::iterator':
        return _ida_lumina.pop_fun_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< pop_fun_t >::iterator':
        return _ida_lumina.pop_fun_vec_t_erase(self, *args)

    def __len__(self) ->int:
        return _ida_lumina.pop_fun_vec_t___len__(self)

    def __getitem__(self, i: int) ->'pop_fun_t const &':
        return _ida_lumina.pop_fun_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'pop_fun_t') ->None:
        return _ida_lumina.pop_fun_vec_t___setitem__(self, i, v)

    def append(self, x: 'pop_fun_t') ->None:
        return _ida_lumina.pop_fun_vec_t_append(self, x)

    def extend(self, x: 'pop_fun_vec_t') ->None:
        return _ida_lumina.pop_fun_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.pop_fun_vec_t_swigregister(pop_fun_vec_t)


class mdkey_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_lumina.mdkey_vec_t_swiginit(self, _ida_lumina.new_mdkey_vec_t(
            *args))
    __swig_destroy__ = _ida_lumina.delete_mdkey_vec_t

    def push_back(self, *args) ->'mdkey_t &':
        return _ida_lumina.mdkey_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_lumina.mdkey_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_lumina.mdkey_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_lumina.mdkey_vec_t_empty(self)

    def at(self, _idx: int) ->'mdkey_t const &':
        return _ida_lumina.mdkey_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_lumina.mdkey_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_lumina.mdkey_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_lumina.mdkey_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_lumina.mdkey_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_lumina.mdkey_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_lumina.mdkey_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_lumina.mdkey_vec_t_truncate(self)

    def swap(self, r: 'mdkey_vec_t') ->None:
        return _ida_lumina.mdkey_vec_t_swap(self, r)

    def extract(self) ->'mdkey_t *':
        return _ida_lumina.mdkey_vec_t_extract(self)

    def inject(self, s: 'mdkey_t *', len: int) ->None:
        return _ida_lumina.mdkey_vec_t_inject(self, s, len)

    def __eq__(self, r: 'mdkey_vec_t') ->bool:
        return _ida_lumina.mdkey_vec_t___eq__(self, r)

    def __ne__(self, r: 'mdkey_vec_t') ->bool:
        return _ida_lumina.mdkey_vec_t___ne__(self, r)

    def begin(self, *args) ->'qvector< mdkey_t >::const_iterator':
        return _ida_lumina.mdkey_vec_t_begin(self, *args)

    def end(self, *args) ->'qvector< mdkey_t >::const_iterator':
        return _ida_lumina.mdkey_vec_t_end(self, *args)

    def insert(self, it: 'qvector< mdkey_t >::iterator', x: 'mdkey_t const &'
        ) ->'qvector< mdkey_t >::iterator':
        return _ida_lumina.mdkey_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< mdkey_t >::iterator':
        return _ida_lumina.mdkey_vec_t_erase(self, *args)

    def find(self, *args) ->'qvector< mdkey_t >::const_iterator':
        return _ida_lumina.mdkey_vec_t_find(self, *args)

    def has(self, x: 'mdkey_t const &') ->bool:
        return _ida_lumina.mdkey_vec_t_has(self, x)

    def add_unique(self, x: 'mdkey_t const &') ->bool:
        return _ida_lumina.mdkey_vec_t_add_unique(self, x)

    def _del(self, x: 'mdkey_t const &') ->bool:
        return _ida_lumina.mdkey_vec_t__del(self, x)

    def __len__(self) ->int:
        return _ida_lumina.mdkey_vec_t___len__(self)

    def __getitem__(self, i: int) ->'mdkey_t const &':
        return _ida_lumina.mdkey_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'mdkey_t const &') ->None:
        return _ida_lumina.mdkey_vec_t___setitem__(self, i, v)

    def append(self, x: 'mdkey_t const &') ->None:
        return _ida_lumina.mdkey_vec_t_append(self, x)

    def extend(self, x: 'mdkey_vec_t') ->None:
        return _ida_lumina.mdkey_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_lumina.mdkey_vec_t_swigregister(mdkey_vec_t)
PAT_TYPE_UNKNOWN = _ida_lumina.PAT_TYPE_UNKNOWN
PAT_TYPE_MD5 = _ida_lumina.PAT_TYPE_MD5
PDRES_BADPTN = _ida_lumina.PDRES_BADPTN
PDRES_NOT_FOUND = _ida_lumina.PDRES_NOT_FOUND
PDRES_ERROR = _ida_lumina.PDRES_ERROR
PDRES_OK = _ida_lumina.PDRES_OK
PDRES_ADDED = _ida_lumina.PDRES_ADDED
PMF_PUSH_MODE_MASK = _ida_lumina.PMF_PUSH_MODE_MASK
PMF_PUSH_OVERRIDE_IF_BETTER_OR_DIFFERENT = (_ida_lumina.
    PMF_PUSH_OVERRIDE_IF_BETTER_OR_DIFFERENT)
PMF_PUSH_OVERRIDE = _ida_lumina.PMF_PUSH_OVERRIDE
PMF_PUSH_DO_NOT_OVERRIDE = _ida_lumina.PMF_PUSH_DO_NOT_OVERRIDE
PMF_PUSH_MERGE = _ida_lumina.PMF_PUSH_MERGE
UOT_ADD = _ida_lumina.UOT_ADD
UOT_EDIT = _ida_lumina.UOT_EDIT
UOT_DEL = _ida_lumina.UOT_DEL
GST_NONE = _ida_lumina.GST_NONE
GST_NAME = _ida_lumina.GST_NAME
DMD_SORT_NONE = _ida_lumina.DMD_SORT_NONE
DMD_SORT_HASH = _ida_lumina.DMD_SORT_HASH
UF_IS_ADMIN = _ida_lumina.UF_IS_ADMIN
UF_CAN_DEL_HISTORY = _ida_lumina.UF_CAN_DEL_HISTORY
URF_IGNORE_LICID = _ida_lumina.URF_IGNORE_LICID
BOPF_DETAILS = _ida_lumina.BOPF_DETAILS
BOPF_CHRONOLOGICAL_ORDER = _ida_lumina.BOPF_CHRONOLOGICAL_ORDER
BOPF_LAST_FUNC_RECORD = _ida_lumina.BOPF_LAST_FUNC_RECORD
BOPF_FIELD_LICENSE_NAME = _ida_lumina.BOPF_FIELD_LICENSE_NAME
BOPF_FIELD_LICENSE_EMAIL = _ida_lumina.BOPF_FIELD_LICENSE_EMAIL
BOPF_FIELD_LICENSE_ID = _ida_lumina.BOPF_FIELD_LICENSE_ID
BOPF_SHOW_FIELD_INPUT_HASH = _ida_lumina.BOPF_SHOW_FIELD_INPUT_HASH
BOPF_SHOW_FIELD_INPUT_PATH = _ida_lumina.BOPF_SHOW_FIELD_INPUT_PATH
BOPF_SHOW_FIELD_IDB_PATH = _ida_lumina.BOPF_SHOW_FIELD_IDB_PATH
BOPF_SHOW_FIELD_CALCREL_HASH = _ida_lumina.BOPF_SHOW_FIELD_CALCREL_HASH
BOPF_SHOW_FIELD_FUNC_EA = _ida_lumina.BOPF_SHOW_FIELD_FUNC_EA
BOPF_SHOW_FIELD_FUNC_ID = _ida_lumina.BOPF_SHOW_FIELD_FUNC_ID
BOPF_SHOW_FIELD_USERNAME = _ida_lumina.BOPF_SHOW_FIELD_USERNAME
BOPF_SHOW_FIELD_ALL = _ida_lumina.BOPF_SHOW_FIELD_ALL
BOPF_PUSHES_FIELD_ALL = _ida_lumina.BOPF_PUSHES_FIELD_ALL
STF_DETAILS = _ida_lumina.STF_DETAILS
DEFAULT_TLM_FLUSH_TIMEOUT = _ida_lumina.DEFAULT_TLM_FLUSH_TIMEOUT
DEFAULT_TLM_FLUSH_EVCNT = _ida_lumina.DEFAULT_TLM_FLUSH_EVCNT
LUMINA_GET_POP_DEFAULT_NRESULTS = _ida_lumina.LUMINA_GET_POP_DEFAULT_NRESULTS
WKFC_INTERRUPTED = _ida_lumina.WKFC_INTERRUPTED
MDK_NONE = _ida_lumina.MDK_NONE
MDK_TYPE = _ida_lumina.MDK_TYPE
MDK_VD_ELAPSED = _ida_lumina.MDK_VD_ELAPSED
MDK_FCMT = _ida_lumina.MDK_FCMT
MDK_FRPTCMT = _ida_lumina.MDK_FRPTCMT
MDK_CMTS = _ida_lumina.MDK_CMTS
MDK_RPTCMTS = _ida_lumina.MDK_RPTCMTS
MDK_EXTRACMTS = _ida_lumina.MDK_EXTRACMTS
MDK_USER_STKPNTS = _ida_lumina.MDK_USER_STKPNTS
MDK_FRAME_DESC = _ida_lumina.MDK_FRAME_DESC
MDK_OPS = _ida_lumina.MDK_OPS
MDK_OPS_EX = _ida_lumina.MDK_OPS_EX
MDK_LAST = _ida_lumina.MDK_LAST
MDKF_NONE = _ida_lumina.MDKF_NONE
MDKF_STR = _ida_lumina.MDKF_STR
MDKF_TYPE = _ida_lumina.MDKF_TYPE
MDKF_INT64 = _ida_lumina.MDKF_INT64
MDKF_UINT64 = _ida_lumina.MDKF_UINT64
MDKF_DCSTRLIST = _ida_lumina.MDKF_DCSTRLIST
MDKF_DSVALLIST = _ida_lumina.MDKF_DSVALLIST
MDKF_FRAME_DESC = _ida_lumina.MDKF_FRAME_DESC
MDKF_NLSTRLIST = _ida_lumina.MDKF_NLSTRLIST
MDKF_DOPSLIST = _ida_lumina.MDKF_DOPSLIST


class insn_site_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    fchunk_nr: int = property(_ida_lumina.insn_site_t_fchunk_nr_get,
        _ida_lumina.insn_site_t_fchunk_nr_set)
    fchunk_off: int = property(_ida_lumina.insn_site_t_fchunk_off_get,
        _ida_lumina.insn_site_t_fchunk_off_set)

    def toea(self, pfn: 'func_t const *') ->ida_idaapi.ea_t:
        return _ida_lumina.insn_site_t_toea(self, pfn)

    def __init__(self):
        _ida_lumina.insn_site_t_swiginit(self, _ida_lumina.new_insn_site_t())
    __swig_destroy__ = _ida_lumina.delete_insn_site_t


_ida_lumina.insn_site_t_swigregister(insn_site_t)


class insn_cmt_t(insn_site_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    cmt: str = property(_ida_lumina.insn_cmt_t_cmt_get, _ida_lumina.
        insn_cmt_t_cmt_set)

    def __init__(self):
        _ida_lumina.insn_cmt_t_swiginit(self, _ida_lumina.new_insn_cmt_t())
    __swig_destroy__ = _ida_lumina.delete_insn_cmt_t


_ida_lumina.insn_cmt_t_swigregister(insn_cmt_t)


class user_stkpnt_t(insn_site_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    delta: 'int64' = property(_ida_lumina.user_stkpnt_t_delta_get,
        _ida_lumina.user_stkpnt_t_delta_set)

    def __init__(self):
        _ida_lumina.user_stkpnt_t_swiginit(self, _ida_lumina.
            new_user_stkpnt_t())
    __swig_destroy__ = _ida_lumina.delete_user_stkpnt_t


_ida_lumina.user_stkpnt_t_swigregister(user_stkpnt_t)


class extra_cmt_t(insn_site_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    prev: str = property(_ida_lumina.extra_cmt_t_prev_get, _ida_lumina.
        extra_cmt_t_prev_set)
    next: str = property(_ida_lumina.extra_cmt_t_next_get, _ida_lumina.
        extra_cmt_t_next_set)

    def __init__(self):
        _ida_lumina.extra_cmt_t_swiginit(self, _ida_lumina.new_extra_cmt_t())
    __swig_destroy__ = _ida_lumina.delete_extra_cmt_t


_ida_lumina.extra_cmt_t_swigregister(extra_cmt_t)


class oprepr_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self):
        _ida_lumina.oprepr_t_swiginit(self, _ida_lumina.new_oprepr_t())
    flags: 'flags64_t' = property(_ida_lumina.oprepr_t_flags_get,
        _ida_lumina.oprepr_t_flags_set)
    opinfo: 'opinfo_t' = property(_ida_lumina.oprepr_t_opinfo_get,
        _ida_lumina.oprepr_t_opinfo_set)
    __swig_destroy__ = _ida_lumina.delete_oprepr_t


_ida_lumina.oprepr_t_swigregister(oprepr_t)


class insn_ops_repr_t(insn_site_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self):
        _ida_lumina.insn_ops_repr_t_swiginit(self, _ida_lumina.
            new_insn_ops_repr_t())
    flags: 'flags64_t' = property(_ida_lumina.insn_ops_repr_t_flags_get,
        _ida_lumina.insn_ops_repr_t_flags_set)
    ops: 'opinfo_t [8]' = property(_ida_lumina.insn_ops_repr_t_ops_get,
        _ida_lumina.insn_ops_repr_t_ops_set)
    __swig_destroy__ = _ida_lumina.delete_insn_ops_repr_t


_ida_lumina.insn_ops_repr_t_swigregister(insn_ops_repr_t)


class metadata_iterator_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    data: 'uchar const *' = property(_ida_lumina.
        metadata_iterator_t_data_get, _ida_lumina.metadata_iterator_t_data_set)
    size: int = property(_ida_lumina.metadata_iterator_t_size_get,
        _ida_lumina.metadata_iterator_t_size_set)
    key: 'mdkey_t' = property(_ida_lumina.metadata_iterator_t_key_get,
        _ida_lumina.metadata_iterator_t_key_set)

    def __init__(self, _md: 'metadata_t const &'):
        _ida_lumina.metadata_iterator_t_swiginit(self, _ida_lumina.
            new_metadata_iterator_t(_md))

    def next(self) ->bool:
        return _ida_lumina.metadata_iterator_t_next(self)

    def data_end(self) ->'uchar const *':
        return _ida_lumina.metadata_iterator_t_data_end(self)
    __swig_destroy__ = _ida_lumina.delete_metadata_iterator_t


_ida_lumina.metadata_iterator_t_swigregister(metadata_iterator_t)


def new_packet(code: 'uchar', ptr: 'uchar const *'=None, len: int=0,
    version: int=-1) ->'rpc_packet_data_t *':
    return _ida_lumina.new_packet(code, ptr, len, version)


LFEAT_PRIMARY_MD = _ida_lumina.LFEAT_PRIMARY_MD
LFEAT_DEC = _ida_lumina.LFEAT_DEC
LFEAT_TLM = _ida_lumina.LFEAT_TLM
LFEAT_SECONDARY_MD = _ida_lumina.LFEAT_SECONDARY_MD


def calc_func_metadata(out_fi: 'func_info_t', pfn: 'func_t const *',
    append_metadata: 'metadata_appender_t *'=None) ->'md5_t *':
    return _ida_lumina.calc_func_metadata(out_fi, pfn, append_metadata)


class md_type_parts_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    userti: bool = property(_ida_lumina.md_type_parts_t_userti_get,
        _ida_lumina.md_type_parts_t_userti_set)
    type: 'qtype' = property(_ida_lumina.md_type_parts_t_type_get,
        _ida_lumina.md_type_parts_t_type_set)
    fields: 'qtype' = property(_ida_lumina.md_type_parts_t_fields_get,
        _ida_lumina.md_type_parts_t_fields_set)

    def __eq__(self, r: 'md_type_parts_t') ->bool:
        return _ida_lumina.md_type_parts_t___eq__(self, r)

    def __ne__(self, r: 'md_type_parts_t') ->bool:
        return _ida_lumina.md_type_parts_t___ne__(self, r)

    def __init__(self):
        _ida_lumina.md_type_parts_t_swiginit(self, _ida_lumina.
            new_md_type_parts_t())
    __swig_destroy__ = _ida_lumina.delete_md_type_parts_t


_ida_lumina.md_type_parts_t_swigregister(md_type_parts_t)


def extract_insn_cmts_from_metadata(out: 'insn_cmts_t', ptr: 'uchar const *'
    ) ->None:
    return _ida_lumina.extract_insn_cmts_from_metadata(out, ptr)


def extract_extra_cmts_from_metadata(out: 'extra_cmts_t', ptr: 'uchar const *'
    ) ->None:
    return _ida_lumina.extract_extra_cmts_from_metadata(out, ptr)


def extract_user_stkpnts_from_metadata(out: 'user_stkpnts_t', ptr:
    'uchar const *') ->None:
    return _ida_lumina.extract_user_stkpnts_from_metadata(out, ptr)


def extract_frame_desc_from_metadata(out: 'frame_desc_t', ptr: 'uchar const *'
    ) ->None:
    return _ida_lumina.extract_frame_desc_from_metadata(out, ptr)


def extract_insn_opreprs_from_metadata(out: 'insn_ops_reprs_t', ptr:
    'uchar const *') ->None:
    return _ida_lumina.extract_insn_opreprs_from_metadata(out, ptr)


def extract_insn_opreprs_from_metadata_ex(out: 'insn_ops_reprs_t', ptr:
    'uchar const *') ->None:
    return _ida_lumina.extract_insn_opreprs_from_metadata_ex(out, ptr)


def get_server_connection() ->'lumina_client_t *':
    return _ida_lumina.get_server_connection()


def get_server_connection2(flags: int) ->'lumina_client_t *':
    return _ida_lumina.get_server_connection2(flags)


GCSF_NO_CONNECT = _ida_lumina.GCSF_NO_CONNECT
GSCF_FEAT_MASK = _ida_lumina.GSCF_FEAT_MASK
AMDF_UPGRADE = _ida_lumina.AMDF_UPGRADE
"""apply kvps that seem to be of higher "quality" than what's currently in the IDB 
        """
AMDF_FORCE = _ida_lumina.AMDF_FORCE
"""apply kvps regardless of what's currently in the IDB, possibly removing some attributes currently present (e.g., name, or prototype could be lost) 
        """


def apply_metadata(ea: ida_idaapi.ea_t, fi: 'func_info_t', flags: int=0
    ) ->None:
    return _ida_lumina.apply_metadata(ea, fi, flags)


def score_metadata(fi: 'func_info_t') ->int:
    return _ida_lumina.score_metadata(fi)


def backup_metadata(ea: ida_idaapi.ea_t) ->bool:
    return _ida_lumina.backup_metadata(ea)


def revert_metadata(ea: ida_idaapi.ea_t) ->bool:
    return _ida_lumina.revert_metadata(ea)


def has_backup_metadata(ea: ida_idaapi.ea_t) ->bool:
    return _ida_lumina.has_backup_metadata(ea)


class func_md_diff_handler_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    __swig_destroy__ = _ida_lumina.delete_func_md_diff_handler_t

    def on_score_changed(self, l: int, r: int) ->None:
        return _ida_lumina.func_md_diff_handler_t_on_score_changed(self, l, r)

    def on_name_changed(self, l: str, r: str) ->None:
        return _ida_lumina.func_md_diff_handler_t_on_name_changed(self, l, r)

    def on_proto_changed(self, l: 'md_type_parts_t', r: 'md_type_parts_t'
        ) ->None:
        return _ida_lumina.func_md_diff_handler_t_on_proto_changed(self, l, r)

    def on_function_comment_changed(self, l: str, r: str, rep: bool) ->None:
        return _ida_lumina.func_md_diff_handler_t_on_function_comment_changed(
            self, l, r, rep)

    def on_comment_changed(self, fchunk_nr: int, fchunk_off: int, l: str, r:
        str, rep: bool) ->None:
        return _ida_lumina.func_md_diff_handler_t_on_comment_changed(self,
            fchunk_nr, fchunk_off, l, r, rep)

    def on_extra_comment_changed(self, fchunk_nr: int, fchunk_off: int, l:
        str, r: str, is_prev: bool) ->None:
        return _ida_lumina.func_md_diff_handler_t_on_extra_comment_changed(self
            , fchunk_nr, fchunk_off, l, r, is_prev)

    def on_user_stkpnt_changed(self, fchunk_nr: int, fchunk_off: int, l:
        'int64 const *', r: 'int64 const *') ->None:
        return _ida_lumina.func_md_diff_handler_t_on_user_stkpnt_changed(self,
            fchunk_nr, fchunk_off, l, r)

    def on_frame_member_changed(self, offset: int, l: 'frame_mem_t', r:
        'frame_mem_t') ->None:
        return _ida_lumina.func_md_diff_handler_t_on_frame_member_changed(self,
            offset, l, r)

    def on_insn_ops_repr_changed(self, fchunk_nr: int, fchunk_off: int, l:
        'insn_ops_repr_t', r: 'insn_ops_repr_t') ->None:
        return _ida_lumina.func_md_diff_handler_t_on_insn_ops_repr_changed(self
            , fchunk_nr, fchunk_off, l, r)

    def __init__(self):
        if self.__class__ == func_md_diff_handler_t:
            _self = None
        else:
            _self = self
        _ida_lumina.func_md_diff_handler_t_swiginit(self, _ida_lumina.
            new_func_md_diff_handler_t(_self))

    def __disown__(self):
        self.this.disown()
        _ida_lumina.disown_func_md_diff_handler_t(self)
        return weakref.proxy(self)


_ida_lumina.func_md_diff_handler_t_swigregister(func_md_diff_handler_t)
DMOF_COMPUTE_AND_DIFF_SCORE = _ida_lumina.DMOF_COMPUTE_AND_DIFF_SCORE


def diff_metadata(handler: 'func_md_diff_handler_t', left: 'func_info_t',
    right: 'func_info_t', flags: int=0) ->bool:
    return _ida_lumina.diff_metadata(handler, left, right, flags)


PROTOCOL_VERSION = _ida_lumina.PROTOCOL_VERSION


class pattern_id_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    type: 'pattern_type_t' = property(_ida_lumina.pattern_id_t_type_get,
        _ida_lumina.pattern_id_t_type_set)
    data: 'bytevec_t' = property(_ida_lumina.pattern_id_t_data_get,
        _ida_lumina.pattern_id_t_data_set)

    def __init__(self, *args):
        _ida_lumina.pattern_id_t_swiginit(self, _ida_lumina.
            new_pattern_id_t(*args))
    __swig_destroy__ = _ida_lumina.delete_pattern_id_t


_ida_lumina.pattern_id_t_swigregister(pattern_id_t)


class func_info_base_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    name: str = property(_ida_lumina.func_info_base_t_name_get, _ida_lumina
        .func_info_base_t_name_set)
    metadata: 'metadata_t' = property(_ida_lumina.
        func_info_base_t_metadata_get, _ida_lumina.
        func_info_base_t_metadata_set)

    def __init__(self, *args):
        _ida_lumina.func_info_base_t_swiginit(self, _ida_lumina.
            new_func_info_base_t(*args))
    __swig_destroy__ = _ida_lumina.delete_func_info_base_t


_ida_lumina.func_info_base_t_swigregister(func_info_base_t)


class func_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    name: str = property(_ida_lumina.func_info_t_name_get, _ida_lumina.
        func_info_t_name_set)
    size: int = property(_ida_lumina.func_info_t_size_get, _ida_lumina.
        func_info_t_size_set)
    metadata: 'metadata_t' = property(_ida_lumina.func_info_t_metadata_get,
        _ida_lumina.func_info_t_metadata_set)

    def __init__(self, *args):
        _ida_lumina.func_info_t_swiginit(self, _ida_lumina.new_func_info_t(
            *args))
    __swig_destroy__ = _ida_lumina.delete_func_info_t


_ida_lumina.func_info_t_swigregister(func_info_t)


class input_file_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    path: str = property(_ida_lumina.input_file_t_path_get, _ida_lumina.
        input_file_t_path_set)
    md5: 'md5_t' = property(_ida_lumina.input_file_t_md5_get, _ida_lumina.
        input_file_t_md5_set)

    def __init__(self, *args):
        _ida_lumina.input_file_t_swiginit(self, _ida_lumina.
            new_input_file_t(*args))
    __swig_destroy__ = _ida_lumina.delete_input_file_t


_ida_lumina.input_file_t_swigregister(input_file_t)


class func_info_and_frequency_t(func_info_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    frequency: int = property(_ida_lumina.
        func_info_and_frequency_t_frequency_get, _ida_lumina.
        func_info_and_frequency_t_frequency_set)

    def __init__(self, __frequency: int=0):
        _ida_lumina.func_info_and_frequency_t_swiginit(self, _ida_lumina.
            new_func_info_and_frequency_t(__frequency))
    __swig_destroy__ = _ida_lumina.delete_func_info_and_frequency_t


_ida_lumina.func_info_and_frequency_t_swigregister(func_info_and_frequency_t)


class func_info_and_pattern_t(func_info_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    pattern_id: 'pattern_id_t' = property(_ida_lumina.
        func_info_and_pattern_t_pattern_id_get, _ida_lumina.
        func_info_and_pattern_t_pattern_id_set)

    def __init__(self, *args):
        _ida_lumina.func_info_and_pattern_t_swiginit(self, _ida_lumina.
            new_func_info_and_pattern_t(*args))
    __swig_destroy__ = _ida_lumina.delete_func_info_and_pattern_t


_ida_lumina.func_info_and_pattern_t_swigregister(func_info_and_pattern_t)


class func_info_pattern_and_frequency_t(func_info_and_pattern_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    frequency: int = property(_ida_lumina.
        func_info_pattern_and_frequency_t_frequency_get, _ida_lumina.
        func_info_pattern_and_frequency_t_frequency_set)

    def __init__(self, __frequency: int=0):
        _ida_lumina.func_info_pattern_and_frequency_t_swiginit(self,
            _ida_lumina.new_func_info_pattern_and_frequency_t(__frequency))
    __swig_destroy__ = _ida_lumina.delete_func_info_pattern_and_frequency_t


_ida_lumina.func_info_pattern_and_frequency_t_swigregister(
    func_info_pattern_and_frequency_t)


class pop_fun_t(func_info_pattern_and_frequency_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    hostname: str = property(_ida_lumina.pop_fun_t_hostname_get,
        _ida_lumina.pop_fun_t_hostname_set)
    input: 'input_file_t' = property(_ida_lumina.pop_fun_t_input_get,
        _ida_lumina.pop_fun_t_input_set)
    ea64: 'ea64_t' = property(_ida_lumina.pop_fun_t_ea64_get, _ida_lumina.
        pop_fun_t_ea64_set)

    def __init__(self, *args):
        _ida_lumina.pop_fun_t_swiginit(self, _ida_lumina.new_pop_fun_t(*args))
    __swig_destroy__ = _ida_lumina.delete_pop_fun_t


_ida_lumina.pop_fun_t_swigregister(pop_fun_t)


class serialized_tinfo(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    type: 'qtype' = property(_ida_lumina.serialized_tinfo_type_get,
        _ida_lumina.serialized_tinfo_type_set)
    fields: 'qtype' = property(_ida_lumina.serialized_tinfo_fields_get,
        _ida_lumina.serialized_tinfo_fields_set)

    def __init__(self, __type: 'type_t const *'=None, __fields:
        'type_t const *'=None):
        _ida_lumina.serialized_tinfo_swiginit(self, _ida_lumina.
            new_serialized_tinfo(__type, __fields))
    __swig_destroy__ = _ida_lumina.delete_serialized_tinfo


_ida_lumina.serialized_tinfo_swigregister(serialized_tinfo)


class frame_mem_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    name: str = property(_ida_lumina.frame_mem_t_name_get, _ida_lumina.
        frame_mem_t_name_set)
    type: 'serialized_tinfo' = property(_ida_lumina.frame_mem_t_type_get,
        _ida_lumina.frame_mem_t_type_set)
    cmt: str = property(_ida_lumina.frame_mem_t_cmt_get, _ida_lumina.
        frame_mem_t_cmt_set)
    rptcmt: str = property(_ida_lumina.frame_mem_t_rptcmt_get, _ida_lumina.
        frame_mem_t_rptcmt_set)
    offset: 'ea64_t' = property(_ida_lumina.frame_mem_t_offset_get,
        _ida_lumina.frame_mem_t_offset_set)
    info: 'oprepr_t' = property(_ida_lumina.frame_mem_t_info_get,
        _ida_lumina.frame_mem_t_info_set)
    nbytes: 'asize_t' = property(_ida_lumina.frame_mem_t_nbytes_get,
        _ida_lumina.frame_mem_t_nbytes_set)

    def __init__(self, *args):
        _ida_lumina.frame_mem_t_swiginit(self, _ida_lumina.new_frame_mem_t(
            *args))
    __swig_destroy__ = _ida_lumina.delete_frame_mem_t


_ida_lumina.frame_mem_t_swigregister(frame_mem_t)


class frame_desc_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    frsize: int = property(_ida_lumina.frame_desc_t_frsize_get, _ida_lumina
        .frame_desc_t_frsize_set)
    argsize: 'asize_t' = property(_ida_lumina.frame_desc_t_argsize_get,
        _ida_lumina.frame_desc_t_argsize_set)
    frregs: 'ushort' = property(_ida_lumina.frame_desc_t_frregs_get,
        _ida_lumina.frame_desc_t_frregs_set)
    members: 'frame_mems_t' = property(_ida_lumina.frame_desc_t_members_get,
        _ida_lumina.frame_desc_t_members_set)

    def __init__(self, *args):
        _ida_lumina.frame_desc_t_swiginit(self, _ida_lumina.
            new_frame_desc_t(*args))
    __swig_destroy__ = _ida_lumina.delete_frame_desc_t


_ida_lumina.frame_desc_t_swigregister(frame_desc_t)


class skipped_func_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    pattern_id: 'pattern_id_t' = property(_ida_lumina.
        skipped_func_t_pattern_id_get, _ida_lumina.
        skipped_func_t_pattern_id_set)
    count: int = property(_ida_lumina.skipped_func_t_count_get, _ida_lumina
        .skipped_func_t_count_set)

    def __init__(self, *args):
        _ida_lumina.skipped_func_t_swiginit(self, _ida_lumina.
            new_skipped_func_t(*args))
    __swig_destroy__ = _ida_lumina.delete_skipped_func_t


_ida_lumina.skipped_func_t_swigregister(skipped_func_t)


class user_license_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    id: str = property(_ida_lumina.user_license_info_t_id_get, _ida_lumina.
        user_license_info_t_id_set)
    name: str = property(_ida_lumina.user_license_info_t_name_get,
        _ida_lumina.user_license_info_t_name_set)
    email: str = property(_ida_lumina.user_license_info_t_email_get,
        _ida_lumina.user_license_info_t_email_set)

    def __init__(self, __id: str=None, __name: str=None, __email: str=None):
        _ida_lumina.user_license_info_t_swiginit(self, _ida_lumina.
            new_user_license_info_t(__id, __name, __email))
    __swig_destroy__ = _ida_lumina.delete_user_license_info_t


_ida_lumina.user_license_info_t_swigregister(user_license_info_t)


class lumina_user_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    license_info: 'user_license_info_t' = property(_ida_lumina.
        lumina_user_t_license_info_get, _ida_lumina.
        lumina_user_t_license_info_set)
    name: str = property(_ida_lumina.lumina_user_t_name_get, _ida_lumina.
        lumina_user_t_name_set)
    karma: int = property(_ida_lumina.lumina_user_t_karma_get, _ida_lumina.
        lumina_user_t_karma_set)
    last_active: 'utc_timestamp_t' = property(_ida_lumina.
        lumina_user_t_last_active_get, _ida_lumina.
        lumina_user_t_last_active_set)
    features: int = property(_ida_lumina.lumina_user_t_features_get,
        _ida_lumina.lumina_user_t_features_set)

    def __init__(self, *args):
        _ida_lumina.lumina_user_t_swiginit(self, _ida_lumina.
            new_lumina_user_t(*args))

    def is_admin(self) ->bool:
        return _ida_lumina.lumina_user_t_is_admin(self)

    def set_is_admin(self, v: bool=True) ->None:
        return _ida_lumina.lumina_user_t_set_is_admin(self, v)

    def can_del_history(self) ->bool:
        return _ida_lumina.lumina_user_t_can_del_history(self)

    def set_can_del_history(self, v: bool=True) ->None:
        return _ida_lumina.lumina_user_t_set_can_del_history(self, v)
    __swig_destroy__ = _ida_lumina.delete_lumina_user_t


_ida_lumina.lumina_user_t_swigregister(lumina_user_t)


class peer_conn_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    session_id: int = property(_ida_lumina.peer_conn_t_session_id_get,
        _ida_lumina.peer_conn_t_session_id_set)
    peer_name: str = property(_ida_lumina.peer_conn_t_peer_name_get,
        _ida_lumina.peer_conn_t_peer_name_set)
    user: 'lumina_user_t' = property(_ida_lumina.peer_conn_t_user_get,
        _ida_lumina.peer_conn_t_user_set)
    established: 'utc_timestamp_t' = property(_ida_lumina.
        peer_conn_t_established_get, _ida_lumina.peer_conn_t_established_set)

    def __init__(self, *args):
        _ida_lumina.peer_conn_t_swiginit(self, _ida_lumina.new_peer_conn_t(
            *args))
    __swig_destroy__ = _ida_lumina.delete_peer_conn_t


_ida_lumina.peer_conn_t_swigregister(peer_conn_t)


class lumina_server_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    macaddr: str = property(_ida_lumina.lumina_server_info_t_macaddr_get,
        _ida_lumina.lumina_server_info_t_macaddr_set)
    verstr: str = property(_ida_lumina.lumina_server_info_t_verstr_get,
        _ida_lumina.lumina_server_info_t_verstr_set)
    start_time: 'utc_timestamp_t' = property(_ida_lumina.
        lumina_server_info_t_start_time_get, _ida_lumina.
        lumina_server_info_t_start_time_set)
    current_time: 'utc_timestamp_t' = property(_ida_lumina.
        lumina_server_info_t_current_time_get, _ida_lumina.
        lumina_server_info_t_current_time_set)

    def __init__(self, __macaddr: str=None, __verstr: str=None,
        __start_time: 'utc_timestamp_t'=0, __current_time: 'utc_timestamp_t'=0
        ):
        _ida_lumina.lumina_server_info_t_swiginit(self, _ida_lumina.
            new_lumina_server_info_t(__macaddr, __verstr, __start_time,
            __current_time))
    __swig_destroy__ = _ida_lumina.delete_lumina_server_info_t


_ida_lumina.lumina_server_info_t_swigregister(lumina_server_info_t)


class lumina_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    client: 'peer_conn_t' = property(_ida_lumina.lumina_info_t_client_get,
        _ida_lumina.lumina_info_t_client_set)
    server: 'lumina_server_info_t' = property(_ida_lumina.
        lumina_info_t_server_get, _ida_lumina.lumina_info_t_server_set)

    def __init__(self, *args):
        _ida_lumina.lumina_info_t_swiginit(self, _ida_lumina.
            new_lumina_info_t(*args))
    __swig_destroy__ = _ida_lumina.delete_lumina_info_t


_ida_lumina.lumina_info_t_swigregister(lumina_info_t)
PKT_RPC_OK = _ida_lumina.PKT_RPC_OK
PKT_RPC_FAIL = _ida_lumina.PKT_RPC_FAIL
PKT_RPC_NOTIFY = _ida_lumina.PKT_RPC_NOTIFY
PKT_HELO = _ida_lumina.PKT_HELO
PKT_PULL_MD = _ida_lumina.PKT_PULL_MD
PKT_PULL_MD_RESULT = _ida_lumina.PKT_PULL_MD_RESULT
PKT_PUSH_MD = _ida_lumina.PKT_PUSH_MD
PKT_PUSH_MD_RESULT = _ida_lumina.PKT_PUSH_MD_RESULT
PKT_GET_POP = _ida_lumina.PKT_GET_POP
PKT_GET_POP_RESULT = _ida_lumina.PKT_GET_POP_RESULT
__UNUSED_20 = _ida_lumina.__UNUSED_20
__UNUSED_21 = _ida_lumina.__UNUSED_21
__UNUSED_22 = _ida_lumina.__UNUSED_22
__UNUSED_23 = _ida_lumina.__UNUSED_23
__UNUSED_24 = _ida_lumina.__UNUSED_24
__UNUSED_25 = _ida_lumina.__UNUSED_25
__UNUSED_26 = _ida_lumina.__UNUSED_26
__UNUSED_27 = _ida_lumina.__UNUSED_27
__UNUSED_28 = _ida_lumina.__UNUSED_28
__UNUSED_29 = _ida_lumina.__UNUSED_29
__UNUSED_30 = _ida_lumina.__UNUSED_30
__UNUSED_31 = _ida_lumina.__UNUSED_31
__UNUSED_32 = _ida_lumina.__UNUSED_32
__UNUSED_33 = _ida_lumina.__UNUSED_33
__UNUSED_34 = _ida_lumina.__UNUSED_34
__UNUSED_35 = _ida_lumina.__UNUSED_35
__UNUSED_36 = _ida_lumina.__UNUSED_36
__UNUSED_37 = _ida_lumina.__UNUSED_37
__UNUSED_38 = _ida_lumina.__UNUSED_38
__UNUSED_39 = _ida_lumina.__UNUSED_39
__UNUSED_40 = _ida_lumina.__UNUSED_40
__UNUSED_41 = _ida_lumina.__UNUSED_41
__UNUSED_42 = _ida_lumina.__UNUSED_42
PKT_GET_LUMINA_INFO = _ida_lumina.PKT_GET_LUMINA_INFO
PKT_GET_LUMINA_INFO_RESULT = _ida_lumina.PKT_GET_LUMINA_INFO_RESULT
__UNUSED_45 = _ida_lumina.__UNUSED_45
__UNUSED_46 = _ida_lumina.__UNUSED_46
__UNUSED_47 = _ida_lumina.__UNUSED_47
__UNUSED_48 = _ida_lumina.__UNUSED_48
PKT_HELO_RESULT = _ida_lumina.PKT_HELO_RESULT


def get_lumina_rpc_packet_t_index_from_base(code: 'lumina_rpc_packet_t'
    ) ->'uchar':
    return _ida_lumina.get_lumina_rpc_packet_t_index_from_base(code)


class pkt_rpc_ok_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    __swig_destroy__ = _ida_lumina.delete_pkt_rpc_ok_t

    def __init__(self):
        _ida_lumina.pkt_rpc_ok_t_swiginit(self, _ida_lumina.new_pkt_rpc_ok_t())


_ida_lumina.pkt_rpc_ok_t_swigregister(pkt_rpc_ok_t)


class pkt_rpc_fail_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    result: int = property(_ida_lumina.pkt_rpc_fail_t_result_get,
        _ida_lumina.pkt_rpc_fail_t_result_set)
    error: str = property(_ida_lumina.pkt_rpc_fail_t_error_get, _ida_lumina
        .pkt_rpc_fail_t_error_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_rpc_fail_t

    def __init__(self):
        _ida_lumina.pkt_rpc_fail_t_swiginit(self, _ida_lumina.
            new_pkt_rpc_fail_t())


_ida_lumina.pkt_rpc_fail_t_swigregister(pkt_rpc_fail_t)


class pkt_rpc_notify_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    type: 'rpc_notification_type_t' = property(_ida_lumina.
        pkt_rpc_notify_t_type_get, _ida_lumina.pkt_rpc_notify_t_type_set)
    text: str = property(_ida_lumina.pkt_rpc_notify_t_text_get, _ida_lumina
        .pkt_rpc_notify_t_text_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_rpc_notify_t

    def __init__(self):
        _ida_lumina.pkt_rpc_notify_t_swiginit(self, _ida_lumina.
            new_pkt_rpc_notify_t())


_ida_lumina.pkt_rpc_notify_t_swigregister(pkt_rpc_notify_t)


class pkt_helo_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    client_version: int = property(_ida_lumina.
        pkt_helo_t_client_version_get, _ida_lumina.
        pkt_helo_t_client_version_set)
    key: 'bytevec_t' = property(_ida_lumina.pkt_helo_t_key_get, _ida_lumina
        .pkt_helo_t_key_set)
    license_id: 'uchar [6]' = property(_ida_lumina.
        pkt_helo_t_license_id_get, _ida_lumina.pkt_helo_t_license_id_set)
    record_conv: bool = property(_ida_lumina.pkt_helo_t_record_conv_get,
        _ida_lumina.pkt_helo_t_record_conv_set)
    username: str = property(_ida_lumina.pkt_helo_t_username_get,
        _ida_lumina.pkt_helo_t_username_set)
    password: str = property(_ida_lumina.pkt_helo_t_password_get,
        _ida_lumina.pkt_helo_t_password_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_helo_t

    def __init__(self):
        _ida_lumina.pkt_helo_t_swiginit(self, _ida_lumina.new_pkt_helo_t())


_ida_lumina.pkt_helo_t_swigregister(pkt_helo_t)


class pkt_pull_md_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    flags: int = property(_ida_lumina.pkt_pull_md_t_flags_get, _ida_lumina.
        pkt_pull_md_t_flags_set)
    keys: 'mdkey_vec_t' = property(_ida_lumina.pkt_pull_md_t_keys_get,
        _ida_lumina.pkt_pull_md_t_keys_set)
    pattern_ids: 'pattern_ids_t' = property(_ida_lumina.
        pkt_pull_md_t_pattern_ids_get, _ida_lumina.
        pkt_pull_md_t_pattern_ids_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_pull_md_t

    def __init__(self):
        _ida_lumina.pkt_pull_md_t_swiginit(self, _ida_lumina.
            new_pkt_pull_md_t())


_ida_lumina.pkt_pull_md_t_swigregister(pkt_pull_md_t)


class pkt_pull_md_result_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    codes: 'lumina_op_res_vec_t' = property(_ida_lumina.
        pkt_pull_md_result_t_codes_get, _ida_lumina.
        pkt_pull_md_result_t_codes_set)
    results: 'func_info_and_frequency_vec_t' = property(_ida_lumina.
        pkt_pull_md_result_t_results_get, _ida_lumina.
        pkt_pull_md_result_t_results_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_pull_md_result_t

    def __init__(self):
        _ida_lumina.pkt_pull_md_result_t_swiginit(self, _ida_lumina.
            new_pkt_pull_md_result_t())


_ida_lumina.pkt_pull_md_result_t_swigregister(pkt_pull_md_result_t)


class pkt_push_md_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    flags: int = property(_ida_lumina.pkt_push_md_t_flags_get, _ida_lumina.
        pkt_push_md_t_flags_set)
    idb: str = property(_ida_lumina.pkt_push_md_t_idb_get, _ida_lumina.
        pkt_push_md_t_idb_set)
    input: 'input_file_t' = property(_ida_lumina.pkt_push_md_t_input_get,
        _ida_lumina.pkt_push_md_t_input_set)
    hostname: str = property(_ida_lumina.pkt_push_md_t_hostname_get,
        _ida_lumina.pkt_push_md_t_hostname_set)
    contents: 'func_info_and_pattern_vec_t' = property(_ida_lumina.
        pkt_push_md_t_contents_get, _ida_lumina.pkt_push_md_t_contents_set)
    ea64s: 'ea64vec_t' = property(_ida_lumina.pkt_push_md_t_ea64s_get,
        _ida_lumina.pkt_push_md_t_ea64s_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_push_md_t

    def __init__(self):
        _ida_lumina.pkt_push_md_t_swiginit(self, _ida_lumina.
            new_pkt_push_md_t())


_ida_lumina.pkt_push_md_t_swigregister(pkt_push_md_t)


class pkt_push_md_result_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    codes: 'lumina_op_res_vec_t' = property(_ida_lumina.
        pkt_push_md_result_t_codes_get, _ida_lumina.
        pkt_push_md_result_t_codes_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_push_md_result_t

    def __init__(self):
        _ida_lumina.pkt_push_md_result_t_swiginit(self, _ida_lumina.
            new_pkt_push_md_result_t())


_ida_lumina.pkt_push_md_result_t_swigregister(pkt_push_md_result_t)


class pkt_get_pop_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    nresults: int = property(_ida_lumina.pkt_get_pop_t_nresults_get,
        _ida_lumina.pkt_get_pop_t_nresults_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_get_pop_t

    def __init__(self):
        _ida_lumina.pkt_get_pop_t_swiginit(self, _ida_lumina.
            new_pkt_get_pop_t())


_ida_lumina.pkt_get_pop_t_swigregister(pkt_get_pop_t)


class pkt_get_pop_result_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    results: 'pop_fun_vec_t' = property(_ida_lumina.
        pkt_get_pop_result_t_results_get, _ida_lumina.
        pkt_get_pop_result_t_results_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_get_pop_result_t

    def __init__(self):
        _ida_lumina.pkt_get_pop_result_t_swiginit(self, _ida_lumina.
            new_pkt_get_pop_result_t())


_ida_lumina.pkt_get_pop_result_t_swigregister(pkt_get_pop_result_t)


class pkt_get_lumina_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    __swig_destroy__ = _ida_lumina.delete_pkt_get_lumina_info_t

    def __init__(self):
        _ida_lumina.pkt_get_lumina_info_t_swiginit(self, _ida_lumina.
            new_pkt_get_lumina_info_t())


_ida_lumina.pkt_get_lumina_info_t_swigregister(pkt_get_lumina_info_t)


class pkt_get_lumina_info_result_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    info: 'lumina_info_t' = property(_ida_lumina.
        pkt_get_lumina_info_result_t_info_get, _ida_lumina.
        pkt_get_lumina_info_result_t_info_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_get_lumina_info_result_t

    def __init__(self):
        _ida_lumina.pkt_get_lumina_info_result_t_swiginit(self, _ida_lumina
            .new_pkt_get_lumina_info_result_t())


_ida_lumina.pkt_get_lumina_info_result_t_swigregister(
    pkt_get_lumina_info_result_t)


class pkt_helo_result_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    user: 'lumina_user_t' = property(_ida_lumina.pkt_helo_result_t_user_get,
        _ida_lumina.pkt_helo_result_t_user_set)
    __swig_destroy__ = _ida_lumina.delete_pkt_helo_result_t

    def __init__(self):
        _ida_lumina.pkt_helo_result_t_swiginit(self, _ida_lumina.
            new_pkt_helo_result_t())


_ida_lumina.pkt_helo_result_t_swigregister(pkt_helo_result_t)


class push_md_opts_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    eas: 'eavec_t' = property(_ida_lumina.push_md_opts_t_eas_get,
        _ida_lumina.push_md_opts_t_eas_set)
    min_func_size: int = property(_ida_lumina.
        push_md_opts_t_min_func_size_get, _ida_lumina.
        push_md_opts_t_min_func_size_set)

    def __init__(self, *args):
        _ida_lumina.push_md_opts_t_swiginit(self, _ida_lumina.
            new_push_md_opts_t(*args))
    __swig_destroy__ = _ida_lumina.delete_push_md_opts_t


_ida_lumina.push_md_opts_t_swigregister(push_md_opts_t)


class push_md_result_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    eas: 'eavec_t' = property(_ida_lumina.push_md_result_t_eas_get,
        _ida_lumina.push_md_result_t_eas_set)
    codes: 'lumina_op_res_vec_t' = property(_ida_lumina.
        push_md_result_t_codes_get, _ida_lumina.push_md_result_t_codes_set)
    contents: 'func_info_and_pattern_vec_t' = property(_ida_lumina.
        push_md_result_t_contents_get, _ida_lumina.
        push_md_result_t_contents_set)

    def __init__(self):
        _ida_lumina.push_md_result_t_swiginit(self, _ida_lumina.
            new_push_md_result_t())
    __swig_destroy__ = _ida_lumina.delete_push_md_result_t


_ida_lumina.push_md_result_t_swigregister(push_md_result_t)


class lumina_client_t(object):
    """Lumina server connection client.

Use `get_server_connection()` to obtain an instance."""
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError('No constructor defined')
    __repr__ = _swig_repr
    __swig_destroy__ = _ida_lumina.delete_lumina_client_t

    def set_pattern_id_md5(self, out: 'pattern_id_t', md5: 'md5_t const &'
        ) ->None:
        return _ida_lumina.lumina_client_t_set_pattern_id_md5(self, out, md5)

    def is_pattern_id(self, pid: 'pattern_id_t', md5: 'md5_t const &') ->bool:
        return _ida_lumina.lumina_client_t_is_pattern_id(self, pid, md5)

    def pull_md(self, *args) ->'pkt_pull_md_result_t':
        """Pull metadata from the Lumina server.
See lumina.hpp's lumina_client_t::pull_md() for authoritative documentation.

This method has the following signatures:

    1. pull_md(funcs: ida_pro.eavec_t, pull_md_flags: int = 0) -> pkt_pull_md_result_t
    2. pull_md(pattern_ids: pattern_ids_t, pull_md_flags: int = 0) -> pkt_pull_md_result_t

Note: The C++ `errbuf` parameter is not exposed in Python.

:param funcs: vector of function addresses (if empty, will be filled with "interesting" functions)
:param pattern_ids: vector of pattern IDs (will be consumed/destroyed)
:param pull_md_flags: combination of PULL_MD_* flags:
    - PULL_MD_AUTO_APPLY (0x01): automatically apply metadata
    - PULL_MD_SEEN_FILE (0x02): do not increase frequency count
:returns: pkt_pull_md_result_t with `results` (func_info_and_frequency_vec_t)
          and `codes` (lumina_op_res_vec_t) for per-input status"""
        return _ida_lumina.lumina_client_t_pull_md(self, *args)

    def push_md(self, result: 'push_md_result_t', opts: 'push_md_opts_t',
        append_metadata: 'metadata_appender_t *'=None, flags: int=0) ->bool:
        return _ida_lumina.lumina_client_t_push_md(self, result, opts,
            append_metadata, flags)

    def get_pop(self, nresults: int=10) ->'pkt_get_pop_result_t *':
        return _ida_lumina.lumina_client_t_get_pop(self, nresults)

    def del_history(self, funcs: 'eavec_t const &') ->bool:
        return _ida_lumina.lumina_client_t_del_history(self, funcs)


_ida_lumina.lumina_client_t_swigregister(lumina_client_t)
PULL_MD_AUTO_APPLY = _ida_lumina.PULL_MD_AUTO_APPLY
PULL_MD_SEEN_FILE = _ida_lumina.PULL_MD_SEEN_FILE


def extract_type_from_metadata(out: 'tinfo_t', _in: 'bytevec_t const &'
    ) ->bool:
    return _ida_lumina.extract_type_from_metadata(out, _in)


def split_metadata(metadata: bytes) ->dict:
    """Split the metadata blob into a set of KVP's

:param metadata: a metadata blob
:returns: a set of KVP's"""
    return _ida_lumina.split_metadata(metadata)


import ida_bytes
import ida_typeinf
import ida_ida
import ida_pro


class simple_idb_diff_handler_t(func_md_diff_handler_t):
    NO_DATA_MARKER = None


    class indenter_t(object):

        def __init__(self, handler):
            self.handler = handler
            self.handler.indent += 1

        def __del__(self):
            self.handler.indent -= 1

    def __init__(self, pfn):
        super(self.__class__, self).__init__()
        self.pfn = pfn
        self.header_generated = False
        self.lines = []
        self.indent = 0

    def on_score_changed(self, l, r):
        self.put2(str(l), str(r), 'Score')

    def on_name_changed(self, l, r):
        self.put2(l, r, 'Name')

    def on_proto_changed(self, l, r):
        self.put2(self.format_type(l), self.format_type(r), 'Prototype')

    def on_function_comment_changed(self, l, r, rep):
        self.put2(l, r, 'Function comment (%s)' % ('repeatable' if rep else
            'regular'))

    def on_comment_changed(self, fchunk_nr, fchunk_off, l, r, rep):
        loc = self.where(fchunk_nr, fchunk_off)
        self.put2(l, r, '%s comment @ %s' % ('repeatable' if rep else
            'regular', loc))

    def on_extra_comment_changed(self, fchunk_nr, fchunk_off, l, r, is_prev):
        loc = self.where(fchunk_nr, fchunk_off)
        self.put2(self.format_extra_cmt(l), self.format_extra_cmt(r), 
            '%sterior extra comment @ %s' % ('An' if is_prev else 'Pos', loc))

    def on_user_stkpnt_changed(self, fchunk_nr, fchunk_off, l, r):
        loc = self.where(fchunk_nr, fchunk_off)
        self.put2(self.format_stkpnt(l), self.format_stkpnt(r), 
            'User stack point @ %s' % loc)

    def on_frame_member_changed(self, offset, l, r):
        self.ensure_header_generated()
        self.put('Member @ 0x%X' % offset)
        indenter = self.indenter_t(self)
        ltype, loprepr, lcmt, lrptcmt = self.format_frame_member(l)
        rtype, roprepr, rcmt, rrptcmt = self.format_frame_member(r)
        cmp_put = lambda l, r, topic: self.put2(l, r, topic
            ) if l != r else None
        cmp_put(ltype, rtype, '.type')
        cmp_put(loprepr, roprepr, '.opinfo')
        cmp_put(lcmt, rcmt, '.cmt')
        cmp_put(lrptcmt, rrptcmt, '.rptcmt')

    def on_insn_ops_repr_changed(self, fchunk_nr, fchunk_off, l, r):
        loc = self.where(fchunk_nr, fchunk_off)
        ls, rs = self.format_insn_ops(l), self.format_insn_ops(r)
        self.put2(ls, rs, 'Insn operands @ %s' % loc)

    def ensure_header_generated(self):
        if not self.header_generated:
            self.lines.append('')
            self.lines.append('Function 0x%X' % self.pfn.start_ea)
            self.header_generated = True

    def where(self, fchunk_nr, fchunk_off):
        site = insn_site_t()
        site.fchunk_nr = fchunk_nr
        site.fchunk_off = fchunk_off
        return '0x%X' % site.toea(self.pfn)

    def format_type(self, type_parts):
        tif = ida_typeinf.tinfo_t()
        if tif.deserialize(None, type_parts.type, type_parts.fields):
            return tif._print()

    def format_extra_cmt(self, cmt):
        if cmt:
            cmt = ida_pro.str2user(cmt)
        return cmt

    def format_stkpnt(self, stkpnt):
        if stkpnt is not None:
            return '%d' % stkpnt

    def format_frame_member(self, m):
        _type = self.NO_DATA_MARKER
        _oprepr = self.NO_DATA_MARKER
        _cmt = self.NO_DATA_MARKER
        _rptcmt = self.NO_DATA_MARKER
        if m:
            if len(m.type.type):
                _type = self.format_type(m.type)
            if ida_bytes.is_off0(m.info.flags):
                _oprepr = (
                    '{"target" : 0x%X, "base" : 0x%X, "tdelta" : 0x%X, "flags" : 0x%08x}'
                     % (m.info.opinfo.ri.target, m.info.opinfo.ri.base, m.
                    info.opinfo.ri.tdelta, m.info.opinfo.ri.flags))
            _cmt = m.cmt
            _rptcmt = m.rptcmt
        return _type, _oprepr, _cmt, _rptcmt

    def format_insn_ops(self, ro):
        if not ro:
            return '[<no ops repr>]'
        parts = []
        for i in range(ida_ida.UA_MAXOP):
            parts.append('op%d=0x%X' % (i, ro.flags >> ida_bytes.
                get_operand_type_shift(i) & 15))
        return '[%s]' % ', '.join(parts)

    def put(self, msg):
        self.lines.append('    ' * self.indent + msg)

    def put2(self, l, r, topic):
        self.ensure_header_generated()
        if l is None:
            l = self.NO_DATA_MARKER
        if r is None:
            r = self.NO_DATA_MARKER
        self.put(topic)
        indenter = self.indenter_t(self)
        self.put('- %s' % l)
        self.put('+ %s' % r)

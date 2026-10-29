from __future__ import annotations
from sys import version_info as _swig_python_version_info
if __package__ or '.' in __name__:
    from . import _ida_moves
else:
    import _ida_moves
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
SWIG_PYTHON_LEGACY_BOOL = _ida_moves.SWIG_PYTHON_LEGACY_BOOL
from typing import Tuple, List, Union
import ida_idaapi


class segm_move_info_vec_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        _ida_moves.segm_move_info_vec_t_swiginit(self, _ida_moves.
            new_segm_move_info_vec_t(*args))
    __swig_destroy__ = _ida_moves.delete_segm_move_info_vec_t

    def push_back(self, *args) ->'segm_move_info_t &':
        return _ida_moves.segm_move_info_vec_t_push_back(self, *args)

    def pop_back(self) ->None:
        return _ida_moves.segm_move_info_vec_t_pop_back(self)

    def size(self) ->int:
        return _ida_moves.segm_move_info_vec_t_size(self)

    def empty(self) ->bool:
        return _ida_moves.segm_move_info_vec_t_empty(self)

    def at(self, _idx: int) ->'segm_move_info_t const &':
        return _ida_moves.segm_move_info_vec_t_at(self, _idx)

    def qclear(self) ->None:
        return _ida_moves.segm_move_info_vec_t_qclear(self)

    def clear(self) ->None:
        return _ida_moves.segm_move_info_vec_t_clear(self)

    def resize(self, *args) ->None:
        return _ida_moves.segm_move_info_vec_t_resize(self, *args)

    def grow(self, *args) ->None:
        return _ida_moves.segm_move_info_vec_t_grow(self, *args)

    def capacity(self) ->int:
        return _ida_moves.segm_move_info_vec_t_capacity(self)

    def reserve(self, cnt: int) ->None:
        return _ida_moves.segm_move_info_vec_t_reserve(self, cnt)

    def truncate(self) ->None:
        return _ida_moves.segm_move_info_vec_t_truncate(self)

    def swap(self, r: 'segm_move_info_vec_t') ->None:
        return _ida_moves.segm_move_info_vec_t_swap(self, r)

    def extract(self) ->'segm_move_info_t *':
        return _ida_moves.segm_move_info_vec_t_extract(self)

    def inject(self, s: 'segm_move_info_t', len: int) ->None:
        return _ida_moves.segm_move_info_vec_t_inject(self, s, len)

    def __eq__(self, r: 'segm_move_info_vec_t') ->bool:
        return _ida_moves.segm_move_info_vec_t___eq__(self, r)

    def __ne__(self, r: 'segm_move_info_vec_t') ->bool:
        return _ida_moves.segm_move_info_vec_t___ne__(self, r)

    def begin(self, *args) ->'qvector< segm_move_info_t >::const_iterator':
        return _ida_moves.segm_move_info_vec_t_begin(self, *args)

    def end(self, *args) ->'qvector< segm_move_info_t >::const_iterator':
        return _ida_moves.segm_move_info_vec_t_end(self, *args)

    def insert(self, it: 'segm_move_info_t', x: 'segm_move_info_t'
        ) ->'qvector< segm_move_info_t >::iterator':
        return _ida_moves.segm_move_info_vec_t_insert(self, it, x)

    def erase(self, *args) ->'qvector< segm_move_info_t >::iterator':
        return _ida_moves.segm_move_info_vec_t_erase(self, *args)

    def find(self, *args) ->'qvector< segm_move_info_t >::const_iterator':
        return _ida_moves.segm_move_info_vec_t_find(self, *args)

    def has(self, x: 'segm_move_info_t') ->bool:
        return _ida_moves.segm_move_info_vec_t_has(self, x)

    def add_unique(self, x: 'segm_move_info_t') ->bool:
        return _ida_moves.segm_move_info_vec_t_add_unique(self, x)

    def _del(self, x: 'segm_move_info_t') ->bool:
        return _ida_moves.segm_move_info_vec_t__del(self, x)

    def __len__(self) ->int:
        return _ida_moves.segm_move_info_vec_t___len__(self)

    def __getitem__(self, i: int) ->'segm_move_info_t const &':
        return _ida_moves.segm_move_info_vec_t___getitem__(self, i)

    def __setitem__(self, i: int, v: 'segm_move_info_t') ->None:
        return _ida_moves.segm_move_info_vec_t___setitem__(self, i, v)

    def append(self, x: 'segm_move_info_t') ->None:
        return _ida_moves.segm_move_info_vec_t_append(self, x)

    def extend(self, x: 'segm_move_info_vec_t') ->None:
        return _ida_moves.segm_move_info_vec_t_extend(self, x)
    front = ida_idaapi._qvector_front
    back = ida_idaapi._qvector_back
    __iter__ = ida_idaapi._bounded_getitem_iterator


_ida_moves.segm_move_info_vec_t_swigregister(segm_move_info_vec_t)
import ida_kernwin


class graph_location_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    zoom: 'double' = property(_ida_moves.graph_location_info_t_zoom_get,
        _ida_moves.graph_location_info_t_zoom_set)
    orgx: 'double' = property(_ida_moves.graph_location_info_t_orgx_get,
        _ida_moves.graph_location_info_t_orgx_set)
    orgy: 'double' = property(_ida_moves.graph_location_info_t_orgy_get,
        _ida_moves.graph_location_info_t_orgy_set)

    def __init__(self):
        _ida_moves.graph_location_info_t_swiginit(self, _ida_moves.
            new_graph_location_info_t())

    def __eq__(self, r: 'graph_location_info_t') ->bool:
        return _ida_moves.graph_location_info_t___eq__(self, r)

    def __ne__(self, r: 'graph_location_info_t') ->bool:
        return _ida_moves.graph_location_info_t___ne__(self, r)
    __swig_destroy__ = _ida_moves.delete_graph_location_info_t


_ida_moves.graph_location_info_t_swigregister(graph_location_info_t)


class segm_move_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, _from: ida_idaapi.ea_t=0, _to: ida_idaapi.ea_t=0,
        _sz: int=0):
        _ida_moves.segm_move_info_t_swiginit(self, _ida_moves.
            new_segm_move_info_t(_from, _to, _sz))
    _from: ida_idaapi.ea_t = property(_ida_moves.segm_move_info_t__from_get,
        _ida_moves.segm_move_info_t__from_set)
    to: ida_idaapi.ea_t = property(_ida_moves.segm_move_info_t_to_get,
        _ida_moves.segm_move_info_t_to_set)
    size: int = property(_ida_moves.segm_move_info_t_size_get, _ida_moves.
        segm_move_info_t_size_set)

    def __eq__(self, r: 'segm_move_info_t') ->bool:
        return _ida_moves.segm_move_info_t___eq__(self, r)

    def __ne__(self, r: 'segm_move_info_t') ->bool:
        return _ida_moves.segm_move_info_t___ne__(self, r)
    __swig_destroy__ = _ida_moves.delete_segm_move_info_t


_ida_moves.segm_move_info_t_swigregister(segm_move_info_t)


class segm_move_infos_t(segm_move_info_vec_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr

    def find(self, ea: ida_idaapi.ea_t) ->'segm_move_info_t const *':
        return _ida_moves.segm_move_infos_t_find(self, ea)

    def __init__(self):
        _ida_moves.segm_move_infos_t_swiginit(self, _ida_moves.
            new_segm_move_infos_t())
    __swig_destroy__ = _ida_moves.delete_segm_move_infos_t


_ida_moves.segm_move_infos_t_swigregister(segm_move_infos_t)


class renderer_info_pos_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    node: int = property(_ida_moves.renderer_info_pos_t_node_get,
        _ida_moves.renderer_info_pos_t_node_set)
    cx: 'short' = property(_ida_moves.renderer_info_pos_t_cx_get,
        _ida_moves.renderer_info_pos_t_cx_set)
    cy: 'short' = property(_ida_moves.renderer_info_pos_t_cy_get,
        _ida_moves.renderer_info_pos_t_cy_set)

    def __init__(self):
        _ida_moves.renderer_info_pos_t_swiginit(self, _ida_moves.
            new_renderer_info_pos_t())

    def __eq__(self, r: 'renderer_info_pos_t') ->bool:
        return _ida_moves.renderer_info_pos_t___eq__(self, r)

    def __ne__(self, r: 'renderer_info_pos_t') ->bool:
        return _ida_moves.renderer_info_pos_t___ne__(self, r)
    __swig_destroy__ = _ida_moves.delete_renderer_info_pos_t


_ida_moves.renderer_info_pos_t_swigregister(renderer_info_pos_t)


class renderer_info_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    gli: 'graph_location_info_t' = property(_ida_moves.
        renderer_info_t_gli_get, _ida_moves.renderer_info_t_gli_set)
    pos: 'renderer_info_t::pos_t' = property(_ida_moves.
        renderer_info_t_pos_get, _ida_moves.renderer_info_t_pos_set)
    rtype: 'tcc_renderer_type_t' = property(_ida_moves.
        renderer_info_t_rtype_get, _ida_moves.renderer_info_t_rtype_set)

    def __init__(self, *args):
        _ida_moves.renderer_info_t_swiginit(self, _ida_moves.
            new_renderer_info_t(*args))

    def __eq__(self, r: 'renderer_info_t') ->bool:
        return _ida_moves.renderer_info_t___eq__(self, r)

    def __ne__(self, r: 'renderer_info_t') ->bool:
        return _ida_moves.renderer_info_t___ne__(self, r)
    __swig_destroy__ = _ida_moves.delete_renderer_info_t


_ida_moves.renderer_info_t_swigregister(renderer_info_t)
LSEF_PLACE = _ida_moves.LSEF_PLACE
LSEF_RINFO = _ida_moves.LSEF_RINFO
LSEF_PTYPE = _ida_moves.LSEF_PTYPE
LSEF_ALL = _ida_moves.LSEF_ALL


class lochist_entry_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    rinfo: 'renderer_info_t' = property(_ida_moves.
        lochist_entry_t_rinfo_get, _ida_moves.lochist_entry_t_rinfo_set)
    plce: 'place_t *' = property(_ida_moves.lochist_entry_t_plce_get,
        _ida_moves.lochist_entry_t_plce_set)

    def __init__(self, *args):
        _ida_moves.lochist_entry_t_swiginit(self, _ida_moves.
            new_lochist_entry_t(*args))
    __swig_destroy__ = _ida_moves.delete_lochist_entry_t

    def renderer_info(self) ->'renderer_info_t &':
        return _ida_moves.lochist_entry_t_renderer_info(self)

    def place(self) ->'place_t *':
        return _ida_moves.lochist_entry_t_place(self)

    def set_place(self, p: 'place_t') ->None:
        return _ida_moves.lochist_entry_t_set_place(self, p)

    def is_valid(self) ->bool:
        return _ida_moves.lochist_entry_t_is_valid(self)

    def acquire_place(self, in_p: 'place_t') ->None:
        return _ida_moves.lochist_entry_t_acquire_place(self, in_p)


_ida_moves.lochist_entry_t_swigregister(lochist_entry_t)


class navstack_entry_t(lochist_entry_t):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    widget_id: str = property(_ida_moves.navstack_entry_t_widget_id_get,
        _ida_moves.navstack_entry_t_widget_id_set)
    ud_str: str = property(_ida_moves.navstack_entry_t_ud_str_get,
        _ida_moves.navstack_entry_t_ud_str_set)

    def __init__(self, *args):
        _ida_moves.navstack_entry_t_swiginit(self, _ida_moves.
            new_navstack_entry_t(*args))
    __swig_destroy__ = _ida_moves.delete_navstack_entry_t


_ida_moves.navstack_entry_t_swigregister(navstack_entry_t)
UNHID_SEGM = _ida_moves.UNHID_SEGM
"""unhid a segment at 'target'
"""
UNHID_FUNC = _ida_moves.UNHID_FUNC
"""unhid a function at 'target'
"""
UNHID_RANGE = _ida_moves.UNHID_RANGE
"""unhid an range at 'target'
"""
DEFAULT_CURSOR_Y = _ida_moves.DEFAULT_CURSOR_Y
DEFAULT_LNNUM = _ida_moves.DEFAULT_LNNUM
CURLOC_LIST = _ida_moves.CURLOC_LIST
MAX_MARK_SLOT = _ida_moves.MAX_MARK_SLOT


class navstack_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')
    __repr__ = _swig_repr
    flags: int = property(_ida_moves.navstack_t_flags_get, _ida_moves.
        navstack_t_flags_set)

    def __init__(self):
        _ida_moves.navstack_t_swiginit(self, _ida_moves.new_navstack_t())
    __swig_destroy__ = _ida_moves.delete_navstack_t

    def is_history_enabled(self) ->bool:
        return _ida_moves.navstack_t_is_history_enabled(self)

    def init(self, defpos: 'navstack_entry_t', stream_name: str, _flags: int
        ) ->bool:
        return _ida_moves.navstack_t_init(self, defpos, stream_name, _flags)

    @staticmethod
    def perform_move(stream_name: str, source_stream_name: str, widget_id:
        str, move_stack: bool) ->bool:
        return _ida_moves.navstack_t_perform_move(stream_name,
            source_stream_name, widget_id, move_stack)

    def netcode(self) ->'nodeidx_t':
        return _ida_moves.navstack_t_netcode(self)

    def set_current(self, e: 'navstack_entry_t', in_charge: bool) ->None:
        return _ida_moves.navstack_t_set_current(self, e, in_charge)

    def get_current(self, out: 'navstack_entry_t', widget_id: str) ->bool:
        return _ida_moves.navstack_t_get_current(self, out, widget_id)

    def get_all_current(self, out: 'navstack_entry_vec_t *') ->None:
        return _ida_moves.navstack_t_get_all_current(self, out)

    def stack_jump(self, try_to_unhide: bool, e: 'navstack_entry_t') ->None:
        return _ida_moves.navstack_t_stack_jump(self, try_to_unhide, e)

    def stack_index(self) ->int:
        return _ida_moves.navstack_t_stack_index(self)

    def stack_seek(self, out: 'navstack_entry_t', index: int, try_to_unhide:
        bool) ->bool:
        return _ida_moves.navstack_t_stack_seek(self, out, index, try_to_unhide
            )

    def stack_forward(self, out: 'navstack_entry_t', cnt: int,
        try_to_unhide: bool) ->bool:
        return _ida_moves.navstack_t_stack_forward(self, out, cnt,
            try_to_unhide)

    def stack_back(self, out: 'navstack_entry_t', cnt: int, try_to_unhide: bool
        ) ->bool:
        return _ida_moves.navstack_t_stack_back(self, out, cnt, try_to_unhide)

    def stack_nav(self, out: 'navstack_entry_t', forward: bool, cnt: int,
        try_to_unhide: bool) ->bool:
        return _ida_moves.navstack_t_stack_nav(self, out, forward, cnt,
            try_to_unhide)

    def stack_clear(self, new_tip: 'navstack_entry_t') ->None:
        return _ida_moves.navstack_t_stack_clear(self, new_tip)

    def set_stack_entry(self, index: int, e: 'navstack_entry_t') ->None:
        return _ida_moves.navstack_t_set_stack_entry(self, index, e)

    def get_stack_entry(self, out: 'navstack_entry_t', index: int) ->bool:
        return _ida_moves.navstack_t_get_stack_entry(self, out, index)

    def get_current_stack_entry(self, out: 'navstack_entry_t') ->bool:
        return _ida_moves.navstack_t_get_current_stack_entry(self, out)

    def stack_size(self) ->int:
        return _ida_moves.navstack_t_stack_size(self)


_ida_moves.navstack_t_swigregister(navstack_t)
LHF_HISTORY_DISABLED = _ida_moves.LHF_HISTORY_DISABLED


class bookmarks_t(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v),
        doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError('No constructor defined')
    __repr__ = _swig_repr

    @staticmethod
    def mark(e: 'lochist_entry_t', index: int, title: str, desc: str, ud:
        'void *') ->int:
        return _ida_moves.bookmarks_t_mark(e, index, title, desc, ud)

    @staticmethod
    def get_by_inode(out_entry: 'lochist_entry_t', out_desc: str, inode:
        'inode_t', ud: 'void *') ->int:
        return _ida_moves.bookmarks_t_get_by_inode(out_entry, out_desc,
            inode, ud)

    @staticmethod
    def get_desc(e: 'lochist_entry_t', index: int, ud: 'void *') ->str:
        return _ida_moves.bookmarks_t_get_desc(e, index, ud)

    @staticmethod
    def find_index(e: 'lochist_entry_t', ud: 'void *') ->int:
        return _ida_moves.bookmarks_t_find_index(e, ud)

    @staticmethod
    def size(e: 'lochist_entry_t', ud: 'void *') ->int:
        return _ida_moves.bookmarks_t_size(e, ud)

    @staticmethod
    def erase(e: 'lochist_entry_t', index: int, ud: 'void *') ->bool:
        return _ida_moves.bookmarks_t_erase(e, index, ud)

    @staticmethod
    def get_dirtree_id(e: 'lochist_entry_t', ud: 'void *') ->'dirtree_id_t':
        return _ida_moves.bookmarks_t_get_dirtree_id(e, ud)

    @staticmethod
    def get(out: 'lochist_entry_t', _index: int, ud: 'void *') ->'PyObject *':
        return _ida_moves.bookmarks_t_get(out, _index, ud)

    def __init__(self, w):
        """
        Build an object suitable for iterating bookmarks
        associated with the specified widget.

        Note: all ea_t-based widgets (e.g., "IDA View-*",
        "Pseudocode-*", "Hex View-*", ...) share a common storage,
        so bookmarks can be re-used interchangeably between them
        """
        self.widget = w
        self.userdata = ida_kernwin.get_viewer_user_data(self.widget)
        self.template = lochist_entry_t()
        if ida_kernwin.get_custom_viewer_location(self.template, self.widget):
            p = self.template.place()
            if p is not None:
                p_id = ida_kernwin.get_place_class_id(p.name())
                if p_id > -1 and ida_kernwin.is_place_class_ea_capable(p_id):
                    idap_id = ida_kernwin.get_place_class_id('idaplace_t')
                    if idap_id > -1:
                        idap = ida_kernwin.get_place_class_template(idap_id)
                        if idap is not None:
                            self.template.set_place(idap)

    def __iter__(self):
        """
        Iterate on bookmarks present for the widget.
        """
        p = self.template.place()
        if p is not None:
            for idx in range(bookmarks_t.size(self.template, self.userdata)):
                yield self[idx]

    def __len__(self):
        """
        Get the number of bookmarks for the widget.
        """
        return bookmarks_t.size(self.template, self.userdata)

    def __getitem__(self, idx):
        """
        Get the n-th bookmark for the widget.
        """
        p = self.template.place()
        if p is not None:
            if isinstance(idx, int) and idx >= 0 and idx < len(self):
                loc = lochist_entry_t()
                loc.set_place(p)
                desc, _ = bookmarks_t.get(loc, idx, self.userdata)
                return loc, desc
            else:
                raise IndexError()


_ida_moves.bookmarks_t_swigregister(bookmarks_t)
BOOKMARKS_PROMPT_WITH_HINT_PREFIX = (_ida_moves.
    BOOKMARKS_PROMPT_WITH_HINT_PREFIX)
bookmarks_t_erase = bookmarks_t.erase
bookmarks_t_find_index = bookmarks_t.find_index
bookmarks_t_get = bookmarks_t.get
bookmarks_t_get_desc = bookmarks_t.get_desc
bookmarks_t_get_dirtree_id = bookmarks_t.get_dirtree_id
bookmarks_t_mark = bookmarks_t.mark
bookmarks_t_size = bookmarks_t.size

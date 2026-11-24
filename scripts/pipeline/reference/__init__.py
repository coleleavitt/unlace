"""Reference decompilers: the "what does a better decompiler produce here" side.

A ReferenceDecompiler maps (binary, function) -> ReferenceResult (the decompiled C text
plus provenance). angr is the first implementation; the rest of the pipeline
(worklist/compare/sweep/worker) is decompiler-agnostic, so adding reko / Binary Ninja /
IDA later is just a new adapter here.
"""
from .base import ReferenceDecompiler, ReferenceResult
from .angr_adapter import AngrReference
from .unlace_adapter import UnlaceReference

#: Registry of available reference decompilers by name.
#:
#: ``unlace`` makes the unlace engine itself a reference, so the same compare machinery
#: can run unlace against another reference (or be the reference for a future tool) --
#: not just angr-vs-unlace.
REGISTRY = {
    "angr": AngrReference,
    "unlace": UnlaceReference,
}


def get_reference(name="angr", **kw):
    """Instantiate a reference decompiler by name."""
    try:
        cls = REGISTRY[name]
    except KeyError:
        raise ValueError("unknown reference decompiler %r (have: %s)"
                         % (name, ", ".join(sorted(REGISTRY))))
    return cls(**kw)


__all__ = ["ReferenceDecompiler", "ReferenceResult", "AngrReference",
           "UnlaceReference", "REGISTRY", "get_reference"]

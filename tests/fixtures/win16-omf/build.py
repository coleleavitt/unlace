#!/usr/bin/env python3
"""Build the Win16 NE and OMF fixtures (nasm only; no 16-bit linker is installed):

    hello16.obj   16-bit OMF object (nasm -f obj): DGROUP, an EXTDEF called near
                  and one called far, a SEGMENT and DGROUP offset fixups, a MODEND
                  start address
    hello32.obj   32-bit OMF object (USE32 segments in FLAT)
    helper16.obj  a second 16-bit module, defining far_helper
    hello.lib     an OMF library of hello16.obj and helper16.obj (page size 16,
                  an empty dictionary: the loader reads the modules in order)
    hello.exe     a Win16 NE executable: code segment ne_code.asm and a data
                  segment, relocations to KERNEL ordinal 91 (a two-site chain),
                  to USER!MESSAGEBOX by name, a SEGMENT relocation of the data
                  segment and a far call through movable entry ordinal 1

NASM is overridable from the environment.
"""
import os
import struct
import subprocess
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
NASM = os.environ.get("NASM", "nasm")


def nasm(source, out, fmt):
    # relative source path: the THEADR record names the file nasm was given
    subprocess.run([NASM, "-f", fmt, "-o", str(out), source], check=True, cwd=HERE)


def pad(data, to):
    return data + bytes(-len(data) % to)


def record(kind, contents):
    body = contents + b"\0"  # checksum byte (0: not checked)
    return bytes([kind]) + struct.pack("<H", len(body)) + body


def library(modules, page=16):
    header = record(0xF0, struct.pack("<IHB", 0, 0, 0) + bytes(page - 3 - 7 - 1))
    out = pad(header, page)
    for module in modules:
        out += pad(module, page)
    return out + record(0xF1, b"")


def pascal(name):
    return bytes([len(name)]) + name


def ne_exe(code):
    sites = [i for i in range(len(code) - 4) if code[i] == 0x9A and code[i + 1:i + 5] == b"\xff\xff\xff\xff"]
    kernel1, user, helper_site, kernel2 = (site + 1 for site in sites)
    helper = code.index(b"\xa1\x06\x00\xcb")
    code = bytearray(code)
    code[kernel1:kernel1 + 2] = struct.pack("<H", kernel2)  # chain: first site links to the second
    data = b"hello\0" + struct.pack("<H", 3)

    relocs = [
        struct.pack("<BBHBBH", 2, 0, 1, 2, 0, 0),             # SEGMENT, internal: segment 2
        struct.pack("<BBHHH", 3, 1, kernel1, 1, 91),          # FAR_ADDR, import ordinal KERNEL.91
        struct.pack("<BBHHH", 3, 2, user, 2, 0),              # FAR_ADDR, import name (patched below)
        struct.pack("<BBHBBH", 3, 0, helper_site, 0xFF, 0, 1),  # FAR_ADDR, movable entry 1
    ]
    imported = b"\0" + pascal(b"KERNEL") + pascal(b"USER")
    messagebox = len(imported)
    imported += pascal(b"MESSAGEBOX")
    relocs[2] = struct.pack("<BBHHH", 3, 2, user, 2, messagebox)
    modrefs = struct.pack("<HH", 1, 1 + 7)
    resident = pascal(b"HELLO") + b"\0\0" + pascal(b"HELPER") + b"\1\0" + pascal(b"START") + b"\2\0" + b"\0"
    entries = bytes([1, 0xFF]) + bytes([1, 0xCD, 0x3F, 1]) + struct.pack("<H", helper)
    entries += bytes([1, 1]) + bytes([1]) + struct.pack("<H", 0) + b"\0"
    nonresident = pascal(b"Hello NE fixture") + b"\0\0" + b"\0"

    stub = bytearray(0x40)
    stub[0:2] = b"MZ"
    struct.pack_into("<HHHH", stub, 2, 0x40, 1, 0, 4)
    struct.pack_into("<I", stub, 0x3C, 0x40)           # e_lfanew
    shift = 4
    tables_at = 0x40
    seg_table = 0x40
    resource = seg_table + 2 * 8
    resident_at = resource
    modref_at = resident_at + len(resident)
    imported_at = modref_at + len(modrefs)
    entry_at = imported_at + len(imported)
    header_len = entry_at + len(entries)
    nonres_at = tables_at + header_len
    seg1_at = pad(bytes(nonres_at + len(nonresident)), 1 << shift).__len__()
    seg1 = bytes(code) + struct.pack("<H", len(relocs)) + b"".join(relocs)
    seg2_at = seg1_at + len(pad(seg1, 1 << shift))
    seg_rows = struct.pack("<HHHH", seg1_at >> shift, len(code), 0x0100, len(code))
    seg_rows += struct.pack("<HHHH", seg2_at >> shift, len(data), 0x0001, 0x100)

    ne = bytearray(0x40)
    ne[0:2] = b"NE"
    ne[2:4] = bytes([5, 10])
    struct.pack_into("<HH", ne, 0x04, entry_at, len(entries))
    struct.pack_into("<H", ne, 0x0C, 0x0002)            # MULTIPLEDATA
    struct.pack_into("<HHH", ne, 0x0E, 2, 0x400, 0x1000)  # autodata, heap, stack
    struct.pack_into("<HH", ne, 0x14, 0, 1)             # CS:IP = 1:0000
    struct.pack_into("<HH", ne, 0x18, 0, 2)             # SS:SP = 2:0000
    struct.pack_into("<HHH", ne, 0x1C, 2, 2, len(nonresident))
    struct.pack_into("<HHHHH", ne, 0x22, seg_table, resource, resident_at, modref_at, imported_at)
    struct.pack_into("<I", ne, 0x2C, nonres_at)
    struct.pack_into("<HHH", ne, 0x30, 1, shift, 0)
    ne[0x36] = 2                                       # Windows
    struct.pack_into("<H", ne, 0x3E, 0x030A)
    body = bytes(ne) + seg_rows + resident + modrefs + imported + entries
    assert len(body) == header_len
    out = bytes(stub) + body + nonresident
    out = pad(out, 1 << shift)
    assert len(out) == seg1_at
    out = pad(out + seg1, 1 << shift)
    assert len(out) == seg2_at
    return out + data


def main():
    for name in ("hello16", "hello32", "helper16"):
        nasm(name + ".asm", HERE / (name + ".obj"), "obj")
    (HERE / "hello.lib").write_bytes(library([(HERE / "hello16.obj").read_bytes(), (HERE / "helper16.obj").read_bytes()]))
    with tempfile.TemporaryDirectory() as work:
        out = Path(work) / "ne_code.bin"
        nasm("ne_code.asm", out, "bin")
        (HERE / "hello.exe").write_bytes(ne_exe(out.read_bytes()))


if __name__ == "__main__":
    main()

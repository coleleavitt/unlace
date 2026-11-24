#!/usr/bin/env python3
"""Write the CMSIS-SVD device bundle that `--svd <device>` reads (svd_devices.br) from vendor device packs.

Usage: gen_svd_bundle.py <out.br> <pack>...

Each pack is a CMSIS device family pack (.pack, a zip) whose SVD files carry a licence that allows
redistribution: the Keil STM32 packs and Microchip SAM packs (Apache-2.0), Nordic's nRF device
family pack and Raspberry Pi's RP2xxx pack (BSD-3-Clause). Every SVD is cut down to what
svd.rs reads (device name and size; peripherals with derivedFrom, name, baseAddress, size, interrupts
and registers; clusters and registers with name, addressOffset, size and dim/dimIncrement/dimIndex),
keyed by its file stem in upper case. The bundle is one Brotli stream: a header line, one
`<stem>\\t<length>\\n` line per device in sorted order, an empty line, then the documents.
An SVD must name its SPDX licence, or its pack's licence set (the .pdsc) must list only those two;
anything else (Keil.STM32F1xx_DFP states none) is refused.
"""
import io
import re
import subprocess
import sys
import zipfile
import xml.etree.ElementTree as ET
from pathlib import Path

KEEP = {
    "device": ["name", "size", "peripherals"],
    "peripherals": ["peripheral"],
    "peripheral": ["name", "baseAddress", "size", "registers", "interrupt"],
    "interrupt": ["name", "value"],
    "registers": ["register", "cluster"],
    "cluster": ["name", "addressOffset", "size", "dim", "dimIncrement", "dimIndex", "register", "cluster"],
    "register": ["name", "addressOffset", "size", "dim", "dimIncrement", "dimIndex"],
}
ATTRS = {"peripheral": ["derivedFrom"]}


def minimize(e):
    out = ET.Element(e.tag, {k: v for k, v in e.attrib.items() if k in ATTRS.get(e.tag, [])})
    for c in e:
        tag = c.tag.split("}", 1)[-1]
        if tag not in KEEP.get(e.tag, []):
            continue
        if tag in KEEP:
            c.tag = tag
            out.append(minimize(c))
        else:
            ET.SubElement(out, tag).text = (c.text or "").strip()
    return out


def main():
    out, packs = Path(sys.argv[1]), sys.argv[2:]
    docs = {}
    for pack in packs:
        with zipfile.ZipFile(pack) as z:
            pdsc = next((z.read(n) for n in z.namelist() if n.endswith(".pdsc")), b"")
            spdx = set(re.findall(rb'spdx="([^"]+)"', pdsc))
            pack_ok = bool(spdx) and spdx <= {b"Apache-2.0", b"BSD-3-Clause"}
            for name in sorted(n for n in z.namelist() if n.lower().endswith(".svd")):
                raw = z.read(name)
                if not pack_ok and not re.search(rb"SPDX-License-Identifier:\s*(Apache-2\.0|BSD-3-Clause)", raw[:4096]):
                    sys.exit("%s: %s states no Apache-2.0 or BSD-3-Clause licence" % (pack, name))
                stem = Path(name).stem.upper()
                if stem in docs:
                    continue
                root = ET.fromstring(raw)
                root.tag = root.tag.split("}", 1)[-1]
                docs[stem] = ET.tostring(minimize(root))
    body = io.BytesIO()
    body.write(b"unlace-svd-bundle 1\n")
    for stem in sorted(docs):
        body.write(b"%s\t%d\n" % (stem.encode(), len(docs[stem])))
    body.write(b"\n")
    for stem in sorted(docs):
        body.write(docs[stem])
    data = subprocess.run(["brotli", "-c", "-q", "11", "-w", "24"], input=body.getvalue(), check=True,
                          capture_output=True).stdout
    out.write_bytes(data)
    sys.stderr.write("%d devices, %d bytes (%d uncompressed)\n" % (len(docs), len(data), len(body.getvalue())))


if __name__ == "__main__":
    main()

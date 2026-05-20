#!/usr/bin/env python3
"""
Parse rust-lang Zulip JSON dumps at ~/VulnerabilityResearch/zulip/ and
extract messages relevant to unlace's pass pipeline.

Each stream dir contains `all_messages.json` with shape:
    {
      "stream_name": "t-compiler/performance",
      "stream_id": 247081,
      "message_count": 21874,
      "topic_count": 855,
      "messages": [
        {
          "id": 203450538,
          "sender_full_name": "...",
          "timestamp": 1594334139,
          "subject": "<topic name>",
          "content": "<HTML body>",
          ...
        },
        ...
      ]
    }

Usage:
    parse_messages.py --root ~/VulnerabilityResearch/zulip \\
                      --stream t-compiler_performance \\
                      --keyword 'fixed point' --keyword worklist \\
                      --limit 50 > digest.txt
"""

from __future__ import annotations

import argparse
import html
import json
import os
import re
import sys
from dataclasses import dataclass
from datetime import datetime, timezone
from typing import Iterator, Sequence


_TAG = re.compile(r"<[^>]+>")
_WHITESPACE = re.compile(r"\s+")
_USER_MENTION = re.compile(r'<span[^>]*class="user-mention[^"]*"[^>]*>(.*?)</span>', re.DOTALL)
_CODE_BLOCK = re.compile(r"<pre>(.*?)</pre>", re.DOTALL)


def strip_html(s: str) -> str:
    """Convert Zulip HTML content to readable plain text."""
    # Preserve code blocks with their newlines, then strip outer tags.
    s = _CODE_BLOCK.sub(lambda m: "\n```\n" + _TAG.sub("", m.group(1)) + "\n```\n", s)
    # Render user-mentions as @name.
    s = _USER_MENTION.sub(lambda m: "@" + _TAG.sub("", m.group(1)), s)
    s = _TAG.sub("", s)
    s = html.unescape(s)
    s = _WHITESPACE.sub(" ", s).strip()
    return s


@dataclass(frozen=True)
class Message:
    id: int
    sender: str
    timestamp: int
    topic: str
    stream: str
    text: str

    def when(self) -> str:
        return datetime.fromtimestamp(self.timestamp, tz=timezone.utc).strftime("%Y-%m-%d %H:%M")


def load_stream(stream_dir: str) -> Iterator[Message]:
    """Yield every message in a stream directory's all_messages.json."""
    path = os.path.join(stream_dir, "all_messages.json")
    if not os.path.isfile(path):
        return
    with open(path, "r", encoding="utf-8") as fh:
        data = json.load(fh)
    stream = data.get("stream_name", os.path.basename(stream_dir))
    for raw in data.get("messages", []):
        yield Message(
            id=raw.get("id", 0),
            sender=raw.get("sender_full_name", "?"),
            timestamp=int(raw.get("timestamp", 0)),
            topic=raw.get("subject", "?"),
            stream=stream,
            text=strip_html(raw.get("content", "")),
        )


def iter_streams(root: str, only: Sequence[str] | None) -> Iterator[str]:
    """Iterate over stream directories under `root`."""
    if not os.path.isdir(root):
        return
    for entry in sorted(os.listdir(root)):
        full = os.path.join(root, entry)
        if not os.path.isdir(full):
            continue
        if entry.startswith(".") or entry in {"source", "deobfuscated", "node_modules"}:
            continue
        if only is None or entry in only:
            yield full


def matches(text: str, keywords: Sequence[str]) -> bool:
    """Case-insensitive substring match against any keyword."""
    if not keywords:
        return True
    lo = text.lower()
    return any(k.lower() in lo for k in keywords)


def filter_messages(
    root: str,
    streams: Sequence[str] | None,
    keywords: Sequence[str],
) -> Iterator[Message]:
    for sd in iter_streams(root, streams):
        yield from (m for m in load_stream(sd) if matches(m.text, keywords))


def emit_digest(msgs: Sequence[Message], limit: int, out=sys.stdout) -> None:
    """Group by topic, print sender + when + truncated text per message."""
    by_topic: dict[tuple[str, str], list[Message]] = {}
    for m in msgs:
        by_topic.setdefault((m.stream, m.topic), []).append(m)

    total_topics = len(by_topic)
    total_msgs = sum(len(v) for v in by_topic.values())
    out.write(f"# Zulip digest — {total_msgs} messages across {total_topics} topics\n\n")

    for (stream, topic), group in sorted(by_topic.items(), key=lambda kv: -len(kv[1]))[:limit]:
        out.write(f"\n## [{stream}] {topic}  ({len(group)} msgs)\n\n")
        for m in group[:5]:  # top 5 per topic
            text = m.text[:400].replace("\n", " ")
            if len(m.text) > 400:
                text += " …"
            out.write(f"- **{m.sender}** ({m.when()}): {text}\n")


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("--root", default=os.path.expanduser("~/VulnerabilityResearch/zulip"),
                   help="root dir holding stream subdirs (default: %(default)s)")
    p.add_argument("--stream", action="append", default=None,
                   help="restrict to one or more stream dirs (repeatable; default: all)")
    p.add_argument("--keyword", action="append", default=[],
                   help="case-insensitive substring filter (repeatable). With none, all messages match.")
    p.add_argument("--limit", type=int, default=30,
                   help="max topics to display in the digest (default: %(default)d)")
    p.add_argument("--list-streams", action="store_true",
                   help="list available streams + their message counts and exit")
    p.add_argument("--raw", action="store_true",
                   help="emit machine-readable JSONL (one obj per matched msg) instead of digest")
    args = p.parse_args()

    if args.list_streams:
        rows = []
        for sd in iter_streams(args.root, None):
            path = os.path.join(sd, "all_messages.json")
            if not os.path.isfile(path):
                continue
            try:
                with open(path, "r", encoding="utf-8") as fh:
                    head = json.load(fh)
                rows.append((head.get("message_count", 0), head.get("stream_name", os.path.basename(sd))))
            except Exception as e:
                rows.append((0, f"{os.path.basename(sd)} (parse error: {e})"))
        rows.sort(reverse=True)
        for count, name in rows:
            print(f"{count:>7}  {name}")
        return 0

    matched = list(filter_messages(args.root, args.stream, args.keyword))
    if not matched:
        print("# no messages matched", file=sys.stderr)
        return 1

    if args.raw:
        for m in matched:
            print(json.dumps({
                "id": m.id, "stream": m.stream, "topic": m.topic,
                "sender": m.sender, "ts": m.timestamp, "text": m.text,
            }))
    else:
        emit_digest(matched, args.limit)
    return 0


if __name__ == "__main__":
    sys.exit(main())

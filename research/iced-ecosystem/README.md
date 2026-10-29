# Iced + Iced Ecosystem (Reference Mirror)

Local clones of the iced GUI framework and its ecosystem libraries. These
will be the reference for unlace's desktop UI (Batch 28).

## What's here

| Repo | Purpose for unlace |
|------|--------------------|
| `iced/` | Core framework. ELM-style cross-platform GUI for Rust. |
| `iced_aw/` | "Additional widgets" — selection list, badges, card, color picker, date picker, drop-down, menus, modal, number input, split, spinner, tabs. unlace needs most of these. |
| `iced-code-editor/` | Production-grade code editor widget with syntax highlight, line numbers, keyboard nav. **Direct reference for the pseudocode pane.** |
| `iced_term/` | Terminal-emulator widget powered by alacritty backend. Useful if we embed a debug shell. |
| `frostbyte_terminal/` | Yakuake-style dropdown terminal built with iced + wezterm. Reference for high-perf text rendering in iced. |
| `plotters-iced/` | Plotters integration. For coverage heatmaps, call-graph rendering, performance flame graphs. |
| `iced_audio/` | Audio-app widgets. Not directly relevant but the layout-engine patterns are useful for our dockable panes. |
| `cosmic-time/` | Animation toolkit. For smooth pane transitions. |
| `halloy/` | Production IRC client using iced. Excellent reference for **multi-pane scrollable layout** which is exactly what an RE tool needs. |
| `book/` | Official iced book (WIP). |
| `cookbook/` | Official cookbook of small how-tos. |
| `awesome-iced/` | Curated index of projects + widgets. |

## Why iced for unlace?

The plan.md (Batch 28) considered five Rust GUI options and originally
recommended egui. After further review the team chose iced because:

1. **The ELM model fits an RE tool**. RE workflows are "user clicks → message
   dispatched → state mutates → re-render only what changed." That is
   exactly Elm's pattern. egui's immediate-mode is fine for tools that
   redraw every frame, but unlace will redraw on user actions, not every
   frame.

2. **iced_code_editor is production-ready**. The pseudocode pane is the
   single largest UI surface; iced ships a real editor widget out of the
   box. egui's code editor was acceptable but less polished.

3. **Halloy and Sniffnet prove iced scales**. Both are real production apps
   with multi-pane layouts, scrollable lists with thousands of entries,
   and active development. Halloy in particular is a near-perfect model
   for unlace's intended layout (left sidebar nav, main content area,
   bottom status bar).

4. **Plotters-iced** gives us flamegraphs/heatmaps/CFG renders without
   writing graphics code.

5. **Cosmic uses iced**. The COSMIC desktop environment is the largest
   non-trivial iced consumer. Anything blocking us in iced is also blocking
   them; the ecosystem maturity floor is high.

## Implementation plan

See plan.md Batch 28 for the full Tasks list. Summary:

- `crates/unlace-gui/` will be a fresh crate that depends on `iced`,
  `iced_aw`, and `iced_code_editor`.
- Panes: Functions list (left) | Disassembly + Pseudocode tabs (center) |
  Xrefs + Strings + Imports panel (right) | Output log (bottom).
- All UI state lives in a single `App` struct following the iced pattern;
  `Message` enum drives all mutations.
- Backing data is the `unlace_session::Session` crate shared with the TUI
  (Batch 28 also builds a ratatui TUI for SSH workflows).

## How to update

To refresh from upstream:

```bash
cd research/iced-ecosystem
for d in */; do
  if [ -d "$d/.git" ]; then
    echo "==> $d"
    git -C "$d" pull --depth=1 2>&1 | tail -2
  fi
done
```

Note: these are all `git clone --depth=1` to keep disk usage low. The
`.git/` directories alone are otherwise huge.

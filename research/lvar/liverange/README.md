# LVAR / live-range / SSA-destruction research packet

Downloaded for the Unlace `t61`/r9 `rsp`/`rsi` conflation investigation. The immediate code-design conclusion from `docs/design-lvar-liverange-split-2026-06-01.md:915-945` is that the late name-layer pointer/scalar split is the wrong layer: r9 is already conflated upstream by SSA/value-flow/copy/phi handling. These papers focus on SSA destruction, phi congruence, copy coalescing, live-range splitting, binary variable recovery, and type/pointer evidence.

## Priority reading order for Unlace

1. **Boissinot out-of-SSA material** — Read `boissinot-2009-outssa-slides.pdf` plus `boissinot-2010-thesis-towards-ssa-based-compiler-backend.pdf` first. They are the closest match to deciding when phi/copy-related SSA names may legally be coalesced.
2. **Budimlic/Cooper live-range identification** — `budimlic-2002-fast-copy-coalescing-live-range-identification.pdf` is the core live-range/coalescing reference.
3. **SSA-form register allocation / interval splitting** — `hack-2006-register-allocation-programs-ssa-form.pdf`, `wimmer-2010-linear-scan-register-allocation-on-ssa-form.pdf`, and `braun-2009-register-spilling-live-range-splitting-ssa-form.pdf` map to per-program-point lvar allocation.
4. **Decompiler-specific SSA/lvar recovery** — `van-emmerik-2007-static-single-assignment-for-decompilation.pdf`, `divine-2007-discovering-variables-in-executables.pdf`, `phoenix-2013-native-x86-decompilation-semantics-preserving-structural-analysis.pdf`.
5. **Type/pointer evidence** — `tie-2011-principled-reverse-engineering-types-binary-programs.pdf`, `caballero-lin-2016-type-inference-on-executables.pdf`, `osprey-2021-recovery-variable-data-structure-stripped-binary.pdf`.

## Implementation implications for Unlace

- Treat t61/r9 as an **out-of-SSA/coalescing correctness problem**, not as a C-printer problem.
- Build an r9 SSA/value graph: versions as nodes; COPY/phi/address-use/load/store/zext/subpiece edges; labels for provenance (`rsp`/stack, `rsi` cursor, scalar digit), live intervals, and use class.
- Before emitting merged names, enforce a conservative CSSA/out-of-SSA rule: if phi/copy endpoints are value-class/provenance-conflicting or interfere at program points, do not coalesce them into one lvar.
- Prefer Wimmer/Braun-style live intervals and split points over final register buckets. The desired lvars are program-point live ranges, not machine-register equivalence classes.
- Use type/pointer-recovery papers only as evidence sources for the lattice; do not use them as late rename commands.

## Search keywords used / useful

- `out-of-SSA translation correctness coalescing CSSA`
- `SSA destruction phi congruence copy coalescing interference`
- `fast copy coalescing live-range identification`
- `linear scan register allocation SSA live interval splitting`
- `register spilling live-range splitting SSA-form programs`
- `static single assignment for decompilation local variable live range`
- `decompiler variable recovery lvar SSA phi`
- `binary type recovery pointer scalar inference`
- `value-set analysis binary pointer analysis`
- `DIVINE discovering variables in executables`

## Papers and download status

| File | Paper | Authors | Venue/year | Source | Status |
| --- | --- | --- | --- | --- | --- |
| `boissinot-2009-revisiting-out-of-ssa-translation.pdf` | Revisiting Out-of-SSA Translation for Correctness, Code Quality, and Efficiency | Benoit Boissinot, Alain Darte, Fabrice Rastello, Benoit Dupont de Dinechin, Christophe Guillon | CGO 2009 | https://inria.hal.science/inria-00349925v1/document | Downloaded |
| `boissinot-2009-outssa-slides.pdf` | Revisiting Out-of-SSA Translation slides | Benoit Boissinot et al. | CGO 2009 slides | https://bboissin.appspot.com/static/upload/bboissin-outssa-cgo09-slides.pdf | Downloaded |
| `boissinot-2010-thesis-towards-ssa-based-compiler-backend.pdf` | Towards an SSA based compiler back-end: some interesting properties of SSA and its extensions | Benoit Boissinot | PhD thesis, 2010 | https://bboissin.appspot.com/static/upload/bboissin-thesis-2010-09-22.pdf | Downloaded; includes detailed out-of-SSA/liveness material. |
| `sreedhar-1999-translating-out-of-ssa.pdf` | Translating Out of Static Single Assignment Form | Vugranam C. Sreedhar, Roy Dz-Ching Ju, David M. Gillies, Vatsa Santhanam | SAS 1999 | https://link.springer.com/chapter/10.1007/3-540-48294-6_13 | MISSING PDF: no open direct PDF found in searches; Springer landing page only. |
| `budimlic-2002-fast-copy-coalescing-live-range-identification.pdf` | Fast Copy Coalescing and Live-Range Identification | Zoran Budimlic, Keith D. Cooper, Timothy J. Harvey, Ken Kennedy, Timothy S. Oberg, Steven W. Reeves | PLDI 2002 | https://courses.grainger.illinois.edu/cs426/fa2022/Papers/liverange.pldi02.pdf | Downloaded |
| `hack-2006-register-allocation-programs-ssa-form.pdf` | Register Allocation for Programs in SSA-Form | Sebastian Hack, Daniel Grund, Gerhard Goos | CC 2006 | https://compilers.cs.uni-saarland.de/papers/ssara.pdf | Downloaded |
| `wimmer-2010-linear-scan-register-allocation-on-ssa-form.pdf` | Linear Scan Register Allocation on SSA Form | Christian Wimmer, Michael Franz | CGO 2010 | http://www.christianwimmer.at/Publications/Wimmer10a/Wimmer10a.pdf | Downloaded |
| `braun-2009-register-spilling-live-range-splitting-ssa-form.pdf` | Register Spilling and Live-Range Splitting for SSA-Form Programs | Matthias Braun, Sebastian Hack | CC 2009 | https://bernsteinbear.com/assets/img/register-spilling-range-splitting-ssa.pdf | Downloaded |
| `cytron-1991-efficiently-computing-ssa-control-dependence.pdf` | Efficiently Computing Static Single Assignment Form and the Control Dependence Graph | Ron Cytron, Jeanne Ferrante, Barry K. Rosen, Mark N. Wegman, F. Kenneth Zadeck | TOPLAS/PLDI 1991 | https://www.cs.utexas.edu/~pingali/CS380C/2010/papers/ssaCytron.pdf | Downloaded |
| `briggs-1998-practical-improvements-construction-destruction-ssa.pdf` | Practical Improvements to the Construction and Destruction of Static Single Assignment Form | Preston Briggs, Keith D. Cooper, Timothy J. Harvey, L. Taylor Simpson | Software—Practice & Experience / Rice tech report era | https://bernsteinbear.com/assets/img/briggs-ssa.pdf | Downloaded |
| `ssa-elimination-after-register-allocation-2008.pdf` | SSA Elimination after Register Allocation | Fernando Magno Quintao Pereira, Jens Palsberg | Compiler Construction 2009 preprint | https://homepages.dcc.ufmg.br/~fernando/publications/papers/CC09.pdf | Downloaded |
| `register-allocation-after-classical-ssa-elimination-np-complete-2006.pdf` | Register Allocation after Classical SSA Elimination is NP-complete | Fernando Magno Quintao Pereira, Jens Palsberg | FoSSaCS 2006 | http://web.cs.ucla.edu/~palsberg/paper/fossacs06.pdf | Downloaded |
| `pereira-palsberg-2008-register-allocation-by-puzzle-solving.pdf` | Register Allocation by Puzzle Solving | Fernando Magno Quintao Pereira, Jens Palsberg | PLDI 2008 | https://llvm.org/pubs/2008-06-PLDI-PuzzleSolving.pdf | Downloaded |
| `bebenita-2009-constructing-ssa-the-easy-way.pdf` | Constructing SSA the Easy Way | Michael Bebenita et al. | 2009 | https://bernsteinbear.com/assets/img/bebenita-ssa.pdf | Downloaded |
| `leung-george-1999-static-single-assignment-form-for-machine-code.pdf` | Static Single Assignment Form for Machine Code | Allen Leung, Lal George | PLDI 1999 | https://dl.acm.org/doi/pdf/10.1145/301618.301667 | MISSING PDF: ACM returned 403 in curl; only landing/result found. |
| `ssabook-2018-ssa-based-compiler-design.pdf` | SSA-based Compiler Design | F. Rastello et al. / community SSA book | Book draft, 2018 | https://pfalcon.github.io/ssabook/latest/book-full.pdf | Downloaded |
| `fast-liveness-checking-for-ssa-form-programs-2007.pdf` | Fast Liveness Checking for SSA-Form Programs | Boissinot et al. | Research report / related work | https://inria.hal.science/inria-00192219/PDF/fast_liveness.pdf | Downloaded |
| `van-emmerik-2007-static-single-assignment-for-decompilation.pdf` | Static Single Assignment for Decompilation | Michael James Van Emmerik | PhD thesis, University of Queensland, 2007 | https://yurichev.com/mirrors/vanEmmerik_ssa.pdf | Downloaded |
| `tie-2011-principled-reverse-engineering-types-binary-programs.pdf` | TIE: Principled Reverse Engineering of Types in Binary Programs | JongHyup Lee, Thanassis Avgerinos, David Brumley | NDSS 2011 | https://www.ndss-symposium.org/wp-content/uploads/2017/09/lee.pdf | Downloaded |
| `osprey-2021-recovery-variable-data-structure-stripped-binary.pdf` | OSPREY: Recovery of Variable and Data Structure via Probabilistic Analysis for Stripped Binary | Zhuo Zhang et al. | IEEE S&P 2021 | https://yonghwi-kwon.github.io/data/osprey_sp21.pdf | Downloaded |
| `caballero-lin-2016-type-inference-on-executables.pdf` | Type Inference on Executables | Juan Caballero, Zhiqiang Lin | ACM Computing Surveys 2016 | https://www.agautham.io/assets/papers/type-inference-on-executables-2016.pdf | Downloaded |
| `yan-mccamant-2014-conservative-signed-unsigned-type-inference.pdf` | Conservative Signed/Unsigned Type Inference for Binaries using Minimum Cut | Qiuchen Yan, Stephen McCamant | University of Minnesota Technical Report 14-006, 2014 | Referenced by ACM CSUR; no stable open PDF found | MISSING PDF: web searches found citations only, no direct accessible report PDF. |
| `balakrishnan-reps-2004-analyzing-memory-accesses-x86-executables.pdf` | Analyzing Memory Accesses in x86 Executables | Gogul Balakrishnan, Thomas Reps | CC 2004 | https://research.cs.wisc.edu/wpis/papers/cc04.pdf | Downloaded |
| `divine-2007-discovering-variables-in-executables.pdf` | DIVINE: DIscovering Variables IN Executables | Gogul Balakrishnan, Thomas Reps | VMCAI 2007 | https://pages.cs.wisc.edu/~bgogul/Research/Invited-Papers/vmcai07.invited.pdf | Downloaded |
| `wysinwyx-2010-what-you-see-is-not-what-you-execute.pdf` | WYSINWYX: What You See Is Not What You eXecute | Gogul Balakrishnan, Thomas Reps | TOPLAS 2010 | https://research.cs.wisc.edu/wpis/papers/wysinwyx.final.pdf | Downloaded |
| `phoenix-2013-native-x86-decompilation-semantics-preserving-structural-analysis.pdf` | Native x86 Decompilation using Semantics-Preserving Structural Analysis and Iterative Control-Flow Structuring | Edward J. Schwartz, JongHyup Lee, Maverick Woo, David Brumley | USENIX Security 2013 | https://www.usenix.org/system/files/conference/usenixsecurity13/sec13-paper_schwartz.pdf | Downloaded |
| `dream-2015-no-more-gotos-pattern-independent-control-flow-structuring.pdf` | No More Gotos: Decompilation Using Pattern-Independent Control-Flow Structuring and Semantics | Khaled Yakdan et al. | NDSS 2015 | https://net.cs.uni-bonn.de/fileadmin/ag/martini/Staff/yakdan/dream_ndss2015.pdf | Downloaded |
| `sailr-2024-compiler-aware-structuring-binary-decompilation.pdf` | Ahoy SAILR! There is No Need to DREAM of C | Zion Leonahenahe Basque et al. | USENIX Security 2024 | https://adamdoupe.com/publications/sailr-usenix2024.pdf | Downloaded |
| `superset-decompilation-2026.pdf` | Superset Decompilation | Chang Liu, Yihao Sun, Thomas Gilray, Kristopher Micinski | arXiv 2026 | https://arxiv.org/pdf/2603.28002 | Downloaded |
| `dirty-2022-augmenting-decompiler-output-learned-variable-names-types.pdf` | Augmenting Decompiler Output with Learned Variable Names and Types / DIRTY | Qibin Chen et al. | USENIX Security 2022 | https://www.usenix.org/system/files/sec22-chen-qibin.pdf | Downloaded |
| `banerjee-2021-variable-name-recovery-decompiled-binary-code.pdf` | Variable Name Recovery in Decompiled Binary Code using Constrained Masked Language Modeling | Pratyay Banerjee, Kuntal Kumar Pal, Fish Wang, Chitta Baral | arXiv 2021 | https://arxiv.org/pdf/2103.12801 | Downloaded |
| `meaningful-variable-names-2018-decompiled-code.pdf` | Meaningful Variable Names for Decompiled Code | Alan Jaffe et al. | ICPC 2018 | https://cmustrudel.github.io/papers/icpc18decompilation.pdf | Downloaded |
| `varbert-2024-predicting-variable-names-decompilation-output.pdf` | Predicting Variable Names in Decompilation Output with Transfer Learning / VarBERT | ASU SEFCOM authors | Oakland/S&P 2024 adjunct/reference | https://sefcom.asu.edu/publications/varbert-oakland24.pdf | Downloaded |
| `debin-2018-predicting-debug-information-stripped-binaries.pdf` | Debin: Predicting Debug Information in Stripped Binaries | He et al. | CCS 2018 | https://files.sri.inf.ethz.ch/website/papers/ccs18-debin.pdf | Downloaded |
| `stateformer-2021-fine-grained-type-recovery-binaries.pdf` | StateFormer: Fine-Grained Type Recovery from Binaries using Generative State Modeling | Kexin Pei et al. | ESEC/FSE 2021 | https://www.cs.columbia.edu/~suman/docs/stateformer.pdf | Downloaded |
| `typeforge-2026-practical-type-inference-high-throughput-structures.pdf` | Practical Type Inference: High-Throughput Recovery of Real-World Structures / TypeForge | MLSec authors | CODASPY/arXiv 2026 | https://arxiv.org/pdf/2603.08225 | Downloaded |

## Known misses

- `sreedhar-1999-translating-out-of-ssa.pdf`: Springer chapter found, no open direct PDF found after web searches.
- `yan-mccamant-2014-conservative-signed-unsigned-type-inference.pdf`: citations found, no stable open PDF located.
- `leung-george-1999-static-single-assignment-form-for-machine-code.pdf`: ACM direct PDF returned HTTP 403.

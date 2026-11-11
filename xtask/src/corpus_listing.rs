//! Splits unlace's whole-binary C listing into per-function text.
//!
//! The printer opens every function with a one-line
//! `/* Function:   <name> | Address: 0x<addr> | ... */` header, follows it with
//! the signature line, and closes the body with a `}` in column 0. Before each
//! header it may print that function's own composite types; those blocks reuse
//! names such as `struct __anon0` across functions, so they are kept per
//! function instead of being merged into the global prelude.

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Listing<'a> {
    /// Typedefs, macros and global declarations before the first function.
    pub prelude: &'a str,
    pub functions: Vec<FunctionText<'a>>,
}

/// Lines that open a function's own preamble.
const PREAMBLE_MARKERS: &[&str] = &[
    "// Recovered composite layouts",
    "// DWARF composite types",
    "// debug language:",
];

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FunctionText<'a> {
    /// Name from the header comment (may contain `.`, e.g. `f.part.0`).
    pub name: &'a str,
    /// Text printed between the previous function and this header.
    pub preamble: &'a str,
    pub addr: u64,
    /// The whole function: header comment through closing brace.
    pub text: &'a str,
    /// Signature line through closing brace.
    pub body: &'a str,
    pub signature: Signature<'a>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Signature<'a> {
    /// C identifier the function is defined under.
    pub ident: &'a str,
    /// Declarator text up to and including the parameter list's `)`.
    pub declarator: &'a str,
    pub params: usize,
    pub variadic: bool,
}

impl<'a> Listing<'a> {
    pub fn parse(c: &'a str) -> Self {
        let mut functions = Vec::new();
        let mut prelude = None;
        let mut region_start = 0;
        let mut offset = 0;
        while offset < c.len() {
            let rest = &c[offset..];
            let line_len = rest.find('\n').map_or(rest.len(), |i| i + 1);
            if let Some((name, addr)) = parse_header(&rest[..line_len])
                && let Some(len) = function_len(rest)
                && let Some(signature) = rest[line_len..].lines().next().and_then(Signature::parse)
            {
                let region = &c[region_start..offset];
                let preamble = match prelude {
                    Some(_) => region,
                    None => {
                        let split = preamble_start(region);
                        prelude = Some(&region[..split]);
                        &region[split..]
                    }
                };
                let text = &c[offset..offset + len];
                functions.push(FunctionText {
                    name,
                    preamble,
                    addr,
                    text,
                    body: &text[line_len..],
                    signature,
                });
                offset += len;
                region_start = offset;
                continue;
            }
            offset += line_len;
        }
        Listing {
            prelude: prelude.unwrap_or(c),
            functions,
        }
    }

    pub fn by_addr(&self, addr: u64) -> Option<&FunctionText<'a>> {
        self.functions.iter().find(|f| f.addr == addr)
    }
}

/// Byte offset of the first preamble marker line in `region`.
fn preamble_start(region: &str) -> usize {
    let mut offset = 0;
    for line in region.split_inclusive('\n') {
        if PREAMBLE_MARKERS.iter().any(|m| line.starts_with(m)) {
            return offset;
        }
        offset += line.len();
    }
    region.len()
}

fn parse_header(line: &str) -> Option<(&str, u64)> {
    let rest = line.strip_prefix("/* Function:")?;
    let mut fields = rest.split('|');
    let name = fields.next()?.trim();
    let addr = fields.next()?.trim().strip_prefix("Address: 0x")?;
    Some((name, u64::from_str_radix(addr.trim(), 16).ok()?))
}

/// Byte length from the header line through the closing `}` line.
fn function_len(text: &str) -> Option<usize> {
    let mut len = 0;
    for (index, line) in text.split_inclusive('\n').enumerate() {
        len += line.len();
        if index >= 2 && line.trim_end() == "}" {
            return Some(len);
        }
    }
    None
}

impl<'a> Signature<'a> {
    pub fn parse(line: &'a str) -> Option<Self> {
        let open = line.find('(')?;
        let ident_start = line[..open]
            .rfind(|c: char| !(c == '_' || c.is_ascii_alphanumeric()))
            .map_or(0, |i| i + 1);
        let ident = &line[ident_start..open];
        if ident.is_empty() {
            return None;
        }
        let mut depth = 0usize;
        let mut close = None;
        for (i, c) in line[open..].char_indices() {
            match c {
                '(' => depth += 1,
                ')' => {
                    depth -= 1;
                    if depth == 0 {
                        close = Some(open + i);
                        break;
                    }
                }
                _ => {}
            }
        }
        let close = close?;
        let params_text = strip_block_comments(&line[open + 1..close]);
        let mut params = 0;
        let mut variadic = false;
        for param in split_top_level(&params_text) {
            match param.trim() {
                "" | "void" => {}
                "..." => variadic = true,
                _ => params += 1,
            }
        }
        Some(Signature {
            ident,
            declarator: &line[..=close],
            params,
            variadic,
        })
    }
}

fn strip_block_comments(text: &str) -> String {
    let mut out = String::new();
    let mut rest = text;
    while let Some(start) = rest.find("/*") {
        out.push_str(&rest[..start]);
        rest = rest[start + 2..]
            .find("*/")
            .map_or("", |end| &rest[start + 2 + end + 2..]);
    }
    out.push_str(rest);
    out
}

fn split_top_level(text: &str) -> Vec<&str> {
    let mut parts = Vec::new();
    let mut depth = 0i32;
    let mut start = 0;
    for (i, c) in text.char_indices() {
        match c {
            '(' | '[' => depth += 1,
            ')' | ']' => depth -= 1,
            ',' if depth == 0 => {
                parts.push(&text[start..i]);
                start = i + 1;
            }
            _ => {}
        }
    }
    parts.push(&text[start..]);
    parts
}

#[cfg(test)]
mod tests {
    use super::*;

    const LISTING: &str = r"typedef int T;
// debug language: C
/* Function:   f.part.0 | Address: 0x12e0 | Size: 0x6b */
__int64 f_part_0(void * a1 /* BYREF */, int (*cb)(int, int), ...) {
    return 0;
}
// Recovered composite layouts
struct __anon0 { int x; };
/* Function:   main | Address: 0x1080 | Size: 0x10 */
int main(void) /* // dropped 1 param(s) (dead in body) */ {
    if (1) {
    }
}
";

    #[test]
    fn splits_functions_and_outside_text() {
        let listing = Listing::parse(LISTING);
        assert_eq!(listing.prelude, "typedef int T;\n");
        let [f, main] = listing.functions.as_slice() else {
            panic!("expected two functions: {listing:?}");
        };
        assert_eq!(
            (f.name, f.addr, f.signature.ident),
            ("f.part.0", 0x12e0, "f_part_0")
        );
        assert_eq!((f.signature.params, f.signature.variadic), (2, true));
        assert_eq!(f.preamble, "// debug language: C\n");
        assert_eq!(
            main.preamble,
            "// Recovered composite layouts\nstruct __anon0 { int x; };\n"
        );
        assert_eq!(main.signature.declarator, "int main(void)");
        assert_eq!(main.signature.params, 0);
        assert!(main.body.ends_with("    }\n}\n"));
    }
}

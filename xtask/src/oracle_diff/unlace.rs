//! Run the unlace CLI on a binary and split its C output into functions.

use std::collections::BTreeMap;
use std::path::Path;
use std::process::Command;

use super::pseudo_c::brace_delta;

/// One function as printed by `unlace decompile --emit c`.
#[derive(Debug, Clone)]
pub struct PrintedFunction {
    pub name: String,
    pub text: String,
}

pub fn decompile(bin: &Path, binary: &Path) -> Result<String, String> {
    let output = Command::new(bin)
        .arg("decompile")
        .arg(binary)
        .args(["--emit", "c", "--all"])
        .output()
        .map_err(|e| format!("spawn failed: {e}"))?;
    if !output.status.success() {
        return Err(format!("unlace exited with {}", output.status));
    }
    Ok(String::from_utf8_lossy(&output.stdout).into_owned())
}

/// Split on the `/* Function: NAME | Address: 0x... | ... */` banners; each
/// function runs from its signature to the brace that closes its body.
pub fn split_functions(output: &str) -> BTreeMap<u64, PrintedFunction> {
    let mut out = BTreeMap::new();
    let mut lines = output.lines();
    while let Some(line) = lines.next() {
        let Some((name, ea)) = parse_banner(line) else {
            continue;
        };
        let mut text = String::new();
        let mut depth = 0i64;
        let mut opened = false;
        for body_line in lines.by_ref() {
            text.push_str(body_line);
            text.push('\n');
            depth += brace_delta(body_line);
            opened |= depth > 0;
            if opened && depth <= 0 {
                break;
            }
        }
        out.insert(ea, PrintedFunction { name, text });
    }
    out
}

fn parse_banner(line: &str) -> Option<(String, u64)> {
    let rest = line.trim().strip_prefix("/* Function:")?;
    let mut fields = rest.split('|');
    let name = fields.next()?.trim().to_string();
    let address = fields.next()?.trim().strip_prefix("Address:")?.trim();
    let ea = u64::from_str_radix(address.trim_start_matches("0x"), 16).ok()?;
    Some((name, ea))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn splits_on_banners_and_closing_brace() {
        let out = "typedef int x;\n\
            /* Function:   main | Address: 0x1040 | Size: 0x4 */\n\
            int main(void) {\n    puts(\"}\");\n    return 0;\n}\n\
            struct s { int a; };\n\
            /* Function:   f.constprop.0 | Address: 0x1b80 | Size: 0x1 */\n\
            void f(void) {\n}\n";
        let funcs = split_functions(out);
        assert_eq!(funcs.len(), 2);
        assert_eq!(funcs[&0x1040].name, "main");
        assert!(funcs[&0x1040].text.ends_with("return 0;\n}\n"));
        assert_eq!(funcs[&0x1b80].name, "f.constprop.0");
    }
}

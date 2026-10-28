//! `cargo xtask lift-trace <hex bytes>` - trace one x86 instruction.

use unlace_ir::Lifter;
use unlace_lift_x86::X86Lifter;

pub fn run(args: &[String]) -> i32 {
    let mut addr = 0x1000u64;
    let mut byte_args: Vec<&str> = Vec::new();

    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "--addr" => {
                let Some(value) = args.get(i + 1) else {
                    eprintln!("usage: cargo xtask lift-trace [--addr 0x1000] <hex bytes>");
                    return 2;
                };
                match parse_u64(value) {
                    Ok(parsed) => addr = parsed,
                    Err(err) => {
                        eprintln!("invalid --addr value `{value}`: {err}");
                        return 2;
                    }
                }
                i += 2;
            }
            value => {
                byte_args.push(value);
                i += 1;
            }
        }
    }

    if byte_args.is_empty() {
        eprintln!("usage: cargo xtask lift-trace [--addr 0x1000] <hex bytes>");
        eprintln!("examples:");
        eprintln!("  cargo xtask lift-trace 89 d8");
        eprintln!("  cargo xtask lift-trace 0x89,0xd8");
        eprintln!("  cargo xtask lift-trace 89d8");
        return 2;
    }

    let bytes = match parse_bytes(&byte_args) {
        Ok(bytes) => bytes,
        Err(err) => {
            eprintln!("invalid byte sequence: {err}");
            return 2;
        }
    };

    let _ = tracing_subscriber::fmt()
        .with_env_filter(tracing_subscriber::EnvFilter::new("unlace::lift=debug"))
        .with_writer(std::io::stderr)
        .without_time()
        .try_init();
    let lifter = X86Lifter::new();
    match lifter.lift_insn(&bytes, addr) {
        Ok(lifted) => {
            println!(
                "lift-trace: addr={addr:#x} len={} ops={}",
                lifted.len,
                lifted.ir_ops.len()
            );
            for (idx, op) in lifted.ir_ops.iter().enumerate() {
                println!("  {idx:02}: {op:?}");
            }
            0
        }
        Err(err) => {
            eprintln!("lift-trace: decode/lift error: {err}");
            1
        }
    }
}

fn parse_bytes(parts: &[&str]) -> Result<Vec<u8>, String> {
    let joined = parts.join(" ");
    let mut bytes = Vec::new();
    for token in joined
        .split(|c: char| c.is_ascii_whitespace() || c == ',' || c == ';')
        .filter(|token| !token.is_empty())
    {
        let token = token
            .strip_prefix("0x")
            .or_else(|| token.strip_prefix("0X"))
            .unwrap_or(token);
        if token.is_empty() {
            continue;
        }
        if token.len() <= 2 {
            bytes.push(parse_byte(token)?);
            continue;
        }
        if token.len() % 2 != 0 {
            return Err(format!("odd-length packed hex token `{token}`"));
        }
        for start in (0..token.len()).step_by(2) {
            bytes.push(parse_byte(&token[start..start + 2])?);
        }
    }
    if bytes.is_empty() {
        Err("no bytes parsed".to_string())
    } else {
        Ok(bytes)
    }
}

fn parse_byte(token: &str) -> Result<u8, String> {
    u8::from_str_radix(token, 16).map_err(|err| format!("`{token}` is not a byte: {err}"))
}

fn parse_u64(value: &str) -> Result<u64, std::num::ParseIntError> {
    if let Some(hex) = value
        .strip_prefix("0x")
        .or_else(|| value.strip_prefix("0X"))
    {
        u64::from_str_radix(hex, 16)
    } else {
        value.parse()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parse_bytes_accepts_spaced_prefixed_and_packed_hex() {
        assert_eq!(parse_bytes(&["89", "d8"]).unwrap(), vec![0x89, 0xd8]);
        assert_eq!(parse_bytes(&["0x89,0xd8"]).unwrap(), vec![0x89, 0xd8]);
        assert_eq!(parse_bytes(&["89d8"]).unwrap(), vec![0x89, 0xd8]);
    }

    #[test]
    fn parse_bytes_rejects_odd_packed_hex() {
        assert!(parse_bytes(&["89d"]).is_err());
    }

    #[test]
    fn parse_addr_accepts_hex_and_decimal() {
        assert_eq!(parse_u64("0x1000").unwrap(), 0x1000);
        assert_eq!(parse_u64("4096").unwrap(), 4096);
    }
}

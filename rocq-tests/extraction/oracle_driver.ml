(* oracle_driver.ml — generate the differential-oracle vector file from the
   MECHANICALLY-EXTRACTED Coq transfer functions (knownbits_oracle.ml).

   The reference results are computed by the OCaml that Rocq's Extraction
   produced from the *proved* definitions — no hand-written transfer logic. The
   Rust side (tests/extraction_oracle.rs) recomputes with the real
   KnownBits::{and,or,xor} and asserts byte-identical output, so any divergence
   between the shipped Rust and the verified proof is caught directly.

   Usage: oracle_driver <out-file> <iterations> *)

module O = Knownbits_oracle
module B = Big_int_Z

(* Exact conversion of a u64 (held in an OCaml int64) to a nonneg big_int via
   its unsigned decimal string. Our corpus is always masked to < 2^w <= 2^64. *)
let big_of_unsigned (x : int64) : B.big_int =
  B.big_int_of_string (Printf.sprintf "%Lu" x)

(* deterministic xorshift64 — identical recurrence to the Rust harness *)
let state = ref 0L
let xs_next () =
  let x = !state in
  let x = Int64.logxor x (Int64.shift_left x 13) in
  let x = Int64.logxor x (Int64.shift_right_logical x 7) in
  let x = Int64.logxor x (Int64.shift_left x 17) in
  state := x;
  x

let widths = [| 1; 8; 16; 32; 64 |]

let () =
  state := 0x0BEE_FFAC_E123_4567L;
  let oc = open_out Sys.argv.(1) in
  let iters = int_of_string Sys.argv.(2) in
  for _ = 1 to iters do
    (* unsigned remainder: mask to a small nonneg index *)
    let idx = Int64.to_int (Int64.rem (Int64.logand (xs_next ()) 0x7FFFFFFFL) 5L) in
    let w = widths.(idx) in
    let mask =
      if w >= 64 then -1L else Int64.sub (Int64.shift_left 1L w) 1L
    in
    let xa = Int64.logand (xs_next ()) mask in
    let xb = Int64.logand (xs_next ()) mask in
    let bw = B.big_int_of_int w in
    (* from_constant, straight from the extracted proof *)
    let az = O.fc_zero (big_of_unsigned xa) bw in
    let ao = O.fc_one  (big_of_unsigned xa) bw in
    let bz = O.fc_zero (big_of_unsigned xb) bw in
    let bo = O.fc_one  (big_of_unsigned xb) bw in
    (* transfers, straight from the extracted proof (cores derived from the
       real KnownBits.kand/kor/kxor, projected to zero/one masks) *)
    let and_z = O.kand_zero az ao bz bo bw and and_o = O.kand_one az ao bz bo bw in
    let or_z  = O.kor_zero  az ao bz bo bw and or_o  = O.kor_one  az ao bz bo bw in
    let xor_z = O.kxor_zero az ao bz bo bw and xor_o = O.kxor_one az ao bz bo bw in
    Printf.fprintf oc "%d %Lu %Lu %s %s %s %s %s %s\n"
      w xa xb
      (B.string_of_big_int and_z) (B.string_of_big_int and_o)
      (B.string_of_big_int or_z)  (B.string_of_big_int or_o)
      (B.string_of_big_int xor_z) (B.string_of_big_int xor_o)
  done;
  close_out oc

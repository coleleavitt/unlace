"""Exact IEEE-754 arithmetic for the p-code emulator: binary16/32/64 and the x87 80-bit extended
format, with round-to-nearest-even into the destination format (subnormals included).

A value is decoded to (kind, sign, Fraction): kind is "zero", "num", "inf" or "nan". Arithmetic is
exact on Fractions and rounded once, so there is no double rounding. x87 unnormals and pseudo-
NaN/infinity encodings (integer bit clear with a non-zero exponent) decode as "nan", which the
caller treats as an invalid operand.
"""
import math
from fractions import Fraction

# (exponent bits, fraction bits stored, explicit integer bit)
FORMATS = {2: (5, 10, False), 4: (8, 23, False), 8: (11, 52, False), 10: (15, 64, True)}


def _params(size):
    ebits, fbits, explicit = FORMATS[size]
    bias = (1 << (ebits - 1)) - 1
    prec = fbits if explicit else fbits + 1          # significand bits including the integer bit
    return ebits, fbits, explicit, bias, prec


def decode(v, size):
    ebits, fbits, explicit, bias, prec = _params(size)
    sign = (v >> (ebits + fbits)) & 1
    e = (v >> fbits) & ((1 << ebits) - 1)
    f = v & ((1 << fbits) - 1)
    emax = (1 << ebits) - 1
    if explicit:
        ibit = f >> (fbits - 1)
        frac = f & ((1 << (fbits - 1)) - 1)
        if e == emax:
            return ("inf", sign, None) if ibit and frac == 0 else ("nan", sign, None)
        if e == 0:
            if f == 0:
                return ("zero", sign, None)
            return ("num", sign, Fraction(f, 1 << (fbits - 1)) * Fraction(2) ** (1 - bias))
        if not ibit:
            return ("nan", sign, None)                   # unnormal: invalid on 80387 and later
        return ("num", sign, Fraction(f, 1 << (fbits - 1)) * Fraction(2) ** (e - bias))
    if e == emax:
        return ("inf", sign, None) if f == 0 else ("nan", sign, None)
    if e == 0:
        if f == 0:
            return ("zero", sign, None)
        return ("num", sign, Fraction(f, 1 << fbits) * Fraction(2) ** (1 - bias))
    return ("num", sign, (1 + Fraction(f, 1 << fbits)) * Fraction(2) ** (e - bias))


def encode_inf(sign, size):
    ebits, fbits, explicit, bias, prec = _params(size)
    m = (1 << (fbits - 1)) if explicit else 0
    return (sign << (ebits + fbits)) | (((1 << ebits) - 1) << fbits) | m


def encode_zero(sign, size):
    ebits, fbits, _, _, _ = _params(size)
    return sign << (ebits + fbits)


def _round_int(q):
    """Round a non-negative Fraction to the nearest integer, ties to even."""
    n, r = divmod(q.numerator, q.denominator)
    twice = 2 * r
    if twice > q.denominator or (twice == q.denominator and n & 1):
        n += 1
    return n


def encode(sign, x, size):
    """Round the non-negative Fraction x (with the sign) into the format."""
    ebits, fbits, explicit, bias, prec = _params(size)
    if x == 0:
        return encode_zero(sign, size)
    emin = 1 - bias
    # exponent of the leading bit
    e = x.numerator.bit_length() - x.denominator.bit_length()
    if Fraction(2) ** e > x:
        e -= 1
    if e < emin:
        e = emin                                        # subnormal range: fixed quantum
    m = _round_int(x / Fraction(2) ** (e - (prec - 1)))
    if m >= (1 << prec):                                # rounding carried into a new bit
        m >>= 1
        e += 1
    if e > (1 << ebits) - 2 - bias:
        return encode_inf(sign, size)
    if m < (1 << (prec - 1)):                           # subnormal (or rounded to zero)
        if m == 0:
            return encode_zero(sign, size)
        be = 0
    else:
        be = e + bias
    frac = m if explicit else m & ((1 << fbits) - 1)
    return (sign << (ebits + fbits)) | (be << fbits) | frac


def to_fraction(v, size):
    k, s, x = decode(v, size)
    if k == "num":
        return -x if s else x
    if k == "zero":
        return Fraction(0)
    return None


def value(v, size):
    """(kind, signed Fraction or None, sign)."""
    k, s, x = decode(v, size)
    if k == "num":
        return k, (-x if s else x), s
    if k == "zero":
        return k, Fraction(0), s
    return k, None, s


def from_signed(q, size, zero_sign=0):
    if q == 0:
        return encode_zero(zero_sign, size)
    return encode(1 if q < 0 else 0, abs(q), size)


def sqrt_sticky(x, prec):
    """sqrt of a Fraction x > 0 to at least prec + 3 bits, plus a half-unit sticky bit when inexact,
    so that encode's single rounding to prec bits is correct."""
    n, d = x.numerator, x.denominator
    s = max(0, 2 * (prec + 3) - (n.bit_length() - d.bit_length()))
    s += s & 1
    num, rem = divmod(n << s, d)
    r = math.isqrt(num)
    exact = rem == 0 and r * r == num
    return Fraction(2 * r + (0 if exact else 1), 2 << (s // 2))

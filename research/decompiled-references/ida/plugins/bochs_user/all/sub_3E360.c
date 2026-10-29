unsigned __int64 __fastcall sub_3E360(__int64 a1, _WORD *a2, unsigned __int16 a3)
{
  _WORD *v4; // rcx
  char v5; // dl
  _WORD *v6; // rdi
  unsigned __int64 result; // rax

  v4 = a2;
  v5 = 2 * a3;
  v6 = (_WORD *)(a1 + 4240);
  if ( !a2 )
    v4 = v6;
  *v4 = *v4 & 0xFEA0
      | (2 * a3) & 0x100
      | a3 & 0x40
      | (a3 >> 1) & 0x10
      | (a3 >> 1) & 8
      | (4 * ((a3 & 2) == 0))
      | ((a3 & 4) == 0)
      | v5 & 2;
  result = *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFLL | ((unsigned __int64)((a3 & 8) == 0) << 63);
  *(_QWORD *)v4 = result;
  return result;
}


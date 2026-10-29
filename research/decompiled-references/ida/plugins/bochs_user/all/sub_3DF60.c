unsigned __int64 __fastcall sub_3DF60(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v2 + 4240) = *(_WORD *)(v2 + 4240) & 0xFEA0
                        | (2 * a2) & 0x100
                        | a2 & 0x40
                        | (a2 >> 1) & 0x10
                        | (a2 >> 1) & 8
                        | (4 * ((a2 & 2) == 0))
                        | ((a2 & 4) == 0)
                        | (2 * (_BYTE)a2) & 2;
  result = *(_QWORD *)(v2 + 4240) & 0x7FFFFFFFFFFFFFFFLL | ((unsigned __int64)((a2 & 8) == 0) << 63);
  *(_QWORD *)(v2 + 4240) = result;
  return result;
}


__int64 __fastcall sub_84F0(int a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 result; // rax

  if ( a1 <= 15 )
  {
    result = sub_7F90(a1 - 12, (unsigned __int8 *)a2, (__int64)a3);
    *(_BYTE *)(a2 + 33) = 1;
    return result;
  }
  if ( a1 <= 23 )
  {
    sub_7F90(a1 - 16, (unsigned __int8 *)a2, (__int64)a3);
    *(_BYTE *)(a2 + 1) = 4;
    LOBYTE(result) = insn_get_next_byte();
    *(_BYTE *)(a2 + 34) = 0;
    LODWORD(result) = (unsigned __int8)result;
    if ( (result & 0x80u) != 0LL )
      LODWORD(result) = (unsigned __int8)result | 0xFFFFFF80;
    result = (int)result;
    *(_QWORD *)(a2 + 16) = (int)result;
  }
  else
  {
    if ( a1 <= 27 )
    {
      sub_7F90(a1 - 24, (unsigned __int8 *)a2, (__int64)a3);
    }
    else
    {
      if ( a1 <= 29 )
      {
        result = sub_7F90(a1 - 28, (unsigned __int8 *)a2, (__int64)a3);
        *(_BYTE *)(a2 + 33) = 2;
        *(_WORD *)(a2 + 26) = 20;
        return result;
      }
      if ( a1 != 30 )
      {
        a3[32] = 26;
        a3[28] = *(_BYTE *)a2;
        *(_BYTE *)(a2 + 1) = 2;
        v6 = sub_8260(a3, a2, (__int64)a3, a4, a5, a6);
        LOWORD(result) = insn_get_next_word();
        *(_BYTE *)(a2 + 5) = 2;
        result = (unsigned __int16)result;
        *(_QWORD *)(a2 + 16) = (unsigned __int16)result | (unsigned __int64)(v6 << 16);
        return result;
      }
      *(_WORD *)(a2 + 6) = 3;
      a3[32] = 25;
      a3[28] = *(_BYTE *)a2;
      ++*(_BYTE *)(a2 + 32);
      *(_BYTE *)(a2 + 5) = 2;
    }
    *(_BYTE *)(a2 + 1) = 4;
    LOWORD(result) = insn_get_next_word();
    *(_BYTE *)(a2 + 34) = 1;
    LODWORD(result) = (unsigned __int16)result;
    if ( (result & 0x8000u) != 0LL )
      LODWORD(result) = (unsigned __int16)result | 0xFFFF8000;
    result = (int)result;
    *(_QWORD *)(a2 + 16) = (int)result;
  }
  return result;
}


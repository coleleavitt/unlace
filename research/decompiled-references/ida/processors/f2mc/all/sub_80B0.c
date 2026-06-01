__int64 __fastcall sub_80B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 result; // rax

  ++*(_BYTE *)(a3 + 32);
  *(_WORD *)(a3 + 6) = a2 + 13;
  *(_BYTE *)(a3 + 5) = 0;
  if ( a2 <= 7 )
  {
    v5 = 1LL << a2;
    if ( ((1LL << a2) & 0x33) != 0 )
    {
      *(_BYTE *)(a4 + 32) = 26;
    }
    else if ( (v5 & 0x44) != 0 )
    {
      *(_BYTE *)(a4 + 32) = 27;
    }
    else if ( (v5 & 0x88) != 0 )
    {
      *(_BYTE *)(a4 + 32) = 34;
    }
  }
  *(_BYTE *)(a4 + 28) = *(_BYTE *)a3;
  *(_BYTE *)(a3 + 1) = 4;
  LOBYTE(result) = insn_get_next_byte();
  *(_BYTE *)(a3 + 34) = 0;
  LODWORD(result) = (unsigned __int8)result;
  if ( (result & 0x80u) != 0LL )
    LODWORD(result) = (unsigned __int8)result | 0xFFFFFF80;
  result = (int)result;
  *(_QWORD *)(a3 + 16) = (int)result;
  return result;
}


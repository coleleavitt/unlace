__int64 __fastcall sub_7E20(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *(_WORD *)(a3 + 6) = a2 + 21;
  *(_BYTE *)(a4 + 32) = 0;
  *(_BYTE *)(a4 + 28) = *(_BYTE *)a3;
  ++*(_BYTE *)(a3 + 32);
  *(_BYTE *)(a3 + 5) = 1;
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


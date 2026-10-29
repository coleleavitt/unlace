__int64 __fastcall sub_3E2770(__int64 a1)
{
  __int16 v1; // ax
  char v2; // cl
  int v3; // edx
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 24);
  v2 = v1 - 15;
  v3 = *(_DWORD *)(a1 + 28) & 0x100;
  if ( (unsigned __int16)(v1 - 15) > 0x38u )
    return BYTE1(v3);
  if ( ((1LL << v2) & 0x101014000000000LL) != 0 )
    return 1;
  if ( ((1LL << v2) & 9) == 0 )
    return BYTE1(v3);
  result = 1;
  if ( !v3 )
    return is_call_insn();
  return result;
}


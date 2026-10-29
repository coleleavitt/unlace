__int64 __fastcall sub_4810(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 sreg; // r12
  __int64 result; // rax
  int v7; // edx
  unsigned __int64 v8; // rdx
  __int16 next_byte; // r13
  __int16 v10; // ax

  *(_BYTE *)(a2 + 1) = 5;
  if ( a3 == 1 )
  {
    next_byte = (unsigned __int8)insn_get_next_byte();
    v4 = (unsigned __int16)(next_byte | ((unsigned __int16)insn_get_next_byte() << 8));
  }
  else
  {
    v4 = (unsigned __int8)insn_get_next_byte();
  }
  *(_BYTE *)(a2 + 5) = a3;
  *(_QWORD *)(a2 + 8) = v4;
  sreg = get_sreg();
  result = get_sreg();
  v7 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v7 > 0x18u )
  {
    if ( (unsigned __int16)(v7 - 38) > 1u )
      goto LABEL_5;
LABEL_10:
    if ( !result )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (unsigned __int16)v7 > 0x16u )
    goto LABEL_10;
LABEL_5:
  v8 = (unsigned int)(v7 - 20);
  if ( (unsigned __int16)v8 > 0x39u || (result = 0x20030001CC20001LL, !_bittest64(&result, v8)) )
  {
LABEL_11:
    if ( sreg )
      return result;
LABEL_12:
    v10 = insn_get_next_byte();
    *(_BYTE *)(a2 + 5) = 1;
    result = (unsigned __int16)(v10 << 8);
    *(_QWORD *)(a2 + 8) |= result;
  }
  return result;
}


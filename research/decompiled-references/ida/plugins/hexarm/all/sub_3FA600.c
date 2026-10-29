__int64 __fastcall sub_3FA600(__int64 a1)
{
  int v1; // ebp
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // edx
  __int16 v5; // dx
  __int64 v6; // [rsp+0h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 52);
  result = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)result > 0x50u )
  {
    if ( (unsigned __int16)(result - 521) <= 1u )
      return result;
    goto LABEL_11;
  }
  if ( (unsigned __int16)result <= 0x11u )
  {
    if ( (_WORD)result == 4 )
    {
      if ( (v1 & 1) != 0 )
        return result;
      goto LABEL_20;
    }
LABEL_11:
    if ( (v1 & 1) != 0 )
    {
      if ( *(_BYTE *)(a1 + 65) == 1 )
      {
        v5 = *(_WORD *)(a1 + 70);
        if ( v5 != 15 && (result & 0xFFFD) == 0xC )
          goto LABEL_26;
      }
      else if ( (result & 0xFFFD) == 0xC )
      {
        goto LABEL_8;
      }
      return result;
    }
    goto LABEL_15;
  }
  v3 = 1LL << ((unsigned __int8)result - 18);
  if ( (v3 & 0x3000000F) != 0 )
    goto LABEL_6;
  if ( (v3 & 0x4000000000002020LL) == 0 )
    goto LABEL_11;
  if ( (v1 & 1) != 0 )
    goto LABEL_6;
LABEL_20:
  result = is_call_insn();
  if ( !(_BYTE)result )
  {
LABEL_15:
    if ( (v1 & 1) == 0 )
      return result;
  }
  result = *(unsigned __int16 *)(a1 + 48);
LABEL_6:
  if ( (result & 0xFFFD) == 0xC )
  {
    if ( *(_BYTE *)(a1 + 65) != 1 )
      goto LABEL_8;
    v5 = *(_WORD *)(a1 + 70);
LABEL_26:
    if ( v5 == 13 || v5 == 161 )
    {
LABEL_24:
      sub_3F56D0(a1, 3u, 0, (_WORD)result == 12, 0x3BEA45E214ADDC55LL, 0, 0);
      sub_3F56D0(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, 1, 0);
      sub_3F56D0(a1, 0x3Eu, 0, -1, -1, 2, 0);
      sub_3F56D0(a1, 0x3Eu, 0, -1, -1, 3, 0);
      return v6;
    }
LABEL_8:
    if ( *(_BYTE *)(a1 + 105) != 1 )
      return sub_3FA550(a1);
    v4 = *(unsigned __int16 *)(a1 + 110);
    if ( v4 != 13 && v4 != 161 )
      return sub_3FA550(a1);
    goto LABEL_24;
  }
  return result;
}


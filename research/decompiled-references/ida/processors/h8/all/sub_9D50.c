__int64 __fastcall sub_9D50(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  char v8; // dl
  __int64 v9; // r10
  __int64 result; // rax
  char v11; // cl
  __int64 v12; // rdx
  char v13; // dl
  unsigned __int8 v14; // bp
  __int16 v15; // ax
  __int16 v16; // r12
  __int16 v17; // ax

  v8 = sub_69D0(a2, a3);
  result = 0;
  if ( v8 )
  {
    v11 = *(_BYTE *)(a2 + 45);
    v12 = a2 + 40;
    if ( (a3 & 8) != 0 )
      sub_8370(v9, a2, v12, v11);
    else
      sub_83F0(v9, a2, v12, v11);
    v13 = *(_BYTE *)(a2 + 73);
    *(_BYTE *)(a2 + 74) = 1;
    v14 = a3 & 7;
    v15 = v13 & 1;
    if ( a5 )
    {
      v16 = v14;
      v17 = ((__int16)(v15 << 15) >> 15) & 0x18;
    }
    else
    {
      v16 = a4 & 0xF;
      v17 = 16 * (char)v15;
    }
    *(_BYTE *)(a2 + 75) = v13;
    *(_BYTE *)(a2 + 72) = 2;
    *(_BYTE *)(a2 + 45) = 2;
    *(_DWORD *)(a2 + 28) = 3;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = (unsigned __int8)(v14 + 32);
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 46) = v16 + v17;
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}


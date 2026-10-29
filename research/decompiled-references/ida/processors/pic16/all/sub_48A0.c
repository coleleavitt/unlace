__int64 __fastcall sub_48A0(__int64 a1, int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  __int64 result; // rax
  __int64 v8; // rdx
  __int16 v9; // dx
  __int64 v10; // rdx

  v4 = a4;
  v5 = (a2 >> a3) & 0xF;
  v6 = (a2 >> (a3 + 4)) & 7;
  if ( v6 )
  {
    if ( v6 == 6 )
    {
      v9 = *(_WORD *)(a1 + 24);
      if ( (unsigned __int16)(v9 - 81) <= 1u || v9 == 9 )
        *(_BYTE *)(a1 + 40 * v4 + 73) = (a2 >> 11) & 0xF;
      else
        *(_BYTE *)(a1 + 40 * v4 + 73) = (a2 >> 15) & 0xF;
    }
    result = 5 * v4;
    v8 = a1 + 8 * result;
    *(_BYTE *)(v8 + 41) = 3;
    *(_WORD *)(v8 + 46) = v5;
    *(_BYTE *)(v8 + 72) = v6;
    *(_BYTE *)(v8 + 45) = 0;
  }
  else
  {
    result = 5 * v4;
    v10 = a1 + 8 * result;
    *(_BYTE *)(v10 + 41) = 1;
    *(_WORD *)(v10 + 46) = v5;
    *(_BYTE *)(v10 + 45) = 1;
  }
  return result;
}


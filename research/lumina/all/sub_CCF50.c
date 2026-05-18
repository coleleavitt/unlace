__int64 __fastcall sub_CCF50(__int64 a1, char a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rsi
  unsigned int v10; // ecx
  char v11; // di
  char v12; // dl
  char v13; // dl

  v3 = *(__int64 **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  v4 = *v3;
  if ( *(_BYTE *)(*v3 + 16) )
  {
    *(_DWORD *)(v4 + 11) = 1;
    *(_BYTE *)(v4 + 15) = 0;
  }
  else
  {
    v10 = a2 & 7;
    *(_BYTE *)(v4 + 11) = v10 == 1;
    *(_BYTE *)(v4 + 12) = v10 > 2;
    *(_BYTE *)(v4 + 13) = v10 == 4;
    if ( v10 == 1 )
    {
      *(_WORD *)(v4 + 14) = 0;
    }
    else
    {
      if ( (a2 & 8) != 0 )
      {
        *(_BYTE *)(v4 + 14) = 3;
        v11 = 12;
        v12 = 3;
      }
      else
      {
        *(_BYTE *)(v4 + 14) = 2;
        v11 = 8;
        v12 = 2;
      }
      v13 = v11 | v12;
      if ( v10 <= 2 )
        v13 = v11;
      *(_BYTE *)(v4 + 15) = v13;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(v4 + 15) |= 0xCu;
    }
  }
  v5 = *(unsigned __int8 *)(v4 + 25);
  v6 = v5 & 0xFFFFFFFE;
  v7 = v5 | 1;
  v8 = a2 & 0x20;
  if ( !(_DWORD)v8 )
    v6 = v7;
  *(_BYTE *)(v4 + 25) = v6;
  if ( *(_BYTE *)(a1 + 17) )
    sub_CCDE0(a1, v8, v6);
  return 0;
}

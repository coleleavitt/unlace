__int64 __fastcall sub_A790(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  _WORD *v4; // r12
  __int16 v5; // ax
  __int16 v7; // cx
  __int16 v8; // ax
  int v9; // eax

  v4 = (_WORD *)(a3 + 8LL * a4);
  if ( (*(_WORD *)(a1 + 224) & *v4) == 0 )
    return 0;
  v5 = v4[1];
  if ( (unsigned __int16)(v5 - 1) > 0x6Fu )
    return 0;
  *(_WORD *)(a2 + 24) = v5;
  v7 = v4[2];
  if ( v7 >= 0 )
  {
    v8 = v7 & 0xF00;
    if ( (v7 & 0xF00) == 0x400 )
    {
      *(_DWORD *)(a2 + 28) = 3;
      v7 = v4[2];
    }
    else if ( (v7 & 0xF00u) > 0x400 )
    {
      if ( v8 == 2048 )
      {
        v9 = 2;
        if ( *(_WORD *)(a1 + 224) > 0xFFFu )
          v9 = 3;
        *(_DWORD *)(a2 + 28) = v9;
        v7 = v4[2];
      }
    }
    else if ( v8 == 256 )
    {
      *(_DWORD *)(a2 + 28) = 1;
      v7 = v4[2];
    }
    else if ( v8 == 512 )
    {
      *(_DWORD *)(a2 + 28) = 2;
      v7 = v4[2];
    }
  }
  if ( (unsigned __int8)sub_84D0(a1, a2, a2 + 40, v7) )
    return sub_84D0(a1, a2, a2 + 80, v4[3]);
  else
    return 0;
}


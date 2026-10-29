__int64 __fastcall sub_90D0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, int a7, char a8)
{
  int v8; // eax
  char v9; // dl
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  if ( a3 == 62 )
  {
    if ( a4 == 62 )
    {
      a6 = a7;
    }
    else
    {
      if ( (a4 & 0xFFFFFFFD) != 0x3D )
      {
        *(_BYTE *)(a5 + 1) = 4;
        a6 = a7;
        goto LABEL_24;
      }
      if ( *(_DWORD *)(a1 + 5272) )
      {
        *(_BYTE *)(a5 + 1) = 4;
        if ( *(_DWORD *)(a1 + 5272) )
        {
          a6 = a7;
          goto LABEL_24;
        }
        goto LABEL_7;
      }
      v14 = a7;
      a7 = a6;
      a6 = v14;
    }
LABEL_15:
    if ( a8 )
    {
      *(_BYTE *)(a5 + 1) = 5;
      *(_QWORD *)(a5 + 8) = a6;
      goto LABEL_18;
    }
    *(_BYTE *)(a5 + 1) = 2;
    v11 = a7;
    if ( !*(_DWORD *)(a1 + 5272) )
      v11 = 0;
    *(_QWORD *)(a5 + 24) = v11;
    v12 = *(_WORD *)(a2 + 24);
    if ( v12 == 139 )
      goto LABEL_43;
    if ( v12 > 0x8Bu )
    {
      if ( v12 != 140 && (unsigned __int16)(v12 - 308) > 1u )
        goto LABEL_38;
    }
    else
    {
      if ( v12 == 3 )
        goto LABEL_37;
      if ( v12 != 138 )
      {
        if ( v12 != 1 )
        {
LABEL_38:
          *(_QWORD *)(a5 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (a7 + a6);
          goto LABEL_18;
        }
LABEL_37:
        v13 = *(_DWORD *)(a2 + 28);
        if ( (~(_BYTE)v13 & 0x18) != 0 )
          goto LABEL_38;
        v15 = v13 & 6;
        if ( v15 != 4 )
        {
          if ( v15 )
            goto LABEL_38;
          goto LABEL_42;
        }
LABEL_43:
        a7 *= 2;
        goto LABEL_38;
      }
    }
LABEL_42:
    a7 *= 4;
    goto LABEL_38;
  }
  if ( (a3 & 0xFFFFFFFD) == 0x3D && !*(_DWORD *)(a1 + 5272) )
  {
    if ( a4 == 62 )
      goto LABEL_15;
    if ( (a4 & 0xFFFFFFFD) == 0x3D )
    {
      a7 = a6;
      goto LABEL_15;
    }
    *(_BYTE *)(a5 + 1) = 4;
LABEL_24:
    *(_WORD *)(a5 + 6) = a4;
    *(_QWORD *)(a5 + 16) = a6;
    *(_BYTE *)(a5 + 32) = 1;
    goto LABEL_18;
  }
  if ( a4 == 62 )
  {
    *(_BYTE *)(a5 + 1) = 4;
    goto LABEL_8;
  }
  if ( (a4 & 0xFFFFFFFD) != 0x3D || *(_DWORD *)(a1 + 5272) )
  {
    *(_BYTE *)(a5 + 1) = 3;
    *(_WORD *)(a5 + 6) = a3;
    *(_BYTE *)(a5 + 32) = a4;
    goto LABEL_18;
  }
  *(_BYTE *)(a5 + 1) = 4;
  if ( *(_DWORD *)(a1 + 5272) )
    goto LABEL_24;
LABEL_7:
  a7 = a6;
LABEL_8:
  *(_WORD *)(a5 + 6) = a3;
  v8 = 0;
  if ( !a8 )
    v8 = a7;
  *(_BYTE *)(a5 + 32) = 0;
  *(_QWORD *)(a5 + 16) = v8;
LABEL_18:
  v9 = 0;
  result = *(_DWORD *)(a2 + 28) & 6;
  if ( (_DWORD)result != 2 )
    v9 = ((_DWORD)result != 4) + 1;
  *(_BYTE *)(a5 + 5) = v9;
  return result;
}


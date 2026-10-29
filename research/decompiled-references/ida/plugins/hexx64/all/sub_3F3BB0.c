__int64 __fastcall sub_3F3BB0(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  bool v3; // zf
  _DWORD *v5; // rsi
  char v7; // al
  char v8; // dl
  _DWORD *v9; // rax
  char v10; // si
  char v11; // cl
  char v12; // [rsp+17h] [rbp-11h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v3 = *(_BYTE *)a2 == 4;
  v12 = 0;
  if ( !v3 )
    return 0;
  v5 = *(_DWORD **)(a2 + 8);
  if ( *v5 != 20 )
    return 0;
  if ( !v5 )
    return 0;
  v7 = sub_3F3B10((__int64)a1, (__int64)v5, &v12);
  v8 = v7;
  if ( (v7 & 0xBA) != 0 || !v7 )
    return 0;
  v9 = a3 + 1;
  v10 = v8 & 1;
  v11 = v8 & 0x40;
  if ( !v12 )
  {
    if ( v10 )
    {
      *a3 = 0;
      if ( !v11 )
      {
LABEL_16:
        if ( (v8 & 4) == 0 )
          return v9 - a3;
LABEL_17:
        *v9++ = 1;
        return v9 - a3;
      }
    }
    else
    {
      v9 = a3;
      if ( !v11 )
        goto LABEL_17;
    }
    *v9++ = 4;
    goto LABEL_16;
  }
  if ( !v10 )
  {
    v9 = a3;
    if ( !v11 )
    {
LABEL_20:
      *v9++ = a1[173];
      return v9 - a3;
    }
    goto LABEL_10;
  }
  *a3 = a1[172];
  if ( v11 )
LABEL_10:
    *v9++ = a1[174];
  if ( (v8 & 4) != 0 )
    goto LABEL_20;
  return v9 - a3;
}


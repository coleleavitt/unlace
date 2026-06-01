__int64 __fastcall sub_12C60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // edi
  int v8; // r11d
  char v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // r9d

  v4 = a2 - a1;
  result = a1;
  v6 = v4 >> 6;
  if ( v4 > 0 )
  {
    v7 = *(_DWORD *)(a3 + 48);
    v8 = *(_DWORD *)(a3 + 52);
    v9 = *(_BYTE *)(a3 + 56);
    while ( 1 )
    {
      v10 = v6 >> 1;
      v11 = result + (v6 >> 1 << 6);
      v12 = *(_DWORD *)(v11 + 48);
      if ( v7 != v12 )
        break;
      if ( v9 == *(_BYTE *)(v11 + 56) )
      {
        if ( v8 >= *(_DWORD *)(v11 + 52) )
          goto LABEL_6;
LABEL_10:
        v6 >>= 1;
        if ( v10 <= 0 )
          return result;
      }
      else
      {
        if ( v9 )
          goto LABEL_10;
LABEL_6:
        result = v11 + 64;
        v6 = v6 - 1 - v10;
        if ( v6 <= 0 )
          return result;
      }
    }
    if ( a4 == v7 || a4 != v12 && v7 < v12 )
      goto LABEL_10;
    goto LABEL_6;
  }
  return result;
}


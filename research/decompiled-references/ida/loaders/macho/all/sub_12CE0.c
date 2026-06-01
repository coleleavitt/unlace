__int64 __fastcall sub_12CE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r11d
  char v10; // r10
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // esi
  char v14; // si

  v4 = a2 - a1;
  result = a1;
  v7 = v4 >> 6;
  if ( v4 > 0 )
  {
    v8 = *(_DWORD *)(a3 + 48);
    v9 = *(_DWORD *)(a3 + 52);
    v10 = *(_BYTE *)(a3 + 56);
    while ( 1 )
    {
      v11 = v7 >> 1;
      v12 = result + (v7 >> 1 << 6);
      v13 = *(_DWORD *)(v12 + 48);
      if ( v13 != v8 )
        break;
      v14 = *(_BYTE *)(v12 + 56);
      if ( v14 == v10 )
      {
        if ( *(_DWORD *)(v12 + 52) < v9 )
          goto LABEL_6;
LABEL_10:
        v7 >>= 1;
        if ( v11 <= 0 )
          return result;
      }
      else
      {
        if ( !v14 )
          goto LABEL_10;
LABEL_6:
        result = v12 + 64;
        v7 = v7 - 1 - v11;
        if ( v7 <= 0 )
          return result;
      }
    }
    if ( a4 != v13 && (a4 == v8 || v13 >= v8) )
      goto LABEL_10;
    goto LABEL_6;
  }
  return result;
}


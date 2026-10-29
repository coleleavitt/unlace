__int64 __fastcall sub_36A60(_DWORD *a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  _DWORD *v9; // r8
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v13; // ecx

  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = 0;
  v6 = *(_DWORD *)(v4 + 104);
  if ( v3 >= v6 && v3 < *(_DWORD *)(v4 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v3 - v6) + 8);
    if ( v7 )
    {
      v8 = a2 + 41;
      v9 = dword_95840;
      v10 = a2 + 241;
      while ( 1 )
      {
        if ( (*v9 & v7) == 0 || *(_BYTE *)v8 != 1 )
          goto LABEL_7;
        v13 = *(unsigned __int16 *)(v8 + 5);
        if ( v13 <= 0xF )
          goto LABEL_12;
        if ( v13 - 29 <= 5 )
          break;
LABEL_7:
        v8 += 40;
        ++v9;
        if ( v8 == v10 )
          goto LABEL_8;
      }
      LOBYTE(v13) = v13 - 13;
LABEL_12:
      v5 |= 1 << v13;
      goto LABEL_7;
    }
  }
LABEL_8:
  v11 = a1[6] | v5;
  a1[6] = v11;
  return (v11 >> 2) & 4;
}

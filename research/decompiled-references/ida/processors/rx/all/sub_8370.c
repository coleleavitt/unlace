__int64 __fastcall sub_8370(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v6; // r9d
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v10; // rdx
  int v11; // r10d
  int v12; // esi
  char v13; // si
  char *v14; // rax
  __int64 *v15; // rdx
  char *v16; // rcx
  int v17; // eax

  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = a2;
  LOBYTE(a2) = (_WORD)v3 == 40 || (_WORD)v3 == 62;
  v6 = a2;
  if ( !(_BYTE)a2 )
  {
    if ( !a3 )
    {
      if ( (unsigned __int16)v3 <= 0x62u )
      {
        if ( (unsigned __int16)v3 > 0x5Cu )
          return 1;
      }
      else
      {
        v7 = (unsigned int)(v3 - 112);
        if ( (unsigned __int16)(v3 - 112) <= 0x34u )
        {
          v8 = 0x1800000000000DLL;
          LOBYTE(v7) = _bittest64(&v8, v7);
          if ( (_BYTE)v7 )
            return (unsigned int)v7;
        }
      }
    }
    v10 = *(_QWORD *)(a1 + 16);
    v11 = 0;
    v12 = *(_DWORD *)(v10 + 104);
    if ( v12 <= v3 && *(_DWORD *)(v10 + 108) > v3 )
      v11 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * (v3 - v12) + 8);
    v13 = *(_BYTE *)(v4 + 41);
    v14 = (char *)(v4 + 41);
    v15 = qword_FA20;
    v16 = (char *)(v4 + 241);
    if ( v13 == 3 )
      goto LABEL_18;
LABEL_11:
    if ( (*(_DWORD *)v15 & v11) == 0 )
    {
LABEL_16:
      while ( 1 )
      {
        v14 += 40;
        v15 = (__int64 *)((char *)v15 + 4);
        if ( v14 == v16 )
          return v6;
LABEL_17:
        v13 = *v14;
        if ( *v14 != 3 )
          goto LABEL_11;
LABEL_18:
        if ( (unsigned __int8)(v14[31] - 43) <= 1u && *(unsigned __int16 *)(v14 + 5) == a3 )
          return 1;
      }
    }
    if ( v13 == 1 )
    {
      if ( a3 != *(unsigned __int16 *)(v14 + 5) )
      {
        v14 += 40;
        v15 = (__int64 *)((char *)v15 + 4);
        if ( v14 != v16 )
          goto LABEL_17;
        return v6;
      }
    }
    else if ( v13 != 10 || *(unsigned __int16 *)(v14 + 5) > a3 || v14[32] < a3 )
    {
      goto LABEL_16;
    }
    return 1;
  }
  v17 = a3 - 6;
  LOBYTE(a2) = (unsigned int)(a3 - 6) > 7;
  LOBYTE(v17) = a3 != 0;
  return v17 & (unsigned int)a2;
}


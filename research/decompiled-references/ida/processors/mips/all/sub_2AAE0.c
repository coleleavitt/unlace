unsigned __int64 __fastcall sub_2AAE0(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r9d
  __int64 v10; // rsi
  _DWORD *v11; // rdx
  char *v12; // rax
  char v13; // cl
  unsigned __int64 result; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r8
  int v20; // ecx
  int v21; // edx
  unsigned __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // ecx
  unsigned __int64 v25; // rsi
  int v26; // edx
  unsigned __int64 v27; // rsi
  char v28; // cl
  unsigned __int64 v29; // rcx

  if ( a4 == -1 || !sub_1E5E0(a1, *(unsigned __int16 *)(a3 + 24), (*(_BYTE *)(a3 + 33) & 4) != 0) )
  {
    v6 = *(unsigned __int16 *)(a3 + 24);
    if ( (_WORD)v6 == 1764 )
      goto LABEL_35;
  }
  else
  {
    result = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
    if ( result == a4 )
      return result;
    v6 = *(unsigned __int16 *)(a3 + 24);
    if ( (_WORD)v6 == 1764 )
    {
LABEL_35:
      v20 = *(unsigned __int16 *)(a3 + 46);
      result = *(_QWORD *)(a3 + 128);
      v21 = v20 + result;
      if ( v20 + (int)result > 32 )
      {
        result = *a2;
        if ( 32 - v20 > 0 )
        {
          do
          {
            while ( v20 > 63 )
              ++v20;
            v23 = 1LL << v20++;
            result |= v23;
          }
          while ( v20 != 32 );
        }
        v24 = 16;
        do
        {
          v25 = result;
          result |= 1LL << v24;
          if ( v24 >= 0x40 )
            result = v25;
          ++v24;
        }
        while ( v21 - 16 != v24 );
      }
      else
      {
        if ( (int)result <= 0 )
          return result;
        result = *a2;
        do
        {
          v22 = result;
          result |= 1LL << v20;
          if ( v20 >= 64 )
            result = v22;
          ++v20;
        }
        while ( v21 != v20 );
      }
      *a2 = result;
      return result;
    }
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(v7 + 104);
  if ( v6 < v8 || v6 >= *(_DWORD *)(v7 + 108) )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v16 = *(_QWORD *)(v7 + 112) + 16LL * (v6 - v8);
    v10 = *(unsigned int *)(v16 + 8);
    v9 = *(_DWORD *)(v16 + 8) & 2;
  }
  v11 = dword_598C0;
  v12 = (char *)(a3 + 41);
  do
  {
    if ( (*v11 & (unsigned int)v10) == 0 )
      goto LABEL_11;
    v13 = *v12;
    if ( *v12 == 1 )
    {
      v17 = *(unsigned __int16 *)(v12 + 5);
    }
    else
    {
      if ( v13 != 9 )
      {
        if ( v13 == 12 )
          *a2 |= *(_QWORD *)(v12 + 23);
        goto LABEL_11;
      }
      if ( v12[32] != 4 )
        goto LABEL_11;
      v17 = *(unsigned __int16 *)(v12 + 5) + 32;
    }
    v18 = 1LL << v17;
    if ( v17 >= 64 )
      v18 = 0;
    *a2 |= v18;
LABEL_11:
    v12 += 40;
    ++v11;
  }
  while ( (char *)(a3 + 121) != v12 );
  if ( v9 )
    *a2 |= ~sub_3C070(a1 + 120, v10, v11);
  result = *(unsigned __int16 *)(a3 + 24);
  if ( (unsigned __int16)(result - 822) <= 1u )
  {
    result = 1LL << ((unsigned __int8)*(_WORD *)(a3 + 46) + 1);
    if ( *(unsigned __int16 *)(a3 + 46) + 1 >= 64 )
      result = 0;
    *a2 |= result;
    return result;
  }
  v15 = *(_DWORD *)(a1 + 120);
  if ( (unsigned int)(v15 - 1) <= 1 || v15 == 4 )
  {
LABEL_20:
    if ( (_WORD)result == 545 )
    {
      result = *(_QWORD *)(a3 + 144);
      *a2 |= result;
    }
    return result;
  }
  if ( (*(_BYTE *)(a3 + 28) & 4) != 0 && *(_BYTE *)(a3 + 32) == 100 )
  {
    if ( *(_BYTE *)(a3 + 41) == 9 && *(_BYTE *)(a3 + 73) == 4 )
    {
      v26 = *(unsigned __int16 *)(a3 + 46);
      v29 = (unsigned int)(v26 + 32);
      if ( (int)v29 <= 63 )
      {
        v27 = *a2;
        if ( _bittest64((const __int64 *)&v27, v29) )
          goto LABEL_57;
      }
    }
    goto LABEL_20;
  }
  if ( (_WORD)result != 128 )
    goto LABEL_20;
  if ( *(_BYTE *)(a3 + 41) == 9 && *(_BYTE *)(a3 + 73) == 4 )
  {
    v26 = *(unsigned __int16 *)(a3 + 46);
    result = (unsigned int)(v26 + 32);
    if ( (int)result <= 63 )
    {
      v27 = *a2;
      if ( _bittest64((const __int64 *)&v27, result) )
      {
LABEL_57:
        v28 = v26 + 33;
        if ( v26 != 31 )
        {
          result = 1LL << v28;
          v27 |= 1LL << v28;
        }
        *a2 = v27;
      }
    }
  }
  return result;
}


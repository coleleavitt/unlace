__int64 __fastcall sub_ED60(__int64 a1, __int64 a2, int a3)
{
  int v4; // edx
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // r9
  char v8; // cl
  __int64 v9; // rdx
  int v10; // r10d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rdi
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 *i; // rdx
  char v24; // cl
  __int64 v25; // rdx
  unsigned int v26; // r10d
  __int64 v27; // r11
  int v28; // ebp
  unsigned int v29; // edi
  __int64 v30; // r10
  int v31; // ebx

  v4 = a3 + 7;
  v6 = *(unsigned __int16 *)(a2 + 24);
  if ( a3 >= 0 )
    v4 = a3;
  if ( (unsigned int)v4 > 0x27 )
  {
    if ( (unsigned __int16)v6 > 0x31u )
    {
      v24 = v6 - 64;
      if ( (unsigned __int16)(v6 - 64) <= 0x30u )
      {
        v25 = 1LL << v24;
        if ( ((1LL << v24) & 0x18000C3) != 0 )
        {
          v10 = a3;
          v7 = 10;
          goto LABEL_66;
        }
        LODWORD(v12) = 1;
        if ( (v25 & 0x1800006100000LL) != 0 )
          return (unsigned int)v12;
      }
    }
    else if ( (unsigned __int16)v6 > 0x20u )
    {
      v12 = 0x2100200000000LL;
      v13 = (unsigned __int16)v6;
      v7 = 10;
      LOBYTE(v12) = _bittest64(&v12, v6);
      if ( !(_BYTE)v12 )
        goto LABEL_11;
      return (unsigned int)v12;
    }
    v7 = 10;
    goto LABEL_10;
  }
  v7 = *((_BYTE *)&qword_181C8 + (unsigned int)(v4 >> 3));
  if ( (unsigned __int16)v6 > 0x31u )
  {
    v8 = v6 - 64;
    if ( (unsigned __int16)(v6 - 64) > 0x30u )
    {
LABEL_10:
      v13 = (unsigned __int16)v6;
      goto LABEL_11;
    }
    v9 = 1LL << v8;
    if ( ((1LL << v8) & 0x18000C3) == 0 )
    {
      LODWORD(v12) = 1;
      if ( (v9 & 0x1800006100000LL) == 0 )
        goto LABEL_10;
      return (unsigned int)v12;
    }
    if ( !v7 )
    {
      v10 = *((_DWORD *)qword_18240 + 3 * (a3 & 7) + 1);
      v11 = 7;
      goto LABEL_9;
    }
    v10 = a3;
    v11 = 7;
    if ( v7 == 1 )
    {
LABEL_9:
      LODWORD(v12) = 1;
      if ( v10 != v11 )
        goto LABEL_10;
      return (unsigned int)v12;
    }
    if ( v7 == 2 )
    {
      v11 = 39;
      goto LABEL_9;
    }
LABEL_66:
    v11 = -1;
    goto LABEL_9;
  }
  v13 = (unsigned __int16)v6;
  if ( (unsigned __int16)v6 > 0x20u )
  {
    v12 = 0x2100200000000LL;
    LOBYTE(v12) = _bittest64(&v12, v6);
    if ( (_BYTE)v12 )
      return (unsigned int)v12;
  }
LABEL_11:
  v14 = *(_QWORD *)(a1 + 16);
  LODWORD(v12) = 0;
  v15 = *(_DWORD *)(v14 + 104);
  if ( v13 < v15 )
    return (unsigned int)v12;
  if ( v13 >= *(_DWORD *)(v14 + 108) )
    return (unsigned int)v12;
  v16 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * (v13 - v15) + 8);
  if ( !v16 )
    return (unsigned int)v12;
  v17 = a2 + 41;
  v18 = qword_182A0;
  v19 = a2 + 161;
  v20 = v17;
  while ( 1 )
  {
    if ( (*(_DWORD *)v18 & v16) == 0 || *(_BYTE *)v20 != 3 || !*(_BYTE *)(v20 + 31) )
      goto LABEL_17;
    v26 = *(unsigned __int16 *)(v20 + 5);
    if ( v26 > 0x27 )
      break;
    v27 = *((unsigned __int8 *)&qword_181C8 + ((int)*(unsigned __int16 *)(v20 + 5) >> 3));
    if ( v7 >= (unsigned __int8)v27 )
    {
      v28 = a3;
      if ( (unsigned __int8)v27 < v7 )
      {
        if ( v7 > 2u )
          v26 = -1;
        else
          v26 = *((_DWORD *)qword_18240 + 3 * (*(_WORD *)(v20 + 5) & 7) + v7);
      }
      goto LABEL_47;
    }
    if ( (unsigned __int8)v27 <= 2u )
    {
      v28 = *((_DWORD *)qword_18240 + 3 * (a3 & 7) + v27);
      goto LABEL_47;
    }
LABEL_17:
    v20 += 40;
    v18 = (__int64 *)((char *)v18 + 4);
    if ( v20 == v19 )
    {
      for ( i = qword_182C0; ; i = (__int64 *)((char *)i + 4) )
      {
        if ( (*(_DWORD *)i & v16) != 0 )
        {
          if ( *(_BYTE *)v17 == 1 )
          {
            v29 = *(unsigned __int16 *)(v17 + 5);
            if ( v29 > 0x27 )
            {
              v31 = a3;
              if ( v7 == 10 )
                goto LABEL_53;
            }
            else
            {
              v30 = *((unsigned __int8 *)&qword_181C8 + ((int)*(unsigned __int16 *)(v17 + 5) >> 3));
              if ( v7 >= (unsigned __int8)v30 )
              {
                v31 = a3;
                if ( (unsigned __int8)v30 < v7 )
                {
                  if ( v7 > 2u )
                    v29 = -1;
                  else
                    v29 = *((_DWORD *)qword_18240 + 3 * (*(_WORD *)(v17 + 5) & 7) + v7);
                }
LABEL_53:
                if ( v31 == v29 )
                  return 1;
                goto LABEL_22;
              }
              if ( (unsigned __int8)v30 <= 2u )
              {
                v31 = *((_DWORD *)qword_18240 + 3 * (a3 & 7) + v30);
                goto LABEL_53;
              }
            }
          }
          else if ( *(_BYTE *)v17 == 8 )
          {
            return 1;
          }
        }
LABEL_22:
        v17 += 40;
        if ( v17 == v19 )
          return 0;
      }
    }
  }
  v28 = a3;
  if ( v7 != 10 )
    goto LABEL_17;
LABEL_47:
  if ( v28 != v26 )
    goto LABEL_17;
  return 1;
}


__int64 __fastcall sub_3716A0(__int64 a1, unsigned int a2, char a3, double a4, __m128 a5)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  int v9; // r14d
  char v10; // al
  int v11; // r13d
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  bool v23; // dl
  __int64 v24; // rax
  int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // cl
  int v29; // eax
  char v30; // dl
  unsigned int v31; // esi
  unsigned int v32; // ebx
  int v33; // eax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // edx
  int v37; // eax
  int v38; // [rsp+4h] [rbp-84h]
  int v39; // [rsp+8h] [rbp-80h]

  v39 = a3 & 1;
  v8 = *(_QWORD *)(a1 + 464);
  v7 = (int)v8;
  v8 = (int)v8;
  if ( !(_DWORD)v8 )
  {
    LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936));
    v17 = v16;
    if ( a2 == 48 )
      goto LABEL_40;
    LODWORD(v7) = 0;
    v9 = 0;
    goto LABEL_29;
  }
  v9 = 0;
  v38 = a3 & 5;
  do
  {
    while ( 1 )
    {
      v11 = v8 - 1;
      v12 = sub_13D280((_QWORD *)a1, (int)v8 - 1, a4);
      if ( *(_DWORD *)v12 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v12 - 3) > 1 )
        goto LABEL_4;
LABEL_5:
      if ( !--v8 )
        goto LABEL_12;
    }
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(_DWORD **)v13;
    v15 = *(_QWORD *)v13 + 24LL * *(_QWORD *)(v13 + 8);
    if ( *(_QWORD *)v13 == v15 )
    {
LABEL_4:
      ++v9;
      sub_1EEEF0(v12, *(_QWORD *)(a1 + 1504), (_BYTE *)(v12 + 80), 0xFFFFFFFF, a2, a4);
      if ( !v10 )
      {
        if ( v38 != 5 )
          return 0;
        while ( v7 >= v8 )
        {
          v19 = sub_13D280((_QWORD *)a1, --v7, a4);
          v20 = *(_DWORD *)(v19 + 24);
          BYTE1(v20) &= 0x7Eu;
          *(_DWORD *)(v19 + 24) = v20 | 0x100000;
        }
        v21 = *(_QWORD *)(a1 + 464);
        if ( v21 < v11 )
        {
          v22 = *(_QWORD *)(a1 + 456);
          if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)v11 )
          {
            v24 = qvector_reserve(a1 + 456, v22, v11, 4);
            v21 = *(_QWORD *)(a1 + 464);
            *(_QWORD *)(a1 + 456) = v24;
            v22 = v24;
          }
          memset((void *)(v22 + 4 * v21), 0, 4 * (v11 - v21));
          *(_QWORD *)(a1 + 464) = v11;
        }
        else if ( v11 != v21 )
        {
          *(_QWORD *)(a1 + 464) = v11;
        }
        v7 = v11;
        v9 = 0;
      }
      goto LABEL_5;
    }
    while ( (unsigned int)(*v14 - 3) > 1 )
    {
      v14 += 6;
      if ( (_DWORD *)v15 == v14 )
        goto LABEL_4;
    }
    --v8;
  }
  while ( v8 );
LABEL_12:
  LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936));
  v17 = v16;
  if ( a2 == 48 )
  {
    if ( v9 != (_DWORD)v7 )
      return 0;
LABEL_40:
    if ( *(int *)(a1 + 68) <= 0 || v39 )
      return (v17 | ((*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) == 0)) ^ 1;
    return 0;
  }
LABEL_29:
  if ( a2 <= 0x10 )
  {
    LODWORD(v16) = getinf();
    v23 = (_DWORD)v16 == 176;
    if ( (_DWORD)v16 != 256 )
    {
      if ( (_DWORD)v16 == 176 )
        goto LABEL_45;
      goto LABEL_33;
    }
LABEL_62:
    if ( v23 )
      goto LABEL_45;
    goto LABEL_63;
  }
  v23 = a2 == 176;
  if ( a2 == 256 )
    goto LABEL_62;
  if ( a2 != 176 )
    goto LABEL_32;
LABEL_45:
  v16 = getinf();
  if ( v16 <= 0x397 )
  {
    LODWORD(v16) = getinf_flag();
    if ( !(_BYTE)v16
      || (netnode_check(), LODWORD(v16) = netnode_altval(), v25 = v16, (unsigned int)v16 <= 0x74)
      || (LODWORD(v16) = *(_DWORD *)(get_ph() + 4), (_DWORD)v16)
      && ((v16 = (unsigned int)(v16 - 13), (unsigned int)v16 > 0x3B)
       || (v26 = 0x800000000000005LL, !_bittest64(&v26, v16))
       || v25 == 117) )
    {
LABEL_63:
      if ( v9 != (_DWORD)v7 )
        return 0;
      if ( *(int *)(a1 + 68) > 0 && !v39 )
        return 0;
    }
  }
LABEL_32:
  if ( a2 == 176 )
  {
    if ( (_BYTE)v17 )
      return 0;
    if ( (unsigned __int64)getinf() > 0x397
      || (unsigned __int8)getinf_flag()
      && (netnode_check(), v32 = netnode_altval(), v32 > 0x74)
      && ((v33 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v34 = (unsigned int)(v33 - 13), (unsigned int)v34 <= 0x3B)
       && (v35 = 0x800000000000005LL, _bittest64(&v35, v34))
       && v32 != 117) )
    {
      if ( !(unsigned __int8)sub_370720(a1, 0xB0u, a3, a4, a5) )
        return 0;
    }
    return sub_36D050(a1, a2, a4, a5);
  }
LABEL_33:
  if ( a2 > 0xB0 )
  {
    if ( a2 == 240 )
      return ((unsigned __int8)v39 ^ 1) & (v17 ^ 1);
    if ( a2 <= 0xF0 )
    {
      if ( a2 == 208 )
      {
        if ( !(_BYTE)v17 )
          return 0;
      }
      else
      {
        v17 = (unsigned __int8)v39 ^ 1;
        if ( a2 != 224 )
          return 0;
      }
      return v17;
    }
    if ( a2 != 256 )
      return 0;
    return sub_36D050(a1, a2, a4, a5);
  }
  if ( a2 == 64 )
  {
    if ( !(_BYTE)v17 )
      return 0;
    v30 = a3;
    v31 = 64;
    return sub_370720(a1, v31, v30, a4, a5);
  }
  if ( a2 > 0x40 )
  {
    if ( a2 != 112 )
    {
      if ( a2 <= 0x70 )
      {
        if ( ((a2 - 80) & 0xFFFFFFEF) != 0 )
          return 0;
        LOBYTE(v16) = v9 != (_DWORD)v7;
        return (v17 | (unsigned int)v16) ^ 1;
      }
      if ( (a2 & 0xFFFFFFEF) != 0x80 )
        return 0;
    }
    if ( (_BYTE)v17 )
      return 0;
    if ( *(_DWORD *)(a1 + 68) != -1 && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) != 1 && !v39 )
    {
      v36 = sub_36EC70(a1, a4);
      v37 = *(_DWORD *)(a1 + 68);
      if ( v37 != v36 )
      {
        if ( !v37 )
          sub_CFF70();
        return 0;
      }
    }
    v30 = a3;
    v31 = a2;
    return sub_370720(a1, v31, v30, a4, a5);
  }
  if ( a2 != 16 )
  {
    if ( a2 != 32 )
      return 0;
    goto LABEL_38;
  }
  v27 = *(_QWORD *)(a1 + 1496);
  v28 = *(_BYTE *)(v27 + 129);
  v29 = v28 & 0xF0;
  if ( (v28 & 0xF0) == 0xC0 )
    v29 = *(_DWORD *)(v27 + 140);
  if ( v29 != 128 || (_DWORD)v7 - v9 == 1 )
  {
LABEL_38:
    if ( !(_BYTE)v17 )
    {
      LOBYTE(v17) = (_DWORD)v7 == 0;
      v17 &= sub_36D050(a1, a2, a4, a5);
      return v17;
    }
    return 0;
  }
  return 0;
}


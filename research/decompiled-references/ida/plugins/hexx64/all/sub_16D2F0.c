__int64 __fastcall sub_16D2F0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v6; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  unsigned int *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  _DWORD *v26; // r12
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rax
  int v30; // r14d
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  _BYTE *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 i; // rbx
  int v39; // eax
  int v40; // eax
  _QWORD *v41; // rdx
  int v42; // eax
  int v43; // eax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 v46; // [rsp+8h] [rbp-50h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  v6 = a2;
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(a3 + 56);
  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( *(_DWORD *)v8 == 55 )
    v8 = *(_QWORD *)(v8 + 16);
  if ( *(_DWORD *)v9 == 55 )
    v9 = *(_QWORD *)(v9 + 16);
  v10 = v8;
  while ( 1 )
  {
    v11 = sub_1229D0(v10);
    v12 = sub_1229D0(v9);
    if ( (v11 != 0) != (v12 != 0) )
      break;
    if ( !v11 )
    {
      v34 = *(_BYTE **)(a1 + 56);
      if ( (v34[6] & 2) != 0 || (unsigned __int8)sub_1205A0(v34, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
        return 0;
      v35 = *(_QWORD *)(a1 + 64);
      v36 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
      if ( (unsigned int)v36 < *(_DWORD *)(v35 + 64) )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v35 + 528) + 8 * v36);
        for ( i = *(_QWORD *)(v37 + 48); i; i = *(_QWORD *)(i + 8) )
        {
          if ( *(_DWORD *)i == 55 )
            break;
          sub_11D5A0(i);
          v39 = *(_DWORD *)(v37 + 24);
          BYTE1(v39) &= ~2u;
          LOBYTE(v39) = v39 | 0x80;
          *(_DWORD *)(v37 + 24) = v39;
        }
        sub_13B2C0(a2);
        sub_11D5A0(*(_QWORD *)(a1 + 56));
        v40 = *(_DWORD *)(a1 + 24);
        BYTE1(v40) &= ~2u;
        LOBYTE(v40) = v40 | 0x80;
        *(_DWORD *)(a1 + 24) = v40;
        sub_112550(a1, a2, v37);
        sub_66FA0(*(_QWORD *)(a1 + 64), 1);
        return 1;
      }
LABEL_64:
      sub_167AF0(*(double *)a4.m128i_i64);
    }
    if ( sub_1201A0((_BYTE *)v11, v45)
      || !sub_125B90((unsigned __int8 *)v11, v45, (unsigned int *)v12, 4u, *(double *)a4.m128i_i64) )
    {
      v13 = sub_1229D0(v8);
      if ( v11 != v13 )
        goto LABEL_12;
      return 0;
    }
    v10 = *(_QWORD *)(v11 + 16);
    v9 = *(_QWORD *)(v12 + 16);
  }
  v13 = sub_1229D0(v8);
  if ( v11 == v13 )
    return 0;
  if ( v11 )
LABEL_12:
    v18 = *(unsigned int **)(v11 + 8);
  else
    v18 = *(unsigned int **)(a2 + 48);
  if ( v12 )
    v19 = *(_QWORD *)(v12 + 8);
  else
    v19 = *(_QWORD *)(a3 + 48);
  v20 = *((_QWORD *)v18 + 2);
  if ( v20 )
  {
    v15 = *(_QWORD *)(v20 + 24);
    if ( *((_QWORD *)v18 + 3) == v15 )
    {
      do
      {
        v15 = *v18;
        v14 = (unsigned int)(v15 - 29);
        if ( (unsigned int)v14 > 0xC )
          break;
        v14 = (unsigned int)(*(_DWORD *)v20 - 29);
        if ( (unsigned int)v14 > 0xC )
          break;
        if ( (unsigned int *)v13 == v18 )
          return 0;
        v18 = *((unsigned int **)v18 + 1);
        v19 = *(_QWORD *)(v19 + 8);
        v20 = *((_QWORD *)v18 + 2);
      }
      while ( *(_QWORD *)(v20 + 24) == *((_QWORD *)v18 + 3) );
    }
  }
  if ( !(unsigned __int8)sub_168F10(v6, (__int64)v18, v14, v15, v16, v17, a4, a5) )
    return 0;
  v23 = *(_DWORD **)(v6 + 56);
  if ( *v23 == 55 )
    v24 = (unsigned int)v23[10];
  else
    v24 = (unsigned int)(*(_DWORD *)(v6 + 72) + 1);
  v25 = *(_QWORD *)(v6 + 64);
  if ( (unsigned int)v24 >= *(_DWORD *)(v25 + 64) )
    goto LABEL_64;
  v26 = *(_DWORD **)(*(_QWORD *)(v25 + 528) + 8 * v24);
  v27 = v26[19];
  if ( v27 == 1 || v27 == 6 || v26[88] != 2 )
  {
    if ( v18 != *(unsigned int **)(v6 + 48) )
      v6 = sub_69930(*(_QWORD *)(v6 + 64), v6, (__int64)v18, v21, *(double *)a4.m128i_i64);
    v28 = *(_QWORD *)(a3 + 56);
    if ( v19 != v28 )
    {
      do
      {
        v29 = sub_A3480(a3, (_BYTE *)v19);
        v28 = *(_QWORD *)(a3 + 56);
        v19 = v29;
      }
      while ( v29 != v28 );
    }
    v30 = *(_DWORD *)(v28 + 4);
    sub_11D5A0(v28);
    *(_DWORD *)v28 = 55;
    v31 = *(_DWORD *)(v6 + 72);
    *(_BYTE *)(v28 + 32) = 7;
    *(_DWORD *)(v28 + 40) = v31;
    *(_DWORD *)(v28 + 4) = v30 & 0x100000;
    sub_A73B0(a3, v6, *(double *)a4.m128i_i64);
  }
  else
  {
    v41 = nullptr;
LABEL_53:
    if ( v18 )
    {
      while ( *v18 != 55 )
      {
        if ( *((char *)v18 + 4) >= 0 )
        {
          v47 = (__int64)v41;
          v46 = sub_A33C0(v6, (__int64)v18);
          v44 = sub_A3160((__int64)v26, v18, v47, *(double *)a4.m128i_i64);
          v18 = (unsigned int *)v46;
          v41 = v44;
          goto LABEL_53;
        }
        v18 = *((unsigned int **)v18 + 1);
        if ( !v18 )
          break;
      }
    }
LABEL_57:
    if ( v19 )
    {
      while ( *(_DWORD *)v19 != 55 )
      {
        if ( *(char *)(v19 + 4) >= 0 )
        {
          v19 = sub_A3480(a3, (_BYTE *)v19);
          goto LABEL_57;
        }
        v19 = *(_QWORD *)(v19 + 8);
        if ( !v19 )
          break;
      }
    }
    v42 = *(_DWORD *)(v6 + 24);
    BYTE1(v42) &= ~2u;
    LOBYTE(v42) = v42 | 0x80;
    *(_DWORD *)(v6 + 24) = v42;
    v43 = v26[6];
    BYTE1(v43) &= ~2u;
    LOBYTE(v43) = v43 | 0x80;
    v26[6] = v43;
  }
  v32 = *(_DWORD *)(a3 + 24);
  BYTE1(v32) &= ~2u;
  LOBYTE(v32) = v32 | 0x80;
  *(_DWORD *)(a3 + 24) = v32;
  v33 = *(_QWORD *)(v25 + 784);
  *(_DWORD *)v25 |= 0x400u;
  if ( v33 )
    *(_DWORD *)(v33 + 48) = 63;
  sub_66FA0(*(_QWORD *)(a1 + 64), 1);
  return 1;
}


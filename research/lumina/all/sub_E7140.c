__int64 __fastcall sub_E7140(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  void *v12; // r8
  int v13; // r13d
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  _DWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *i; // rax
  __int64 *v25; // r15
  char *v26; // rsi
  unsigned int v27; // r13d
  const char *v28; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  int v32; // r11d
  int v33; // eax
  __int64 v34; // rcx
  __int64 *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rdi
  const char *v38; // rax
  int v39; // r13d
  _QWORD *v40; // rdx
  __int64 v41; // rax
  char v42; // al
  double v43; // xmm0_8
  __int16 v44; // ax
  unsigned __int64 v45; // rax
  __int16 v46; // dx
  __int16 j; // dx
  __int16 v48; // dx
  int v49; // eax
  int v50; // edx
  unsigned __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  _DWORD *v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  int v57; // [rsp+20h] [rbp-48h]

  v9 = *(__int64 **)a1;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(void **)(a5 + 32);
  v13 = *(unsigned __int8 *)(v10 + 16);
  v53 = **(_QWORD **)a1;
  v14 = *(_DWORD *)a5;
  v54 = v9[1];
  v57 = *(_DWORD *)a5;
  *a7 = 0;
  *(_QWORD *)v10 = a2;
  v15 = *(_QWORD *)(a5 + 8);
  if ( v14 > 0 )
  {
    v16 = v15 + 4 * (3LL * (unsigned int)(v14 - 1) + 3);
    do
    {
      while ( 1 )
      {
        v17 = 7LL * *(int *)(v15 + 8);
        v18 = *(_QWORD *)(v11 + 32);
        *(_BYTE *)(v15 + 5) = 0;
        v19 = v18 + 8 * v17;
        if ( *(_QWORD *)(v19 + 40) == (a3 & *(_QWORD *)(v19 + 40))
          && (a4 & *(_WORD *)(v19 + 20)) == 0
          && (a8 || (unsigned __int8)(*(_BYTE *)(v19 + 23) - 73) > 1u) )
        {
          break;
        }
        v15 += 12;
        if ( v15 == v16 )
          goto LABEL_8;
      }
      *(_BYTE *)(v15 + 5) = 1;
      v15 += 12;
    }
    while ( v15 != v16 );
  }
LABEL_8:
  v20 = memset(v12, 0, 8LL * v57);
  *(_QWORD *)(a5 + 60) = 0xA2879F2E00000000LL;
  *(_QWORD *)(a5 + 68) = 0x19546D42AELL;
  *(_QWORD *)(a5 + 48) = 0;
  *(_DWORD *)(a5 + 40) = 0;
  *(_QWORD *)(a5 + 76) = 0;
  v21 = v54 + 104LL * v13;
  v22 = *(_QWORD *)(v21 + 88);
  *(_DWORD *)(a5 + 120) = 0;
  *(_QWORD *)(a5 + 88) = v22;
  v23 = *(_QWORD *)v53;
  for ( i = *(_QWORD **)(*(_QWORD *)(v21 + 40) + 80LL); i; i = (_QWORD *)i[5] )
  {
    if ( v23 == *i )
      break;
  }
  v25 = (__int64 *)i[2];
  ++*(_DWORD *)(v23 + 72);
  v26 = (char *)a5;
  v56 = v13;
  v55 = v20;
  v27 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v25 + 24))(v25, a5);
  --*(_DWORD *)(*(_QWORD *)v53 + 72LL);
  if ( v27 && v27 != 19 )
  {
    if ( v27 == 7 )
    {
      v37 = *(_QWORD *)v53;
      if ( !*(_BYTE *)(*(_QWORD *)v53 + 103LL) && !*(_BYTE *)(v37 + 104) )
        sub_DBE60(v37);
    }
    else
    {
      v28 = (const char *)v25[2];
      if ( v28 )
      {
        v26 = "%s";
        sub_DBD10(v53, "%s", v28);
      }
      else
      {
        v38 = sub_D1BA0(v27);
        v26 = "%s";
        sub_DBD10(v53, "%s", v38);
      }
    }
    sub_C91C0(v25[2], (__int64)v26);
    v25[2] = 0;
    goto LABEL_18;
  }
  sub_C91C0(v25[2], a5);
  v25[2] = 0;
  if ( v27 )
  {
LABEL_18:
    if ( v27 == 19 )
      return 0;
    return v27;
  }
  memset(*(void **)(v10 + 64), 0, 8LL * v57);
  *(_QWORD *)(v10 + 40) = 0;
  *(_OWORD *)(v10 + 24) = 0;
  v30 = *(_QWORD *)(a5 + 8);
  if ( v57 <= 0 )
  {
    *(_WORD *)(v10 + 52) = 0;
    goto LABEL_57;
  }
  v31 = 0;
  v32 = -1;
  do
  {
    v33 = v55[2 * v31] - 1;
    if ( v33 < 0 )
      goto LABEL_25;
    v34 = *(int *)(v30 + 8);
    if ( v57 <= v33 )
      goto LABEL_47;
    if ( (int)v34 < 0 )
      goto LABEL_47;
    if ( *(_DWORD *)(v11 + 20) <= (int)v34 )
      goto LABEL_47;
    v35 = (__int64 *)(*(_QWORD *)(v10 + 64) + 8LL * v33);
    if ( *v35 || !*(_BYTE *)(v30 + 5) )
      goto LABEL_47;
    v36 = *(_QWORD *)(v11 + 32) + 56 * v34;
    *(_QWORD *)v10 |= *(_QWORD *)(v36 + 40);
    *v35 = v36;
    if ( v32 < v33 )
      v32 = v33;
    if ( LOBYTE(v55[2 * v31 + 1]) )
    {
      if ( v31 <= 0xF )
      {
        v52 = a6;
        if ( !_bittest(&v52, v31) )
          *(_WORD *)(v10 + 30) |= 1 << v33;
      }
      if ( *(_BYTE *)(v36 + 23) == 74 )
        *(_BYTE *)(v10 + 28) |= 2u;
    }
    if ( v31 <= 0x1F && ((1 << v31) & *(_DWORD *)(a5 + 120)) != 0 )
    {
      *(_DWORD *)(v10 + 40) |= 1 << v33;
    }
    else if ( (*(_BYTE *)(v36 + 20) & 1) != 0 )
    {
      *(_DWORD *)(a5 + 80) &= ~1u;
      *(_DWORD *)(a5 + 60) = 0;
      *a7 = 1;
      if ( (unsigned __int8)(*(_BYTE *)(v36 + 23) - 73) <= 1u )
        goto LABEL_42;
      goto LABEL_25;
    }
    if ( (unsigned __int8)(*(_BYTE *)(v36 + 23) - 73) <= 1u && *a7 )
    {
LABEL_42:
      v27 = 0;
      if ( *(_DWORD *)(a5 + 56) )
      {
        sub_C91C0(*(_QWORD *)(a5 + 48), v30);
        *(_QWORD *)(a5 + 48) = 0;
        *(_DWORD *)(a5 + 56) = 0;
      }
      *a8 = 1;
      return v27;
    }
LABEL_25:
    ++v31;
    v30 += 12;
  }
  while ( (unsigned int)(v57 - 1) + 1LL != v31 );
  v39 = 0;
  *(_WORD *)(v10 + 52) = v32 + 1;
  if ( v32 != -1 )
  {
    v40 = *(_QWORD **)(v10 + 64);
    if ( !*v40 )
    {
LABEL_47:
      v27 = 1;
      sub_DBD10(v53, "%s.xBestIndex malfunction", **(const char ***)(v54 + 104 * v56 + 40));
      return v27;
    }
    while ( v32 >= ++v39 )
    {
      if ( !v40[v39] )
        goto LABEL_47;
    }
  }
LABEL_57:
  *(_DWORD *)(v10 + 24) = *(_DWORD *)(a5 + 40);
  *(_BYTE *)(v10 + 28) = *(_BYTE *)(a5 + 56) & 1 | *(_BYTE *)(v10 + 28) & 0xFE;
  v41 = *(_QWORD *)(a5 + 48);
  *(_DWORD *)(a5 + 56) = 0;
  *(_QWORD *)(v10 + 32) = v41;
  v42 = 0;
  if ( *(_DWORD *)(a5 + 60) )
    v42 = *(_BYTE *)(a5 + 16);
  *(_BYTE *)(v10 + 29) = v42;
  *(_WORD *)(v10 + 18) = 0;
  v43 = *(double *)(a5 + 64);
  v44 = 0;
  if ( v43 > 1.0 )
  {
    if ( v43 <= 2000000000.0 )
      v44 = sub_D5C00(v43);
    else
      v44 = 2 * (5 * (*(_QWORD *)&v43 >> 52) - 5110);
  }
  *(_WORD *)(v10 + 20) = v44;
  v45 = *(_QWORD *)(a5 + 72);
  if ( v45 > 7 )
  {
    _BitScanReverse64(&v51, v45);
    v45 >>= 60 - ((unsigned __int8)v51 ^ 0x3Fu);
    v48 = 10 * (60 - (v51 ^ 0x3F)) + 30;
    goto LABEL_68;
  }
  v46 = 0;
  if ( v45 > 1 )
  {
    for ( j = 40; ; j -= 10 )
    {
      v45 *= 2LL;
      if ( v45 > 7 )
        break;
    }
    v48 = j - 20;
LABEL_68:
    v46 = word_1BACD0[v45 & 7] + v48;
  }
  v49 = *(_DWORD *)(v10 + 48);
  *(_WORD *)(v10 + 22) = v46;
  v50 = v49;
  BYTE1(v49) |= 0x10u;
  BYTE1(v50) &= ~0x10u;
  if ( (*(_BYTE *)(a5 + 80) & 1) == 0 )
    v49 = v50;
  *(_DWORD *)(v10 + 48) = v49;
  v27 = sub_DE680(a1, v10);
  if ( (*(_BYTE *)(v10 + 28) & 1) != 0 )
  {
    sub_C91C0(*(_QWORD *)(v10 + 32), v10);
    *(_BYTE *)(v10 + 28) &= ~1u;
  }
  return v27;
}

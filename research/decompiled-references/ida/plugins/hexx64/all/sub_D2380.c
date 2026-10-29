unsigned __int64 __fastcall sub_D2380(_QWORD *a1, int a2, double a3)
{
  _DWORD *v3; // rax
  int v4; // r13d
  _DWORD *v5; // r15
  char *v6; // rax
  char *v7; // rdx
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  size_t v16; // r12
  unsigned int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rsi
  signed int v21; // ebx
  signed int v22; // eax
  __int64 v24; // [rsp+10h] [rbp-130h]
  __m128i *v25; // [rsp+18h] [rbp-128h]
  signed int v27; // [rsp+24h] [rbp-11Ch]
  unsigned int *v28; // [rsp+28h] [rbp-118h]
  int v29; // [rsp+38h] [rbp-108h]
  int v30; // [rsp+3Ch] [rbp-104h]
  __int64 v32; // [rsp+68h] [rbp-D8h] BYREF
  unsigned int v33[4]; // [rsp+70h] [rbp-D0h] BYREF
  void *src; // [rsp+80h] [rbp-C0h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-B8h]
  int v36[4]; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-90h]
  int v38; // [rsp+B8h] [rbp-88h]
  void *v39; // [rsp+C0h] [rbp-80h]
  __int128 v40; // [rsp+C8h] [rbp-78h]
  __int64 v41; // [rsp+D8h] [rbp-68h]
  __int128 v42; // [rsp+E0h] [rbp-60h]
  __int64 v43; // [rsp+F0h] [rbp-50h]
  signed int v44; // [rsp+F8h] [rbp-48h]
  int v45; // [rsp+FCh] [rbp-44h]
  __int64 v46; // [rsp+100h] [rbp-40h]
  unsigned __int64 v47; // [rsp+108h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  v27 = *(_DWORD *)(a1[188] + 80LL);
  v24 = 104LL * a2;
  v3 = (_DWORD *)(a1[54] + v24);
  v4 = v3[22];
  v5 = v3;
  if ( v4 <= v27 && *v3 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCDA7u, a3);
LABEL_44:
    BUG();
  }
  v6 = (char *)a1[57];
  v7 = &v6[4 * a1[58]];
  v8 = v6;
  if ( v6 == v7 )
    goto LABEL_40;
  while ( *(_DWORD *)v8 != a2 )
  {
    v8 += 4;
    if ( v7 == v8 )
      goto LABEL_40;
  }
  if ( v7 == v8 )
  {
LABEL_40:
    if ( !under_debugger )
      sub_383060(0xCDA8u, a3);
    goto LABEL_44;
  }
  v30 = (v8 - v6) >> 2;
  memmove(v8, v8 + 4, v7 - v8 - 4);
  --a1[58];
  v9 = v5[6];
  BYTE1(v9) &= 0x7Eu;
  v5[6] = v9 | 0x100000;
  v29 = 0;
  v25 = sub_D21A0((__int64)a1, (__int64)(v8 + 4), v10, v11, a3);
  if ( *v5 == 1 )
    v29 = (int)sub_1C3500(v5) % v27;
  v12 = 0;
  while ( v4 > 0 )
  {
    v21 = v27;
    if ( v27 <= v4 )
    {
      if ( !v29 )
        goto LABEL_13;
    }
    else
    {
      v21 = round_down_power2();
      if ( !v29 )
        goto LABEL_13;
    }
    v22 = round_down_power2();
    if ( v21 > v22 )
      v21 = v22;
    for ( ; v29 % v21; v21 /= 2 )
      ;
    v29 = (v21 + v29) % v27;
LABEL_13:
    sub_32C270(&v32, a1[188], v21);
    v33[0] = 0;
    copy_argloc();
    if ( v12 && !(unsigned __int8)sub_1C55E0(v33, a1[188], v12, (unsigned int)v5[22], 1) )
    {
      if ( !under_debugger )
        sub_383060(0xCDA9u, a3);
      goto LABEL_44;
    }
    v13 = v5[22];
    if ( v13 > v21 && !(unsigned __int8)sub_1C28A0((__int64)v33, a1[188], v13, v21) )
    {
      if ( !under_debugger )
        sub_383060(0xCDAAu, a3);
      goto LABEL_44;
    }
    a3 = 0.0;
    *(_OWORD *)n = 0;
    src = nullptr;
    src = (void *)qvector_reserve((__int64)&src, 0, 1, 1);
    n[0] = 1;
    *(_BYTE *)src = 0;
    v36[0] = 0;
    copy_argloc();
    v16 = n[0];
    v37 = -2;
    v38 = 1;
    v39 = nullptr;
    v40 = 0;
    if ( n[0] )
    {
      v39 = (void *)qalloc_or_throw(n[0], (__int64)v33, v14, v15);
      *((_QWORD *)&v40 + 1) = v16;
      memcpy(v39, src, v16);
      *(_QWORD *)&v40 = v16;
    }
    v41 = 0;
    v43 = 0;
    v42 = 0;
    copy_tinfo_t();
    v44 = v21;
    v45 = 0;
    v46 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    v17 = sub_1F6560((__int64)a1, (__int64)v36, 0);
    v5 = (_DWORD *)(a1[54] + v24);
    sub_D1D10((__int64)v25, 0, a1[5], v17, a2, 0, 0.0, v12, v21);
    v18 = 4LL * v30;
    *(_DWORD *)(a1[54] + 104LL * (int)v17 + 24) |= 0x100u;
    v19 = a1[58];
    v20 = a1[57];
    if ( a1[59] < (unsigned __int64)(v19 + 1) )
    {
      v20 = qvector_reserve((__int64)(a1 + 57), v20, v19 + 1, 4);
      v18 = 4LL * v30;
      a1[57] = v20;
      v19 = a1[58];
    }
    v12 += v21;
    v4 -= v21;
    v28 = (unsigned int *)(v18 + v20);
    memmove(v28 + 1, v28, 4 * v19 - v18);
    ++v30;
    *v28 = v17;
    ++a1[58];
    clear_tinfo_t();
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree((__int64)v39);
    }
    cleanup_argloc();
    cleanup_argloc();
    clear_tinfo_t();
  }
  return v47 - __readfsqword(0x28u);
}


__int64 __fastcall sub_36AA40(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rbx
  unsigned int tinfo_size; // eax
  __m128i v8; // xmm0
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  int v13; // edx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _DWORD *v22; // rdi
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  int *v31; // rsi
  __m128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rsi
  int *v35; // rax
  int *v36; // rsi
  unsigned __int8 v37; // [rsp+3h] [rbp-EDh]
  int v38; // [rsp+4h] [rbp-ECh]
  unsigned __int64 v39; // [rsp+8h] [rbp-E8h] BYREF
  signed __int64 v40; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v41; // [rsp+18h] [rbp-D8h] BYREF
  __m128i v42; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+40h] [rbp-B0h]
  int *v45; // [rsp+58h] [rbp-98h] BYREF
  __int128 v46; // [rsp+60h] [rbp-90h]
  int *v47; // [rsp+78h] [rbp-78h] BYREF
  __int128 v48; // [rsp+80h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-58h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v51; // [rsp+B0h] [rbp-40h]

  v5 = a1[35];
  v51 = __readfsqword(0x28u);
  v44 = 0;
  v43 = 0;
  tinfo_size = get_tinfo_size();
  v37 = sub_D2BA0(v5, (__int64)&v43, a2, tinfo_size, 0);
  if ( !v37 )
    goto LABEL_21;
  v8.m128i_i64[0] = 0;
  v45 = nullptr;
  v47 = nullptr;
  v49 = 0;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  if ( !(_QWORD)v44 )
    goto LABEL_56;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = a1[35];
    v12 = *(_DWORD **)(v11 + 88);
    v13 = *(_DWORD *)(v43 + 4 * v10);
    v14 = &v12[*(_QWORD *)(v11 + 96)];
    if ( v12 == v14 )
      goto LABEL_24;
    v15 = *(_DWORD **)(v11 + 88);
    while ( v13 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_24;
    }
    if ( v15 == v14 || (v16 = v15 - v12, v17 = v16, (_DWORD)v16 == -1) )
    {
LABEL_24:
      v22 = *(_DWORD **)(v11 + 112);
      v23 = &v22[*(_QWORD *)(v11 + 120)];
      if ( v22 == v23 )
        goto LABEL_14;
      v24 = *(_DWORD **)(v11 + 112);
      while ( v13 != *v24 )
      {
        if ( v23 == ++v24 )
          goto LABEL_14;
      }
      if ( v23 == v24 || (v25 = v24 - v22, v18 = v25, (_DWORD)v25 == -1) )
      {
LABEL_14:
        v37 = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)v11 != 3 )
      {
LABEL_31:
        if ( v18 >= (unsigned __int64)a1[27] || *(_DWORD *)(a1[26] + 4LL * v18) != -1 )
          goto LABEL_14;
        v26 = v48;
        v27 = (__int64)v47;
        if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
        {
          v47 = (int *)qvector_reserve((__int64)&v47, (__int64)v47, v48 + 1, 4);
          v27 = (__int64)v47;
          v26 = v48;
        }
        *(_DWORD *)(v27 + 4 * v26) = v18;
        *(_QWORD *)&v48 = v48 + 1;
        goto LABEL_36;
      }
      v19 = a1[23];
      v20 = a1[24];
      v17 = v25;
    }
    else
    {
      v18 = v16;
      v19 = a1[23];
      v20 = a1[24];
      if ( *(_DWORD *)v11 != 3 )
        v18 = -1;
    }
    if ( v17 >= v20 || *(_DWORD *)(v19 + 4LL * v17) != -1 )
      goto LABEL_14;
    v33 = v46;
    v34 = (__int64)v45;
    if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
    {
      v38 = v17;
      v45 = (int *)qvector_reserve((__int64)&v45, (__int64)v45, v46 + 1, 4);
      v34 = (__int64)v45;
      v17 = v38;
      v33 = v46;
    }
    *(_DWORD *)(v34 + 4 * v33) = v17;
    *(_QWORD *)&v46 = v46 + 1;
    if ( v18 != -1 )
      goto LABEL_31;
LABEL_36:
    if ( (unsigned __int8)sub_1C34E0((__int64)a2, (__int64 *)&v39, &v40, a2[22], *(double *)v8.m128i_i64) )
    {
      v32 = (__m128)(v40 - v39);
      v8 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v32);
      v41 = v8;
      v42 = v8;
      if ( (unsigned __int8)sub_317E70(a1 + 29, &v42, 0) )
        goto LABEL_14;
      sub_316BB0(&v49, &v41, *(double *)v8.m128i_i64, v32);
    }
    v10 = ++v9;
  }
  while ( v9 < (unsigned __int64)v44 );
  if ( !(_QWORD)v46 )
  {
    v29 = v48;
    if ( (_QWORD)v48 )
      goto LABEL_40;
LABEL_56:
    if ( !under_debugger )
      sub_383060(0xCB95u, *(double *)v8.m128i_i64);
    BUG();
  }
  v35 = v45;
  v36 = &v45[v46];
  if ( v45 != v36 )
  {
    do
    {
      v28 = *v35++;
      *(_DWORD *)(a1[23] + 4 * v28) = a3;
    }
    while ( v36 != v35 );
  }
  v29 = v48;
LABEL_40:
  v30 = v47;
  v31 = &v47[v29];
  if ( v47 != v31 )
  {
    do
    {
      v28 = *v30;
      v29 = a1[26];
      ++v30;
      *(_DWORD *)(v29 + 4 * v28) = a3;
    }
    while ( v30 != v31 );
  }
  if ( (_QWORD)v50 )
    sub_316CB0(a1 + 29, (const void **)&v49, v29, v28);
  if ( ((*a2 - 2) & 0xFFFFFFFD) == 0 )
    sub_64190(a1 + 19, a3, *(double *)v8.m128i_i64);
LABEL_15:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree((__int64)v47);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree((__int64)v45);
  }
LABEL_21:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  return v37;
}


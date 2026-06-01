__int64 __fastcall sub_365B40(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rbx
  unsigned int tinfo_size; // eax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  int v12; // edx
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r15d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _DWORD *v21; // rdi
  _DWORD *v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  int *v28; // rax
  int *v29; // rsi
  __int64 v30; // rcx
  __m128 v31; // xmm1
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rsi
  int *v35; // rax
  int *v36; // rsi
  __int64 v37; // rcx
  unsigned __int8 v38; // [rsp+3h] [rbp-EDh]
  int v39; // [rsp+4h] [rbp-ECh]
  unsigned __int64 v40; // [rsp+8h] [rbp-E8h] BYREF
  signed __int64 v41; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v42; // [rsp+18h] [rbp-D8h] BYREF
  __m128i v43; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+40h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-98h]
  __int128 v47; // [rsp+60h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-78h]
  __int128 v49; // [rsp+80h] [rbp-70h]
  __int64 *v50; // [rsp+98h] [rbp-58h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v52; // [rsp+B0h] [rbp-40h]

  v5 = a1[35];
  v52 = __readfsqword(0x28u);
  v45 = 0;
  v44 = 0;
  tinfo_size = get_tinfo_size();
  v38 = sub_CE9A0(v5, &v44, a2, tinfo_size, 0);
  if ( !v38 )
    goto LABEL_21;
  v46 = 0;
  v48 = 0;
  v50 = nullptr;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  if ( !(_QWORD)v45 )
    goto LABEL_56;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = a1[35];
    v11 = *(_DWORD **)(v10 + 88);
    v12 = *(_DWORD *)(v44 + 4 * v9);
    v13 = &v11[*(_QWORD *)(v10 + 96)];
    if ( v11 == v13 )
      goto LABEL_24;
    v14 = *(_DWORD **)(v10 + 88);
    while ( v12 != *v14 )
    {
      if ( v13 == ++v14 )
        goto LABEL_24;
    }
    if ( v14 == v13 || (v15 = v14 - v11, v16 = v15, (_DWORD)v15 == -1) )
    {
LABEL_24:
      v21 = *(_DWORD **)(v10 + 112);
      v22 = &v21[*(_QWORD *)(v10 + 120)];
      if ( v21 == v22 )
        goto LABEL_14;
      v23 = *(_DWORD **)(v10 + 112);
      while ( v12 != *v23 )
      {
        if ( v22 == ++v23 )
          goto LABEL_14;
      }
      if ( v22 == v23 || (v24 = v23 - v21, v17 = v24, (_DWORD)v24 == -1) )
      {
LABEL_14:
        v38 = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)v10 != 3 )
      {
LABEL_31:
        if ( v17 >= (unsigned __int64)a1[27] || *(_DWORD *)(a1[26] + 4LL * v17) != -1 )
          goto LABEL_14;
        v25 = v49;
        v26 = v48;
        if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
        {
          v48 = qvector_reserve();
          v26 = v48;
          v25 = v49;
        }
        *(_DWORD *)(v26 + 4 * v25) = v17;
        *(_QWORD *)&v49 = v49 + 1;
        goto LABEL_36;
      }
      v18 = a1[23];
      v19 = a1[24];
      v16 = v24;
    }
    else
    {
      v17 = v15;
      v18 = a1[23];
      v19 = a1[24];
      if ( *(_DWORD *)v10 != 3 )
        v17 = -1;
    }
    if ( v16 >= v19 || *(_DWORD *)(v18 + 4LL * v16) != -1 )
      goto LABEL_14;
    v33 = v47;
    v34 = v46;
    if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
    {
      v39 = v16;
      v46 = qvector_reserve();
      v34 = v46;
      v16 = v39;
      v33 = v47;
    }
    *(_DWORD *)(v34 + 4 * v33) = v16;
    *(_QWORD *)&v47 = v47 + 1;
    if ( v17 != -1 )
      goto LABEL_31;
LABEL_36:
    if ( (unsigned __int8)sub_1BF120((__int64)a2, (__int64 *)&v40, &v41, a2[22]) )
    {
      v31 = (__m128)(v41 - v40);
      v32 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v31);
      v42 = v32;
      v43 = v32;
      if ( (unsigned __int8)sub_3130F0(a1 + 29, &v43, 0) )
        goto LABEL_14;
      sub_311E30((__int64 *)&v50, &v42, *(double *)v32.m128i_i64, v31);
    }
    v9 = ++v8;
  }
  while ( v8 < (unsigned __int64)v45 );
  if ( !(_QWORD)v47 )
  {
    v27 = v49;
    if ( (_QWORD)v49 )
      goto LABEL_40;
LABEL_56:
    if ( !under_debugger )
      sub_37E160(52117);
    BUG();
  }
  v35 = (int *)v46;
  v36 = (int *)(v46 + 4 * v47);
  if ( (int *)v46 != v36 )
  {
    do
    {
      v37 = *v35++;
      *(_DWORD *)(a1[23] + 4 * v37) = a3;
    }
    while ( v36 != v35 );
  }
  v27 = v49;
LABEL_40:
  v28 = (int *)v48;
  v29 = (int *)(v48 + 4 * v27);
  if ( (int *)v48 != v29 )
  {
    do
    {
      v30 = *v28++;
      *(_DWORD *)(a1[26] + 4 * v30) = a3;
    }
    while ( v28 != v29 );
  }
  if ( (_QWORD)v51 )
    sub_311F30(a1 + 29, &v50);
  if ( ((*a2 - 2) & 0xFFFFFFFD) == 0 )
    sub_5FF90(a1 + 19, a3);
LABEL_15:
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
LABEL_21:
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  return v38;
}


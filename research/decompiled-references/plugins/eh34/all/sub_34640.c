__int64 __fastcall sub_34640(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r9d
  __int64 v7; // rsi
  const char *v8; // r8
  const char *v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rdi
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 *v18; // rdi
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rcx
  bool v25; // cf
  __int64 (__fastcall *v26)(__int64, int); // rdx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  __int64 (__fastcall *v34)(__int64, int, int); // rax
  const char *v35; // r8
  const char *v36; // rcx
  __m128i v37; // xmm0
  unsigned __int64 v38; // rdi
  __int64 *v39; // rdi
  __int64 *v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  int *v43; // rax
  int v44; // ebx
  int *v45; // r13
  _QWORD *v46; // rax
  int v47; // r14d
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  int v62; // [rsp+1Ch] [rbp-124h]
  char v64; // [rsp+28h] [rbp-118h]
  __int64 v65; // [rsp+28h] [rbp-118h]
  unsigned int v66; // [rsp+30h] [rbp-110h]
  unsigned __int64 *v68; // [rsp+40h] [rbp-100h]
  __int64 v69; // [rsp+40h] [rbp-100h]
  __int64 *v70; // [rsp+40h] [rbp-100h]
  int v71; // [rsp+48h] [rbp-F8h]
  int *v72; // [rsp+48h] [rbp-F8h]
  __int64 v73; // [rsp+48h] [rbp-F8h]
  __int64 *v74; // [rsp+48h] [rbp-F8h]
  __int64 *v75; // [rsp+60h] [rbp-E0h] BYREF
  __int128 v76; // [rsp+68h] [rbp-D8h]
  __int64 v77; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+88h] [rbp-B8h]
  __int64 v79; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-98h]
  unsigned __int64 v81; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-78h]
  __int64 v83; // [rsp+E0h] [rbp-60h] BYREF
  __m128i v84; // [rsp+E8h] [rbp-58h] BYREF
  char v85; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v86; // [rsp+108h] [rbp-38h]

  v86 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a2 + 672) )
  {
    sub_28EA0((__int64)&v79, a2, a3);
    sub_28EA0((__int64)&v81, a2, a4);
    v7 = *(_QWORD *)(a2 + 176);
    v8 = s1;
    if ( v82 )
      LODWORD(v8) = v81;
    v9 = s1;
    if ( v80 )
      LODWORD(v9) = v79;
    sub_64B50(
      (unsigned int)&v83,
      v7,
      (unsigned int)"test_split_range(%s, %s): no current split",
      (_DWORD)v9,
      (_DWORD)v8,
      v6);
    v10 = _mm_loadu_si128(&v84);
    v11 = v81;
    *(_QWORD *)a1 = v83;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v10;
    if ( v11 )
    {
      v82 = 0;
      qfree(v11);
    }
    if ( v79 )
    {
      v80 = 0;
      qfree(v79);
    }
    return a1;
  }
  v13 = *(_DWORD *)(a2 + 660);
  v75 = nullptr;
  *(_DWORD *)(a2 + 656) = a4;
  v14 = *(_DWORD *)(a2 + 664);
  *(_DWORD *)(a2 + 652) = a3;
  v62 = v14;
  v66 = v13;
  v76 = 0;
  v15 = qvector_reserve(&v75, 0, 1, 8);
  v16 = *((_QWORD *)&v76 + 1);
  v17 = (_QWORD *)v15;
  v18 = v75;
  *((_QWORD *)&v76 + 1) = 0;
  v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(v13)).m128i_u64[0];
  v20 = v16;
  v21 = v76 - 1;
  if ( (__int64)v76 - 1 >= 0 )
  {
    v22 = v17;
    v23 = v16;
    do
    {
      v24 = *v18;
      ++v22;
      ++v18;
      *(v22 - 1) = v24;
      v25 = v21-- == 0;
    }
    while ( !v25 );
    v18 = v75;
    v20 = v23;
  }
  qfree(v18);
  v75 = v17;
  *((_QWORD *)&v76 + 1) = v20;
  v17[(_QWORD)v76] = v19;
  v26 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
  v27 = v76 + 1;
  *(_QWORD *)&v76 = v76 + 1;
  if ( v26 == sub_BA40 )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
LABEL_55:
      v39 = v75;
      v44 = *(_DWORD *)(a2 + 648);
      v72 = (int *)&v75[v27];
      if ( v72 != (int *)v75 )
      {
        v45 = (int *)v75;
        do
        {
          while ( 1 )
          {
            v46 = (_QWORD *)sub_34530(a2, (unsigned int)*v45);
            v47 = sub_33BB0(a2, v45[1], v46);
            v44 += v47 - sub_344B0(a2, (unsigned int)*v45, v47);
            if ( *(_BYTE *)(a2 + 468) )
            {
              sub_28EA0((__int64)&v81, a2, a3);
              sub_28EA0((__int64)&v83, a2, *v45);
              if ( v83 )
              {
                v84.m128i_i64[0] = 0;
                qfree(v83);
              }
              if ( v81 )
                break;
            }
            v45 += 2;
            if ( v72 == v45 )
              goto LABEL_63;
          }
          v82 = 0;
          v45 += 2;
          qfree(v81);
        }
        while ( v72 != v45 );
LABEL_63:
        v39 = v75;
      }
      *(_DWORD *)a1 = v44;
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_45;
    }
    v28 = *(int *)(*(_QWORD *)(a2 + 48) + 24LL * (int)a3 + 8);
  }
  else
  {
    v28 = (int)v26(a2, a3);
  }
  if ( (int)v28 <= 0 )
  {
LABEL_54:
    v27 = v76;
    goto LABEL_55;
  }
  v29 = 0;
  while ( 1 )
  {
    v34 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
    if ( v34 == sub_BA80 )
      v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL * (int)a3) + 4 * v29);
    else
      v71 = v34(a2, a3, v29);
    if ( v71 <= 0 || v71 > *(_DWORD *)(a2 + 204) )
      goto LABEL_30;
    v68 = (unsigned __int64 *)sub_34530(a2, (unsigned int)v71);
    if ( !*(_BYTE *)(a2 + 672) || v71 < *(_DWORD *)(a2 + 652) || v71 > *(_DWORD *)(a2 + 656) )
      break;
    LODWORD(v30) = *(_DWORD *)(a2 + 660);
LABEL_27:
    v64 = sub_32300(v68, v66);
    sub_32480((__int64)&v83, (__int64)v68, v62, v31, v32, v33);
    if ( v85 )
    {
      v54 = _mm_loadu_si128(&v84);
      *(_QWORD *)a1 = v83;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v54;
      goto LABEL_44;
    }
    if ( !(_BYTE)v83 && !v64 )
      goto LABEL_30;
    v40 = v75;
    v81 = __PAIR64__(v30, v71);
    v41 = v76;
    v42 = v76 + 1;
    if ( &v81 < (unsigned __int64 *)v75 || &v81 >= (unsigned __int64 *)&v75[*((_QWORD *)&v76 + 1)] )
    {
      if ( *((_QWORD *)&v76 + 1) < v42 )
      {
        v73 = *((_QWORD *)&v76 + 1);
        v48 = qvector_reserve(&v75, 0, v76 + 1, 8);
        v49 = *((_QWORD *)&v76 + 1);
        v50 = v75;
        *((_QWORD *)&v76 + 1) = v73;
        v51 = v76 - 1;
        if ( (__int64)v76 - 1 >= 0 )
        {
          v52 = v48;
          do
          {
            v53 = *v50;
            v52 += 8;
            ++v50;
            *(_QWORD *)(v52 - 8) = v53;
            v25 = v51-- == 0;
          }
          while ( !v25 );
          v50 = v75;
        }
        v74 = (__int64 *)v48;
        qfree(v50);
        v40 = v74;
        *((_QWORD *)&v76 + 1) = v49;
        v41 = v76;
        v75 = v74;
      }
      v40[v41] = v81;
    }
    else
    {
      if ( *((_QWORD *)&v76 + 1) < v42 )
      {
        v69 = *((_QWORD *)&v76 + 1);
        v55 = qvector_reserve(&v75, 0, v76 + 1, 8);
        v56 = *((_QWORD *)&v76 + 1);
        v57 = v75;
        *((_QWORD *)&v76 + 1) = v69;
        v58 = v76 - 1;
        if ( (__int64)v76 - 1 >= 0 )
        {
          v59 = v55;
          do
          {
            v60 = *v57;
            v59 += 8;
            ++v57;
            *(_QWORD *)(v59 - 8) = v60;
            v25 = v58-- == 0;
          }
          while ( !v25 );
          v57 = v75;
        }
        v65 = v56;
        v70 = (__int64 *)v55;
        qfree(v57);
        v40 = v70;
        v41 = v76;
        v75 = v70;
        *((_QWORD *)&v76 + 1) = v65;
      }
      v43 = (int *)&v40[v41];
      v43[1] = v30;
      *v43 = v71;
    }
    *(_QWORD *)&v76 = v76 + 1;
    if ( v85 && v83 )
    {
      ++v29;
      v84.m128i_i64[0] = 0;
      qfree(v83);
      if ( v29 == v28 )
        goto LABEL_54;
    }
    else
    {
LABEL_30:
      if ( ++v29 == v28 )
        goto LABEL_54;
    }
  }
  v30 = sub_322C0((__int64 *)(a2 + 560), v71);
  if ( BYTE4(v30) )
    goto LABEL_27;
  sub_28EA0((__int64)&v77, a2, a3);
  sub_28EA0((__int64)&v79, a2, a4);
  sub_28EA0((__int64)&v81, a2, v71);
  v35 = s1;
  if ( v80 )
    LODWORD(v35) = v79;
  v36 = s1;
  if ( v78 )
    LODWORD(v36) = v77;
  sub_64B50(
    (unsigned int)&v83,
    *(_QWORD *)(a2 + 176),
    (unsigned int)"test_split_range(%s, %s, %d): succ %s has no state",
    (_DWORD)v36,
    (_DWORD)v35,
    v66);
  v37 = _mm_loadu_si128(&v84);
  v38 = v81;
  *(_QWORD *)a1 = v83;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v37;
  if ( v38 )
  {
    v82 = 0;
    qfree(v38);
  }
  if ( v79 )
  {
    v80 = 0;
    qfree(v79);
  }
  if ( v77 )
  {
    v78 = 0;
    qfree(v77);
  }
LABEL_44:
  v39 = v75;
LABEL_45:
  if ( v39 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v39);
  }
  return a1;
}

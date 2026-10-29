unsigned __int64 __fastcall sub_30AD00(__int64 a1, int **a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  int v7; // r15d
  unsigned int i; // ebx
  int v9; // r12d
  unsigned int v10; // ebp
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  bool v15; // cf
  __int64 v16; // rax
  int *v17; // rdx
  unsigned int v18; // ebp
  int v19; // ecx
  int v20; // r14d
  unsigned int j; // ebx
  unsigned int v22; // eax
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  int *v25; // rax
  int *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebp
  signed int k; // eax
  __int64 *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rsi
  signed int v40; // ebx
  __int64 v41; // r14
  int *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  int v46; // ebx
  int v47; // ebp
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // rdi
  _QWORD *v51; // r12
  int *v52; // rax
  int *v53; // rsi
  __int64 v54; // rdx
  __m128i v55; // xmm1
  int *v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  __int64 v61; // rdi
  __int64 v62; // rbp
  __int64 v63; // rbx
  _QWORD *v64; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  _DWORD *v70; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v71; // [rsp+20h] [rbp-F0h]
  __int64 v72; // [rsp+38h] [rbp-D8h]
  __m128i v73; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v74; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v75; // [rsp+60h] [rbp-B0h]
  __int64 v76; // [rsp+78h] [rbp-98h] BYREF
  __int128 v77; // [rsp+80h] [rbp-90h]
  __int64 v78[2]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-70h]
  int *v80; // [rsp+A8h] [rbp-68h]
  __m128i v81; // [rsp+B0h] [rbp-60h] BYREF
  int v82; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v83; // [rsp+D0h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  v76 = 0;
  v78[0] = 0;
  v78[1] = 0;
  v79 = a1;
  v80 = nullptr;
  v82 = 0;
  v77 = 0;
  v81 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(v3 + 64))(a1);
  v5 = 0;
  v6 = v4;
  LODWORD(v74) = -1;
  if ( (unsigned __int64)v4 > 0 )
  {
    v42 = v80;
    if ( &v74 < (__int64 *)v80 || &v74 >= (__int64 *)&v80[v81.m128i_i64[1]] )
    {
      if ( v81.m128i_i64[1] >= (unsigned __int64)v4
        || (v67 = qvector_reserve(), v5 = v81.m128i_i64[0], v80 = (int *)v67, v42 = (int *)v67, v81.m128i_i64[0] < v6) )
      {
        while ( 1 )
        {
          v42[v5++] = -1;
          if ( v6 == v5 )
            break;
          v42 = v80;
        }
      }
    }
    else if ( v81.m128i_i64[1] >= (unsigned __int64)v4
           || (v66 = qvector_reserve(), v5 = v81.m128i_i64[0], v80 = (int *)v66, v42 = (int *)v66, v81.m128i_i64[0] < v6) )
    {
      while ( 1 )
      {
        v42[v5++] = -1;
        if ( v6 == v5 )
          break;
        v42 = v80;
      }
    }
    v81.m128i_i64[0] = v6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 56LL))(v79);
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v79 + 160LL))(v79, 0);
        v7 != i;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v79 + 160LL))(v79, i + 1) )
  {
    if ( (unsigned __int8)sub_5F710(v78, i) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v79 + 96LL))(v79, i);
      v10 = 0;
      if ( v9 > 0 )
      {
        do
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v79 + 112LL))(v79, i, v10);
          sub_30A0F0((__int64)&v76, v11);
          ++v10;
        }
        while ( v9 != v10 );
      }
      v12 = v77;
      v13 = v76;
      if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
      {
        v76 = qvector_reserve();
        v13 = v76;
        v12 = v77;
      }
      *(_DWORD *)(v13 + 4 * v12) = i;
      *(_QWORD *)&v77 = v77 + 1;
    }
  }
  v14 = v77 - 1;
  if ( (__int64)v77 - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *(int *)(v76 + 4 * v14);
        v17 = &v80[v16];
        v18 = *(_DWORD *)(v76 + 4 * v14);
        if ( *v17 == -1 )
        {
          v19 = v82++;
          *v17 = v19;
          v80[v16] = v19;
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v79 + 104LL))(v79, v18);
          if ( v20 > 0 )
            break;
        }
        v15 = v14-- == 0;
        if ( v15 )
          goto LABEL_18;
      }
      for ( j = 0; j != v20; ++j )
      {
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v79 + 120LL))(v79, v18, j);
        sub_30A700((__int64)&v76, v22, v18);
      }
      v15 = v14-- == 0;
    }
    while ( !v15 );
  }
LABEL_18:
  v23 = v82;
  v70 = nullptr;
  v71 = 0;
  if ( !v82 )
  {
    v25 = v80;
    v26 = &v80[v81.m128i_i64[0]];
    if ( v26 == v80 )
    {
      v72 = 0;
      v73 = 0;
      goto LABEL_30;
    }
    goto LABEL_23;
  }
  v70 = (_DWORD *)qvector_reserve();
  if ( v23 )
  {
    *v70 = 0;
    v24 = 1;
    if ( v23 > 1 )
    {
      do
        v70[v24++] = 0;
      while ( v23 != v24 );
    }
  }
  v25 = v80;
  v71 = v23;
  v26 = &v80[v81.m128i_i64[0]];
  if ( v80 != v26 )
  {
    do
    {
LABEL_23:
      v27 = *v25++;
      ++v70[v27];
    }
    while ( v25 != v26 );
    v72 = 0;
    v73 = 0;
    if ( !v23 )
      goto LABEL_30;
    goto LABEL_25;
  }
  v73 = 0;
LABEL_25:
  v28 = qvector_reserve();
  v29 = v73.m128i_i64[0];
  v72 = v28;
  if ( v73.m128i_i64[0] < v23 )
  {
    v30 = 24 * v73.m128i_i64[0];
    v31 = 24 * v73.m128i_i64[0] + v28;
    *(_QWORD *)v31 = 0;
    *(_OWORD *)(v31 + 8) = 0;
    v32 = v29 + 1;
    if ( v29 + 1 < v23 )
    {
      v33 = v30 + 24;
      do
      {
        ++v32;
        v34 = v33 + v72;
        v33 += 24;
        *(_QWORD *)v34 = 0;
        *(_OWORD *)(v34 + 8) = 0;
      }
      while ( v23 != v32 );
    }
  }
  v73.m128i_i64[0] = v23;
LABEL_30:
  v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  for ( k = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        k = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(v40 + 1)) )
  {
    v40 = k;
    if ( v35 == k )
      break;
    v41 = v80[k];
    if ( (int)v70[v41] > 1 || (unsigned __int8)sub_30AC80(a1, k) )
    {
      v37 = (__int64 *)(v72 + 24 * v41);
      v38 = v37[1];
      v39 = *v37;
      if ( v37[2] < (unsigned __int64)(v38 + 1) )
      {
        v43 = qvector_reserve();
        *v37 = v43;
        v39 = v43;
        v38 = v37[1];
      }
      *(_DWORD *)(v39 + 4 * v38) = v40;
      ++v37[1];
    }
    else
    {
      v70[v41] = 0;
      v80[v40] = -1;
    }
  }
  v74 = 0;
  v75 = 0;
  if ( v23 )
  {
    v74 = qvector_reserve();
    v44 = v75;
    if ( (unsigned __int64)v75 < v23 )
    {
      *(_DWORD *)(v74 + 4 * v75) = -1;
      v45 = v44 + 1;
      if ( v45 < v23 )
      {
        do
          *(_DWORD *)(v74 + 4 * v45++) = -1;
        while ( v23 != v45 );
      }
    }
    *(_QWORD *)&v75 = v23;
  }
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( v71 )
  {
    do
    {
      while ( v70[v48] )
      {
        v49 = v46++;
        *(_DWORD *)(v74 + 4 * v48) = v49 - v47;
        v48 = v46;
        if ( v46 >= v71 )
          goto LABEL_59;
      }
      v50 = v72;
      v51 = (_QWORD *)(v72 + 24 * (v48 - v47));
      if ( *v51 )
      {
        v51[1] = 0;
        qfree();
        v50 = v72;
      }
      ++v46;
      ++v47;
      memmove(v51, v51 + 3, v50 + 24 * v73.m128i_i64[0]-- - (_QWORD)v51 - 24);
      v48 = v46;
    }
    while ( v46 < v71 );
LABEL_59:
    if ( v47 )
    {
      v52 = v80;
      v53 = &v80[v81.m128i_i64[0]];
      if ( v53 != v80 )
      {
        do
        {
          v54 = *v52;
          if ( (_DWORD)v54 != -1 )
            *v52 = *(_DWORD *)(v74 + 4 * v54);
          ++v52;
        }
        while ( v53 != v52 );
      }
    }
  }
  if ( a2 )
  {
    v55 = _mm_loadu_si128(&v81);
    v56 = *a2;
    v57 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v80;
    *(__m128i *)(a2 + 1) = v55;
    v80 = v56;
    v81 = v57;
  }
  if ( a3 )
  {
    v58 = *(_QWORD *)a3;
    v59 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    v60 = _mm_loadu_si128(&v73);
    *(_QWORD *)a3 = v72;
    v72 = v58;
    *(__m128i *)(a3 + 8) = v60;
    v73 = v59;
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  v61 = v72;
  if ( v72 )
  {
    v62 = v73.m128i_i64[0];
    if ( v73.m128i_i64[0] )
    {
      v63 = 0;
      do
      {
        v64 = (_QWORD *)(v61 + 24 * v63);
        if ( *v64 )
        {
          v64[1] = 0;
          qfree();
          v61 = v72;
        }
        ++v63;
      }
      while ( v62 != v63 );
    }
    v73.m128i_i64[0] = 0;
    qfree();
  }
  if ( v70 )
    qfree();
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  return v83 - __readfsqword(0x28u);
}


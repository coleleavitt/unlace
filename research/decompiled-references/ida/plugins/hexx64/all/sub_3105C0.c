unsigned __int64 __fastcall sub_3105C0(__int64 a1, __int64 a2, __int64 a3)
{
  double v3; // xmm0_8
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // r15d
  unsigned int i; // ebx
  int v10; // r12d
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r12
  bool v16; // cf
  __int64 v17; // rax
  int *v18; // rdx
  unsigned int v19; // ebp
  int v20; // ecx
  int v21; // r14d
  unsigned int j; // ebx
  unsigned int v23; // eax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  int *v27; // rax
  int *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebp
  signed int k; // eax
  __int64 *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rsi
  signed int v42; // ebx
  __int64 v43; // r14
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v48; // ebx
  int v49; // ebp
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rdi
  __int64 *v53; // r12
  __int64 v54; // rax
  int *v55; // rax
  int *v56; // rsi
  __int64 v57; // rdx
  __m128i v58; // xmm1
  unsigned __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rax
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __int64 v64; // rdi
  __int64 v65; // rbp
  __int64 v66; // rbx
  __int64 *v67; // rdx
  __int64 v68; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v74; // [rsp+18h] [rbp-F8h] BYREF
  __int128 v75; // [rsp+20h] [rbp-F0h]
  __int64 v76; // [rsp+38h] [rbp-D8h] BYREF
  __m128i v77; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v78; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v79; // [rsp+60h] [rbp-B0h]
  __int64 v80; // [rsp+78h] [rbp-98h] BYREF
  __int128 v81; // [rsp+80h] [rbp-90h]
  __int64 v82[2]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-70h]
  int *v84; // [rsp+A8h] [rbp-68h] BYREF
  __m128i v85; // [rsp+B0h] [rbp-60h] BYREF
  int v86; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v87; // [rsp+D0h] [rbp-40h]

  v3 = 0.0;
  v87 = __readfsqword(0x28u);
  v4 = *(_QWORD *)a1;
  v80 = 0;
  v82[0] = 0;
  v82[1] = 0;
  v83 = a1;
  v84 = nullptr;
  v86 = 0;
  v81 = 0;
  v85 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(v4 + 64))(a1);
  v6 = 0;
  v7 = v5;
  LODWORD(v78) = -1;
  if ( (unsigned __int64)v5 > 0 )
  {
    v44 = (unsigned __int64)v84;
    if ( &v78 < (__int64 *)v84 || &v78 >= (__int64 *)&v84[v85.m128i_i64[1]] )
    {
      if ( v85.m128i_i64[1] >= (unsigned __int64)v5
        || (v71 = qvector_reserve((__int64)&v84, (__int64)v84, v5, 4),
            v6 = v85.m128i_i64[0],
            v84 = (int *)v71,
            v44 = v71,
            v85.m128i_i64[0] < v7) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v44 + 4 * v6++) = -1;
          if ( v7 == v6 )
            break;
          v44 = (unsigned __int64)v84;
        }
      }
    }
    else if ( v85.m128i_i64[1] >= (unsigned __int64)v5
           || (v70 = qvector_reserve((__int64)&v84, (__int64)v84, v5, 4),
               v6 = v85.m128i_i64[0],
               v84 = (int *)v70,
               v44 = v70,
               v85.m128i_i64[0] < v7) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v44 + 4 * v6++) = -1;
        if ( v7 == v6 )
          break;
        v44 = (unsigned __int64)v84;
      }
    }
    v85.m128i_i64[0] = v7;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 56LL))(v83);
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 160LL))(v83, 0);
        v8 != i;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 160LL))(v83, i + 1) )
  {
    if ( (unsigned __int8)sub_64190(v82, i, v3) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 96LL))(v83, i);
      v11 = 0;
      if ( v10 > 0 )
      {
        do
        {
          v3 = (*(double (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v83 + 112LL))(v83, i, v11);
          sub_30F9B0((__int64)&v80, v12, v3);
          ++v11;
        }
        while ( v10 != v11 );
      }
      v13 = v81;
      v14 = v80;
      if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
      {
        v80 = qvector_reserve((__int64)&v80, v80, v81 + 1, 4);
        v14 = v80;
        v13 = v81;
      }
      *(_DWORD *)(v14 + 4 * v13) = i;
      *(_QWORD *)&v81 = v81 + 1;
    }
  }
  v15 = v81 - 1;
  if ( (__int64)v81 - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *(int *)(v80 + 4 * v15);
        v18 = &v84[v17];
        v19 = *(_DWORD *)(v80 + 4 * v15);
        if ( *v18 == -1 )
        {
          v20 = v86++;
          *v18 = v20;
          v84[v17] = v20;
          v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 104LL))(v83, v19);
          if ( v21 > 0 )
            break;
        }
        v16 = v15-- == 0;
        if ( v16 )
          goto LABEL_18;
      }
      for ( j = 0; j != v21; ++j )
      {
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v83 + 120LL))(v83, v19, j);
        sub_30FFC0((__int64)&v80, v23, v19);
      }
      v16 = v15-- == 0;
    }
    while ( !v16 );
  }
LABEL_18:
  v24 = v86;
  v74 = 0;
  v75 = 0;
  if ( !v86 )
  {
    v27 = v84;
    v28 = &v84[v85.m128i_i64[0]];
    if ( v28 == v84 )
    {
      v76 = 0;
      v77 = 0;
      goto LABEL_30;
    }
    goto LABEL_23;
  }
  v74 = qvector_reserve((__int64)&v74, 0, v86, 4);
  v25 = v75;
  if ( (unsigned __int64)v75 < v24 )
  {
    *(_DWORD *)(v74 + 4 * v75) = 0;
    v26 = v25 + 1;
    if ( v26 < v24 )
    {
      do
        *(_DWORD *)(v74 + 4 * v26++) = 0;
      while ( v24 != v26 );
    }
  }
  v27 = v84;
  *(_QWORD *)&v75 = v24;
  v28 = &v84[v85.m128i_i64[0]];
  if ( v84 != v28 )
  {
    do
    {
LABEL_23:
      v29 = *v27++;
      ++*(_DWORD *)(v74 + 4 * v29);
    }
    while ( v27 != v28 );
    v76 = 0;
    v77 = 0;
    if ( !v24 )
      goto LABEL_30;
    goto LABEL_25;
  }
  v76 = 0;
  v77 = 0;
LABEL_25:
  v30 = qvector_reserve((__int64)&v76, 0, v24, 24);
  v31 = v77.m128i_i64[0];
  v76 = v30;
  if ( v77.m128i_i64[0] < v24 )
  {
    v32 = 24 * v77.m128i_i64[0];
    v33 = 24 * v77.m128i_i64[0] + v30;
    *(_QWORD *)v33 = 0;
    *(_OWORD *)(v33 + 8) = 0;
    v34 = v31 + 1;
    if ( v31 + 1 < v24 )
    {
      v35 = v32 + 24;
      do
      {
        ++v34;
        v36 = v35 + v76;
        v35 += 24;
        *(_QWORD *)v36 = 0;
        *(_OWORD *)(v36 + 8) = 0;
      }
      while ( v24 != v34 );
    }
  }
  v77.m128i_i64[0] = v24;
LABEL_30:
  v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  for ( k = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        k = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(v42 + 1)) )
  {
    v42 = k;
    if ( v37 == k )
      break;
    v43 = v84[k];
    if ( *(int *)(v74 + 4 * v43) > 1 || (unsigned __int8)sub_310540(a1, k) )
    {
      v39 = (__int64 *)(v76 + 24 * v43);
      v40 = v39[1];
      v41 = *v39;
      if ( v39[2] < (unsigned __int64)(v40 + 1) )
      {
        v45 = qvector_reserve((__int64)v39, v41, v40 + 1, 4);
        *v39 = v45;
        v41 = v45;
        v40 = v39[1];
      }
      *(_DWORD *)(v41 + 4 * v40) = v42;
      ++v39[1];
    }
    else
    {
      *(_DWORD *)(v74 + 4 * v43) = 0;
      v84[v42] = -1;
    }
  }
  v78 = 0;
  v79 = 0;
  if ( v24 )
  {
    v78 = qvector_reserve((__int64)&v78, 0, v24, 4);
    v46 = v79;
    if ( (unsigned __int64)v79 < v24 )
    {
      *(_DWORD *)(v78 + 4 * v79) = -1;
      v47 = v46 + 1;
      if ( v47 < v24 )
      {
        do
          *(_DWORD *)(v78 + 4 * v47++) = -1;
        while ( v24 != v47 );
      }
    }
    *(_QWORD *)&v79 = v24;
  }
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( (_QWORD)v75 )
  {
    do
    {
      while ( *(_DWORD *)(v74 + 4 * v50) )
      {
        v51 = v48++;
        *(_DWORD *)(v78 + 4 * v50) = v51 - v49;
        v50 = v48;
        if ( v48 >= (unsigned __int64)v75 )
          goto LABEL_59;
      }
      v52 = v76;
      v53 = (__int64 *)(v76 + 24 * (v50 - v49));
      v54 = *v53;
      if ( *v53 )
      {
        v53[1] = 0;
        qfree(v54);
        v52 = v76;
      }
      ++v48;
      ++v49;
      memmove(v53, v53 + 3, v52 + 24 * v77.m128i_i64[0]-- - (_QWORD)v53 - 24);
      v50 = v48;
    }
    while ( v48 < (unsigned __int64)v75 );
LABEL_59:
    if ( v49 )
    {
      v55 = v84;
      v56 = &v84[v85.m128i_i64[0]];
      if ( v56 != v84 )
      {
        do
        {
          v57 = *v55;
          if ( (_DWORD)v57 != -1 )
            *v55 = *(_DWORD *)(v78 + 4 * v57);
          ++v55;
        }
        while ( v56 != v55 );
      }
    }
  }
  if ( a2 )
  {
    v58 = _mm_loadu_si128(&v85);
    v59 = *(_QWORD *)a2;
    v60 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v84;
    *(__m128i *)(a2 + 8) = v58;
    v84 = (int *)v59;
    v85 = v60;
  }
  if ( a3 )
  {
    v61 = *(_QWORD *)a3;
    v62 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    v63 = _mm_loadu_si128(&v77);
    *(_QWORD *)a3 = v76;
    v76 = v61;
    *(__m128i *)(a3 + 8) = v63;
    v77 = v62;
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  v64 = v76;
  if ( v76 )
  {
    v65 = v77.m128i_i64[0];
    if ( v77.m128i_i64[0] )
    {
      v66 = 0;
      do
      {
        v67 = (__int64 *)(v64 + 24 * v66);
        v68 = *v67;
        if ( *v67 )
        {
          v67[1] = 0;
          qfree(v68);
          v64 = v76;
        }
        ++v66;
      }
      while ( v65 != v66 );
    }
    v77.m128i_i64[0] = 0;
    qfree(v64);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v84 )
  {
    v85.m128i_i64[0] = 0;
    qfree((__int64)v84);
  }
  qfree(v82[0]);
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  return v87 - __readfsqword(0x28u);
}


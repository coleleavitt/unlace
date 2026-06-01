unsigned __int64 __fastcall sub_18C180(__int64 *a1, _QWORD *a2, char a3, double a4)
{
  __int64 v4; // r15
  _QWORD *v5; // r8
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  int v17; // r11d
  int v18; // r10d
  __int64 v19; // r13
  int v20; // r12d
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  __int64 v24; // r13
  int v25; // r12d
  int v26; // ebx
  int v27; // ebp
  __int64 v28; // rsi
  int v29; // edi
  int v30; // r10d
  int v31; // edi
  int v32; // r10d
  int v33; // r10d
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r9
  __m128 v37; // xmm0
  __int64 v38; // rax
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rsi
  const __m128i *v51; // rax
  __m128i v52; // xmm0
  bool v53; // cf
  unsigned __int64 v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // r10
  __int64 v63; // rcx
  const __m128i *v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rbp
  const __m128i *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rdx
  __m128i v71; // xmm0
  __int64 v72; // [rsp+0h] [rbp-98h]
  _QWORD *v73; // [rsp+0h] [rbp-98h]
  __int64 v74; // [rsp+0h] [rbp-98h]
  int v77; // [rsp+18h] [rbp-80h]
  _QWORD *v78; // [rsp+18h] [rbp-80h]
  __int64 v79; // [rsp+20h] [rbp-78h]
  __int64 v80; // [rsp+20h] [rbp-78h]
  _QWORD *v81; // [rsp+28h] [rbp-70h]
  _QWORD *v82; // [rsp+28h] [rbp-70h]
  __int64 v83; // [rsp+30h] [rbp-68h]
  const __m128i *v84; // [rsp+40h] [rbp-58h] BYREF
  __int128 v85; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v86; // [rsp+58h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v4 = a2[1];
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC93Fu, a4);
    BUG();
  }
  v5 = a2;
  v6 = a1[1];
  if ( v6 )
  {
    v7 = v6 * v4;
    v84 = nullptr;
    v85 = 0;
    if ( !v7 )
    {
      v8 = *a1;
      v9 = 0;
      goto LABEL_5;
    }
    goto LABEL_37;
  }
  if ( a1[2] )
  {
    v40 = *a1;
  }
  else
  {
    v66 = qvector_reserve((__int64)a1, 0, 1, 32);
    v67 = a1[2];
    v68 = (const __m128i *)*a1;
    a1[2] = 0;
    v40 = v66;
    v69 = a1[1] - 1;
    if ( v69 >= 0 )
    {
      v70 = v40;
      do
      {
        v71 = _mm_loadu_si128(v68);
        v70 += 32;
        v68 += 2;
        *(__m128i *)(v70 - 32) = v71;
        *(__m128i *)(v70 - 16) = _mm_loadu_si128(v68 - 1);
        v53 = v69-- == 0;
      }
      while ( !v53 );
      v68 = (const __m128i *)*a1;
    }
    qfree((__int64)v68);
    v5 = a2;
    *a1 = v40;
    a1[2] = v67;
    v6 = a1[1];
  }
  v41 = 32 * v6 + v40;
  *(_OWORD *)v41 = 0;
  *(_QWORD *)(v41 + 16) = 0;
  *(_DWORD *)(v41 + 24) = 0;
  v42 = a1[1];
  v84 = nullptr;
  v43 = v42 + 1;
  a1[1] = v43;
  v44 = v5[1];
  v9 = 0;
  v85 = 0;
  v7 = v43 * v44;
  if ( v7 )
  {
LABEL_37:
    v73 = v5;
    v45 = qvector_reserve((__int64)&v84, 0, v7, 32);
    v46 = (__int64)v84;
    v47 = v45;
    v48 = v45;
    v49 = *((_QWORD *)&v85 + 1);
    *((_QWORD *)&v85 + 1) = 0;
    v50 = v85 - 1;
    v51 = v84;
    if ( (__int64)v85 - 1 >= 0 )
    {
      do
      {
        v52 = _mm_loadu_si128(v51);
        v48 += 32;
        v51 += 2;
        *(__m128i *)(v48 - 32) = v52;
        *(__m128i *)(v48 - 16) = _mm_loadu_si128(v51 - 1);
        v53 = v50-- == 0;
      }
      while ( !v53 );
    }
    v78 = v73;
    v74 = v47;
    qfree(v46);
    v9 = v74;
    *((_QWORD *)&v85 + 1) = v49;
    v5 = v78;
    v7 = v85;
    v84 = (const __m128i *)v74;
    v43 = a1[1];
  }
  v8 = *a1;
  if ( v43 )
  {
LABEL_5:
    v77 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = 0;
      v12 = 0;
      v72 = 32 * v10;
      if ( v5[1] )
        break;
LABEL_30:
      v10 = ++v77;
      if ( v77 >= (unsigned __int64)a1[1] )
        goto LABEL_31;
    }
    while ( 1 )
    {
      v13 = *v5 + 32 * v12;
      v14 = *(_QWORD *)(v13 + 8);
      v15 = *(_QWORD *)v13;
      v16 = (_QWORD *)(v8 + v72);
      v17 = *(_DWORD *)(v13 + 16);
      v18 = *(_DWORD *)(v13 + 20);
      v19 = *(_QWORD *)(v8 + v72 + 8);
      v20 = *(_DWORD *)(v8 + v72 + 16);
      v21 = *(_DWORD *)(v8 + v72 + 20);
      v22 = *(_DWORD *)(v8 + v72 + 24);
      v23 = *(_DWORD *)(v13 + 24);
      if ( a3 )
      {
        v24 = v19 - v15;
        v25 = v20 - v17;
        v26 = v21 - v18;
        v27 = v22 - v23;
        v15 = -v14;
      }
      else
      {
        v25 = v17 + v20;
        v26 = v18 + v21;
        v27 = v23 + v22;
        v24 = v14 + v19;
      }
      v28 = v9 + 32 * v7;
      v29 = -v27;
      if ( v27 > 0 )
        v29 = v27;
      v30 = -v25;
      if ( v25 > 0 )
        v30 = v25;
      v31 = v30 + v29;
      v32 = -v26;
      if ( v26 > 0 )
        v32 = v26;
      v33 = v31 + v32;
      if ( v28 == v9 )
      {
        if ( v33 <= 9 )
        {
          v34 = v9;
          v36 = *v16 + v15;
          v54 = v7 + 1;
          v55 = *((_QWORD *)&v85 + 1);
          if ( *((_QWORD *)&v85 + 1) < v54 )
          {
LABEL_53:
            v82 = v5;
            v80 = v36;
            v58 = qvector_reserve((__int64)&v84, 0, v54, 32);
            v59 = (__int64)v84;
            v60 = v58;
            v61 = v58;
            v62 = *((_QWORD *)&v85 + 1);
            *((_QWORD *)&v85 + 1) = v55;
            v63 = v85 - 1;
            v64 = v84;
            if ( (__int64)v85 - 1 >= 0 )
            {
              do
              {
                v65 = _mm_loadu_si128(v64);
                v61 += 32;
                v64 += 2;
                *(__m128i *)(v61 - 32) = v65;
                *(__m128i *)(v61 - 16) = _mm_loadu_si128(v64 - 1);
                v53 = v63-- == 0;
              }
              while ( !v53 );
            }
            v83 = v62;
            qfree(v59);
            v36 = v80;
            v84 = (const __m128i *)v60;
            v5 = v82;
            *((_QWORD *)&v85 + 1) = v83;
            v34 = v60 + 32 * v85;
          }
LABEL_46:
          *(_QWORD *)v34 = v36;
          v9 = (__int64)v84;
          *(_QWORD *)(v34 + 8) = v24;
          v56 = v85;
          *(_DWORD *)(v34 + 16) = v25;
          v7 = v56 + 1;
          *(_DWORD *)(v34 + 20) = v26;
          *(_DWORD *)(v34 + 24) = v27;
          *(_QWORD *)&v85 = v56 + 1;
LABEL_28:
          v8 = *a1;
        }
      }
      else
      {
        v34 = v9;
        while ( *(_DWORD *)(v34 + 20) != v26 || v27 != *(_DWORD *)(v34 + 24) || *(_DWORD *)(v34 + 16) != v25 )
        {
          v34 += 32;
          if ( v28 == v34 )
          {
            if ( v33 > 9 )
              goto LABEL_29;
            v35 = *v16 + v15;
            v36 = v35;
            if ( v28 == v34 )
              goto LABEL_45;
LABEL_23:
            if ( *(_QWORD *)v34 > v35 )
            {
              *(_QWORD *)v34 = v35;
              v9 = (__int64)v84;
            }
            if ( *(_QWORD *)(v34 + 8) < v24 )
              *(_QWORD *)(v34 + 8) = v24;
            v7 = v85;
            goto LABEL_28;
          }
        }
        if ( v33 <= 9 )
        {
          v35 = *v16 + v15;
          v36 = v35;
          if ( v28 != v34 )
            goto LABEL_23;
LABEL_45:
          v54 = v7 + 1;
          v55 = *((_QWORD *)&v85 + 1);
          if ( *((_QWORD *)&v85 + 1) < v54 )
            goto LABEL_53;
          goto LABEL_46;
        }
        if ( v34 != v28 )
        {
          v57 = v28 - v34;
          if ( (v57 >> 5) - 2 >= 0 )
          {
            v81 = v5;
            v79 = v9;
            memmove((void *)v34, (const void *)(v34 + 32), v57 - 32);
            v5 = v81;
            v9 = v79;
            v8 = *a1;
          }
          *(_QWORD *)&v85 = --v7;
        }
      }
LABEL_29:
      v12 = ++v11;
      if ( (unsigned __int64)v11 >= v5[1] )
        goto LABEL_30;
    }
  }
LABEL_31:
  v84 = (const __m128i *)v8;
  v37 = _mm_loadh_ps((const double *)&v85 + 1);
  v38 = a1[2];
  *a1 = v9;
  *(__m128 *)(a1 + 1) = v37;
  *((_QWORD *)&v85 + 1) = v38;
  if ( v8 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v8);
  }
  return v86 - __readfsqword(0x28u);
}


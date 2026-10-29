unsigned __int64 __fastcall sub_187F80(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r8
  __int64 v5; // rax
  __int64 v6; // r15
  const __m128i *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  const __m128i *v15; // rax
  int v16; // r11d
  int v17; // r10d
  __int64 v18; // r13
  __int32 v19; // r12d
  __int32 v20; // ebx
  __int32 v21; // ebp
  int v22; // edi
  __int64 v23; // r13
  int v24; // r12d
  int v25; // ebx
  int v26; // ebp
  __int64 v27; // rsi
  int v28; // edi
  int v29; // r10d
  int v30; // edi
  int v31; // r10d
  int v32; // r10d
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r9
  __m128 v36; // xmm0
  __int64 v37; // rax
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rsi
  const __m128i *v47; // rax
  __m128i v48; // xmm0
  bool v49; // cf
  unsigned __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // r10
  __int64 v57; // rcx
  const __m128i *v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rbp
  const __m128i *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // [rsp+0h] [rbp-98h]
  _QWORD *v67; // [rsp+0h] [rbp-98h]
  __int64 v68; // [rsp+0h] [rbp-98h]
  int v71; // [rsp+18h] [rbp-80h]
  _QWORD *v72; // [rsp+18h] [rbp-80h]
  __int64 v73; // [rsp+20h] [rbp-78h]
  __int64 v74; // [rsp+20h] [rbp-78h]
  _QWORD *v75; // [rsp+28h] [rbp-70h]
  _QWORD *v76; // [rsp+28h] [rbp-70h]
  __int64 v77; // [rsp+30h] [rbp-68h]
  const __m128i *v78; // [rsp+40h] [rbp-58h]
  __int128 v79; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v80; // [rsp+58h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  v3 = a2[1];
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_37E160(51519);
    BUG();
  }
  v4 = a2;
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 * v3;
    v78 = nullptr;
    v79 = 0;
    if ( !v6 )
    {
      v7 = (const __m128i *)*a1;
      v8 = 0;
      goto LABEL_5;
    }
    goto LABEL_37;
  }
  if ( a1[2] )
  {
    v39 = *a1;
  }
  else
  {
    v60 = qvector_reserve();
    v61 = a1[2];
    v62 = (const __m128i *)*a1;
    a1[2] = 0;
    v39 = v60;
    v63 = a1[1] - 1;
    if ( v63 >= 0 )
    {
      v64 = v39;
      do
      {
        v65 = _mm_loadu_si128(v62);
        v64 += 32;
        v62 += 2;
        *(__m128i *)(v64 - 32) = v65;
        *(__m128i *)(v64 - 16) = _mm_loadu_si128(v62 - 1);
        v49 = v63-- == 0;
      }
      while ( !v49 );
    }
    qfree();
    v4 = a2;
    *a1 = v39;
    a1[2] = v61;
    v5 = a1[1];
  }
  v40 = 32 * v5 + v39;
  *(_OWORD *)v40 = 0;
  *(_QWORD *)(v40 + 16) = 0;
  *(_DWORD *)(v40 + 24) = 0;
  v78 = nullptr;
  v41 = a1[1] + 1;
  a1[1] = v41;
  v42 = v4[1];
  v8 = 0;
  v79 = 0;
  v6 = v41 * v42;
  if ( v6 )
  {
LABEL_37:
    v67 = v4;
    v43 = qvector_reserve();
    v44 = v43;
    v45 = *((_QWORD *)&v79 + 1);
    *((_QWORD *)&v79 + 1) = 0;
    v46 = v79 - 1;
    v47 = nullptr;
    if ( (__int64)v79 - 1 >= 0 )
    {
      do
      {
        v48 = _mm_loadu_si128(v47);
        v44 += 32;
        v47 += 2;
        *(__m128i *)(v44 - 32) = v48;
        *(__m128i *)(v44 - 16) = _mm_loadu_si128(v47 - 1);
        v49 = v46-- == 0;
      }
      while ( !v49 );
    }
    v72 = v67;
    v68 = v43;
    qfree();
    v8 = v68;
    *((_QWORD *)&v79 + 1) = v45;
    v4 = v72;
    v6 = v79;
    v78 = (const __m128i *)v68;
    v41 = a1[1];
  }
  v7 = (const __m128i *)*a1;
  if ( v41 )
  {
LABEL_5:
    v71 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = 0;
      v11 = 0;
      v66 = 2 * v9;
      if ( v4[1] )
        break;
LABEL_30:
      v9 = ++v71;
      if ( v71 >= (unsigned __int64)a1[1] )
        goto LABEL_31;
    }
    while ( 1 )
    {
      v12 = *v4 + 32 * v11;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(_QWORD *)v12;
      v15 = &v7[v66];
      v16 = *(_DWORD *)(v12 + 16);
      v17 = *(_DWORD *)(v12 + 20);
      v18 = v7[v66].m128i_i64[1];
      v19 = v7[v66 + 1].m128i_i32[0];
      v20 = v7[v66 + 1].m128i_i32[1];
      v21 = v7[v66 + 1].m128i_i32[2];
      v22 = *(_DWORD *)(v12 + 24);
      if ( a3 )
      {
        v23 = v18 - v14;
        v24 = v19 - v16;
        v25 = v20 - v17;
        v26 = v21 - v22;
        v14 = -v13;
      }
      else
      {
        v24 = v16 + v19;
        v25 = v17 + v20;
        v26 = v22 + v21;
        v23 = v13 + v18;
      }
      v27 = v8 + 32 * v6;
      v28 = -v26;
      if ( v26 > 0 )
        v28 = v26;
      v29 = -v24;
      if ( v24 > 0 )
        v29 = v24;
      v30 = v29 + v28;
      v31 = -v25;
      if ( v25 > 0 )
        v31 = v25;
      v32 = v30 + v31;
      if ( v27 == v8 )
      {
        if ( v32 <= 9 )
        {
          v33 = v8;
          v35 = v15->m128i_i64[0] + v14;
          v53 = v6 + 1;
          v51 = *((_QWORD *)&v79 + 1);
          if ( *((_QWORD *)&v79 + 1) < v53 )
          {
LABEL_53:
            v76 = v4;
            v74 = v35;
            v54 = qvector_reserve();
            v55 = v54;
            v56 = *((_QWORD *)&v79 + 1);
            *((_QWORD *)&v79 + 1) = v51;
            v57 = v79 - 1;
            v58 = v78;
            if ( (__int64)v79 - 1 >= 0 )
            {
              do
              {
                v59 = _mm_loadu_si128(v58);
                v55 += 32;
                v58 += 2;
                *(__m128i *)(v55 - 32) = v59;
                *(__m128i *)(v55 - 16) = _mm_loadu_si128(v58 - 1);
                v49 = v57-- == 0;
              }
              while ( !v49 );
            }
            v77 = v56;
            qfree();
            v35 = v74;
            v78 = (const __m128i *)v54;
            v4 = v76;
            *((_QWORD *)&v79 + 1) = v77;
            v33 = v54 + 32 * v79;
          }
LABEL_46:
          *(_QWORD *)v33 = v35;
          v8 = (__int64)v78;
          *(_QWORD *)(v33 + 8) = v23;
          *(_DWORD *)(v33 + 16) = v24;
          v6 = v79 + 1;
          *(_DWORD *)(v33 + 20) = v25;
          *(_DWORD *)(v33 + 24) = v26;
          *(_QWORD *)&v79 = v79 + 1;
LABEL_28:
          v7 = (const __m128i *)*a1;
        }
      }
      else
      {
        v33 = v8;
        while ( *(_DWORD *)(v33 + 20) != v25 || v26 != *(_DWORD *)(v33 + 24) || *(_DWORD *)(v33 + 16) != v24 )
        {
          v33 += 32;
          if ( v27 == v33 )
          {
            if ( v32 > 9 )
              goto LABEL_29;
            v34 = v15->m128i_i64[0] + v14;
            v35 = v34;
            if ( v27 == v33 )
              goto LABEL_45;
LABEL_23:
            if ( *(_QWORD *)v33 > v34 )
            {
              *(_QWORD *)v33 = v34;
              v8 = (__int64)v78;
            }
            if ( *(_QWORD *)(v33 + 8) < v23 )
              *(_QWORD *)(v33 + 8) = v23;
            v6 = v79;
            goto LABEL_28;
          }
        }
        if ( v32 <= 9 )
        {
          v34 = v15->m128i_i64[0] + v14;
          v35 = v34;
          if ( v27 != v33 )
            goto LABEL_23;
LABEL_45:
          v50 = v6 + 1;
          v51 = *((_QWORD *)&v79 + 1);
          if ( *((_QWORD *)&v79 + 1) < v50 )
            goto LABEL_53;
          goto LABEL_46;
        }
        if ( v33 != v27 )
        {
          v52 = v27 - v33;
          if ( (v52 >> 5) - 2 >= 0 )
          {
            v75 = v4;
            v73 = v8;
            memmove((void *)v33, (const void *)(v33 + 32), v52 - 32);
            v4 = v75;
            v8 = v73;
            v7 = (const __m128i *)*a1;
          }
          *(_QWORD *)&v79 = --v6;
        }
      }
LABEL_29:
      v11 = ++v10;
      if ( (unsigned __int64)v10 >= v4[1] )
        goto LABEL_30;
    }
  }
LABEL_31:
  v36 = _mm_loadh_ps((const double *)&v79 + 1);
  v37 = a1[2];
  *a1 = v8;
  *(__m128 *)(a1 + 1) = v36;
  *((_QWORD *)&v79 + 1) = v37;
  if ( v7 )
    qfree();
  return v80 - __readfsqword(0x28u);
}


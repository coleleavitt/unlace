__int64 *__fastcall sub_3A2320(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  bool v7; // zf
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  const __m128i *v17; // rcx
  __int64 v18; // rax
  unsigned __int32 v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbp
  __m128i v29; // xmm1
  const __m128i *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 k; // r13
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 m; // r13
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbp
  const __m128i *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  bool v46; // cf
  __int64 v47; // rdx
  __int64 v48; // r13
  __int64 i; // rbp
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r13
  __int64 j; // rbp
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  const __m128i *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rdx
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // rbx
  const __m128i *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rcx
  const __m128i *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __m128i v72; // xmm0
  __int64 v73; // [rsp+0h] [rbp-88h]
  const __m128i *v74; // [rsp+0h] [rbp-88h]
  __int64 v75; // [rsp+0h] [rbp-88h]
  const __m128i *v76; // [rsp+0h] [rbp-88h]
  __int64 v77; // [rsp+0h] [rbp-88h]
  __int64 v78; // [rsp+0h] [rbp-88h]
  __int64 v79; // [rsp+0h] [rbp-88h]
  __int64 v80; // [rsp+18h] [rbp-70h] BYREF
  __m128i v81; // [rsp+20h] [rbp-68h] BYREF
  const __m128i *v82; // [rsp+30h] [rbp-58h]
  __m128i v83; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v84; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 32) == 0;
  v84 = __readfsqword(0x28u);
  if ( !v7 && !get_func() || (v9 = *(_QWORD *)(a3 + 16), sub_148BC0(&v80, v9, (_QWORD *)(a3 + 32), nullptr, 0), !v80) )
  {
    *a1 = 0;
    return a1;
  }
  v82 = nullptr;
  v83 = 0;
  sub_253960(v80, v9, v10);
  v12 = v80;
  if ( a4 )
  {
    v20 = a4 - 1;
    v21 = sub_3877C0(v80, v20, v11);
    v22 = v21;
    if ( v21 )
    {
      v81.m128i_i64[0] = v21;
      v23 = (__int64)v82;
      v24 = v83.m128i_i64[0];
      v81.m128i_i32[3] = v20;
      v81.m128i_i32[2] = -2;
      v25 = v83.m128i_i64[0] + 1;
      if ( &v81 >= v82 && &v81 < &v82[v83.m128i_i64[1]] )
      {
        if ( v83.m128i_i64[1] < v25 )
        {
          v78 = v83.m128i_i64[1];
          v23 = qvector_reserve();
          v68 = v83.m128i_i64[1];
          v69 = v82;
          v83.m128i_i64[1] = v78;
          v70 = v83.m128i_i64[0] - 1;
          if ( v83.m128i_i64[0] - 1 >= 0 )
          {
            v71 = v23;
            do
            {
              v72 = _mm_loadu_si128(v69);
              v71 += 16;
              ++v69;
              *(__m128i *)(v71 - 16) = v72;
              v46 = v70-- == 0;
            }
            while ( !v46 );
          }
          v79 = v68;
          qfree();
          v24 = v83.m128i_i64[0];
          v82 = (const __m128i *)v23;
          v83.m128i_i64[1] = v79;
        }
        v62 = v23 + 16 * v24;
        *(_QWORD *)v62 = v22;
        *(_DWORD *)(v62 + 8) = -2;
        *(_DWORD *)(v62 + 12) = v20;
      }
      else
      {
        if ( v83.m128i_i64[1] < v25 )
        {
          v77 = v83.m128i_i64[1];
          v23 = qvector_reserve();
          v63 = v83.m128i_i64[1];
          v64 = v82;
          v83.m128i_i64[1] = v77;
          v65 = v83.m128i_i64[0] - 1;
          if ( v83.m128i_i64[0] - 1 >= 0 )
          {
            v66 = v23;
            do
            {
              v67 = _mm_loadu_si128(v64);
              v66 += 16;
              ++v64;
              *(__m128i *)(v66 - 16) = v67;
              v46 = v65-- == 0;
            }
            while ( !v46 );
          }
          qfree();
          v82 = (const __m128i *)v23;
          v24 = v83.m128i_i64[0];
          v83.m128i_i64[1] = v63;
        }
        *(__m128i *)(v23 + 16 * v24) = _mm_load_si128(&v81);
      }
      ++v83.m128i_i64[0];
    }
  }
  else
  {
    v13 = *(int *)(v80 + 152);
    if ( v13 < *(_QWORD *)(v80 + 136) )
    {
      do
      {
        v15 = sub_3877C0(v12, (unsigned int)v13, v11);
        v16 = v15;
        if ( v15 )
        {
          v17 = v82;
          v81.m128i_i64[0] = v15;
          v18 = v83.m128i_i64[0];
          v81.m128i_i32[2] = -2;
          v81.m128i_i32[3] = v13;
          v11 = v83.m128i_i64[0] + 1;
          if ( &v81 < v82 || &v81 >= &v82[v83.m128i_i64[1]] )
          {
            if ( v83.m128i_i64[1] < v11 )
            {
              v73 = v83.m128i_i64[1];
              v40 = qvector_reserve();
              v41 = v83.m128i_i64[1];
              v42 = v82;
              v83.m128i_i64[1] = v73;
              v43 = v83.m128i_i64[0] - 1;
              if ( v83.m128i_i64[0] - 1 >= 0 )
              {
                v44 = v40;
                do
                {
                  v45 = _mm_loadu_si128(v42);
                  v44 += 16;
                  ++v42;
                  *(__m128i *)(v44 - 16) = v45;
                  v46 = v43-- == 0;
                }
                while ( !v46 );
              }
              v74 = (const __m128i *)v40;
              qfree();
              v17 = v74;
              v18 = v83.m128i_i64[0];
              v83.m128i_i64[1] = v41;
              v82 = v74;
            }
            v17[v18] = _mm_load_si128(&v81);
          }
          else
          {
            if ( v83.m128i_i64[1] < v11 )
            {
              v75 = v83.m128i_i64[1];
              v56 = qvector_reserve();
              v57 = v83.m128i_i64[1];
              v58 = v82;
              v83.m128i_i64[1] = v75;
              v59 = v83.m128i_i64[0] - 1;
              if ( v83.m128i_i64[0] - 1 >= 0 )
              {
                v60 = v56;
                do
                {
                  v61 = _mm_loadu_si128(v58);
                  v60 += 16;
                  ++v58;
                  *(__m128i *)(v60 - 16) = v61;
                  v46 = v59-- == 0;
                }
                while ( !v46 );
              }
              v76 = (const __m128i *)v56;
              qfree();
              v17 = v76;
              v18 = v83.m128i_i64[0];
              v82 = v76;
              v83.m128i_i64[1] = v57;
            }
            v14 = (__m128i *)&v17[v18];
            v14->m128i_i64[0] = v16;
            v14->m128i_i32[2] = -2;
            v14->m128i_i32[3] = v13;
          }
          ++v83.m128i_i64[0];
        }
        v12 = v80;
        LODWORD(v13) = v13 + 1;
      }
      while ( (unsigned __int64)(int)v13 < *(_QWORD *)(v80 + 136) );
    }
  }
  v26 = operator new(0x40u);
  v27 = v80;
  v28 = v26;
  v29 = _mm_loadu_si128(&v83);
  v30 = v82;
  if ( !v80 )
  {
    v55 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(v28 + 8) = 1;
    *(_QWORD *)v28 = &off_4C7770;
    *(_QWORD *)(v28 + 16) = v55;
    *(_QWORD *)(v28 + 24) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    *(_QWORD *)(v28 + 32) = v30;
    *a1 = v28;
    *(__m128i *)(v28 + 40) = v29;
    return a1;
  }
  ++*(_DWORD *)(v80 + 104);
  v31 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  *(_DWORD *)(v28 + 8) = 1;
  *(_QWORD *)v28 = &off_4C7770;
  *(__m128i *)(v28 + 16) = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v27);
  ++*(_DWORD *)(v27 + 104);
  *(_DWORD *)(v28 + 56) = 0;
  *(_QWORD *)(v28 + 32) = v30;
  *(__m128i *)(v28 + 40) = v29;
  v7 = (*(_DWORD *)(v27 + 104))-- == 1;
  v82 = nullptr;
  v83 = 0;
  if ( !v7 )
  {
    *a1 = v28;
LABEL_51:
    v7 = (*(_DWORD *)(v27 + 104))-- == 1;
    if ( v7 )
    {
      sub_2540F0((__int64 *)v27);
      v47 = *(_QWORD *)(v27 + 184);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v27 + 192);
        if ( v48 )
        {
          for ( i = 0; i != v48; ++i )
          {
            v50 = (_QWORD *)(v47 + 24 * i);
            if ( *v50 )
            {
              v50[1] = 0;
              qfree();
              v47 = *(_QWORD *)(v27 + 184);
            }
          }
        }
        *(_QWORD *)(v27 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v27 + 160) )
      {
        *(_QWORD *)(v27 + 168) = 0;
        qfree();
      }
      v51 = *(_QWORD *)(v27 + 128);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v27 + 136);
        if ( v52 )
        {
          for ( j = 0; j != v52; ++j )
          {
            v54 = (_QWORD *)(v51 + 32 * j);
            if ( *v54 )
            {
              v54[1] = 0;
              qfree();
              v51 = *(_QWORD *)(v27 + 128);
            }
          }
        }
        *(_QWORD *)(v27 + 136) = 0;
        qfree();
      }
      sub_2507D0(v27 + 16);
      j__qfree();
    }
    return a1;
  }
  sub_2540F0((__int64 *)v27);
  v32 = *(_QWORD *)(v27 + 184);
  if ( v32 )
  {
    v33 = *(_QWORD *)(v27 + 192);
    if ( v33 )
    {
      for ( k = 0; k != v33; ++k )
      {
        v35 = (_QWORD *)(v32 + 24 * k);
        if ( *v35 )
        {
          v35[1] = 0;
          qfree();
          v32 = *(_QWORD *)(v27 + 184);
        }
      }
    }
    *(_QWORD *)(v27 + 192) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v27 + 160) )
  {
    *(_QWORD *)(v27 + 168) = 0;
    qfree();
  }
  v36 = *(_QWORD *)(v27 + 128);
  if ( v36 )
  {
    v37 = *(_QWORD *)(v27 + 136);
    if ( v37 )
    {
      for ( m = 0; m != v37; ++m )
      {
        v39 = (_QWORD *)(v36 + 32 * m);
        if ( *v39 )
        {
          v39[1] = 0;
          qfree();
          v36 = *(_QWORD *)(v27 + 128);
        }
      }
    }
    *(_QWORD *)(v27 + 136) = 0;
    qfree();
  }
  sub_2507D0(v27 + 16);
  j__qfree();
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree();
  }
  v27 = v80;
  *a1 = v28;
  if ( v27 )
    goto LABEL_51;
  return a1;
}


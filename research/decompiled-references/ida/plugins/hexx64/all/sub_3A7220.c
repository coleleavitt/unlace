__int64 *__fastcall sub_3A7220(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5,
        double a6,
        __m128i a7,
        double a8)
{
  bool v11; // zf
  __m128i *v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __m128i *v16; // rax
  __m128i *v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v22; // ebp
  __m128i *v23; // rax
  __m128i *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __m128i *v29; // rbx
  __int64 v30; // rbp
  __m128i v31; // xmm1
  unsigned __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 k; // r13
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r14
  __int64 m; // r13
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rbp
  const __m128i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __m128i v50; // xmm0
  bool v51; // cf
  __int64 v52; // rdx
  __int64 v53; // r13
  __int64 i; // rbp
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // r13
  __int64 j; // rbp
  __int64 *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rsi
  const __m128i *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rbx
  const __m128i *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128i v75; // xmm0
  __int64 v76; // rcx
  const __m128i *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  __m128i v80; // xmm0
  __int64 v81; // [rsp+0h] [rbp-88h]
  unsigned __int64 v82; // [rsp+0h] [rbp-88h]
  __int64 v83; // [rsp+0h] [rbp-88h]
  unsigned __int64 v84; // [rsp+0h] [rbp-88h]
  __int64 v85; // [rsp+0h] [rbp-88h]
  __int64 v86; // [rsp+0h] [rbp-88h]
  __int64 v87; // [rsp+0h] [rbp-88h]
  __m128i *v88; // [rsp+18h] [rbp-70h] BYREF
  __m128i v89; // [rsp+20h] [rbp-68h] BYREF
  const __m128i *v90; // [rsp+30h] [rbp-58h] BYREF
  __m128i v91; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+48h] [rbp-40h]

  v11 = *(_QWORD *)(a3 + 32) == 0;
  v92 = __readfsqword(0x28u);
  if ( !v11 && !get_func()
    || (sub_14CDC0((__int64 *)&v88, *(_QWORD *)(a3 + 16), (__int64 **)(a3 + 32), nullptr, 0, a5, a6, a7, a8), !v88) )
  {
    *a1 = 0;
    return a1;
  }
  v90 = nullptr;
  v91 = 0;
  sub_2581E0(v88);
  v13 = v88;
  if ( a4 )
  {
    v22 = a4 - 1;
    v23 = sub_38C6C0(v88, v22);
    v24 = v23;
    if ( v23 )
    {
      v89.m128i_i64[0] = (__int64)v23;
      v25 = (__int64)v90;
      v26 = v91.m128i_i64[0];
      v89.m128i_i32[3] = v22;
      v89.m128i_i32[2] = -2;
      v27 = v91.m128i_i64[0] + 1;
      if ( &v89 >= v90 && &v89 < &v90[v91.m128i_i64[1]] )
      {
        if ( v91.m128i_i64[1] < v27 )
        {
          v86 = v91.m128i_i64[1];
          v25 = qvector_reserve((__int64)&v90, 0, v91.m128i_i64[0] + 1, 16);
          v76 = v91.m128i_i64[1];
          v77 = v90;
          v91.m128i_i64[1] = v86;
          v78 = v91.m128i_i64[0] - 1;
          if ( v91.m128i_i64[0] - 1 >= 0 )
          {
            v79 = v25;
            do
            {
              v80 = _mm_loadu_si128(v77);
              v79 += 16;
              ++v77;
              *(__m128i *)(v79 - 16) = v80;
              v51 = v78-- == 0;
            }
            while ( !v51 );
            v77 = v90;
          }
          v87 = v76;
          qfree((__int64)v77);
          v26 = v91.m128i_i64[0];
          v90 = (const __m128i *)v25;
          v91.m128i_i64[1] = v87;
        }
        v70 = v25 + 16 * v26;
        *(_QWORD *)v70 = v24;
        *(_DWORD *)(v70 + 8) = -2;
        *(_DWORD *)(v70 + 12) = v22;
      }
      else
      {
        if ( v91.m128i_i64[1] < v27 )
        {
          v85 = v91.m128i_i64[1];
          v25 = qvector_reserve((__int64)&v90, 0, v91.m128i_i64[0] + 1, 16);
          v71 = v91.m128i_i64[1];
          v72 = v90;
          v91.m128i_i64[1] = v85;
          v73 = v91.m128i_i64[0] - 1;
          if ( v91.m128i_i64[0] - 1 >= 0 )
          {
            v74 = v25;
            do
            {
              v75 = _mm_loadu_si128(v72);
              v74 += 16;
              ++v72;
              *(__m128i *)(v74 - 16) = v75;
              v51 = v73-- == 0;
            }
            while ( !v51 );
            v72 = v90;
          }
          qfree((__int64)v72);
          v90 = (const __m128i *)v25;
          v26 = v91.m128i_i64[0];
          v91.m128i_i64[1] = v71;
        }
        *(__m128i *)(v25 + 16 * v26) = _mm_load_si128(&v89);
      }
      ++v91.m128i_i64[0];
    }
  }
  else
  {
    v14 = v88[9].m128i_i32[2];
    if ( v14 < v88[8].m128i_i64[1] )
    {
      do
      {
        v16 = sub_38C6C0(v13, v14);
        v17 = v16;
        if ( v16 )
        {
          v18 = (unsigned __int64)v90;
          v89.m128i_i64[0] = (__int64)v16;
          v19 = v91.m128i_i64[0];
          v89.m128i_i32[2] = -2;
          v89.m128i_i32[3] = v14;
          v20 = v91.m128i_i64[0] + 1;
          if ( &v89 < v90 || &v89 >= &v90[v91.m128i_i64[1]] )
          {
            if ( v91.m128i_i64[1] < v20 )
            {
              v81 = v91.m128i_i64[1];
              v45 = qvector_reserve((__int64)&v90, 0, v20, 16);
              v46 = v91.m128i_i64[1];
              v47 = v90;
              v91.m128i_i64[1] = v81;
              v48 = v91.m128i_i64[0] - 1;
              if ( v91.m128i_i64[0] - 1 >= 0 )
              {
                v49 = v45;
                do
                {
                  v50 = _mm_loadu_si128(v47);
                  v49 += 16;
                  ++v47;
                  *(__m128i *)(v49 - 16) = v50;
                  v51 = v48-- == 0;
                }
                while ( !v51 );
                v47 = v90;
              }
              v82 = v45;
              qfree((__int64)v47);
              v18 = v82;
              v19 = v91.m128i_i64[0];
              v91.m128i_i64[1] = v46;
              v90 = (const __m128i *)v82;
            }
            *(__m128i *)(v18 + 16 * v19) = _mm_load_si128(&v89);
          }
          else
          {
            if ( v91.m128i_i64[1] < v20 )
            {
              v83 = v91.m128i_i64[1];
              v64 = qvector_reserve((__int64)&v90, 0, v20, 16);
              v65 = v91.m128i_i64[1];
              v66 = v90;
              v91.m128i_i64[1] = v83;
              v67 = v91.m128i_i64[0] - 1;
              if ( v91.m128i_i64[0] - 1 >= 0 )
              {
                v68 = v64;
                do
                {
                  v69 = _mm_loadu_si128(v66);
                  v68 += 16;
                  ++v66;
                  *(__m128i *)(v68 - 16) = v69;
                  v51 = v67-- == 0;
                }
                while ( !v51 );
                v66 = v90;
              }
              v84 = v64;
              qfree((__int64)v66);
              v18 = v84;
              v19 = v91.m128i_i64[0];
              v90 = (const __m128i *)v84;
              v91.m128i_i64[1] = v65;
            }
            v15 = v18 + 16 * v19;
            *(_QWORD *)v15 = v17;
            *(_DWORD *)(v15 + 8) = -2;
            *(_DWORD *)(v15 + 12) = v14;
          }
          ++v91.m128i_i64[0];
        }
        v13 = v88;
        LODWORD(v14) = v14 + 1;
      }
      while ( (unsigned __int64)(int)v14 < v88[8].m128i_i64[1] );
    }
  }
  v28 = operator new(0x40u);
  v29 = v88;
  v30 = v28;
  v31 = _mm_loadu_si128(&v91);
  v32 = (unsigned __int64)v90;
  if ( !v88 )
  {
    v63 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(v30 + 8) = 1;
    *(_QWORD *)v30 = &off_4E7050;
    *(_QWORD *)(v30 + 16) = v63;
    *(_QWORD *)(v30 + 24) = 0;
    *(_DWORD *)(v30 + 56) = 0;
    *(_QWORD *)(v30 + 32) = v32;
    *a1 = v30;
    *(__m128i *)(v30 + 40) = v31;
    return a1;
  }
  ++v88[6].m128i_i32[2];
  v33 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  *(_DWORD *)(v30 + 8) = 1;
  *(_QWORD *)v30 = &off_4E7050;
  *(__m128i *)(v30 + 16) = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)v29);
  ++v29[6].m128i_i32[2];
  *(_DWORD *)(v30 + 56) = 0;
  *(_QWORD *)(v30 + 32) = v32;
  *(__m128i *)(v30 + 40) = v31;
  v11 = v29[6].m128i_i32[2]-- == 1;
  v90 = nullptr;
  v91 = 0;
  if ( !v11 )
  {
    *a1 = v30;
LABEL_52:
    v11 = v29[6].m128i_i32[2]-- == 1;
    if ( v11 )
    {
      sub_258970(v29->m128i_i64);
      v52 = v29[11].m128i_i64[1];
      if ( v52 )
      {
        v53 = v29[12].m128i_i64[0];
        if ( v53 )
        {
          for ( i = 0; i != v53; ++i )
          {
            v55 = (__int64 *)(v52 + 24 * i);
            v56 = *v55;
            if ( *v55 )
            {
              v55[1] = 0;
              qfree(v56);
              v52 = v29[11].m128i_i64[1];
            }
          }
        }
        v29[12].m128i_i64[0] = 0;
        qfree(v52);
      }
      v57 = v29[10].m128i_i64[0];
      if ( v57 )
      {
        v29[10].m128i_i64[1] = 0;
        qfree(v57);
      }
      v58 = v29[8].m128i_i64[0];
      if ( v58 )
      {
        v59 = v29[8].m128i_i64[1];
        if ( v59 )
        {
          for ( j = 0; j != v59; ++j )
          {
            v61 = (__int64 *)(v58 + 32 * j);
            v62 = *v61;
            if ( *v61 )
            {
              v61[1] = 0;
              qfree(v62);
              v58 = v29[8].m128i_i64[0];
            }
          }
        }
        v29[8].m128i_i64[1] = 0;
        qfree(v58);
      }
      sub_255050((__int64)v29[1].m128i_i64, 0.0);
      j__qfree((__int64)v29);
    }
    return a1;
  }
  sub_258970(v29->m128i_i64);
  v34 = v29[11].m128i_i64[1];
  if ( v34 )
  {
    v35 = v29[12].m128i_i64[0];
    if ( v35 )
    {
      for ( k = 0; k != v35; ++k )
      {
        v37 = (__int64 *)(v34 + 24 * k);
        v38 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          qfree(v38);
          v34 = v29[11].m128i_i64[1];
        }
      }
    }
    v29[12].m128i_i64[0] = 0;
    qfree(v34);
  }
  v39 = v29[10].m128i_i64[0];
  if ( v39 )
  {
    v29[10].m128i_i64[1] = 0;
    qfree(v39);
  }
  v40 = v29[8].m128i_i64[0];
  if ( v40 )
  {
    v41 = v29[8].m128i_i64[1];
    if ( v41 )
    {
      for ( m = 0; m != v41; ++m )
      {
        v43 = (__int64 *)(v40 + 32 * m);
        v44 = *v43;
        if ( *v43 )
        {
          v43[1] = 0;
          qfree(v44);
          v40 = v29[8].m128i_i64[0];
        }
      }
    }
    v29[8].m128i_i64[1] = 0;
    qfree(v40);
  }
  sub_255050((__int64)v29[1].m128i_i64, 0.0);
  j__qfree((__int64)v29);
  if ( v90 )
  {
    v91.m128i_i64[0] = 0;
    qfree((__int64)v90);
  }
  v29 = v88;
  *a1 = v30;
  if ( v29 )
    goto LABEL_52;
  return a1;
}


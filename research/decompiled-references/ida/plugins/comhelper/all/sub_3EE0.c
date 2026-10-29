unsigned __int64 __fastcall sub_3EE0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  __m128i v9; // xmm6
  const void *v10; // rsi
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __m128i v17; // xmm7
  unsigned __int64 i; // rbp
  __m128i v19; // xmm0
  __m128i v20; // xmm4
  __int64 v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // r15
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __m128i v27; // xmm5
  __m128i v28; // xmm0
  __int64 v29; // r15
  __m128i v30; // xmm1
  __int64 v31; // rbx
  __m128i v32; // xmm2
  __m128i v33; // xmm0
  int v35; // eax
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // rax
  __m128i v39; // xmm6
  __m128i v40; // xmm1
  __int64 v41; // r14
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __m128i v45; // xmm7
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __int64 v48; // rax
  __m128i v49; // xmm7
  __m128i v50; // xmm1
  __int64 v51; // r14
  __m128i si128; // xmm1
  __m128i v53; // xmm0
  __int64 v54; // rdi
  __m128i v55; // xmm6
  void *v56; // rax
  __m128i v57; // xmm1
  __m128i v58; // xmm0
  __int64 v59; // rdi
  __m128i v60; // xmm6
  __m128i v61; // [rsp+0h] [rbp-D8h] BYREF
  void *s2[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+28h] [rbp-B0h]
  __m128i v64; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v65[3]; // [rsp+40h] [rbp-98h] BYREF
  __m128i v66; // [rsp+70h] [rbp-68h] BYREF
  __int64 v67; // [rsp+80h] [rbp-58h]
  __m128i v68; // [rsp+88h] [rbp-50h]
  unsigned __int64 v69; // [rsp+98h] [rbp-40h]

  v63 = a3;
  v69 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 640 )
  {
    v5 = a2;
    if ( v63 )
    {
      while ( 1 )
      {
        v6 = a1 + 40;
        --v63;
        v7 = a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v3 >> 3)) >> 1);
        v8 = memcmp((const void *)(a1 + 40), (const void *)v7, 0x10u);
        v9 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v10 = (const void *)(v5 - 40);
        v11 = *(_QWORD *)(a1 + 16);
        s2[0] = (void *)(v5 - 40);
        v61 = v9;
        if ( v8 < 0 )
        {
          if ( memcmp((const void *)v7, v10, 0x10u) < 0 )
          {
            *(_QWORD *)(a1 + 16) = 0;
            v66 = _mm_loadu_si128((const __m128i *)a1);
            *(_OWORD *)(a1 + 24) = 0;
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v7);
            v56 = *(void **)(v7 + 16);
            v57 = _mm_loadu_si128((const __m128i *)(v7 + 24));
            *(_QWORD *)(v7 + 16) = 0;
            *(_OWORD *)(v7 + 24) = 0;
            if ( *(_QWORD *)(a1 + 16) )
            {
              *(_QWORD *)(a1 + 24) = 0;
              s2[0] = v56;
              v64 = v57;
              qfree();
              v57 = _mm_load_si128(&v64);
              v56 = s2[0];
            }
            *(_QWORD *)(a1 + 16) = v56;
            v58 = _mm_load_si128(&v66);
            *(__m128i *)(a1 + 24) = v57;
            v59 = *(_QWORD *)(v7 + 16);
            *(__m128i *)v7 = v58;
            if ( v59 )
            {
              *(_QWORD *)(v7 + 24) = 0;
              qfree();
            }
            v60 = _mm_load_si128(&v61);
            *(_QWORD *)(v7 + 16) = v11;
            *(__m128i *)(v7 + 24) = v60;
          }
          else
          {
            v35 = memcmp((const void *)(a1 + 40), s2[0], 0x10u);
            v36 = _mm_loadu_si128((const __m128i *)a1);
            v66 = v36;
            if ( v35 < 0 )
            {
              *(_QWORD *)(a1 + 16) = 0;
              *(_OWORD *)(a1 + 24) = 0;
              *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v5 - 40));
              v51 = *(_QWORD *)(v5 - 24);
              si128 = _mm_loadu_si128((const __m128i *)(v5 - 16));
              *(_QWORD *)(v5 - 24) = 0;
              *(_OWORD *)(v5 - 16) = 0;
              if ( *(_QWORD *)(a1 + 16) )
              {
                *(_QWORD *)(a1 + 24) = 0;
                *(__m128i *)s2 = si128;
                qfree();
                si128 = _mm_load_si128((const __m128i *)s2);
              }
              *(_QWORD *)(a1 + 16) = v51;
              v53 = _mm_load_si128(&v66);
              *(__m128i *)(a1 + 24) = si128;
              v54 = *(_QWORD *)(v5 - 24);
              *(__m128i *)(v5 - 40) = v53;
              if ( v54 )
              {
                *(_QWORD *)(v5 - 16) = 0;
                qfree();
              }
              v55 = _mm_load_si128(&v61);
              *(_QWORD *)(v5 - 24) = v11;
              *(__m128i *)(v5 - 16) = v55;
            }
            else
            {
              v37 = _mm_loadu_si128((const __m128i *)(a1 + 40));
              v38 = *(_QWORD *)(a1 + 56);
              *(_QWORD *)(a1 + 56) = v11;
              v39 = _mm_load_si128(&v61);
              *(__m128i *)(a1 + 40) = v36;
              *(__m128i *)a1 = v37;
              v40 = _mm_loadu_si128((const __m128i *)(a1 + 64));
              *(_QWORD *)(a1 + 16) = v38;
              *(__m128i *)(a1 + 24) = v40;
              *(__m128i *)(a1 + 64) = v39;
            }
          }
        }
        else if ( memcmp((const void *)(a1 + 40), v10, 0x10u) < 0 )
        {
          v46 = _mm_loadu_si128((const __m128i *)(a1 + 40));
          v47 = _mm_loadu_si128((const __m128i *)a1);
          v48 = *(_QWORD *)(a1 + 56);
          v49 = _mm_load_si128(&v61);
          *(_QWORD *)(a1 + 56) = v11;
          *(__m128i *)a1 = v46;
          v50 = _mm_loadu_si128((const __m128i *)(a1 + 64));
          *(_QWORD *)(a1 + 16) = v48;
          v66 = v47;
          *(__m128i *)(a1 + 24) = v50;
          *(__m128i *)(a1 + 40) = v47;
          *(__m128i *)(a1 + 64) = v49;
        }
        else
        {
          v12 = memcmp((const void *)v7, s2[0], 0x10u);
          v66 = _mm_loadu_si128((const __m128i *)a1);
          *(_QWORD *)(a1 + 16) = 0;
          if ( v12 < 0 )
          {
            *(_OWORD *)(a1 + 24) = 0;
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v5 - 40));
            v41 = *(_QWORD *)(v5 - 24);
            v42 = _mm_loadu_si128((const __m128i *)(v5 - 16));
            *(_QWORD *)(v5 - 24) = 0;
            *(_OWORD *)(v5 - 16) = 0;
            if ( *(_QWORD *)(a1 + 16) )
            {
              *(_QWORD *)(a1 + 24) = 0;
              *(__m128i *)s2 = v42;
              qfree();
              v42 = _mm_load_si128((const __m128i *)s2);
            }
            *(_QWORD *)(a1 + 16) = v41;
            v43 = _mm_load_si128(&v66);
            *(__m128i *)(a1 + 24) = v42;
            v44 = *(_QWORD *)(v5 - 24);
            *(__m128i *)(v5 - 40) = v43;
            if ( v44 )
            {
              *(_QWORD *)(v5 - 16) = 0;
              qfree();
            }
            v45 = _mm_load_si128(&v61);
            *(_QWORD *)(v5 - 24) = v11;
            *(__m128i *)(v5 - 16) = v45;
          }
          else
          {
            *(_OWORD *)(a1 + 24) = 0;
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v7);
            v13 = *(_QWORD *)(v7 + 16);
            v14 = _mm_loadu_si128((const __m128i *)(v7 + 24));
            *(_QWORD *)(v7 + 16) = 0;
            *(_OWORD *)(v7 + 24) = 0;
            if ( *(_QWORD *)(a1 + 16) )
            {
              *(_QWORD *)(a1 + 24) = 0;
              v64.m128i_i64[0] = v13;
              *(__m128i *)s2 = v14;
              qfree();
              v13 = v64.m128i_i64[0];
              v14 = _mm_load_si128((const __m128i *)s2);
            }
            *(__m128i *)(a1 + 24) = v14;
            v15 = _mm_load_si128(&v66);
            *(_QWORD *)(a1 + 16) = v13;
            v16 = *(_QWORD *)(v7 + 16);
            *(__m128i *)v7 = v15;
            if ( v16 )
            {
              *(_QWORD *)(v7 + 24) = 0;
              qfree();
            }
            v17 = _mm_load_si128(&v61);
            *(_QWORD *)(v7 + 16) = v11;
            *(__m128i *)(v7 + 24) = v17;
          }
        }
        for ( i = v5; ; *(__m128i *)(i + 24) = v27 )
        {
          while ( memcmp((const void *)v6, (const void *)a1, 0x10u) < 0 )
            v6 += 40LL;
          do
            i -= 40LL;
          while ( memcmp((const void *)a1, (const void *)i, 0x10u) < 0 );
          if ( v6 >= i )
            break;
          v19 = _mm_loadu_si128((const __m128i *)v6);
          v20 = _mm_loadu_si128((const __m128i *)(v6 + 24));
          v21 = *(_QWORD *)(v6 + 16);
          *(_OWORD *)(v6 + 24) = 0;
          *(_QWORD *)(v6 + 16) = 0;
          v66 = v19;
          v22 = _mm_loadu_si128((const __m128i *)i);
          v61 = v20;
          *(__m128i *)v6 = v22;
          v23 = *(_QWORD *)(i + 16);
          v24 = _mm_loadu_si128((const __m128i *)(i + 24));
          *(_QWORD *)(i + 16) = 0;
          *(_OWORD *)(i + 24) = 0;
          if ( *(_QWORD *)(v6 + 16) )
          {
            *(_QWORD *)(v6 + 24) = 0;
            *(__m128i *)s2 = v24;
            qfree();
            v24 = _mm_load_si128((const __m128i *)s2);
          }
          *(__m128i *)(v6 + 24) = v24;
          v25 = _mm_load_si128(&v66);
          *(_QWORD *)(v6 + 16) = v23;
          v26 = *(_QWORD *)(i + 16);
          *(__m128i *)i = v25;
          if ( v26 )
          {
            *(_QWORD *)(i + 24) = 0;
            qfree();
          }
          v27 = _mm_load_si128(&v61);
          *(_QWORD *)(i + 16) = v21;
          v6 += 40LL;
        }
        sub_3EE0(v6, v5, v63);
        v3 = v6 - a1;
        if ( (__int64)(v6 - a1) <= 640 )
          break;
        v5 = v6;
        if ( !v63 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      sub_3CC0((char *)a1, (_BYTE *)v5, v5);
      while ( (__int64)(v5 - a1) > 40 )
      {
        v28 = _mm_loadu_si128((const __m128i *)(v5 - 40));
        v29 = *(_QWORD *)(v5 - 24);
        *(_QWORD *)(v5 - 24) = 0;
        v5 -= 40LL;
        v30 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        v65[0] = v28;
        *(_OWORD *)(v5 + 24) = 0;
        *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)a1);
        v31 = *(_QWORD *)(a1 + 16);
        v32 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          *(__m128i *)s2 = v30;
          v61 = v32;
          qfree();
          v30 = _mm_load_si128((const __m128i *)s2);
          v32 = _mm_load_si128(&v61);
        }
        *(_QWORD *)(v5 + 16) = v31;
        v33 = _mm_load_si128(v65);
        *(__m128i *)(v5 + 24) = v32;
        v67 = v29;
        v66 = v33;
        v68 = v30;
        sub_2E30(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - a1) >> 3), (__int64)&v66);
        if ( v67 )
          qfree();
      }
    }
  }
  return v69 - __readfsqword(0x28u);
}


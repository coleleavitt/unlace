unsigned __int64 __fastcall sub_3A7990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __m128i si128; // xmm2
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm0
  __int64 v17; // rax
  const __m128i *v18; // rbx
  _BYTE *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 *func; // rax
  __m128i *v23; // r15
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 i; // rbp
  __int64 *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 j; // rbp
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rsi
  __m128 *v38; // r15
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int32 v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // [rsp+0h] [rbp-178h]
  __int64 v56; // [rsp+0h] [rbp-178h]
  __int64 v57; // [rsp+8h] [rbp-170h]
  __int64 v58; // [rsp+8h] [rbp-170h]
  __int64 v59; // [rsp+10h] [rbp-168h]
  __int64 v60; // [rsp+10h] [rbp-168h]
  __int64 v61; // [rsp+18h] [rbp-160h]
  __int64 v62; // [rsp+18h] [rbp-160h]
  __int64 v63; // [rsp+20h] [rbp-158h]
  __int64 v64; // [rsp+28h] [rbp-150h]
  __int64 v65; // [rsp+38h] [rbp-140h]
  __int64 v66; // [rsp+48h] [rbp-130h]
  __int64 v67; // [rsp+50h] [rbp-128h]
  __int64 v68; // [rsp+50h] [rbp-128h]
  __int64 v69; // [rsp+58h] [rbp-120h]
  int v70; // [rsp+64h] [rbp-114h] BYREF
  __m128i *v71; // [rsp+68h] [rbp-110h] BYREF
  __int64 v72; // [rsp+70h] [rbp-108h] BYREF
  __int128 v73; // [rsp+78h] [rbp-100h]
  __int64 v74; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v75; // [rsp+98h] [rbp-E0h]
  __int64 v76; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-C0h]
  __int64 *v78[5]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128 v79; // [rsp+F8h] [rbp-80h]
  char v80[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v81; // [rsp+138h] [rbp-40h]

  v61 = a1;
  v81 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 1376);
  if ( (_DWORD)v10 )
  {
    v11 = *(_QWORD *)(a1 + 1368);
    *(_QWORD *)(a1 + 1368) = 0;
    *(_OWORD *)(a1 + 1376) = 0;
    v69 = v11;
    if ( (int)v10 > 0 )
    {
      v65 = v11;
      v66 = v11 + 24LL * (unsigned int)(v10 - 1) + 24;
      do
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
        v63 = *(_QWORD *)(v65 + 8);
        v64 = *(_QWORD *)v65;
        v16 = _mm_loadh_ps((const double *)(v65 + 16));
        v72 = 0;
        v78[0] = (__int64 *)&off_4E70E0;
        v78[3] = nullptr;
        v78[4] = &v72;
        v73 = 0;
        *(__m128i *)&v78[1] = si128;
        v79 = v16;
        callui(1147, v78, 8, &callui, a5, a6, v55, v57, v59, v61);
        v16.m128_u64[0] = 0;
        v17 = 0;
        v74 = 0;
        v76 = 0;
        HIDWORD(v57) = 0;
        v75 = 0;
        v77 = 0;
        if ( (_QWORD)v73 )
        {
          do
          {
            v18 = (const __m128i *)(v72 + 96 * v17);
            callui(1105, v18[2].m128i_u32[2], v13, &callui, v14, v15, v55, v57, v59, v61);
            if ( !v19 || *v19 != 36 || (v54 = qsscanf(), v20 = (__int64)v78[0], v54 != 1) )
              v20 = -1;
            v70 = v18[2].m128i_i64[0];
            sub_2B61B0(v62, v20 + v63 - v64, 0);
            v21 = netnode_altval() + v20;
            if ( v21 != -1 )
              v21 += v63 - v64;
            func = (__int64 *)get_func();
            if ( func )
            {
              v78[0] = func;
              memset(&v78[1], 0, 24);
              sub_14CDC0((__int64 *)&v71, *(_QWORD *)(v62 + 112), v78, nullptr, 0, 0.0, 0.0, si128, a10);
              if ( v78[1] )
              {
                v78[2] = nullptr;
                qfree((__int64)v78[1]);
              }
              if ( v71 )
              {
                sub_2581E0(v71);
                sub_3A5C70(v71, &v70, v21);
                v23 = v71;
                if ( v71 )
                {
                  if ( v71[6].m128i_i32[2]-- == 1 )
                  {
                    sub_258970(v23->m128i_i64);
                    v25 = v23[11].m128i_i64[1];
                    if ( v25 )
                    {
                      v26 = v23[12].m128i_i64[0];
                      if ( v26 )
                      {
                        HIDWORD(v60) = HIDWORD(v18);
                        v67 = v21;
                        for ( i = 0; i != v26; ++i )
                        {
                          v28 = (__int64 *)(v25 + 24 * i);
                          v29 = *v28;
                          if ( *v28 )
                          {
                            v28[1] = 0;
                            qfree(v29);
                            v25 = v23[11].m128i_i64[1];
                          }
                        }
                        v21 = v67;
                      }
                      v23[12].m128i_i64[0] = 0;
                      qfree(v25);
                    }
                    v30 = v23[10].m128i_i64[0];
                    if ( v30 )
                    {
                      v23[10].m128i_i64[1] = 0;
                      qfree(v30);
                    }
                    v31 = v23[8].m128i_i64[0];
                    if ( v31 )
                    {
                      v32 = v23[8].m128i_i64[1];
                      if ( v32 )
                      {
                        HIDWORD(v60) = HIDWORD(v18);
                        v68 = v21;
                        for ( j = 0; j != v32; ++j )
                        {
                          v34 = (__int64 *)(v31 + 32 * j);
                          v35 = *v34;
                          if ( *v34 )
                          {
                            v34[1] = 0;
                            qfree(v35);
                            v31 = v23[8].m128i_i64[0];
                          }
                        }
                        v21 = v68;
                      }
                      v23[8].m128i_i64[1] = 0;
                      qfree(v31);
                    }
                    sub_255050((__int64)v23[1].m128i_i64, 0.0);
                    j__qfree((__int64)v23);
                  }
                }
              }
            }
            v36 = v75;
            v37 = v74;
            if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
            {
              v74 = qvector_reserve((__int64)&v74, v74, v75 + 1, 32);
              v36 = v75;
              v37 = v74;
            }
            v38 = (__m128 *)(v37 + 32 * v36);
            v38->m128_u64[0] = -1;
            v38->m128_u64[1] = 0;
            v38[1].m128_u64[0] = -1;
            v38[1].m128_u64[1] = 0;
            v39 = _mm_loadu_si128(v18 + 2);
            *(_QWORD *)&v75 = v75 + 1;
            *v38 = (__m128)v39;
            qsnprintf();
            LODWORD(v60) = v70;
            callui(1104, v80, v40, &callui, v41, v42, v56, v58, v60, v62);
            v18[2].m128i_i32[2] = v43;
            v18[2].m128i_i32[3] = 3;
            v13 = v77;
            v18[2].m128i_i64[0] = (int)v59;
            v16 = (__m128)_mm_loadu_si128(v18 + 2);
            v18[3].m128i_i64[1] = -1;
            v44 = v76;
            v45 = v13 + 1;
            v38[1] = v16;
            if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v13 + 1) )
            {
              v53 = qvector_reserve((__int64)&v76, v44, v13 + 1, 24);
              v13 = v77;
              v76 = v53;
              v44 = v53;
              v45 = v77 + 1;
            }
            *(_QWORD *)&v77 = v45;
            v46 = (__int64 *)(v44 + 24 * v13);
            ++HIDWORD(v57);
            *v46 = v20;
            v46[1] = v20 + v63 - v64;
            v46[2] = v21;
            v17 = SHIDWORD(v57);
          }
          while ( SHIDWORD(v57) < (unsigned __int64)v73 );
        }
        sub_3A5420(v61, (__int64)&v74, &v76, *(double *)v16.m128_u64);
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree(v76);
        }
        if ( v74 )
        {
          *(_QWORD *)&v75 = 0;
          qfree(v74);
        }
        v47 = v72;
        if ( v72 )
        {
          v48 = v73;
          if ( (_QWORD)v73 )
          {
            v49 = 0;
            do
            {
              v50 = v47 + 96 * v49;
              v51 = *(_QWORD *)(v50 + 8);
              if ( v51 )
              {
                *(_QWORD *)(v50 + 16) = 0;
                qfree(v51);
                v47 = v72;
              }
              ++v49;
            }
            while ( v48 != v49 );
          }
          *(_QWORD *)&v73 = 0;
          qfree(v47);
        }
        v65 += 24;
      }
      while ( v66 != v65 );
    }
    sub_140C90(v61, 0);
    sub_389E60(v61, -1, 1);
    if ( v69 )
      qfree(v69);
  }
  return v81 - __readfsqword(0x28u);
}


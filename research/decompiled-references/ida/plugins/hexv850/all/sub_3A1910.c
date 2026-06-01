unsigned __int64 __fastcall sub_3A1910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm0
  __int64 v12; // rax
  const __m128i *v13; // rbx
  _BYTE *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 func; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // r15
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 i; // rbp
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 j; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __m128 *v32; // r15
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // [rsp+0h] [rbp-178h]
  __int64 v48; // [rsp+0h] [rbp-178h]
  __int64 v49; // [rsp+8h] [rbp-170h]
  __int64 v50; // [rsp+8h] [rbp-170h]
  __int64 v51; // [rsp+10h] [rbp-168h]
  __int64 v52; // [rsp+10h] [rbp-168h]
  __int64 v53; // [rsp+18h] [rbp-160h]
  __int64 v54; // [rsp+18h] [rbp-160h]
  __int64 v55; // [rsp+20h] [rbp-158h]
  double v56; // [rsp+28h] [rbp-150h]
  const double *v57; // [rsp+38h] [rbp-140h]
  __int64 v58; // [rsp+48h] [rbp-130h]
  __int64 v59; // [rsp+50h] [rbp-128h]
  __int64 v60; // [rsp+50h] [rbp-128h]
  __int64 *v61; // [rsp+58h] [rbp-120h]
  int v62; // [rsp+64h] [rbp-114h] BYREF
  __int64 v63; // [rsp+68h] [rbp-110h] BYREF
  __int64 v64; // [rsp+70h] [rbp-108h] BYREF
  __int128 v65; // [rsp+78h] [rbp-100h]
  __int64 v66; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v67; // [rsp+98h] [rbp-E0h]
  __int64 v68; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-C0h]
  _QWORD v70[5]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128 v71; // [rsp+F8h] [rbp-80h]
  _BYTE v72[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v73; // [rsp+138h] [rbp-40h]

  v53 = a1;
  v73 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1376);
  if ( (_DWORD)v6 )
  {
    v7 = *(__int64 **)(a1 + 1368);
    *(_QWORD *)(a1 + 1368) = 0;
    *(_OWORD *)(a1 + 1376) = 0;
    v61 = v7;
    if ( (int)v6 > 0 )
    {
      v57 = (const double *)v7;
      v58 = (__int64)&v7[3 * (unsigned int)(v6 - 1) + 3];
      do
      {
        v55 = *((_QWORD *)v57 + 1);
        v56 = *v57;
        v11 = _mm_loadh_ps(v57 + 2);
        v64 = 0;
        v70[0] = &off_4BAA60;
        v70[3] = 0;
        v70[4] = &v64;
        v65 = 0;
        *(__m128i *)&v70[1] = _mm_load_si128((const __m128i *)&xmmword_400180);
        v71 = v11;
        callui(1147, v70, 8, &callui, a5, a6, v47, v49, v51, v53);
        v11.m128_u64[0] = 0;
        v12 = 0;
        v66 = 0;
        v68 = 0;
        HIDWORD(v49) = 0;
        v67 = 0;
        v69 = 0;
        if ( (_QWORD)v65 )
        {
          do
          {
            v13 = (const __m128i *)(v64 + 96 * v12);
            v14 = (_BYTE *)callui(1105, v13[2].m128i_u32[2], v8, &callui, v9, v10, v47, v49, v51, v53);
            if ( !v14 || *v14 != 36 || (v46 = qsscanf(), v15 = v70[0], v46 != 1) )
              v15 = -1;
            v62 = v13[2].m128i_i64[0];
            sub_2B0DF0(v54, v15 + v55 - *(_QWORD *)&v56, 0);
            v16 = netnode_altval() + v15;
            if ( v16 != -1 )
              v16 += v55 - *(_QWORD *)&v56;
            func = get_func();
            if ( func )
            {
              v70[0] = func;
              memset(&v70[1], 0, 24);
              v18 = *(_QWORD *)(v54 + 112);
              sub_148200(&v63, v18, v70, nullptr, 0);
              if ( v70[1] )
              {
                v70[2] = 0;
                qfree();
              }
              if ( v63 )
              {
                sub_252E20(v63, v18, v19);
                sub_39FBF0(v63, &v62, v16);
                v20 = (__int64 *)v63;
                if ( v63 )
                {
                  if ( (*(_DWORD *)(v63 + 104))-- == 1 )
                  {
                    sub_2535B0(v20);
                    v22 = v20[23];
                    if ( v22 )
                    {
                      v23 = v20[24];
                      if ( v23 )
                      {
                        HIDWORD(v52) = HIDWORD(v13);
                        v59 = v16;
                        for ( i = 0; i != v23; ++i )
                        {
                          v25 = (_QWORD *)(v22 + 24 * i);
                          if ( *v25 )
                          {
                            v25[1] = 0;
                            qfree();
                            v22 = v20[23];
                          }
                        }
                        v16 = v59;
                      }
                      v20[24] = 0;
                      qfree();
                    }
                    if ( v20[20] )
                    {
                      v20[21] = 0;
                      qfree();
                    }
                    v26 = v20[16];
                    if ( v26 )
                    {
                      v27 = v20[17];
                      if ( v27 )
                      {
                        HIDWORD(v52) = HIDWORD(v13);
                        v60 = v16;
                        for ( j = 0; j != v27; ++j )
                        {
                          v29 = (_QWORD *)(v26 + 32 * j);
                          if ( *v29 )
                          {
                            v29[1] = 0;
                            qfree();
                            v26 = v20[16];
                          }
                        }
                        v16 = v60;
                      }
                      v20[17] = 0;
                      qfree();
                    }
                    sub_24FC90((__int64)(v20 + 2));
                    j__qfree();
                  }
                }
              }
            }
            v30 = v67;
            v31 = v66;
            if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
            {
              v66 = qvector_reserve();
              v30 = v67;
              v31 = v66;
            }
            v32 = (__m128 *)(v31 + 32 * v30);
            v32->m128_u64[0] = -1;
            v32->m128_u64[1] = 0;
            v32[1].m128_u64[0] = -1;
            v32[1].m128_u64[1] = 0;
            v33 = _mm_loadu_si128(v13 + 2);
            *(_QWORD *)&v67 = v67 + 1;
            *v32 = (__m128)v33;
            qsnprintf();
            LODWORD(v52) = v62;
            v13[2].m128i_i32[2] = callui(1104, v72, v34, &callui, v35, v36, v48, v50, v52, v54);
            v13[2].m128i_i32[3] = 3;
            v8 = v69;
            v13[2].m128i_i64[0] = (int)v51;
            v11 = (__m128)_mm_loadu_si128(v13 + 2);
            v13[3].m128i_i64[1] = -1;
            v37 = v68;
            v38 = v8 + 1;
            v32[1] = v11;
            if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v8 + 1) )
            {
              v45 = qvector_reserve();
              v8 = v69;
              v68 = v45;
              v37 = v45;
              v38 = v69 + 1;
            }
            *(_QWORD *)&v69 = v38;
            v39 = (__int64 *)(v37 + 24 * v8);
            ++HIDWORD(v49);
            *v39 = v15;
            v39[1] = v15 + v55 - *(_QWORD *)&v56;
            v39[2] = v16;
            v12 = SHIDWORD(v49);
          }
          while ( SHIDWORD(v49) < (unsigned __int64)v65 );
        }
        sub_39F3A0(v53, (__int64)&v66, &v68, *(double *)v11.m128_u64);
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree();
        }
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree();
        }
        v40 = v64;
        if ( v64 )
        {
          v41 = v65;
          if ( (_QWORD)v65 )
          {
            v42 = 0;
            do
            {
              v43 = v40 + 96 * v42;
              if ( *(_QWORD *)(v43 + 8) )
              {
                *(_QWORD *)(v43 + 16) = 0;
                qfree();
                v40 = v64;
              }
              ++v42;
            }
            while ( v41 != v42 );
          }
          *(_QWORD *)&v65 = 0;
          qfree();
        }
        v57 += 3;
      }
      while ( (const double *)v58 != v57 );
    }
    sub_13C0D0(v53, 0);
    sub_383DE0(v53, -1, 1);
    if ( v61 )
      qfree();
  }
  return v73 - __readfsqword(0x28u);
}


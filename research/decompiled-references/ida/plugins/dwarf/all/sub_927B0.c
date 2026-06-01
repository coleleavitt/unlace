__int64 __fastcall sub_927B0(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // ebp
  const char *v3; // r13
  __int64 v4; // r12
  char v5; // r14
  __int64 ph; // rax
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  bool v16; // zf
  size_t v17; // r13
  __int64 v18; // r15
  void *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r9
  __m128i v23; // xmm1
  __int64 v24; // rsi
  __m128i v25; // xmm2
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  size_t v33; // r9
  __int64 v34; // r13
  __int64 v35; // r10
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 v39; // [rsp+1Fh] [rbp-379h]
  __int32 v40; // [rsp+20h] [rbp-378h]
  unsigned __int64 v41; // [rsp+20h] [rbp-378h]
  __int64 *v42; // [rsp+28h] [rbp-370h]
  __m128i v43; // [rsp+30h] [rbp-368h] BYREF
  __int64 v44; // [rsp+40h] [rbp-358h]
  __int64 v45; // [rsp+48h] [rbp-350h]
  __m128i v46[12]; // [rsp+50h] [rbp-348h] BYREF
  __m128i v47; // [rsp+118h] [rbp-280h] BYREF
  __m128i v48; // [rsp+128h] [rbp-270h] BYREF
  __m128i v49; // [rsp+138h] [rbp-260h] BYREF
  __m128i v50; // [rsp+150h] [rbp-248h] BYREF
  __m128i v51; // [rsp+160h] [rbp-238h] BYREF
  __int64 v52; // [rsp+170h] [rbp-228h]
  int v53; // [rsp+178h] [rbp-220h]
  char v54; // [rsp+17Ch] [rbp-21Ch]
  __int64 v55; // [rsp+180h] [rbp-218h]
  char v56; // [rsp+188h] [rbp-210h]
  __int64 v57; // [rsp+198h] [rbp-200h]
  __int128 v58; // [rsp+1A0h] [rbp-1F8h]
  __m128i si128; // [rsp+1B0h] [rbp-1E8h]
  char v60; // [rsp+1C0h] [rbp-1D8h]
  __m128i v61; // [rsp+1C8h] [rbp-1D0h]
  __int64 v62; // [rsp+1D8h] [rbp-1C0h]
  __int128 v63; // [rsp+1E0h] [rbp-1B8h]
  __int16 v64; // [rsp+1F0h] [rbp-1A8h]
  __int64 v65; // [rsp+218h] [rbp-180h]
  __int128 v66; // [rsp+220h] [rbp-178h]
  __int64 v67; // [rsp+230h] [rbp-168h]
  __int128 v68; // [rsp+238h] [rbp-160h]
  __int64 v69; // [rsp+248h] [rbp-150h]
  __int128 v70; // [rsp+250h] [rbp-148h]
  __int64 v71; // [rsp+260h] [rbp-138h]
  __int128 v72; // [rsp+268h] [rbp-130h]
  __int64 v73; // [rsp+278h] [rbp-120h]
  __int128 v74; // [rsp+280h] [rbp-118h]
  __int64 v75; // [rsp+290h] [rbp-108h]
  __int128 v76; // [rsp+298h] [rbp-100h]
  __int64 v77; // [rsp+2A8h] [rbp-F0h]
  __int128 v78; // [rsp+2B0h] [rbp-E8h]
  __int64 v79; // [rsp+2C0h] [rbp-D8h]
  __int128 v80; // [rsp+2C8h] [rbp-D0h]
  __int64 v81; // [rsp+2D8h] [rbp-C0h]
  __int128 v82; // [rsp+2E0h] [rbp-B8h]
  __int64 v83; // [rsp+2F0h] [rbp-A8h]
  __int128 v84; // [rsp+2F8h] [rbp-A0h]
  __int16 v85; // [rsp+308h] [rbp-90h]
  char v86; // [rsp+30Ah] [rbp-8Eh]
  int v87; // [rsp+30Ch] [rbp-8Ch]
  __int128 v88; // [rsp+310h] [rbp-88h]
  __int64 v89; // [rsp+320h] [rbp-78h]
  __int64 v90; // [rsp+328h] [rbp-70h]
  int v91; // [rsp+330h] [rbp-68h]
  __int64 v92; // [rsp+338h] [rbp-60h]
  __int128 v93; // [rsp+340h] [rbp-58h]
  __int64 v94; // [rsp+350h] [rbp-48h]
  unsigned __int64 v95; // [rsp+358h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  v1 = *a1;
  if ( *a1 && (v2 = *(_DWORD *)(v1 + 8), v2 == 1) )
  {
    v3 = src;
    if ( *(_QWORD *)(v1 + 24) )
      v3 = *(const char **)(v1 + 16);
    v4 = open_linput(v3, 0);
    if ( v4 )
    {
      v52 = -1;
      si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
      v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&v51);
      v61 = _mm_load_si128((const __m128i *)&xmmword_AB160);
      v51 = _mm_load_si128((const __m128i *)&xmmword_AB140);
      v53 = 8;
      v54 = 1;
      v55 = v4;
      v56 = 0;
      v57 = 0;
      v60 = 0;
      v62 = 0;
      v64 = 0;
      v65 = 0;
      v67 = 0;
      v69 = 0;
      v71 = 0;
      v73 = 0;
      v75 = 0;
      v77 = 0;
      v58 = 0;
      v63 = 0;
      v66 = 0;
      v68 = 0;
      v70 = 0;
      v72 = 0;
      v74 = 0;
      v76 = 0;
      v78 = 0;
      v79 = 0;
      v81 = 0;
      v83 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v89 = 0;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v94 = 0;
      v80 = 0;
      v82 = 0;
      v84 = 0;
      v88 = -1;
      v93 = 0;
      if ( sub_8D550((__int64)&v50) )
      {
        v5 = getinf_flag(3, 4);
        ph = get_ph();
        v7 = sub_8DEA0((__int64)&v50, *(_DWORD *)(ph + 4), v5);
        if ( v7 != -1 )
        {
          v39 = sub_8D860((__int64)&v50, v7, 0, 0);
          if ( v39 )
          {
            v8 = a1[14];
            v9 = a1[13];
            v42 = a1 + 13;
            if ( a1[15] < (unsigned __int64)(v8 + 1) )
            {
              v38 = qvector_reserve(v42, v9, v8 + 1, 120);
              a1[13] = v38;
              v8 = a1[14];
              v9 = v38;
            }
            v10 = (_QWORD *)(v9 + 120 * v8);
            *v10 = 0;
            v10[14] = 0;
            memset(
              (void *)((unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              0,
              8LL * (((unsigned int)v10 - (((_DWORD)v10 + 8) & 0xFFFFFFF8) + 120) >> 3));
            ++a1[14];
            if ( !(_BYTE)v85 )
              sub_8FDF0((__int64)&v50);
            sub_91C70(v42, v70);
            v11 = 0;
            if ( (_QWORD)v70 )
            {
              v12 = 0;
              do
              {
                memset(v46, 0, 0x78u);
                v13 = v69 + 80 * v12;
                v14 = a1[13] + 120 * v12;
                *(_QWORD *)v14 = *(_QWORD *)(v13 + 32);
                v15 = *(_QWORD *)(v13 + 40);
                *(_QWORD *)(v14 + 40) = 0;
                *(_DWORD *)(v14 + 8) = v15;
                *(_QWORD *)(v14 + 48) = v61.m128i_i64[0] + *(unsigned int *)(v13 + 48);
                sub_82C90((__int64 *)(v14 + 16), (const char *)v13);
                v16 = *(_QWORD *)(v14 + 24) == 0;
                *(_OWORD *)(v14 + 56) = 0;
                if ( !v16 && !strncmp(*(const char **)(v14 + 16), ".debug_", 7u) )
                {
                  if ( *(_DWORD *)(v13 + 60) )
                  {
                    v31 = v46[1].m128i_i64[0];
                    if ( v46[2].m128i_i64[0] <= 5uLL )
                    {
                      v46[1].m128i_i64[0] = qvector_reserve(&v46[1], v46[1].m128i_i64[0], 6, 1);
                      v31 = v46[1].m128i_i64[0];
                    }
                    v46[1].m128i_i64[1] = 6;
                    *(_DWORD *)v31 = 1818587694;
                    *(_BYTE *)(v31 + 4) = 97;
                    *(_BYTE *)(v46[1].m128i_i64[0] + 5) = 0;
                    v32 = *(_QWORD *)(v14 + 24);
                    if ( v32 )
                    {
                      v33 = v32 - 1;
                      if ( v32 != 1 )
                      {
                        v34 = v46[1].m128i_i64[1];
                        v35 = v32 - 1;
                        if ( v46[1].m128i_i64[1] )
                        {
                          v34 = v46[1].m128i_i64[1] - 1;
                          v35 = v33 + v46[1].m128i_i64[1] - 1;
                          v32 += v46[1].m128i_i64[1] - 1;
                        }
                        v36 = v46[1].m128i_i64[0];
                        if ( v46[2].m128i_i64[0] < v32 )
                        {
                          v43.m128i_i64[1] = v33;
                          v43.m128i_i64[0] = v35;
                          v41 = v32;
                          v46[1].m128i_i64[0] = qvector_reserve(&v46[1], v46[1].m128i_i64[0], v32, 1);
                          v33 = v43.m128i_u64[1];
                          v36 = v46[1].m128i_i64[0];
                          v35 = v43.m128i_i64[0];
                          v32 = v41;
                        }
                        v46[1].m128i_i64[1] = v32;
                        *(_BYTE *)(v36 + v35) = 0;
                        memcpy((void *)(v34 + v46[1].m128i_i64[0]), *(const void **)(v14 + 16), v33);
                      }
                    }
                    v46[0].m128i_i32[2] = 1;
                    v46[3].m128i_i64[1] = 4;
                    v46[4].m128i_i64[0] = v2;
                  }
                  v17 = v46[1].m128i_u64[1];
                  if ( v46[1].m128i_i64[1] > 1uLL )
                  {
                    v18 = v46[0].m128i_i64[0];
                    v40 = v46[0].m128i_i32[2];
                    v19 = (void *)qalloc_or_throw(v46[1].m128i_i64[1]);
                    memcpy(v19, (const void *)v46[1].m128i_i64[0], v17);
                    v20 = a1[14];
                    v21 = v46[2].m128i_i64[1];
                    v22 = v46[4].m128i_i64[0];
                    v23 = _mm_loadl_epi64(&v46[3]);
                    v24 = a1[13];
                    v47 = _mm_loadu_si128((const __m128i *)&v46[4].m128i_u64[1]);
                    v25 = _mm_loadl_epi64((const __m128i *)&v46[3].m128i_u64[1]);
                    v48 = _mm_loadu_si128((const __m128i *)&v46[5].m128i_u64[1]);
                    v49 = _mm_loadu_si128((const __m128i *)&v46[6].m128i_u64[1]);
                    if ( a1[15] < (unsigned __int64)(v20 + 1) )
                    {
                      v45 = v46[2].m128i_i64[1];
                      v44 = v46[4].m128i_i64[0];
                      v43.m128i_i64[1] = v25.m128i_i64[0];
                      v43.m128i_i64[0] = v23.m128i_i64[0];
                      v37 = qvector_reserve(v42, v24, v20 + 1, 120);
                      a1[13] = v37;
                      v24 = v37;
                      v20 = a1[14];
                      v21 = v45;
                      v22 = v44;
                      v25 = _mm_loadl_epi64((const __m128i *)&v43.m128i_u64[1]);
                      v23 = _mm_loadl_epi64(&v43);
                    }
                    v26 = v24 + 120 * v20;
                    *(__m128i *)(v26 + 24) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
                    *(_QWORD *)v26 = v18;
                    *(__m128i *)(v26 + 48) = _mm_unpacklo_epi64(v23, v25);
                    v27 = _mm_loadu_si128(&v47);
                    *(_DWORD *)(v26 + 8) = v40;
                    *(__m128i *)(v26 + 72) = v27;
                    v28 = _mm_loadu_si128(&v48);
                    *(_QWORD *)(v26 + 16) = v19;
                    *(__m128i *)(v26 + 88) = v28;
                    v29 = _mm_loadu_si128(&v49);
                    *(_QWORD *)(v26 + 40) = v21;
                    *(_QWORD *)(v26 + 64) = v22;
                    *(__m128i *)(v26 + 104) = v29;
                    ++a1[14];
                  }
                  v11 = v39;
                }
                if ( v46[1].m128i_i64[0] )
                {
                  v46[1].m128i_i64[1] = 0;
                  qfree(v46[1].m128i_i64[0]);
                }
                v12 = v2++;
              }
              while ( v12 < (unsigned __int64)v70 );
            }
            *((_BYTE *)a1 + 168) = HIBYTE(v64);
            *((_BYTE *)a1 + 169) = v64;
            goto LABEL_31;
          }
        }
        sub_1D740((__int64)"No matching architecture found in Mach-O file at: %s\n", v3);
      }
      else
      {
        sub_1D740((__int64)"Failed to read Mach-O header from: %s\n", v3);
      }
      v11 = 0;
LABEL_31:
      sub_14770((__int64)&v50);
      close_linput(v4);
      return v11;
    }
    sub_1D740((__int64)"Cannot open file: %s.\n", v3);
  }
  else
  {
    sub_1D740((__int64)"Input source is not local file.\n");
  }
  return 0;
}


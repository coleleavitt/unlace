unsigned __int64 __fastcall sub_9FF50(__int64 *a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  const char *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 *v13; // r14
  __m128 *v14; // r15
  __m128 v15; // xmm0
  _QWORD *v16; // rdx
  bool v17; // zf
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(__int64); // rcx
  void (__fastcall *v21)(_QWORD *); // rdx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64); // rdx
  void (__fastcall *v25)(__m128 *); // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int16 v28; // ax
  _WORD *v29; // rdx
  __int64 v30; // rcx
  __m128 *v31; // rax
  unsigned __int64 v32; // rsi
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __m128 v36; // xmm0
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  void (__fastcall *v39)(_QWORD *); // rsi
  void (__fastcall *v40)(_QWORD *); // rax
  _QWORD *v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // r15
  void *v44; // rdi
  __int64 v45; // rbx
  _QWORD *v46; // r15
  _QWORD *v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // rdi
  void (__fastcall *v50)(__m128 *); // rcx
  void (__fastcall *v51)(__m128 *); // rdx
  _QWORD *v52; // rdx
  __int64 v53; // rbx
  _QWORD *v54; // r15
  void *v55; // rdi
  __int64 v56; // rbx
  __m128 *v57; // r15
  _QWORD *v58; // rbp
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r15
  __int64 v69; // rcx
  __int64 v70; // r14
  __int128 v71; // xmm0
  __int64 v72; // rbx
  __int64 v73; // rax
  __m128i v74; // xmm1
  __int64 v75; // rax
  __int64 v76; // rax
  __m128i v77; // xmm1
  __int64 v78; // rax
  __m128i v79; // xmm1
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __m128i v84; // xmm1
  __int64 v85; // rax
  __m128i v86; // xmm1
  __int64 v87; // rax
  __int64 v88; // rax
  __m128i v89; // xmm1
  int v90; // eax
  __int64 v91; // rdi
  __m128i v92; // xmm1
  __int64 v93; // rsi
  _QWORD *v94; // [rsp+68h] [rbp-C0h]
  _QWORD *v95; // [rsp+68h] [rbp-C0h]
  __int64 *v96; // [rsp+68h] [rbp-C0h]
  _QWORD *v97; // [rsp+68h] [rbp-C0h]
  __m128 *v98; // [rsp+68h] [rbp-C0h]
  __m128 *v99; // [rsp+68h] [rbp-C0h]
  __int64 *v100; // [rsp+68h] [rbp-C0h]
  __m128 *v101; // [rsp+68h] [rbp-C0h]
  __int64 v102; // [rsp+70h] [rbp-B8h]
  _QWORD *v103; // [rsp+70h] [rbp-B8h]
  __int64 *v104; // [rsp+70h] [rbp-B8h]
  __int64 v105; // [rsp+70h] [rbp-B8h]
  __int64 *v106; // [rsp+70h] [rbp-B8h]
  __int64 v107; // [rsp+70h] [rbp-B8h]
  __int64 *v109; // [rsp+88h] [rbp-A0h]
  __int64 v110; // [rsp+98h] [rbp-90h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-88h] BYREF
  __m128 *v112; // [rsp+A8h] [rbp-80h]
  __m128i v113; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v114; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v115; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v116; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v117; // [rsp+E8h] [rbp-40h]

  v117 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v7 = "types";
    if ( a3 )
      v7 = "info";
    sub_88B80((__int64)"Loading .debug_%s DIEs\n", v7);
  }
  v110 = 0;
  v8 = *(_QWORD *)(a2 + 88);
  v116 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
LABEL_6:
  while ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, __m128i *, unsigned __int64 *, __m128i *, unsigned __int64 *, __int8 *, __int8 *, __m128i *, unsigned __int64 *, unsigned __int64 *, __int8 *, __int64 *))(v8 + 16))(
             *(_QWORD *)(a2 + 160),
             a3,
             &v113,
             &v113.m128i_u64[1],
             &v114,
             &v114.m128i_u64[1],
             &v114.m128i_i8[10],
             &v114.m128i_i8[12],
             &v115,
             &v115.m128i_u64[1],
             &v116,
             &v114.m128i_i8[14],
             &v110) )
  {
    v9 = *(_QWORD *)(a2 + 160);
    v111 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, __int64 *))(v8 + 24))(v9, 0, a3, &v111, &v110);
    if ( v10 != -1 )
    {
      if ( v10 )
      {
        sub_1E060((__int64)"Error retrieving CU die.");
      }
      else
      {
        v11 = a1[1];
        v12 = a1[2];
        if ( v12 < v11 + 1 )
        {
          v65 = qvector_reserve(a1, 0, v11 + 1, 264);
          v66 = a1[2];
          v67 = a1[1];
          a1[2] = v12;
          v102 = v65;
          v68 = *a1;
          v69 = v67 - 1;
          if ( v69 >= 0 )
          {
            v109 = a1;
            v70 = v65;
            v71 = 0;
            v72 = v69;
            do
            {
              v73 = *(_QWORD *)v68;
              *(_QWORD *)v70 = *(_QWORD *)v68;
              if ( v73 )
                ++*(_DWORD *)(v73 + 8);
              v74 = _mm_loadu_si128((const __m128i *)(v68 + 24));
              *(_WORD *)(v70 + 8) = *(_WORD *)(v68 + 8);
              v75 = *(_QWORD *)(v68 + 16);
              *(__m128i *)(v70 + 24) = v74;
              *(_QWORD *)(v70 + 16) = v75;
              v76 = *(_QWORD *)(v68 + 40);
              v77 = _mm_loadu_si128((const __m128i *)(v68 + 48));
              *(_QWORD *)(v68 + 40) = 0;
              *(_QWORD *)(v70 + 40) = v76;
              *(__m128i *)(v70 + 48) = v77;
              v78 = *(_QWORD *)(v68 + 64);
              v79 = _mm_loadu_si128((const __m128i *)(v68 + 72));
              *(_OWORD *)(v68 + 48) = v71;
              *(__m128i *)(v70 + 72) = v79;
              *(_QWORD *)(v70 + 64) = v78;
              v80 = *(_QWORD *)(v68 + 88);
              *(_QWORD *)(v68 + 64) = 0;
              *(_OWORD *)(v68 + 72) = v71;
              *(_QWORD *)(v70 + 88) = v80;
              v81 = *(_QWORD *)(v68 + 96);
              *(_QWORD *)(v68 + 88) = 0;
              *(_QWORD *)(v70 + 96) = v81;
              v82 = *(_QWORD *)(v68 + 104);
              *(_OWORD *)(v68 + 96) = v71;
              *(_QWORD *)(v70 + 104) = v82;
              *(_QWORD *)(v70 + 112) = *(_QWORD *)(v68 + 112);
              *(_QWORD *)(v70 + 120) = *(_QWORD *)(v68 + 120);
              *(_QWORD *)(v70 + 128) = *(_QWORD *)(v68 + 128);
              *(_QWORD *)(v70 + 136) = *(_QWORD *)(v68 + 136);
              *(_QWORD *)(v70 + 144) = *(_QWORD *)(v68 + 144);
              v83 = *(_QWORD *)(v68 + 152);
              v84 = _mm_loadu_si128((const __m128i *)(v68 + 160));
              *(_QWORD *)(v68 + 152) = 0;
              *(_QWORD *)(v70 + 152) = v83;
              *(__m128i *)(v70 + 160) = v84;
              v85 = *(_QWORD *)(v68 + 176);
              v86 = _mm_loadu_si128((const __m128i *)(v68 + 184));
              *(_OWORD *)(v68 + 160) = v71;
              *(_QWORD *)(v70 + 176) = v85;
              *(__m128i *)(v70 + 184) = v86;
              v87 = *(_QWORD *)(v68 + 200);
              *(_QWORD *)(v68 + 176) = 0;
              *(_OWORD *)(v68 + 184) = v71;
              *(_QWORD *)(v70 + 200) = v87;
              *(_WORD *)(v70 + 208) = *(_WORD *)(v68 + 208);
              *(_DWORD *)(v70 + 212) = *(_DWORD *)(v68 + 212);
              v88 = *(_QWORD *)(v68 + 216);
              *(_QWORD *)(v70 + 216) = v88;
              if ( v88 )
                ++*(_DWORD *)(v88 + 8);
              v89 = _mm_loadu_si128((const __m128i *)(v68 + 224));
              v90 = *(_DWORD *)(v68 + 240);
              v91 = v68;
              --v72;
              v68 += 264;
              v70 += 264;
              *(__m128i *)(v70 - 40) = v89;
              v92 = _mm_loadu_si128((const __m128i *)(v68 - 16));
              *(_DWORD *)(v70 - 24) = v90;
              *(__m128i *)(v70 - 16) = v92;
              sub_1B750(v91);
              v71 = 0;
            }
            while ( v72 != -1 );
            a1 = v109;
            v68 = *v109;
          }
          qfree(v68);
          *a1 = v102;
          a1[2] = v66;
          v11 = a1[1];
        }
        else
        {
          v102 = *a1;
        }
        v13 = (__int64 *)(v102 + 264 * v11);
        sub_84A60((__int64)v13);
        ++a1[1];
        v14 = (__m128 *)operator new(0x20u);
        v14->m128_i32[2] = 1;
        v15 = _mm_loadh_ps((const double *)&v111);
        v14->m128_u64[0] = (unsigned __int64)off_C9528;
        v112 = v14;
        v14[1] = v15;
        v16 = (_QWORD *)*v13;
        if ( *v13 )
        {
          v17 = (*((_DWORD *)v16 + 2))-- == 1;
          if ( v17 )
          {
            v18 = (_QWORD *)*v13;
            v19 = *(_QWORD *)*v13;
            v20 = *(__int64 (__fastcall **)(__int64))v19;
            if ( *(__int64 (__fastcall **)(__int64))v19 == sub_12F10 )
            {
              if ( v18 )
              {
                v21 = *(void (__fastcall **)(_QWORD *))(v19 + 16);
                if ( v21 == sub_80130 )
                {
                  v22 = v18[2];
                  *v18 = off_C9528;
                  if ( v22 )
                  {
                    v23 = v18[3];
                    if ( v23 )
                    {
                      v103 = v18;
                      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v22 + 88) + 480LL))(
                        *(_QWORD *)(v22 + 160),
                        v23,
                        8);
                      v18 = v103;
                    }
                  }
                  operator delete(v18, 0x20u);
                  v14 = v112;
                }
                else
                {
                  v21((_QWORD *)*v13);
                  v14 = v112;
                }
              }
              goto LABEL_20;
            }
            goto LABEL_98;
          }
        }
        while ( 1 )
        {
LABEL_20:
          *v13 = (__int64)v14;
          if ( v14 && !v14->m128_i32[2] )
          {
            v24 = *(__int64 (__fastcall **)(__int64))v14->m128_u64[0];
            if ( v24 == sub_12F10 )
            {
              v25 = *(void (__fastcall **)(__m128 *))(v14->m128_u64[0] + 16);
              if ( (char *)v25 == (char *)sub_80130 )
              {
                v14->m128_u64[0] = (unsigned __int64)off_C9528;
                v26 = v14[1].m128_u64[0];
                if ( v26 )
                {
                  v27 = v14[1].m128_u64[1];
                  if ( v27 )
                    (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)(v26 + 88) + 480LL))(
                      *(_QWORD *)(v26 + 160),
                      v27,
                      8);
                }
                operator delete(v14, 0x20u);
              }
              else
              {
                v25(v14);
              }
            }
            else
            {
              v24((__int64)v14);
            }
          }
          if ( !sub_98B70(v13) )
          {
            if ( !under_debugger )
              interr(30474);
LABEL_107:
            BUG();
          }
          v28 = sub_97BF0((__int64)v13);
          v29 = *(_WORD **)a4;
          v30 = *(_QWORD *)a4 + 2LL * *(_QWORD *)(a4 + 8);
          if ( *(_QWORD *)a4 == v30 )
            break;
          while ( v28 != *v29 )
          {
            if ( (_WORD *)v30 == ++v29 )
              goto LABEL_76;
          }
          if ( (_WORD *)v30 == v29 )
            break;
          v31 = (__m128 *)operator new(0xC0u);
          v32 = v116;
          *(__m128 *)((char *)&v31[5] + 8) = 0;
          *(__m128 *)((char *)&v31[6] + 8) = 0;
          v33 = _mm_load_si128(&v113);
          v31[7].m128_u64[1] = 0xFFFFFFFFLL;
          v31[1] = (__m128)v33;
          v34 = _mm_load_si128(&v114);
          v31->m128_i32[2] = 1;
          v31[2] = (__m128)v34;
          v35 = _mm_load_si128(&v115);
          v31->m128_u64[0] = (unsigned __int64)&off_C71D8;
          v31[3] = (__m128)v35;
          v31[8].m128_u64[0] = 0;
          v36 = _mm_loadh_ps((const double *)&v116);
          v31[10].m128_u64[0] = (unsigned __int64)&v31[9];
          v31[9].m128_i32[0] = 0;
          v31[9].m128_u64[1] = 0;
          v31[10].m128_u64[1] = (unsigned __int64)&v31[9];
          v31[11].m128_u64[0] = 0;
          v31[11].m128_i8[8] = 0;
          v31[11].m128_i32[3] = 0;
          v31[4].m128_u64[0] = v32;
          v112 = v31;
          *(__m128 *)((char *)v31 + 72) = v36;
          v37 = v13[27];
          if ( v37 )
          {
            v17 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v17 )
            {
              v38 = (_QWORD *)v13[27];
              v39 = *(void (__fastcall **)(_QWORD *))*v38;
              if ( v39 == sub_15E30 )
              {
                if ( v38 )
                {
                  v40 = *(void (__fastcall **)(_QWORD *))(*v38 + 16LL);
                  if ( v40 == sub_15D70 )
                  {
                    v41 = (_QWORD *)v38[16];
                    *v38 = &off_C71D8;
                    if ( v41 )
                    {
                      if ( v41[2] )
                      {
                        v94 = v38;
                        v104 = a1;
                        v42 = v41[2];
                        v43 = v41;
                        do
                        {
                          sub_80300(*(_QWORD **)(v42 + 24));
                          v44 = (void *)v42;
                          v42 = *(_QWORD *)(v42 + 16);
                          operator delete(v44, 0x30u);
                        }
                        while ( v42 );
                        v38 = v94;
                        a1 = v104;
                        v41 = v43;
                      }
                      v95 = v38;
                      operator delete(v41, 0x30u);
                      v38 = v95;
                    }
                    if ( v38[19] )
                    {
                      v105 = a2;
                      v96 = a1;
                      v45 = v38[19];
                      v46 = v38;
                      do
                      {
                        v47 = (_QWORD *)v45;
                        sub_80A30(*(_QWORD **)(v45 + 24));
                        v48 = *(_QWORD *)(v45 + 32);
                        v45 = *(_QWORD *)(v45 + 16);
                        if ( v48 )
                        {
                          v47[5] = 0;
                          qfree(v48);
                        }
                        operator delete(v47, 0x48u);
                      }
                      while ( v45 );
                      a1 = v96;
                      a2 = v105;
                      v38 = v46;
                    }
                    v49 = v38[12];
                    if ( v49 )
                    {
                      v38[13] = 0;
                      v97 = v38;
                      qfree(v49);
                      v38 = v97;
                    }
                    operator delete(v38, 0xC0u);
                    v31 = v112;
                  }
                  else
                  {
                    v40((_QWORD *)v13[27]);
                    v31 = v112;
                  }
                }
              }
              else
              {
                v39((_QWORD *)v13[27]);
                v31 = v112;
              }
            }
          }
          v13[27] = (__int64)v31;
          if ( v31 && !v31->m128_i32[2] )
          {
            v50 = *(void (__fastcall **)(__m128 *))v31->m128_u64[0];
            if ( (char *)v50 == (char *)sub_15E30 )
            {
              v51 = *(void (__fastcall **)(__m128 *))(v31->m128_u64[0] + 16);
              if ( (char *)v51 == (char *)sub_15D70 )
              {
                v52 = (_QWORD *)v31[8].m128_u64[0];
                v31->m128_u64[0] = (unsigned __int64)&off_C71D8;
                if ( v52 )
                {
                  if ( v52[2] )
                  {
                    v98 = v31;
                    v106 = a1;
                    v53 = v52[2];
                    v54 = v52;
                    do
                    {
                      sub_80300(*(_QWORD **)(v53 + 24));
                      v55 = (void *)v53;
                      v53 = *(_QWORD *)(v53 + 16);
                      operator delete(v55, 0x30u);
                    }
                    while ( v53 );
                    v31 = v98;
                    a1 = v106;
                    v52 = v54;
                  }
                  v99 = v31;
                  operator delete(v52, 0x30u);
                  v31 = v99;
                }
                if ( v31[9].m128_u64[1] )
                {
                  v107 = a2;
                  v100 = a1;
                  v56 = v31[9].m128_i64[1];
                  v57 = v31;
                  do
                  {
                    v58 = (_QWORD *)v56;
                    sub_80A30(*(_QWORD **)(v56 + 24));
                    v59 = *(_QWORD *)(v56 + 32);
                    v56 = *(_QWORD *)(v56 + 16);
                    if ( v59 )
                    {
                      v58[5] = 0;
                      qfree(v59);
                    }
                    operator delete(v58, 0x48u);
                  }
                  while ( v56 );
                  a1 = v100;
                  a2 = v107;
                  v31 = v57;
                }
                v60 = v31[6].m128_i64[0];
                if ( v60 )
                {
                  v31[6].m128_u64[1] = 0;
                  v101 = v31;
                  qfree(v60);
                  v31 = v101;
                }
                operator delete(v31, 0xC0u);
              }
              else
              {
                v51(v31);
              }
            }
            else
            {
              v50(v31);
            }
          }
          if ( (debug & 0x400000) == 0 )
            goto LABEL_6;
          v93 = v13[28] & 0x7FFFFFFFFFFFFFFFLL;
          if ( v93 && v13[28] != -1 )
          {
            sub_88B80((__int64)"CU DIE at %lld\n", v93);
            goto LABEL_6;
          }
          if ( under_debugger )
            goto LABEL_107;
          v18 = (_QWORD *)interr(30478);
LABEL_98:
          v20((__int64)v18);
          v14 = v112;
        }
LABEL_76:
        if ( (debug & 0x400000) != 0 )
          sub_88B80((__int64)"Unexpected tag: %d", v28);
        v61 = a1[1];
        if ( v61 )
        {
          v62 = v61 - 1;
          v63 = *a1;
          a1[1] = v62;
          sub_1B750(v63 + 264 * v62);
        }
      }
    }
  }
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"Done collecting top level DIEs. Got %zu\n", a1[1]);
  return v117 - __readfsqword(0x28u);
}

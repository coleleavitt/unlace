__int64 __fastcall sub_2ECE0(__int64 a1, signed __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  const __m128i *v6; // rdi
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(__int64, int), _QWORD); // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, int); // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  int v17; // r15d
  unsigned __int8 (__fastcall *v18)(__int64, __int64 (__fastcall *)(__int64, int), _QWORD); // rax
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // r15
  const __m128i *v24; // r11
  __m128i v25; // xmm1
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rdx
  __m128i *v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r8
  __m128i *v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm1
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(__int64, int); // r15
  __int64 v46; // rsi
  __m128i v47; // xmm0
  __int64 v49; // r11
  __m128i *v50; // rax
  __m128i *v51; // rdx
  __int64 v52; // rax
  __m128i *v53; // r10
  __m128i v54; // xmm0
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 (__fastcall *v57)(__int64, int); // r11
  __int64 v58; // rdx
  __int64 v59; // r8
  __m128i v60; // xmm1
  __int64 v61; // r8
  __m128i v62; // xmm1
  __int64 v63; // r8
  __int64 v64; // r8
  __m128i v65; // xmm1
  bool v66; // cf
  __int64 v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // r10
  __m128i v70; // xmm0
  __int64 v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __m128i v75; // xmm1
  __int64 v76; // r8
  __m128i v77; // xmm1
  __int64 v78; // r8
  __int64 v79; // r8
  __m128i v80; // xmm1
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // [rsp+8h] [rbp-1A8h]
  __int64 v87; // [rsp+10h] [rbp-1A0h]
  unsigned __int64 v88; // [rsp+18h] [rbp-198h]
  __int64 v89; // [rsp+18h] [rbp-198h]
  __m128i v90; // [rsp+20h] [rbp-190h] BYREF
  _QWORD *v91; // [rsp+30h] [rbp-180h]
  int v92; // [rsp+3Ch] [rbp-174h]
  __int64 v93; // [rsp+40h] [rbp-170h]
  __int64 v94; // [rsp+48h] [rbp-168h]
  __m128i v95; // [rsp+50h] [rbp-160h] BYREF
  __m128i v96; // [rsp+60h] [rbp-150h] BYREF
  __int64 v97; // [rsp+70h] [rbp-140h]
  __m128i *v98; // [rsp+78h] [rbp-138h]
  __m128i v99; // [rsp+80h] [rbp-130h] BYREF
  int v100; // [rsp+90h] [rbp-120h]
  char v101; // [rsp+97h] [rbp-119h]
  _QWORD *v102; // [rsp+98h] [rbp-118h]
  int v103; // [rsp+A0h] [rbp-110h]
  int v104; // [rsp+A4h] [rbp-10Ch]
  _QWORD **v105; // [rsp+A8h] [rbp-108h]
  __int64 v106; // [rsp+B0h] [rbp-100h]
  __int64 (__fastcall *v107)(__int64, int); // [rsp+B8h] [rbp-F8h]
  __int64 v108; // [rsp+C0h] [rbp-F0h]
  __int64 (__fastcall *v109)(__int64, int); // [rsp+C8h] [rbp-E8h]
  _DWORD v110[2]; // [rsp+D8h] [rbp-D8h] BYREF
  unsigned __int64 v111; // [rsp+E0h] [rbp-D0h]
  __int64 v112; // [rsp+E8h] [rbp-C8h]
  _QWORD v113[2]; // [rsp+F0h] [rbp-C0h] BYREF
  _QWORD v114[2]; // [rsp+100h] [rbp-B0h] BYREF
  __m128i v115; // [rsp+110h] [rbp-A0h] BYREF
  __m128i v116; // [rsp+120h] [rbp-90h] BYREF
  __int64 v117; // [rsp+130h] [rbp-80h]
  __int64 v118; // [rsp+138h] [rbp-78h]
  __m128i v119; // [rsp+140h] [rbp-70h] BYREF
  __int64 v120; // [rsp+150h] [rbp-60h]
  __int64 v121; // [rsp+158h] [rbp-58h]
  __m128i v122; // [rsp+160h] [rbp-50h]
  unsigned __int64 v123; // [rsp+178h] [rbp-38h]

  v94 = a1;
  v109 = (__int64 (__fastcall *)(__int64, int))a2;
  v95.m128i_i64[1] = a3;
  v104 = a4;
  v102 = a5;
  v123 = __readfsqword(0x28u);
  v6 = (const __m128i *)v113;
  v107 = (__int64 (__fastcall *)(__int64, int))v113;
  sub_28A40(v113, a2);
  LODWORD(v108) = *(_DWORD *)(a2 + 204);
  v97 = a3 + 8;
  v103 = v108 - 1;
  if ( (int)v108 - 1 < 0 )
  {
LABEL_61:
    *(_BYTE *)(v94 + 24) = 0;
    goto LABEL_51;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = v7++;
    v9 = *((_QWORD *)v109 + 35);
    hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int), _QWORD))get_hexdsp(v6, a2);
    v6 = (const __m128i *)(&qword_D0 + 5);
    a2 = (signed __int64)v107;
    if ( hexdsp(213, v107, (unsigned int)v7) )
      goto LABEL_3;
    a2 = (signed __int64)sub_BA60;
    v11 = *(_QWORD *)(*v102 + 8LL * (v7 + v104 - 1));
    v100 = v11;
    v112 = v11;
    v101 = BYTE4(v11);
    v12 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v109 + 104LL);
    if ( v12 != sub_BA60 )
      break;
    if ( *((_QWORD *)v109 + 10) )
    {
      v6 = *((const __m128i **)v109 + 9);
      v13 = v6->m128i_i32[6 * v7 + 2];
      goto LABEL_8;
    }
LABEL_3:
    if ( v103 < v7 )
      goto LABEL_61;
  }
  v6 = (const __m128i *)v109;
  a2 = (unsigned int)v7;
  v13 = (int)v12((__int64)v109, v7);
LABEL_8:
  if ( (int)v13 <= 0 )
    goto LABEL_3;
  v14 = 3 * v8;
  v15 = 0;
  v99.m128i_i64[1] = v9 + 8 * v14;
  v108 = 24LL * v7;
  v106 = (__int64)v109 + 408;
  v105 = (_QWORD **)v114;
  while ( 1 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v109 + 120LL);
    if ( v16 == sub_BAA0 )
    {
      a2 = v108;
      v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v109 + 9) + v108) + 4 * v15);
    }
    else
    {
      v6 = (const __m128i *)v109;
      a2 = (unsigned int)v7;
      v17 = v16((__int64)v109, v7, v15);
    }
    if ( v17 <= 0 )
      goto LABEL_46;
    v6 = (const __m128i *)v109;
    if ( v17 > *((_DWORD *)v109 + 51) )
      goto LABEL_46;
    v18 = (unsigned __int8 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int), _QWORD))get_hexdsp(v109, a2);
    v6 = (const __m128i *)(&qword_D0 + 5);
    a2 = (signed __int64)v107;
    if ( v18(213, v107, (unsigned int)v17) )
      goto LABEL_46;
    v6 = (const __m128i *)v109;
    v110[0] = v17;
    v110[1] = v7;
    v19 = v106;
    v20 = *((_QWORD *)v109 + 52);
    if ( !v20 )
      goto LABEL_26;
    a2 = (signed __int64)v109;
    do
    {
      while ( v17 <= *(_DWORD *)(v20 + 32) && (v17 != *(_DWORD *)(v20 + 32) || v7 <= *(_DWORD *)(v20 + 36)) )
      {
        v19 = v20;
        v20 = *(_QWORD *)(v20 + 16);
        if ( !v20 )
          goto LABEL_22;
      }
      v20 = *(_QWORD *)(v20 + 24);
    }
    while ( v20 );
LABEL_22:
    if ( v106 == v19 || v17 < *(_DWORD *)(v19 + 32) || v17 == *(_DWORD *)(v19 + 32) && v7 < *(_DWORD *)(v19 + 36) )
    {
LABEL_26:
      a2 = v19;
      v114[0] = v110;
      v6 = (const __m128i *)((char *)v109 + 400);
      v19 = sub_2A220((_QWORD *)v109 + 50, v19, (__int64)&unk_78AE8, v105);
    }
    if ( *(_BYTE *)(v19 + 48) )
      goto LABEL_46;
    v21 = v17 - 1;
    v22 = *((_QWORD *)v109 + 35);
    v111 = *(_QWORD *)(*v102 + 8LL * (v17 - 1 + v104));
    a2 = HIDWORD(v111);
    if ( !BYTE4(v111) )
      goto LABEL_46;
    if ( v101 )
      break;
    v45 = v109;
    a2 = (unsigned int)v111;
    v98 = (__m128i *)(v22 + 24LL * v21);
    v99.m128i_i32[0] = v111;
    v6 = *((const __m128i **)v109 + 24);
    if ( !sub_263A0((__int64)v6, v111) )
    {
      sub_64B50(
        (unsigned int)&v116,
        *((_QWORD *)v45 + 22),
        (unsigned int)"edge %a[%d].%d -> %a[%d]: dst state not found",
        v98->m128i_i64[0],
        v98[1].m128i_i32[0],
        v99.m128i_i32[0]);
      v46 = v94;
      v47 = _mm_loadu_si128((const __m128i *)&v116.m128i_u64[1]);
      *(_QWORD *)v94 = v116.m128i_i64[0];
      *(_BYTE *)(v46 + 24) = 1;
      *(__m128i *)(v46 + 8) = v47;
      goto LABEL_51;
    }
LABEL_46:
    if ( ++v15 == v13 )
      goto LABEL_3;
  }
  v96.m128i_i64[0] = v19;
  v98 = (__m128i *)(v22 + 24LL * v21);
  if ( v100 == (_DWORD)v111 )
    goto LABEL_46;
  v95.m128i_i32[0] = v111;
  sub_2E8A0((__int64)v105, *((_QWORD *)v109 + 24) + 128LL, v111, v100, *(_DWORD *)(*((_QWORD *)v109 + 24) + 112LL));
  v23 = v114[0];
  v99.m128i_i64[0] = v114[1];
  v24 = v98;
  v25 = _mm_loadl_epi64(&v115);
  v26 = v96.m128i_i64[0];
  if ( v115.m128i_i8[8] )
  {
    v81 = v94;
    v82 = v99.m128i_i64[0];
    *(_QWORD *)v94 = v114[0];
    *(_QWORD *)(v81 + 8) = v82;
    *(_BYTE *)(v81 + 24) = 1;
    *(_QWORD *)(v81 + 16) = v25.m128i_i64[0];
    goto LABEL_51;
  }
  if ( v99.m128i_i64[0] > 1uLL )
  {
    v27 = *(_QWORD *)(v95.m128i_i64[1] + 16);
    if ( v27 )
    {
      v28 = v97;
      a2 = *(unsigned int *)(v99.m128i_i64[1] + 16);
      do
      {
        while ( 1 )
        {
          v29 = *(_QWORD *)(v27 + 16);
          v30 = *(_QWORD *)(v27 + 24);
          if ( (int)a2 > *(_DWORD *)(v27 + 32) )
            break;
          v28 = v27;
          v27 = *(_QWORD *)(v27 + 16);
          if ( !v29 )
            goto LABEL_38;
        }
        v27 = *(_QWORD *)(v27 + 24);
      }
      while ( v30 );
LABEL_38:
      if ( v28 == v97 || (v31 = &v116, (int)a2 < *(_DWORD *)(v28 + 32)) )
      {
LABEL_40:
        a2 = v28;
        v93 = v96.m128i_i64[0];
        v96.m128i_i64[0] = (__int64)v98;
        v116.m128i_i64[0] = v99.m128i_i64[1] + 16;
        v98 = &v116;
        v95.m128i_i64[0] = v25.m128i_i64[0];
        v32 = sub_2E490((_QWORD *)v95.m128i_i64[1], v28, (__int64)&unk_78AE8, (signed int **)&v116);
        v26 = v93;
        v24 = (const __m128i *)v96.m128i_i64[0];
        v28 = v32;
        v25 = _mm_loadl_epi64(&v95);
        v31 = v98;
      }
      v33 = _mm_loadl_epi64(&v99);
      v99.m128i_i64[0] = v28 + 40;
      v34 = _mm_unpacklo_epi64(v33, v25);
      v116 = _mm_loadu_si128(v24);
      v117 = v24[1].m128i_i64[0];
      v35 = *(_QWORD *)(v26 + 40);
      v118 = v35;
      v119 = _mm_loadu_si128((const __m128i *)v99.m128i_i64[1]);
      v36 = *(_QWORD *)(v99.m128i_i64[1] + 16);
      v121 = v23;
      v120 = v36;
      v122 = v34;
      v37 = *(_QWORD *)(v28 + 48);
      v38 = *(_QWORD *)(v28 + 40);
      v39 = *(_QWORD *)(v28 + 56);
      v6 = (const __m128i *)(v37 + 1);
      if ( (unsigned __int64)v31 >= v38 && (a2 = v38 + 80 * v39, (unsigned __int64)v31 < a2) )
      {
        v121 = 0;
        v49 = v116.m128i_i64[0];
        v122 = 0;
        v98 = (__m128i *)v116.m128i_i64[1];
        LODWORD(v93) = v117;
        v96.m128i_i64[0] = v119.m128i_i64[1];
        v95.m128i_i64[0] = v119.m128i_i64[0];
        a2 = (unsigned int)v120;
        v92 = v120;
        if ( v39 < (unsigned __int64)v6 )
        {
          v86 = v35;
          v87 = v116.m128i_i64[0];
          v88 = v39;
          v91 = (_QWORD *)v28;
          v90 = v34;
          v68 = qvector_reserve(v99.m128i_i64[0], 0, v37 + 1, 80);
          v69 = v91;
          v70 = _mm_load_si128(&v90);
          v71 = v91[6];
          v72 = v91[7];
          v91[7] = v88;
          v6 = (const __m128i *)v69[5];
          a2 = v71 - 1;
          if ( a2 >= 0 )
          {
            v73 = v68;
            do
            {
              v74 = v6[1].m128i_i64[0];
              v75 = _mm_loadu_si128(v6);
              v73 += 80;
              v6 += 5;
              *(_QWORD *)(v73 - 64) = v74;
              v76 = v6[-4].m128i_i64[1];
              *(__m128i *)(v73 - 80) = v75;
              v77 = _mm_loadu_si128(v6 - 3);
              *(_QWORD *)(v73 - 56) = v76;
              v78 = v6[-2].m128i_i64[0];
              *(__m128i *)(v73 - 48) = v77;
              *(_QWORD *)(v73 - 32) = v78;
              v79 = v6[-2].m128i_i64[1];
              v80 = _mm_loadu_si128(v6 - 1);
              v6[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v73 - 24) = v79;
              *(__m128i *)(v73 - 16) = v80;
              v6[-1].m128i_i64[1] = 0;
              v66 = a2-- == 0;
            }
            while ( !v66 );
            v6 = (const __m128i *)v69[5];
          }
          v89 = v72;
          v91 = v69;
          v99.m128i_i64[0] = v68;
          v90 = v70;
          qfree(v6);
          v28 = (__int64)v91;
          v38 = v99.m128i_i64[0];
          v35 = v86;
          v37 = v91[6];
          v91[5] = v99.m128i_i64[0];
          *(_QWORD *)(v28 + 56) = v89;
          v49 = v87;
          v34 = _mm_load_si128(&v90);
        }
        v50 = (__m128i *)(80 * v37 + v38);
        v51 = v98;
        v50->m128i_i64[0] = v49;
        v50->m128i_i64[1] = (__int64)v51;
        LODWORD(v51) = v93;
        v50[1].m128i_i64[1] = v35;
        v50[1].m128i_i32[0] = (int)v51;
        v50[2].m128i_i64[0] = v95.m128i_i64[0];
        v50[2].m128i_i64[1] = v96.m128i_i64[0];
        LODWORD(v51) = v92;
        v50[3].m128i_i64[1] = v23;
        v50[3].m128i_i32[0] = (int)v51;
        v50[4] = v34;
      }
      else
      {
        if ( v39 < (unsigned __int64)v6 )
        {
          v95.m128i_i64[0] = *(_QWORD *)(v28 + 56);
          v98 = (__m128i *)v28;
          v96 = v34;
          v52 = qvector_reserve(v99.m128i_i64[0], 0, v37 + 1, 80);
          v53 = v98;
          v54 = _mm_load_si128(&v96);
          v55 = v98[3].m128i_i64[0];
          v56 = v98[3].m128i_i64[1];
          v98[3].m128i_i64[1] = v95.m128i_i64[0];
          v6 = (const __m128i *)v53[2].m128i_i64[1];
          a2 = v55 - 1;
          if ( a2 >= 0 )
          {
            v57 = v109;
            v58 = v52;
            do
            {
              v59 = v6[1].m128i_i64[0];
              v60 = _mm_loadu_si128(v6);
              v58 += 80;
              v6 += 5;
              *(_QWORD *)(v58 - 64) = v59;
              v61 = v6[-4].m128i_i64[1];
              *(__m128i *)(v58 - 80) = v60;
              v62 = _mm_loadu_si128(v6 - 3);
              *(_QWORD *)(v58 - 56) = v61;
              v63 = v6[-2].m128i_i64[0];
              *(__m128i *)(v58 - 48) = v62;
              *(_QWORD *)(v58 - 32) = v63;
              v64 = v6[-2].m128i_i64[1];
              v65 = _mm_loadu_si128(v6 - 1);
              v6[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v58 - 24) = v64;
              *(__m128i *)(v58 - 16) = v65;
              v6[-1].m128i_i64[1] = 0;
              v66 = a2-- == 0;
            }
            while ( !v66 );
            v109 = v57;
            v6 = (const __m128i *)v53[2].m128i_i64[1];
          }
          v95.m128i_i64[0] = v56;
          v98 = v53;
          v99.m128i_i64[0] = v52;
          v96 = v54;
          qfree(v6);
          v28 = (__int64)v98;
          v38 = v99.m128i_i64[0];
          v67 = v95.m128i_i64[0];
          v34 = _mm_load_si128(&v96);
          v98[2].m128i_i64[1] = v99.m128i_i64[0];
          v37 = *(_QWORD *)(v28 + 48);
          *(_QWORD *)(v28 + 56) = v67;
        }
        v40 = (__m128i *)(80 * v37 + v38);
        v41 = v117;
        *v40 = _mm_load_si128(&v116);
        v42 = _mm_load_si128(&v119);
        v40[1].m128i_i64[0] = v41;
        v43 = v118;
        v40[2] = v42;
        v40[1].m128i_i64[1] = v43;
        v44 = v120;
        v40[3].m128i_i64[1] = v23;
        v40[3].m128i_i64[0] = v44;
        v40[4] = v34;
      }
      ++*(_QWORD *)(v28 + 48);
      goto LABEL_46;
    }
    v28 = v97;
    goto LABEL_40;
  }
  sub_64B50(
    (unsigned int)&v116,
    *((_QWORD *)v109 + 22),
    (unsigned int)"path %a[%d]->%a[%d] is invalid (min %d)",
    v98->m128i_i64[0],
    v95.m128i_i32[0],
    *(_QWORD *)v99.m128i_i64[1]);
  v83 = v94;
  v84 = v116.m128i_i64[0];
  v85 = _mm_loadu_si128((const __m128i *)&v116.m128i_u64[1]);
  *(_BYTE *)(v94 + 24) = 1;
  *(_QWORD *)v83 = v84;
  *(__m128i *)(v83 + 8) = v85;
  if ( v23 )
    qfree(v23);
LABEL_51:
  qfree(v113[0]);
  return v94;
}


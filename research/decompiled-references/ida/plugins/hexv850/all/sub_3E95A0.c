__int64 __fastcall sub_3E95A0(__int64 a1, __int64 a2, int a3, int a4, signed int a5)
{
  __int16 v5; // ax
  unsigned int v6; // r15d
  const char *v8; // r13
  __m128i *v12; // rax
  __m128i si128; // xmm1
  __m128i v14; // xmm0
  int v15; // eax
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  int v18; // r15d
  unsigned int v19; // r14d
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  _QWORD *v27; // r14
  unsigned __int64 v28; // rdx
  _QWORD *v29; // r13
  _QWORD *v30; // r15
  _QWORD *v31; // rsi
  unsigned __int64 v32; // rcx
  _QWORD *v33; // rax
  bool v34; // al
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // r14d
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // r8
  char *v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rax
  __m128i v44; // xmm1
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // r13
  __int64 v51; // r8
  _QWORD *v52; // rcx
  _QWORD *v53; // rdi
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // r13d
  __int16 v58; // ax
  __int64 v59; // rcx
  __int64 v60; // rcx
  int tinfo_size; // eax
  _BYTE *v62; // rsi
  _BYTE *v63; // rsi
  _BYTE *v64; // rsi
  unsigned __int16 v65; // ax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r15
  int v70; // eax
  _BYTE *v71; // rsi
  int v72; // eax
  _BYTE *v73; // rsi
  int v74; // eax
  _BYTE *v75; // rsi
  int v76; // eax
  _BYTE *v77; // rsi
  unsigned __int16 v78; // ax
  _BYTE *v79; // rsi
  __int64 v80; // rdx
  _BYTE *v81; // rsi
  char *v82; // r13
  int v83; // r8d
  int v84; // eax
  int v85; // eax
  unsigned __int16 v86; // ax
  _BYTE *v87; // rsi
  __int64 v88; // rdx
  _BYTE *v89; // rsi
  int v90; // r8d
  _BYTE *v91; // rsi
  __int64 v92; // rcx
  _DWORD *v93; // rax
  _DWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r13
  unsigned int v98; // [rsp+14h] [rbp-23Ch]
  int v99; // [rsp+14h] [rbp-23Ch]
  int v100; // [rsp+14h] [rbp-23Ch]
  int v101; // [rsp+18h] [rbp-238h]
  int v102; // [rsp+18h] [rbp-238h]
  size_t n; // [rsp+38h] [rbp-218h]
  size_t na; // [rsp+38h] [rbp-218h]
  __int64 v107; // [rsp+58h] [rbp-1F8h] BYREF
  unsigned __int8 v108[16]; // [rsp+60h] [rbp-1F0h] BYREF
  _DWORD *v109; // [rsp+70h] [rbp-1E0h] BYREF
  __int128 v110; // [rsp+78h] [rbp-1D8h]
  __int64 v111[2]; // [rsp+90h] [rbp-1C0h] BYREF
  __int64 *v112; // [rsp+A0h] [rbp-1B0h] BYREF
  __int128 v113; // [rsp+A8h] [rbp-1A8h]
  __int64 v114; // [rsp+C0h] [rbp-190h]
  __int64 v115; // [rsp+C8h] [rbp-188h]
  __int64 *v116; // [rsp+D0h] [rbp-180h] BYREF
  __int128 v117; // [rsp+D8h] [rbp-178h]
  __int64 v118; // [rsp+F0h] [rbp-160h] BYREF
  __int64 v119; // [rsp+F8h] [rbp-158h]
  __int64 v120; // [rsp+100h] [rbp-150h]
  __m128i v121; // [rsp+108h] [rbp-148h] BYREF
  _BYTE v122[24]; // [rsp+120h] [rbp-130h] BYREF
  _BYTE *v123; // [rsp+140h] [rbp-110h]
  __int64 v124; // [rsp+148h] [rbp-108h]
  unsigned __int64 v125; // [rsp+150h] [rbp-100h]
  _BYTE v126[24]; // [rsp+170h] [rbp-E0h] BYREF
  _BYTE *v127; // [rsp+190h] [rbp-C0h]
  __int64 v128; // [rsp+198h] [rbp-B8h]
  unsigned __int64 v129; // [rsp+1A0h] [rbp-B0h]
  char v130; // [rsp+1C0h] [rbp-90h] BYREF
  char v131; // [rsp+210h] [rbp-40h] BYREF
  unsigned __int64 v132; // [rsp+218h] [rbp-38h]

  v5 = *(_WORD *)(a1 + 48);
  v132 = __readfsqword(0x28u);
  v6 = 0;
  if ( *(_WORD *)(a2 + 8) != v5 )
    return v6;
  v8 = *(const char **)a2;
  v109 = nullptr;
  v110 = 0;
  if ( v8 )
  {
    n = strlen(v8);
    *(_QWORD *)&v110 = n + 1;
    v109 = (_DWORD *)qvector_reserve();
    memmove(v109, v8, n);
    *((_BYTE *)v109 + n) = 0;
  }
  if ( *(_WORD *)(a1 + 842) != 4 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCE5Cu, 0.0);
    goto LABEL_202;
  }
  v12 = (__m128i *)v122;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
  v14.m128i_i64[0] = 0;
  v107 = 1;
  do
  {
    v12->m128i_i32[1] = -1;
    v12 += 5;
    v12[-5].m128i_i16[0] = 0;
    v12[-5].m128i_i16[1] = 0;
    v12[-5].m128i_i64[1] = 0;
    v12[-4] = si128;
    v12[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v12[-3] + 8) = 0;
    v12[-2].m128i_i32[2] = 0;
    v12[-1].m128i_i64[0] = 0;
    v12[-1].m128i_i32[2] = 0;
  }
  while ( v12 != (__m128i *)&v131 );
  v15 = *(_DWORD *)(a2 + 12);
  v111[0] = 0;
  v111[1] = 0;
  v112 = nullptr;
  v114 = 0;
  v115 = 0;
  v116 = nullptr;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v113 = 0;
  v117 = 0;
  v121 = 0;
  if ( (v15 & 0x20) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 528LL) == a3 )
  {
    v16 = a3;
LABEL_11:
    sub_1D14D0(a1, 3u, 4, 0, 0x3BEA45E214ADDC55LL, v16, 4);
    goto LABEL_12;
  }
  if ( (v15 & 0x40) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 528LL) == a4 )
  {
    v16 = a4;
    goto LABEL_11;
  }
  if ( (v15 & 0x80u) != 0 )
  {
    v16 = a5;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 832) + 528LL) == a5 )
      goto LABEL_11;
  }
LABEL_12:
  v17 = *(_WORD *)(a1 + 48);
  if ( v17 > 0x6Cu )
  {
    if ( v17 == 224 )
    {
      sub_11BE50((__int64)v122, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 72), 4, -1, 0);
      v91 = v123;
      if ( v125 <= 3 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v91 = v123;
      }
      v124 = 4;
      *(_WORD *)v91 = 24948;
      v91[2] = 103;
      v123[3] = 0;
      copy_tinfo_t();
      v18 = 0;
      v19 = -1;
      v20 = 1;
    }
    else if ( v17 <= 0xE0u )
    {
      if ( v17 != 222 )
        goto LABEL_21;
      sub_11BE50((__int64)v122, *(_QWORD *)(a1 + 832), *(unsigned __int16 *)(a1 + 88), 4, -1, 0);
      v63 = v123;
      if ( v125 <= 6 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v63 = v123;
      }
      v124 = 7;
      *(_DWORD *)v63 = 1231512946;
      *((_WORD *)v63 + 2) = 12612;
      v123[6] = 0;
      copy_tinfo_t();
      sub_11BE50((__int64)v126, *(_QWORD *)(a1 + 832), *(unsigned __int16 *)(a1 + 90), 4, -1, 0);
      v64 = v127;
      if ( v129 <= 6 )
      {
        v127 = (_BYTE *)qvector_reserve();
        v64 = v127;
      }
      v128 = 7;
      *(_DWORD *)v64 = 1231512946;
      *((_WORD *)v64 + 2) = 12868;
      v127[6] = 0;
      copy_tinfo_t();
      v18 = 0;
      v19 = -1;
      v20 = 2;
    }
    else
    {
      if ( (unsigned __int16)(v17 - 255) > 3u )
        goto LABEL_21;
      v55 = *(_QWORD *)(a1 + 832);
      v56 = *(_QWORD *)(v55 + 584);
      if ( !v56 )
        sub_3E4140(0.0);
      v57 = *(_DWORD *)(*(_QWORD *)(v55 + 576) + 4 * v56 - 4);
      *(_QWORD *)(v55 + 584) = v56 - 1;
      v58 = *(_WORD *)(a1 + 48);
      if ( ((v58 - 255) & 0xFFFD) != 0 )
      {
        v92 = 0xFFFF;
        if ( v58 == 256 )
          v92 = 255;
        sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v92, 0x3BEA45E214ADDC55LL, v57, 0);
        sub_3E8420(a1, 0x24u, *(unsigned __int16 *)(a1 + 842), a3, v57, 3, 0);
        copy_tinfo_t();
      }
      else
      {
        v59 = 0x7FFF;
        if ( v58 == 255 )
          v59 = 127;
        sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v59, 0x3BEA45E214ADDC55LL, v57, 0);
        sub_3E8420(a1, 0x26u, *(unsigned __int16 *)(a1 + 842), a3, v57, 3, 0);
        v60 = -32768;
        if ( *(_WORD *)(a1 + 48) == 255 )
          v60 = -128;
        sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v60, 0x3BEA45E214ADDC55LL, v57, 0);
        sub_3E8420(a1, 0x28u, *(unsigned __int16 *)(a1 + 842), a3, v57, 0, 0);
        sub_3E8420(a1, 0x13u, 1, 3, 0, 3, 0);
        copy_tinfo_t();
      }
      sub_3E62F0(*(_QWORD *)(a1 + 832), v57);
      sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 0, 0);
      tinfo_size = get_tinfo_size();
      sub_329650((__int64)v122, a3, tinfo_size);
      v62 = v123;
      if ( v125 <= 1 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v62 = v123;
      }
      v19 = a4;
      v18 = 0;
      v20 = 1;
      v124 = 2;
      *v62 = 97;
      v123[1] = 0;
    }
LABEL_22:
    v21 = s1;
    if ( (_QWORD)v110 )
      v21 = (const char *)v109;
    v22 = sub_32FDB0(
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a1 + 40),
            (__int64)v21,
            &v107,
            v20,
            (__int64)v122,
            (*(_BYTE *)(a2 + 12) & 0x10) == 0);
    v23 = *(_QWORD *)(v22 + 72);
    v24 = *(_DWORD *)(v23 + 280);
    *(_DWORD *)(v23 + 284) = v18;
    *(_DWORD *)(v23 + 280) = v24 | 4;
    v25 = *(_DWORD *)(a2 + 12);
    if ( (v25 & 2) != 0 )
    {
      *(_DWORD *)(v23 + 280) = v24 | 0xC;
      v25 = *(_DWORD *)(a2 + 12);
    }
    if ( (v25 & 1) != 0 )
      *(_DWORD *)(v23 + 280) |= 0x10u;
    if ( !(unsigned __int8)sub_5FE00(v111) || (_QWORD)v113 )
    {
      if ( !(unsigned __int8)sub_5FE00(&v118) || v121.m128i_i64[0] )
        **(_DWORD **)(a1 + 8) |= 0x40u;
      v42 = *(_QWORD *)(v22 + 72);
      sub_5F800((__int64 *)(v42 + 136), v111);
      sub_3113F0((__int64 *)(v42 + 152), &v112);
      sub_3113F0((__int64 *)(*(_QWORD *)(v22 + 72) + 216LL), &v112);
      v43 = *(_QWORD *)(v22 + 72);
      v44 = _mm_loadu_si128(&v121);
      v45 = *(_QWORD *)(v43 + 176);
      *(_QWORD *)(v43 + 176) = v118;
      v46 = v119;
      v14 = _mm_loadu_si128((const __m128i *)(v43 + 200));
      *(__m128i *)(v43 + 200) = v44;
      v118 = v45;
      v47 = *(_QWORD *)(v43 + 184);
      *(_QWORD *)(v43 + 184) = v46;
      v119 = v47;
      v48 = *(_QWORD *)(v43 + 192);
      v121 = v14;
      *(_QWORD *)(v43 + 192) = v120;
      v120 = v48;
    }
    sub_3113F0((__int64 *)(*(_QWORD *)(v22 + 72) + 216LL), &v116);
    v26 = *(_DWORD *)(a2 + 12);
    if ( (v26 & 4) != 0 )
    {
      *(_DWORD *)(v22 + 4) |= 0x80000u;
      v26 = *(_DWORD *)(a2 + 12);
    }
    if ( (v26 & 0x10) == 0 )
    {
      v14 = _mm_cvtsi32_si128(*(_DWORD *)(v22 + 68));
      *(_DWORD *)v108 = 1;
      v14.m128i_i64[0] = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v19)).m128i_u64[0];
      *(_QWORD *)&v108[4] = v14.m128i_i64[0];
      v22 = (__int64)sub_1206A0(v22, v108);
      sub_1181E0((__int64)v108);
      v26 = *(_DWORD *)(a2 + 12);
    }
    if ( (v26 & 8) != 0 )
      *(_DWORD *)(v22 + 4) |= 0x20000u;
    sub_B06D0(*(_QWORD **)(a1 + 16), v22);
    v27 = *(_QWORD **)(a1 + 8);
    v28 = *(_QWORD *)(a1 + 40);
    v29 = v27 + 126;
    v30 = v27 + 126;
    if ( v27[127] )
    {
      v31 = (_QWORD *)v27[127];
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = v31[4];
          if ( v32 >= v28 )
            break;
          v31 = (_QWORD *)v31[3];
          if ( !v31 )
            goto LABEL_42;
        }
        v33 = (_QWORD *)v31[2];
        if ( v28 >= v32 )
          break;
        v30 = v31;
        v31 = (_QWORD *)v31[2];
        if ( !v33 )
        {
LABEL_42:
          v34 = v29 == v30;
          goto LABEL_43;
        }
      }
      v52 = (_QWORD *)v31[3];
      while ( v52 )
      {
        if ( v28 < v52[4] )
        {
          v30 = v52;
          v52 = (_QWORD *)v52[2];
        }
        else
        {
          v52 = (_QWORD *)v52[3];
        }
      }
      if ( v33 )
      {
        v53 = v31;
        do
        {
          if ( v33[4] >= v28 )
          {
            v53 = v33;
            v33 = (_QWORD *)v33[2];
          }
          else
          {
            v33 = (_QWORD *)v33[3];
          }
        }
        while ( v33 );
        v31 = v53;
      }
      if ( (_QWORD *)v27[128] != v31 || v29 != v30 )
      {
        if ( v31 != v30 )
        {
          do
          {
            na = std::_Rb_tree_increment();
            v54 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v54, 0x28u);
            --v27[130];
          }
          while ( (_QWORD *)na != v30 );
        }
        goto LABEL_46;
      }
    }
    else
    {
      v34 = 1;
LABEL_43:
      if ( (_QWORD *)v27[128] != v30 || !v34 )
        goto LABEL_46;
    }
    sub_3E54D0((_QWORD *)v27[127]);
    v27[128] = v29;
    v27[127] = 0;
    v27[129] = v29;
    v27[130] = 0;
LABEL_46:
    if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 92) > 2u )
    {
      if ( (*(_BYTE *)(a1 + 844) & 0x10) != 0 )
      {
        v49 = a4;
        if ( *(_BYTE *)(a1 + 145) )
          v49 = a5;
        v50 = v49;
        sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v49, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 1, 0);
        sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v50, 0x3BEA45E214ADDC55LL, 2, 0);
        if ( (*(_BYTE *)(a2 + 13) & 1) != 0 )
        {
          v51 = **(int **)(*(_QWORD *)(a1 + 832) + 512LL);
          sub_3E8420(a1, 0x13u, 1, 3, v51, v51, 0);
        }
      }
      goto LABEL_55;
    }
    if ( *(_WORD *)(a1 + 842) == 4 )
    {
      v35 = *(_QWORD *)(a1 + 832);
      v36 = *(_QWORD *)(v35 + 584);
      if ( !v36 )
        sub_3E4140(*(double *)v14.m128i_i64);
      v37 = *(_DWORD *)(*(_QWORD *)(v35 + 576) + 4 * v36 - 4);
      *(_QWORD *)(v35 + 584) = v36 - 1;
      v38 = **(int **)(*(_QWORD *)(a1 + 832) + 528LL);
      if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 92) <= 1u )
      {
        sub_3E8420(a1, 0x21u, 1, a4, v38, 0, 0);
        v39 = v37;
        sub_3E8420(a1, 0x21u, 1, a4 + 1, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), v37, 0);
        sub_3E8420(a1, 0x13u, 1, v37, 0, 0, 0);
        if ( *(_WORD *)(a1 + 48) != 92 )
          goto LABEL_52;
        sub_3E8420(a1, 0x21u, 1, a4 + 2, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), v37, 0);
        sub_3E8420(a1, 0x13u, 1, v37, 0, 0, 0);
        sub_3E8420(a1, 0x21u, 1, a4 + 3, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), v37, 0);
      }
      else
      {
        sub_3E8420(a1, 0x21u, 2, a4, v38, 0, 0);
        v39 = v37;
        sub_3E8420(a1, 0x21u, 2, a4 + 2, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), v37, 0);
      }
      sub_3E8420(a1, 0x13u, 1, v39, 0, 0, 0);
LABEL_52:
      sub_3E62F0(*(_QWORD *)(a1 + 832), v37);
      sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 3, 0);
      v40 = **(int **)(*(_QWORD *)(a1 + 832) + 528LL);
      if ( *(_WORD *)(a1 + 48) == 93 )
        sub_3E8420(a1, 0x21u, 2, a4, v40, 1, 0);
      else
        sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a4, v40, 1, 0);
      sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), a4, 0x3BEA45E214ADDC55LL, 2, 0);
      goto LABEL_55;
    }
    if ( !under_debugger )
      sub_37CFE0(0, *(double *)v14.m128i_i64);
LABEL_202:
    BUG();
  }
  if ( v17 <= 0x16u )
  {
    if ( v17 == 9 )
    {
      v86 = *(_WORD *)(a1 + 70);
      if ( (unsigned __int16)(v86 - 32) > 0x1Fu )
      {
LABEL_166:
        v6 = 0;
        goto LABEL_56;
      }
      if ( a3 == -1 )
      {
        if ( v86 == 37 && !*(_QWORD *)(a1 + 152) )
        {
          if ( *((_QWORD *)&v110 + 1) <= 7u )
            v109 = (_DWORD *)qvector_reserve();
          v93 = v109;
          v18 = 16;
          v90 = 0;
          *(_QWORD *)&v110 = 8;
          *v109 = 1701273439;
          *(_DWORD *)((char *)v93 + 3) = 1920169061;
          *((_BYTE *)v109 + 7) = 0;
          goto LABEL_162;
        }
      }
      else if ( !*(_QWORD *)(a1 + 152) )
      {
        goto LABEL_188;
      }
      sub_11BE50((__int64)v122, *(_QWORD *)(a1 + 832), v86 - 32, 4, -1, 0);
      v87 = v123;
      if ( v125 <= 5 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v87 = v123;
      }
      v124 = 6;
      *(_DWORD *)v87 = 1231512946;
      v87[4] = 68;
      v123[5] = 0;
      copy_tinfo_t();
      v88 = *(_QWORD *)(a1 + 152);
      if ( v88 )
      {
        sub_11BE50((__int64)v126, *(_QWORD *)(a1 + 832), v88, 4, -1, 0);
        v89 = v127;
        if ( v129 <= 5 )
        {
          v127 = (_BYTE *)qvector_reserve();
          v89 = v127;
        }
        v128 = 6;
        *(_DWORD *)v89 = 1231840627;
        v89[4] = 68;
        v127[5] = 0;
        copy_tinfo_t();
        sub_3E47E0((__int64)&v109, "$", "_rh");
        v18 = 0;
        v90 = 2;
      }
      else
      {
        sub_3E47E0((__int64)&v109, "$", (const char *)&unk_3F5793);
        v18 = 0;
        v90 = 1;
      }
LABEL_162:
      v102 = v90;
      copy_tinfo_t();
      v20 = v102;
      v19 = a4;
      goto LABEL_22;
    }
LABEL_21:
    v18 = 0;
    v19 = -1;
    v20 = 0;
    goto LABEL_22;
  }
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 0x17:
      v85 = a4;
      a4 = a3;
      a5 = v85;
      a3 = v85;
      goto LABEL_150;
    case 0x18:
    case 0x19:
    case 0x1A:
      if ( v17 == 26 )
      {
        sub_3E8420(a1, 0x19u, *(unsigned __int16 *)(a1 + 842), a4, a3, 0, 0);
        sub_3E8420(a1, 0x1Au, *(unsigned __int16 *)(a1 + 842), a4, a3, 3, 0);
      }
      else
      {
LABEL_150:
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), a4, a3, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), a4, a3, 3, 0);
      }
      v72 = get_tinfo_size();
      sub_329650((__int64)v122, a4, v72);
      v73 = v123;
      if ( v125 <= 1 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v73 = v123;
      }
      v124 = 2;
      *v73 = 97;
      v123[1] = 0;
      v74 = get_tinfo_size();
      sub_329650((__int64)v126, a3, v74);
      v75 = v127;
      if ( v129 <= 1 )
      {
        v127 = (_BYTE *)qvector_reserve();
        v75 = v127;
      }
      v128 = 2;
      *v75 = 98;
      v127[1] = 0;
      copy_tinfo_t();
      v19 = a5;
      v18 = 0;
      v20 = 2;
      goto LABEL_22;
    case 0x27:
      v78 = *(_WORD *)(a1 + 110);
      if ( (unsigned __int16)(v78 - 32) > 0x1Fu )
        goto LABEL_166;
      if ( a4 == -1 )
      {
        if ( v78 == 37 && !*(_QWORD *)(a1 + 152) )
        {
          if ( *((_QWORD *)&v110 + 1) <= 7u )
            v109 = (_DWORD *)qvector_reserve();
          v94 = v109;
          *(_QWORD *)&v110 = 8;
          *v109 = 1702059871;
          *(_DWORD *)((char *)v94 + 3) = 1920169061;
          *((_BYTE *)v109 + 7) = 0;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 0x20) != 0 )
          {
            if ( *(_WORD *)(a1 + 842) != 4 )
            {
              if ( !under_debugger )
                sub_37CFE0(0, 0.0);
              goto LABEL_202;
            }
            v95 = *(_QWORD *)(a1 + 832);
            v96 = *(_QWORD *)(v95 + 584);
            if ( !v96 )
              sub_3E4140(0.0);
            v97 = *(int *)(*(_QWORD *)(v95 + 576) + 4 * v96 - 4);
            *(_QWORD *)(v95 + 584) = v96 - 1;
            sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 1, 0x3BEA45E214ADDC55LL, v97, 0);
            sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v97, v97, 0);
            sub_3E8420(a1, 0x21u, 1, v97, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 1, 0);
            sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 2, 0x3BEA45E214ADDC55LL, v97, 0);
            sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v97, v97, 0);
            sub_3E8420(a1, 0x21u, 1, v97, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 2, 0);
            sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 4, 0x3BEA45E214ADDC55LL, v97, 0);
            sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v97, v97, 0);
            sub_3E8420(a1, 0x21u, 1, v97, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 3, 0);
            sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 8, 0x3BEA45E214ADDC55LL, v97, 0);
            sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v97, v97, 0);
            sub_3E8420(a1, 0x21u, 1, v97, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 0, 0);
            v99 = **(_DWORD **)(*(_QWORD *)(a1 + 832) + 512LL);
            sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 16, 0x3BEA45E214ADDC55LL, v97, 0);
            sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v97, v97, 0);
            sub_3E8420(a1, 0x21u, 1, v97, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), v99, 0);
            v100 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 520LL);
            sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 32, 0x3BEA45E214ADDC55LL, v97, 0);
            sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v97, v97, 0);
            sub_3E8420(a1, 0x21u, 1, v97, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), v100, 0);
            sub_3E62F0(*(_QWORD *)(a1 + 832), v97);
          }
          else
          {
            sub_3E6000(v111, 1, 5);
            sub_3E6000(v111, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 520LL), 1);
          }
          v82 = v122;
          v83 = 1;
          goto LABEL_147;
        }
LABEL_141:
        sub_11BE50((__int64)v122, *(_QWORD *)(a1 + 832), v78 - 32, 4, -1, 0);
        copy_tinfo_t();
        v79 = v123;
        if ( v125 <= 5 )
        {
          v123 = (_BYTE *)qvector_reserve();
          v79 = v123;
        }
        v124 = 6;
        *(_DWORD *)v79 = 1231512946;
        v79[4] = 68;
        v123[5] = 0;
        v80 = *(_QWORD *)(a1 + 152);
        if ( v80 )
        {
          sub_11BE50((__int64)v126, *(_QWORD *)(a1 + 832), v80, 4, -1, 0);
          v81 = v127;
          if ( v129 <= 5 )
          {
            v127 = (_BYTE *)qvector_reserve();
            v81 = v127;
          }
          v128 = 6;
          *(_DWORD *)v81 = 1231840627;
          v81[4] = 68;
          v127[5] = 0;
          copy_tinfo_t();
          sub_3E47E0((__int64)&v109, "$", "_rh");
          v82 = &v130;
          v83 = 3;
        }
        else
        {
          sub_3E47E0((__int64)&v109, "$", (const char *)&unk_3F5793);
          v82 = v126;
          v83 = 2;
        }
LABEL_147:
        v101 = v83;
        v84 = get_tinfo_size();
        sub_329650((__int64)v82, a3, v84);
        v20 = v101;
        v18 = 0;
        v19 = -1;
        goto LABEL_22;
      }
      if ( *(_QWORD *)(a1 + 152) )
        goto LABEL_141;
      break;
    case 0x2F:
      sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 520LL), 0);
      goto LABEL_21;
    case 0x31:
      sub_1D14D0(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 520LL), 0);
      goto LABEL_21;
    case 0x5C:
    case 0x5D:
      v18 = 12;
      goto LABEL_135;
    case 0x5E:
      v18 = 0;
LABEL_135:
      v76 = get_tinfo_size();
      sub_329650((__int64)v122, a3, v76);
      v77 = v123;
      if ( v125 <= 1 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v77 = v123;
      }
      v124 = 2;
      *v77 = 97;
      v123[1] = 0;
      copy_tinfo_t();
      v19 = a4;
      v20 = 1;
      goto LABEL_22;
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
      if ( *(_WORD *)(a1 + 842) != 4 )
      {
        if ( !under_debugger )
          sub_37CFE0(0, 0.0);
        goto LABEL_202;
      }
      v65 = v17 - 106;
      if ( v65 > 2u )
      {
        v98 = -2;
        v66 = 0xFFFFFFFFLL;
      }
      else
      {
        v66 = dword_40DB18[v65];
        v98 = dword_40DB08[v65];
      }
      v67 = *(_QWORD *)(a1 + 832);
      v68 = *(_QWORD *)(v67 + 584);
      if ( !v68 )
        sub_3E4140(0.0);
      v69 = *(int *)(*(_QWORD *)(v67 + 576) + 4 * v68 - 4);
      *(_QWORD *)(v67 + 584) = v68 - 1;
      sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v66, 0x3BEA45E214ADDC55LL, v69, 0);
      sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a3, v69, 1, 0);
      sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v98, 0x3BEA45E214ADDC55LL, v69, 0);
      sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a3, v69, 0, 0);
      sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 3, 0);
      sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 2, 0);
      sub_3E62F0(*(_QWORD *)(a1 + 832), v69);
      v70 = get_tinfo_size();
      sub_329650((__int64)v122, a3, v70);
      v71 = v123;
      if ( v125 <= 1 )
      {
        v123 = (_BYTE *)qvector_reserve();
        v71 = v123;
      }
      v124 = 2;
      *v71 = 97;
      v123[1] = 0;
      copy_tinfo_t();
      v19 = a4;
      v18 = 0;
      v20 = 1;
      goto LABEL_22;
    default:
      goto LABEL_21;
  }
LABEL_188:
  sub_3E8420(a1, 4u, *(unsigned __int16 *)(a1 + 842), a3, 0x3BEA45E214ADDC55LL, a4, 0);
LABEL_55:
  v6 = 1;
LABEL_56:
  if ( v120 )
  {
    v121.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree();
  }
  qfree();
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree();
  }
  qfree();
  v41 = &v131;
  do
  {
    v41 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v41 + 4) )
    {
      *((_QWORD *)v41 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1181E0((__int64)v41);
  }
  while ( v41 != v122 );
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree();
  }
  return v6;
}


__int64 __fastcall sub_3EB2A0(__int64 a1, __int64 a2, signed int a3, int a4, int a5)
{
  const char *v7; // r13
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r12
  unsigned __int16 v11; // r15
  int v12; // edx
  const char *v13; // rdx
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __m128i si128; // xmm1
  unsigned __int16 v17; // ax
  __int64 v18; // r9
  int v19; // r8d
  const char *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // r14
  unsigned __int64 v32; // rdx
  _QWORD *v33; // r8
  _QWORD *v34; // r13
  _QWORD *v35; // r15
  _QWORD *v36; // r12
  unsigned __int64 v37; // rcx
  _QWORD *v38; // rax
  bool v39; // al
  unsigned __int8 v40; // r15
  unsigned __int16 v41; // ax
  char *v42; // rbx
  int v44; // eax
  _BYTE *v45; // rsi
  _QWORD *v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // r12
  void *v52; // rax
  unsigned __int16 v53; // ax
  const char *v54; // rdx
  const char *v55; // rdx
  char v56; // al
  int v57; // eax
  __int64 v58; // rax
  _DWORD *v59; // rsi
  int v60; // eax
  _DWORD *v61; // rsi
  int v62; // eax
  _DWORD *v63; // rsi
  int v64; // eax
  _BYTE *v65; // rsi
  int v66; // eax
  _BYTE *v67; // rsi
  int tinfo_size; // eax
  _BYTE *v69; // rsi
  int v70; // eax
  _BYTE *v71; // rsi
  int v72; // eax
  __int16 v73; // ax
  _BYTE *v74; // rsi
  int v75; // eax
  _BYTE *v76; // rsi
  _BYTE *v77; // rsi
  int v78; // eax
  _BYTE *v79; // rsi
  int v80; // eax
  __int64 v81; // rsi
  _BYTE *v82; // rsi
  __int64 v86; // [rsp+30h] [rbp-200h] BYREF
  __int64 v87; // [rsp+38h] [rbp-1F8h]
  unsigned __int8 v88[16]; // [rsp+40h] [rbp-1F0h] BYREF
  void *v89; // [rsp+50h] [rbp-1E0h] BYREF
  __int128 v90; // [rsp+58h] [rbp-1D8h]
  __int64 v91[2]; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 *v92; // [rsp+80h] [rbp-1B0h] BYREF
  __int128 v93; // [rsp+88h] [rbp-1A8h]
  __int64 v94; // [rsp+A0h] [rbp-190h]
  __int64 v95; // [rsp+A8h] [rbp-188h]
  __int64 *v96; // [rsp+B0h] [rbp-180h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-178h]
  __int64 v98; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v99; // [rsp+D8h] [rbp-158h]
  __int64 v100; // [rsp+E0h] [rbp-150h]
  __m128i v101; // [rsp+E8h] [rbp-148h] BYREF
  _BYTE v102[24]; // [rsp+100h] [rbp-130h] BYREF
  __int64 v103; // [rsp+118h] [rbp-118h]
  _BYTE *v104; // [rsp+120h] [rbp-110h]
  __int64 v105; // [rsp+128h] [rbp-108h]
  unsigned __int64 v106; // [rsp+130h] [rbp-100h]
  _BYTE v107[32]; // [rsp+150h] [rbp-E0h] BYREF
  _BYTE *v108; // [rsp+170h] [rbp-C0h]
  __int64 v109; // [rsp+178h] [rbp-B8h]
  unsigned __int64 v110; // [rsp+180h] [rbp-B0h]
  _BYTE v111[32]; // [rsp+1A0h] [rbp-90h] BYREF
  __int64 v112; // [rsp+1C0h] [rbp-70h]
  __int64 v113; // [rsp+1C8h] [rbp-68h]
  unsigned __int64 v114; // [rsp+1D0h] [rbp-60h]
  char v115; // [rsp+1F0h] [rbp-40h] BYREF
  unsigned __int64 v116; // [rsp+1F8h] [rbp-38h]

  v116 = __readfsqword(0x28u);
  v7 = *(const char **)a2;
  v90 = 0;
  v89 = nullptr;
  if ( v7 )
  {
    v8 = strlen(v7);
    v9 = v8 + 1;
    v10 = v8;
    v89 = (void *)qvector_reserve();
    *(_QWORD *)&v90 = v9;
    memmove(v89, v7, v10);
    *((_BYTE *)v89 + v10) = 0;
  }
  v11 = *(_WORD *)(a1 + 842);
  if ( ((v11 - 4) & 0xFFFB) == 0 )
  {
    v86 = 1;
    v12 = *(_DWORD *)(a2 + 12);
    if ( (v12 & 0x100) == 0 )
      goto LABEL_9;
    if ( v11 == 4 )
    {
      v98 = 9;
      copy_tinfo_t();
      clear_tinfo_t();
      v13 = "f";
      goto LABEL_8;
    }
LABEL_7:
    v98 = 25;
    copy_tinfo_t();
    clear_tinfo_t();
    v13 = "d";
LABEL_8:
    sub_3E53D0((__int64)&v89, "$", v13);
    v12 = *(_DWORD *)(a2 + 12);
    goto LABEL_9;
  }
  if ( v11 != 16 || *(_WORD *)(a1 + 48) != 92 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE67u, 0.0);
    goto LABEL_163;
  }
  v86 = 1;
  v12 = *(_DWORD *)(a2 + 12);
  if ( (v12 & 0x100) != 0 )
    goto LABEL_7;
LABEL_9:
  v14 = (__m128i *)v102;
  v15.m128i_i64[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
  do
  {
    v14->m128i_i32[1] = -1;
    v14 += 5;
    v14[-5].m128i_i16[0] = 0;
    v14[-5].m128i_i16[1] = 0;
    v14[-5].m128i_i64[1] = 0;
    v14[-4] = si128;
    v14[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v14[-3] + 8) = 0;
    v14[-2].m128i_i32[2] = 0;
    v14[-1].m128i_i64[0] = 0;
    v14[-1].m128i_i32[2] = 0;
  }
  while ( v14 != (__m128i *)&v115 );
  v91[0] = 0;
  v91[1] = 0;
  v92 = nullptr;
  v94 = 0;
  v95 = 0;
  v96 = nullptr;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v93 = 0;
  v97 = 0;
  v101 = 0;
  if ( (v12 & 0x20) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 632LL) == a3 )
  {
    v18 = a3;
LABEL_23:
    sub_1D1C90(a1, 3u, v11, 0, 0x3BEA45E214ADDC55LL, v18, 0);
    goto LABEL_16;
  }
  if ( (v12 & 0x40) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 632LL) == a4 )
  {
    v18 = a4;
    goto LABEL_23;
  }
  if ( (v12 & 0x80) != 0 )
  {
    v18 = a5;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 832) + 632LL) == a5 )
      goto LABEL_23;
  }
LABEL_16:
  v17 = *(_WORD *)(a2 + 8);
  if ( v17 > 0xA1u )
  {
    if ( v17 > 0x1B6u )
    {
      if ( v17 != 439 )
      {
        if ( (unsigned __int16)(v17 - 553) <= 3u )
        {
          if ( v11 == 8 )
            v87 = 37;
          else
            v87 = 36;
          *(_QWORD *)v88 = 7;
          copy_tinfo_t();
          clear_tinfo_t();
          tinfo_size = get_tinfo_size();
          sub_329E10((__int64)v102, a4, tinfo_size);
          v69 = v104;
          if ( v106 <= 1 )
          {
            v104 = (_BYTE *)qvector_reserve();
            v69 = v104;
          }
          v105 = 2;
          *v69 = 97;
          v104[1] = 0;
          v70 = get_tinfo_size();
          sub_329E10((__int64)v107, a5, v70);
          v71 = v108;
          if ( v110 <= 1 )
          {
            v108 = (_BYTE *)qvector_reserve();
            v71 = v108;
          }
          v109 = 2;
          *v71 = 98;
          v108[1] = 0;
          clear_tinfo_t();
          goto LABEL_116;
        }
LABEL_25:
        v19 = 0;
        a3 = -1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v17 > 0x1B4u )
        goto LABEL_74;
      if ( v17 == 384 )
      {
        v55 = "r";
        v56 = *(_BYTE *)(a1 + 52) & 0x70;
        if ( v56 != 80 )
        {
          v55 = "i";
          if ( v56 == 96 )
            v55 = "w";
        }
        sub_3E53D0((__int64)&v89, "$", v55);
        *(_QWORD *)v88 = 0;
        copy_tinfo_t();
        v57 = get_tinfo_size();
        sub_329E10((__int64)v102, a3, v57);
        clear_tinfo_t();
        v58 = v103;
        if ( (_BYTE)v103 )
        {
          LOBYTE(v58) = v103 & 0x3F | 0x80;
          v103 = v58;
        }
        v59 = v104;
        if ( v106 <= 4 )
        {
          v104 = (_BYTE *)qvector_reserve();
          v59 = v104;
        }
        a3 = -1;
        v19 = 1;
        v105 = 5;
        *v59 = 1919181921;
        v104[4] = 0;
        goto LABEL_26;
      }
      if ( v17 <= 0x180u )
      {
        if ( v17 != 363 )
          goto LABEL_25;
LABEL_74:
        if ( v11 == 4 )
        {
          *(_QWORD *)v88 = 36;
          copy_tinfo_t();
          clear_tinfo_t();
          sub_3E53D0((__int64)&v89, "$", "ulong");
        }
        else
        {
          *(_QWORD *)v88 = 37;
          copy_tinfo_t();
          clear_tinfo_t();
          sub_3E53D0((__int64)&v89, "$", "uint64");
        }
        v44 = get_tinfo_size();
        sub_329E10((__int64)v102, a4, v44);
        v45 = v104;
        if ( v106 <= 3 )
        {
          v104 = (_BYTE *)qvector_reserve();
          v45 = v104;
        }
        v105 = 4;
        *(_WORD *)v45 = 24950;
        v45[2] = 108;
        v104[3] = 0;
        goto LABEL_79;
      }
      if ( (unsigned __int16)(v17 - 435) > 1u )
        goto LABEL_25;
    }
    *(_QWORD *)v88 = (v11 != 4) + 36LL;
    copy_tinfo_t();
    clear_tinfo_t();
    v72 = get_tinfo_size();
    sub_329E10((__int64)v102, a4, v72);
LABEL_120:
    v65 = v104;
    if ( v106 <= 3 )
    {
      v104 = (_BYTE *)qvector_reserve();
      v65 = v104;
    }
    v105 = 4;
    *(_WORD *)v65 = 29281;
    v65[2] = 103;
    v104[3] = 0;
LABEL_79:
    v19 = 1;
    goto LABEL_26;
  }
  if ( v17 > 0x66u )
  {
    switch ( *(_WORD *)(a2 + 8) )
    {
      case 0x67:
      case 0x84:
        v64 = get_tinfo_size();
        sub_329E10((__int64)v102, a4, v64);
        goto LABEL_120;
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
        v60 = get_tinfo_size();
        sub_329E10((__int64)v102, a4, v60);
        v61 = v104;
        if ( v106 <= 4 )
        {
          v104 = (_BYTE *)qvector_reserve();
          v61 = v104;
        }
        v105 = 5;
        *v61 = 812085857;
        v104[4] = 0;
        v62 = get_tinfo_size();
        sub_329E10((__int64)v107, a5, v62);
        v63 = v108;
        if ( v110 <= 4 )
        {
          v108 = (_BYTE *)qvector_reserve();
          v63 = v108;
        }
        v109 = 5;
        *v63 = 828863073;
        v108[4] = 0;
        goto LABEL_116;
      case 0x91:
        *(_QWORD *)v88 = (v11 != 4) + 36LL;
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_118;
      case 0x9E:
      case 0xA0:
        *(_QWORD *)v88 = 36;
        copy_tinfo_t();
        clear_tinfo_t();
LABEL_118:
        v19 = 0;
        break;
      case 0xA1:
        *(_QWORD *)v88 = 36;
        v66 = get_tinfo_size();
        sub_329E10((__int64)v102, a4, v66);
        clear_tinfo_t();
        v67 = v104;
        if ( v106 <= 3 )
        {
          v104 = (_BYTE *)qvector_reserve();
          v67 = v104;
        }
        v19 = 1;
        v105 = 4;
        *(_WORD *)v67 = 29281;
        v67[2] = 103;
        a3 = -1;
        v104[3] = 0;
        break;
      default:
        goto LABEL_25;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int16)(v17 - 81) > 0xBu )
    goto LABEL_25;
  v53 = *(_WORD *)(a1 + 48) - 90;
  switch ( v11 )
  {
    case 8u:
      *(_QWORD *)v88 = v53 < 2u ? 37LL : 21LL;
      copy_tinfo_t();
      clear_tinfo_t();
      v54 = "d";
      break;
    case 0x10u:
      *(_QWORD *)v88 = 22;
      copy_tinfo_t();
      clear_tinfo_t();
      v54 = "q";
      break;
    case 4u:
      *(_QWORD *)v88 = v53 < 2u ? 36LL : 20LL;
      copy_tinfo_t();
      clear_tinfo_t();
      v54 = "w";
      break;
    default:
      if ( !under_debugger )
        sub_37DDE0(0, 0.0);
LABEL_163:
      BUG();
  }
  sub_3E53D0((__int64)&v89, "$", v54);
  v73 = *(_WORD *)(a1 + 48);
  if ( v73 == 81 )
  {
    sub_3E7FD0(a1, (__int64)v102, (__int64)&v86, 0x80u, a4);
    v82 = v104;
    if ( v106 <= 3 )
    {
      v104 = (_BYTE *)qvector_reserve();
      v82 = v104;
    }
    v105 = 4;
    *(_WORD *)v82 = 29808;
    v82[2] = 114;
    v104[3] = 0;
    goto LABEL_79;
  }
  if ( v73 != 92 )
  {
    sub_3E7FD0(a1, (__int64)v102, (__int64)&v86, 0x80u, a5);
    v74 = v104;
    if ( v106 <= 3 )
    {
      v104 = (_BYTE *)qvector_reserve();
      v74 = v104;
    }
    v105 = 4;
    *(_WORD *)v74 = 29808;
    v74[2] = 114;
    v104[3] = 0;
    v75 = get_tinfo_size();
    sub_329E10((__int64)v107, a4, v75);
    v76 = v108;
    if ( v110 <= 3 )
    {
      v108 = (_BYTE *)qvector_reserve();
      v76 = v108;
    }
    v109 = 4;
    *(_WORD *)v76 = 24950;
    v76[2] = 108;
    v108[3] = 0;
LABEL_116:
    v19 = 2;
    goto LABEL_26;
  }
  sub_3E7FD0(a1, (__int64)v102, (__int64)&v86, 0x80u, a5);
  v77 = v104;
  if ( v106 <= 3 )
  {
    v104 = (_BYTE *)qvector_reserve();
    v77 = v104;
  }
  v105 = 4;
  *(_WORD *)v77 = 29808;
  v77[2] = 114;
  v104[3] = 0;
  v78 = get_tinfo_size();
  sub_329E10((__int64)v107, a3, v78);
  v79 = v108;
  if ( v110 <= 6 )
  {
    v108 = (_BYTE *)qvector_reserve();
    v79 = v108;
  }
  v109 = 7;
  *(_DWORD *)v79 = 1986292847;
  *((_WORD *)v79 + 2) = 27745;
  v108[6] = 0;
  v80 = get_tinfo_size();
  sub_329E10((__int64)v111, a4, v80);
  v81 = v112;
  if ( v114 <= 6 )
  {
    v112 = qvector_reserve();
    v81 = v112;
  }
  v113 = 7;
  v19 = 3;
  *(_DWORD *)v81 = 1987536238;
  *(_WORD *)(v81 + 4) = 27745;
  *(_BYTE *)(v112 + 6) = 0;
LABEL_26:
  v20 = s1;
  if ( (_QWORD)v90 )
    v20 = (const char *)v89;
  v21 = sub_330570(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 40),
          (__int64)v20,
          &v86,
          v19,
          (__int64)v102,
          (*(_BYTE *)(a2 + 12) & 0x10) == 0);
  v22 = *(_QWORD *)(v21 + 72);
  v23 = *(_DWORD *)(v22 + 280);
  *(_DWORD *)(v22 + 280) = v23 | 4;
  v24 = *(_DWORD *)(a2 + 12);
  if ( (v24 & 2) != 0 )
  {
    *(_DWORD *)(v22 + 280) = v23 | 0xC;
    v24 = *(_DWORD *)(a2 + 12);
  }
  if ( (v24 & 1) != 0 )
    *(_DWORD *)(v22 + 280) |= 0x10u;
  if ( !(unsigned __int8)sub_60500(v91) || (_QWORD)v93 )
  {
    if ( !(unsigned __int8)sub_60500(&v98) || v101.m128i_i64[0] )
      **(_DWORD **)(a1 + 8) |= 0x40u;
    v25 = *(_QWORD *)(v21 + 72);
    sub_5FF00((__int64 *)(v25 + 136), v91);
    sub_311BB0((__int64 *)(v25 + 152), &v92);
    sub_311BB0((__int64 *)(*(_QWORD *)(v21 + 72) + 216LL), &v92);
    v26 = *(_QWORD *)(v21 + 72);
    v27 = *(_QWORD *)(v26 + 176);
    *(_QWORD *)(v26 + 176) = v98;
    v98 = v27;
    v28 = *(_QWORD *)(v26 + 184);
    *(_QWORD *)(v26 + 184) = v99;
    v99 = v28;
    v29 = *(_QWORD *)(v26 + 192);
    *(_QWORD *)(v26 + 192) = v100;
    v15 = _mm_loadu_si128((const __m128i *)(v26 + 200));
    *(__m128i *)(v26 + 200) = _mm_loadu_si128(&v101);
    v100 = v29;
    v101 = v15;
  }
  sub_311BB0((__int64 *)(*(_QWORD *)(v21 + 72) + 216LL), &v96);
  v30 = *(_DWORD *)(a2 + 12);
  if ( (v30 & 4) != 0 )
  {
    *(_DWORD *)(v21 + 4) |= 0x80000u;
    v30 = *(_DWORD *)(a2 + 12);
  }
  if ( (v30 & 0x10) == 0 )
  {
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(v21 + 68));
    *(_DWORD *)v88 = 1;
    v15.m128i_i64[0] = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    *(_QWORD *)&v88[4] = v15.m128i_i64[0];
    v21 = (__int64)sub_120DA0(v21, v88);
    sub_1188E0((__int64)v88);
    v30 = *(_DWORD *)(a2 + 12);
  }
  if ( (v30 & 8) != 0 )
    *(_DWORD *)(v21 + 4) |= 0x20000u;
  sub_B0DD0(*(_QWORD **)(a1 + 16), v21);
  v31 = *(_QWORD **)(a1 + 8);
  v32 = *(_QWORD *)(a1 + 40);
  v33 = (_QWORD *)v31[127];
  v34 = v31 + 126;
  v35 = v31 + 126;
  if ( v33 )
  {
    v36 = (_QWORD *)v31[127];
    while ( 1 )
    {
      while ( 1 )
      {
        v37 = v36[4];
        if ( v37 >= v32 )
          break;
        v36 = (_QWORD *)v36[3];
        if ( !v36 )
          goto LABEL_49;
      }
      v38 = (_QWORD *)v36[2];
      if ( v32 >= v37 )
        break;
      v35 = v36;
      v36 = (_QWORD *)v36[2];
      if ( !v38 )
      {
LABEL_49:
        v39 = v34 == v35;
        goto LABEL_50;
      }
    }
    v46 = (_QWORD *)v36[3];
    if ( v46 )
    {
      do
      {
        while ( 1 )
        {
          v47 = v46[2];
          v48 = v46[3];
          if ( v32 >= v46[4] )
            break;
          v35 = v46;
          v46 = (_QWORD *)v46[2];
          if ( !v47 )
            goto LABEL_85;
        }
        v46 = (_QWORD *)v46[3];
      }
      while ( v48 );
    }
LABEL_85:
    if ( v38 )
    {
      do
      {
        while ( 1 )
        {
          v49 = v38[2];
          v50 = v38[3];
          if ( v38[4] < v32 )
            break;
          v36 = v38;
          v38 = (_QWORD *)v38[2];
          if ( !v49 )
            goto LABEL_90;
        }
        v38 = (_QWORD *)v38[3];
      }
      while ( v50 );
    }
LABEL_90:
    if ( (_QWORD *)v31[128] == v36 && v35 == v34 )
      goto LABEL_52;
    if ( v36 != v35 )
    {
      do
      {
        v51 = std::_Rb_tree_increment();
        v52 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v52, 0x28u);
        --v31[130];
      }
      while ( v35 != (_QWORD *)v51 );
    }
  }
  else
  {
    v39 = 1;
LABEL_50:
    if ( (_QWORD *)v31[128] == v35 && v39 )
    {
LABEL_52:
      sub_3E6130(v33);
      v31[128] = v34;
      v31[127] = 0;
      v31[129] = v34;
      v31[130] = 0;
    }
  }
  if ( (*(_BYTE *)(a2 + 12) & 0x10) == 0 )
  {
    v40 = (unsigned int)get_tinfo_property() == 1;
    v41 = get_tinfo_size();
    sub_3EB140(a1, a3, v41, v40, *(double *)v15.m128i_i64);
  }
  if ( v100 )
  {
    v101.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree();
  }
  qfree();
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  qfree();
  v42 = &v115;
  do
  {
    v42 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v42 + 4) )
    {
      *((_QWORD *)v42 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1188E0((__int64)v42);
  }
  while ( v42 != v102 );
  clear_tinfo_t();
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    qfree();
  }
  return 1;
}


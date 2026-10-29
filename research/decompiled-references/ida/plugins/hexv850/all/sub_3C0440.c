__int64 __fastcall sub_3C0440(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // xmm0_8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  size_t v10; // r13
  void *v11; // rax
  __int64 v12; // r12
  int v13; // eax
  int v14; // r13d
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  const char *v17; // rdi
  unsigned int v18; // eax
  int v19; // eax
  int tinfo_size; // eax
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned int v24; // r12d
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r14
  _QWORD *v28; // rbx
  char tinfo_property; // al
  const char *v31; // rdx
  _BOOL4 v32; // eax
  __int64 v33; // r12
  __int64 v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int32 v37; // eax
  __m128i v38; // xmm0
  __int64 v39; // r13
  unsigned __int8 v40; // r13
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rsi
  int v44; // ecx
  __m128i *v45; // rax
  __int64 v46; // r8
  size_t v47; // rbx
  void *v48; // rax
  __int64 v49; // rbx
  __int64 *v50; // rax
  size_t v51; // [rsp+0h] [rbp-2C0h]
  __int64 *v53; // [rsp+20h] [rbp-2A0h]
  _QWORD *v54; // [rsp+28h] [rbp-298h]
  int v55; // [rsp+30h] [rbp-290h]
  __int64 *v56; // [rsp+38h] [rbp-288h]
  char v57; // [rsp+40h] [rbp-280h]
  __int64 v58; // [rsp+48h] [rbp-278h]
  unsigned int v59; // [rsp+48h] [rbp-278h]
  __int64 v60; // [rsp+48h] [rbp-278h]
  _QWORD *v61[2]; // [rsp+50h] [rbp-270h] BYREF
  __m128i si128; // [rsp+60h] [rbp-260h]
  void *src; // [rsp+70h] [rbp-250h]
  size_t n[2]; // [rsp+78h] [rbp-248h]
  __int64 v65; // [rsp+88h] [rbp-238h]
  __int64 v66; // [rsp+90h] [rbp-230h]
  int v67; // [rsp+98h] [rbp-228h]
  __m128i v68; // [rsp+A0h] [rbp-220h] BYREF
  __int64 *v69; // [rsp+B0h] [rbp-210h] BYREF
  void *v70[2]; // [rsp+B8h] [rbp-208h]
  __int128 v71; // [rsp+C8h] [rbp-1F8h]
  int v72; // [rsp+D8h] [rbp-1E8h]
  int v73; // [rsp+E8h] [rbp-1D8h]
  __int64 v74; // [rsp+F0h] [rbp-1D0h] BYREF
  __int128 v75; // [rsp+F8h] [rbp-1C8h]
  __int64 v76; // [rsp+108h] [rbp-1B8h]
  __int64 v77; // [rsp+110h] [rbp-1B0h] BYREF
  __int64 v78; // [rsp+118h] [rbp-1A8h] BYREF
  __int128 v79; // [rsp+120h] [rbp-1A0h]
  __int64 v80; // [rsp+130h] [rbp-190h]
  __int128 v81; // [rsp+138h] [rbp-188h]
  char v82; // [rsp+148h] [rbp-178h]
  __int64 v83; // [rsp+150h] [rbp-170h] BYREF
  __int64 v84; // [rsp+158h] [rbp-168h]
  __int64 v85; // [rsp+160h] [rbp-160h]
  unsigned __int64 v86; // [rsp+168h] [rbp-158h]
  __int128 v87; // [rsp+170h] [rbp-150h]
  __int64 v88; // [rsp+180h] [rbp-140h]
  __int128 v89; // [rsp+188h] [rbp-138h]
  __int64 v90; // [rsp+198h] [rbp-128h]
  __int64 v91; // [rsp+1A0h] [rbp-120h]
  __int64 v92; // [rsp+1A8h] [rbp-118h]
  __int64 v93; // [rsp+1B0h] [rbp-110h]
  __int64 v94; // [rsp+1B8h] [rbp-108h]
  __int64 v95; // [rsp+1C0h] [rbp-100h]
  __int128 v96; // [rsp+1C8h] [rbp-F8h]
  __int64 v97[2]; // [rsp+1D8h] [rbp-E8h] BYREF
  __int64 *v98; // [rsp+1E8h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+1F0h] [rbp-D0h]
  __int64 v100; // [rsp+200h] [rbp-C0h]
  __int64 v101; // [rsp+208h] [rbp-B8h]
  __int64 v102; // [rsp+210h] [rbp-B0h]
  __int128 v103; // [rsp+218h] [rbp-A8h]
  __int64 v104; // [rsp+228h] [rbp-98h]
  __int128 v105; // [rsp+230h] [rbp-90h]
  __int64 v106; // [rsp+240h] [rbp-80h]
  __int64 v107; // [rsp+248h] [rbp-78h]
  __int64 v108; // [rsp+250h] [rbp-70h]
  __int128 v109; // [rsp+258h] [rbp-68h]
  __int64 v110; // [rsp+268h] [rbp-58h]
  __int64 v111; // [rsp+270h] [rbp-50h]
  __int128 v112; // [rsp+278h] [rbp-48h]
  unsigned __int64 v113; // [rsp+288h] [rbp-38h]

  v113 = __readfsqword(0x28u);
  v82 = 16;
  v74 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v80 = 0;
  v75 = 0;
  v79 = 0;
  v81 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    v24 = -12;
    goto LABEL_32;
  }
  v5 = *(_QWORD **)(a2 + 16);
  v6 = 0;
  v83 = -1;
  v84 = 0;
  v54 = v5;
  v85 = 0;
  v86 = 0;
  v88 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v97[0] = 0;
  v97[1] = 0;
  v98 = nullptr;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v104 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v87 = 0;
  v89 = 0;
  v96 = 0;
  v99 = 0;
  v103 = 0;
  v105 = 0;
  v109 = 0;
  v112 = 0;
  v7 = v75;
  v8 = 0;
  HIDWORD(v84) = sub_1CAD30(v5[8], *(_QWORD *)(a2 + 40));
  if ( (_QWORD)v75 )
  {
    v61[1] = nullptr;
    v61[0] = (_QWORD *)0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
    v6 = 0;
    src = nullptr;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    *(_OWORD *)n = 0;
    if ( (unsigned __int64)v75 < (unsigned __int64)v87 )
    {
      v12 = v86 + 80 * v75;
      cleanup_argloc();
      if ( *(_QWORD *)(v12 + 32) )
      {
        *(_QWORD *)(v12 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_1181E0(v12);
      *(_QWORD *)&v87 = v7;
    }
    else if ( (unsigned __int64)v61 < v86 || (unsigned __int64)v61 >= v86 + 80LL * *((_QWORD *)&v87 + 1) )
    {
      if ( *((_QWORD *)&v87 + 1) < (unsigned __int64)v75 )
      {
        v86 = qvector_reserve();
        v8 = v87;
      }
      for ( ; v8 < v7; *(_DWORD *)(v58 + 72) = v67 )
      {
        v58 = v86 + 80 * v8;
        sub_11EE80(v58, (unsigned __int8 *)v61);
        v9 = si128.m128i_i64[0];
        *(_QWORD *)(v58 + 24) = 0;
        *(_QWORD *)(v58 + 16) = v9;
        copy_tinfo_t();
        v6 = 0;
        *(_QWORD *)(v58 + 32) = 0;
        *(_OWORD *)(v58 + 40) = 0;
        v10 = n[0];
        if ( n[0] )
        {
          v11 = (void *)qalloc_or_throw();
          *(_QWORD *)(v58 + 32) = v11;
          *(_QWORD *)(v58 + 48) = v10;
          memcpy(v11, src, v10);
          *(_QWORD *)(v58 + 40) = v10;
        }
        *(_DWORD *)(v58 + 56) = 0;
        copy_argloc();
        ++v8;
      }
      *(_QWORD *)&v87 = v7;
    }
    else
    {
      sub_11EE80((__int64)&v68, (unsigned __int8 *)v61);
      v70[0] = nullptr;
      v69 = (__int64 *)si128.m128i_i64[0];
      copy_tinfo_t();
      v47 = n[0];
      v6 = 0;
      v70[1] = nullptr;
      v71 = 0;
      if ( n[0] )
      {
        v70[1] = (void *)qalloc_or_throw();
        *((_QWORD *)&v71 + 1) = v47;
        memcpy(v70[1], src, v47);
        *(_QWORD *)&v71 = v47;
      }
      v72 = 0;
      copy_argloc();
      v73 = v67;
      if ( *((_QWORD *)&v87 + 1) < v7 )
        v86 = qvector_reserve();
      v60 = v87;
      if ( (unsigned __int64)v87 < v7 )
      {
        do
        {
          v49 = v86 + 80 * v60;
          sub_11EE80(v49, (unsigned __int8 *)&v68);
          v50 = v69;
          *(_QWORD *)(v49 + 24) = 0;
          *(_QWORD *)(v49 + 16) = v50;
          copy_tinfo_t();
          a4 = 0;
          *(_QWORD *)(v49 + 32) = 0;
          *(_OWORD *)(v49 + 40) = 0;
          if ( (_QWORD)v71 )
          {
            v51 = v71;
            v48 = (void *)qalloc_or_throw();
            *(_QWORD *)(v49 + 32) = v48;
            *(_QWORD *)(v49 + 48) = v51;
            memcpy(v48, v70[1], v51);
            *(_QWORD *)(v49 + 40) = v51;
          }
          *(_DWORD *)(v49 + 56) = 0;
          copy_argloc();
          ++v60;
          *(_DWORD *)(v49 + 72) = v73;
        }
        while ( v7 != v60 );
      }
      *(_QWORD *)&v87 = v7;
      cleanup_argloc();
      if ( v70[1] )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_1181E0((__int64)&v68);
    }
    cleanup_argloc();
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1181E0((__int64)v61);
    v8 = v75;
  }
  v13 = v82 & 0xF0;
  if ( (v82 & 0xF0) == 0xC0 )
    v13 = HIDWORD(v76);
  HIDWORD(v85) = v13;
  v14 = 0;
  v15 = 0;
  if ( !v8 )
  {
LABEL_46:
    tinfo_property = get_tinfo_property();
    v31 = s1;
    v57 = tinfo_property & 0x3F;
    v32 = (tinfo_property & 0x3F) != 1;
    if ( *(_QWORD *)(a1 + 8) )
      v31 = *(const char **)a1;
    v33 = sub_32FDB0(v54[8], *(_QWORD *)(a2 + 40), (__int64)v31, &v77, v87, v86, v32);
    v34 = *(_QWORD *)(v54[60] + 112LL);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v35 = sub_3BF0F0(*(const char **)a1);
      v36 = v35;
      if ( v35 > 7 )
        goto LABEL_53;
    }
    else
    {
      v35 = sub_3BF0F0(s1);
      v36 = v35;
      if ( v35 > 7 )
        goto LABEL_53;
    }
    if ( *(_BYTE *)(a2 + 40LL * (int)v35 + 65) )
    {
      v59 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v36, 0);
      if ( v59 == -1 )
      {
        if ( !under_debugger )
          sub_37CFE0(0xC927u, 0.0);
        goto LABEL_93;
      }
      v37 = *(_DWORD *)(v34 + 64);
      v68.m128i_i64[0] = 0x200000001LL;
      v68.m128i_i32[2] = v37;
      sub_1205C0(v33 + 32, (unsigned __int8 *)&v68);
      sub_1181E0((__int64)&v68);
      v38 = _mm_cvtsi32_si128(*(_DWORD *)(v34 + 84));
      v68.m128i_i32[0] = 1;
      v6 = _mm_unpacklo_epi32(v38, _mm_cvtsi32_si128(v59)).m128i_u64[0];
      *(__int64 *)((char *)v68.m128i_i64 + 4) = v6;
      sub_1205C0(v33 + 48, (unsigned __int8 *)&v68);
      sub_1181E0((__int64)&v68);
      *(_DWORD *)v33 = 57;
    }
LABEL_53:
    v39 = *(_QWORD *)(v33 + 72);
    *(_DWORD *)(v39 + 20) = HIDWORD(v85);
    sub_E36B0(v39, (__int64)&v74);
    *(_DWORD *)(v39 + 280) |= 4u;
    v56 = (__int64 *)(v39 + 136);
    sub_5F800((__int64 *)(v39 + 136), v97);
    v53 = (__int64 *)(v39 + 152);
    sub_3113F0((__int64 *)(v39 + 152), &v98);
    if ( (v76 & 4) != 0 )
    {
      if ( (v76 & 1) == 0 )
        goto LABEL_55;
    }
    else
    {
      v6 = 0;
      v68 = 0u;
      v69 = nullptr;
      *(_OWORD *)v70 = 0;
      v69 = (__int64 *)qvector_reserve();
      *(__m128i *)&v69[2 * (__int64)v70[0]++] = _mm_load_si128((const __m128i *)&xmmword_400180);
      sub_5F800(v56, v68.m128i_i64);
      sub_3113F0(v53, &v69);
      if ( v69 )
      {
        v70[0] = nullptr;
        qfree();
      }
      qfree();
      v68 = _mm_load_si128((const __m128i *)&xmmword_400180);
      sub_3112F0((__int64 *)(v39 + 216), &v68, 0.0, a4);
      if ( (v76 & 1) == 0 )
      {
LABEL_55:
        if ( v57 != 1 )
        {
LABEL_56:
          if ( (_DWORD)v78 != 1 )
          {
            copy_argloc();
            v40 = sub_117B90((int *)v33, v34, 0);
            if ( !v40 )
            {
              v41 = j__qalloc_or_throw();
              v42 = v41 + 64;
              v43 = *(_QWORD *)(v33 + 24);
              *(_QWORD *)(v41 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v41 + 40) = 0;
              *(_QWORD *)(v41 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v41 + 56) = 0;
              *(_QWORD *)(v41 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v41 + 72) = 0;
              sub_32ADE0(v41, v43);
              *(_BYTE *)(v41 + 32) = 4;
              *(_DWORD *)v41 = 4;
              *(_QWORD *)(v41 + 40) = v33;
              v44 = *(_DWORD *)(v33 + 68);
              *(_DWORD *)(v41 + 36) = v44;
              sub_1C1290((__int64)&v68, v54[8], (__int64)&v78, v44);
              if ( (_DWORD)v78 == 2 )
              {
                v61[0] = nullptr;
                copy_tinfo_t();
                sub_118590(v42, v54[8], nullptr, (__int64 *)v61, &v68);
                clear_tinfo_t();
              }
              else
              {
                sub_121860(v42, v54[8], (__int64)&v68, *(_DWORD *)(v33 + 68));
              }
              if ( (get_tinfo_property() & 0x2F) == 0xD )
              {
                *(_BYTE *)(v41 + 65) |= 2u;
                *(_BYTE *)(v41 + 33) |= 2u;
                *(_BYTE *)(v33 + 65) |= 2u;
                v45 = (__m128i *)v54[8];
                v61[0] = (_QWORD *)(v33 + 24);
                sub_C33F0(v45 + 87, (unsigned __int64 *)(v33 + 24), v61);
                copy_tinfo_t();
              }
              sub_1BE430((__int64)&v68, (__int64)v56, *(_DWORD *)(v33 + 68), 0, 0);
              cleanup_argloc();
              sub_B06D0(v54, v41);
              v24 = 0;
              sub_B6560(&v83);
              goto LABEL_32;
            }
LABEL_66:
            sub_B06D0(v54, v33);
            v24 = v40;
            sub_B6560(&v83);
            goto LABEL_32;
          }
          if ( !under_debugger )
            sub_37CFE0(0xC928u, *(double *)&v6);
LABEL_93:
          BUG();
        }
LABEL_65:
        v40 = sub_117B90((int *)v33, v34, 0);
        goto LABEL_66;
      }
    }
    v6 = 0;
    v46 = *(_QWORD *)(a2 + 40);
    v68 = 0u;
    *(_OWORD *)v70 = 0;
    v69 = nullptr;
    sub_133FF0(v54[8], 0, v68.m128i_i64, (__int64)&v74, v46, 0);
    sub_5F800(v56, v68.m128i_i64);
    sub_3113F0(v53, &v69);
    if ( v69 )
    {
      v70[0] = nullptr;
      qfree();
    }
    qfree();
    if ( v57 != 1 )
      goto LABEL_56;
    goto LABEL_65;
  }
  while ( 1 )
  {
    v22 = 80 * v15;
    v23 = 80 * v15 + v74;
    if ( !(unsigned __int8)sub_3BF4E0(a2 + 24, v23, 1, 0.0) )
      break;
    v16 = v86;
    v17 = s1;
    if ( *(_QWORD *)(v23 + 24) )
      v17 = *(const char **)(v23 + 16);
    v18 = sub_3BF0F0(v17);
    if ( v18 <= 7 && *(_BYTE *)(a2 + 40LL * (int)v18 + 65) )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v18, 0);
      if ( v19 == -1 )
        break;
      v55 = v19;
      tinfo_size = get_tinfo_size();
      v21 = v22 + v16;
      sub_329650(v21, v55, tinfo_size);
      if ( (unsigned int)(HIDWORD(v85) - 208) <= 0x2F )
      {
        *(_DWORD *)(v21 + 56) = 1;
        *(_QWORD *)(v21 + 64) = 0;
      }
      v15 = ++v14;
      if ( v14 >= (unsigned __int64)v75 )
        goto LABEL_46;
    }
    else
    {
      if ( !(unsigned __int8)sub_E3680((__int64)&v83, *(_QWORD *)(a2 + 16), v14, v23) )
        break;
      v15 = ++v14;
      if ( v14 >= (unsigned __int64)v75 )
        goto LABEL_46;
    }
  }
  v24 = -12;
  sub_B6560(&v83);
LABEL_32:
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v25 = v74;
  if ( v74 )
  {
    v26 = v75;
    if ( (_QWORD)v75 )
    {
      v27 = 0;
      do
      {
        v28 = (_QWORD *)(v25 + 80 * v27);
        clear_tinfo_t();
        if ( v28[5] )
        {
          v28[6] = 0;
          qfree();
        }
        if ( v28[2] )
        {
          v28[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v25 = v74;
        ++v27;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  return v24;
}


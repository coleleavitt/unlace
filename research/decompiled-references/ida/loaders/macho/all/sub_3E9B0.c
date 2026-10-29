__int64 __fastcall sub_3E9B0(char *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  unsigned __int64 v4; // rbp
  __int64 ph; // r13
  __int64 eah; // rax
  __int64 v8; // rdx
  char *v9; // r14
  int v10; // r15d
  char *v11; // rax
  char *v12; // rbx
  char *v13; // r14
  size_t v14; // rax
  size_t v15; // r13
  __int64 (*v17)(); // rcx
  _DWORD *v18; // r14
  _DWORD *v19; // r15
  int v20; // ebx
  __int64 v21; // rax
  __int64 (*v22)(); // rdx
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r12
  void (__fastcall *v29)(void *); // rax
  __int64 *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 i; // rbp
  _QWORD *v34; // rbx
  const char *v35; // rax
  const char *v36; // rbx
  size_t v37; // rax
  size_t v38; // r12
  void *v39; // rdi
  size_t v40; // rdx
  char v41; // al
  char *v42; // rax
  __m128i si128; // xmm1
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 **v49; // r14
  __int64 v50; // rax
  __int64 *v51; // r10
  unsigned __int64 v52; // rbx
  __int64 *v53; // rcx
  __int64 *v54; // r15
  const char *v55; // rax
  size_t v56; // rax
  const char *v57; // r8
  size_t v58; // r10
  int *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  char v62; // al
  const char *v63; // rax
  const char *v64; // rbx
  size_t v65; // rax
  size_t v66; // r12
  void *v67; // rdi
  size_t v68; // r13
  void *v69; // rdi
  __int64 v70; // rdx
  int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 v74; // rbx
  int v75; // r12d
  __int64 *v76; // rbp
  unsigned __int64 v77; // r13
  __int64 *v78; // rax
  char *v79; // r10
  __int64 *v80; // rbx
  __int64 *v81; // rsi
  int v82; // r8d
  __int64 v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __m128i v86; // xmm1
  __int64 v87; // rax
  __m128i *v88; // rax
  __int64 v89; // rdx
  __m128i v90; // xmm1
  __int64 v91; // rdx
  __m128i v92; // xmm1
  __int64 v93; // rdx
  __int64 *v94; // rax
  __int64 (__fastcall ***v95)(); // rdx
  __m128i v96; // xmm0
  __int64 (__fastcall ***v97)(); // rdx
  __m128i v98; // xmm0
  __int64 *v99; // r15
  __int64 v100; // rax
  __int64 v101; // rax
  void *v102; // rdi
  size_t v103; // r13
  const void *v104; // r14
  void *v105; // rdi
  const void *v106; // rbx
  void *v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 *v111; // rsi
  int v112; // edx
  struct _Unwind_Exception *v113; // rbx
  __int64 (*v114)(); // [rsp+8h] [rbp-C0h]
  __int64 (*v115)(); // [rsp+8h] [rbp-C0h]
  int v116; // [rsp+8h] [rbp-C0h]
  size_t v117; // [rsp+8h] [rbp-C0h]
  __int64 v118; // [rsp+8h] [rbp-C0h]
  const char *src; // [rsp+10h] [rbp-B8h]
  int srca; // [rsp+10h] [rbp-B8h]
  _BYTE *srcd; // [rsp+10h] [rbp-B8h]
  __int64 *srcb; // [rsp+10h] [rbp-B8h]
  char *srce; // [rsp+10h] [rbp-B8h]
  char *srcf; // [rsp+10h] [rbp-B8h]
  void *srcc; // [rsp+10h] [rbp-B8h]
  __int64 *v126; // [rsp+18h] [rbp-B0h]
  void *v127; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v128; // [rsp+20h] [rbp-A8h]
  __int64 v129; // [rsp+28h] [rbp-A0h]
  __int64 *v130; // [rsp+28h] [rbp-A0h]
  __int64 *v131; // [rsp+28h] [rbp-A0h]
  __m128i v132; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall ***v133)(); // [rsp+40h] [rbp-88h]
  size_t v134; // [rsp+48h] [rbp-80h]
  __int64 v135; // [rsp+50h] [rbp-78h] BYREF
  __int128 v136; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall **v137)(); // [rsp+70h] [rbp-58h] BYREF
  __int128 v138; // [rsp+78h] [rbp-50h]
  unsigned __int64 v139; // [rsp+88h] [rbp-40h]

  v3 = (__int64 *)a1;
  v4 = a2;
  v139 = __readfsqword(0x28u);
  ph = get_ph();
  eah = get_eah();
  v9 = (char *)qword_66C30;
  if ( !qword_66C30 )
  {
    v17 = (__int64 (*)())eah;
    if ( !dword_66C28 )
    {
      v114 = (__int64 (*)())eah;
      a2 = 0;
      a1 = (char *)operator new(0x360u);
      *((_QWORD *)a1 + 1) = a3;
      *(_QWORD *)a1 = v114;
      *((_QWORD *)a1 + 66) = 0;
      *((_QWORD *)a1 + 69) = 0;
      *((_QWORD *)a1 + 72) = 0;
      *((_QWORD *)a1 + 75) = 0;
      *((_QWORD *)a1 + 78) = 0;
      *((_QWORD *)a1 + 81) = 0;
      *((_QWORD *)a1 + 84) = 0;
      *((_QWORD *)a1 + 87) = 0;
      *((_QWORD *)a1 + 88) = 0;
      *((_QWORD *)a1 + 91) = 0;
      *((_QWORD *)a1 + 94) = 0;
      *((_QWORD *)a1 + 95) = -1;
      *((_QWORD *)a1 + 96) = 0;
      *((_QWORD *)a1 + 101) = 0;
      *((_QWORD *)a1 + 102) = 0;
      *((_DWORD *)a1 + 214) = 0;
      *(_OWORD *)(a1 + 536) = 0;
      *((_OWORD *)a1 + 35) = 0;
      *(_OWORD *)(a1 + 584) = 0;
      *((_OWORD *)a1 + 38) = 0;
      *(_OWORD *)(a1 + 632) = 0;
      *((_OWORD *)a1 + 41) = 0;
      *(_OWORD *)(a1 + 680) = 0;
      *(_OWORD *)(a1 + 712) = 0;
      *((_OWORD *)a1 + 46) = 0;
      *(_OWORD *)(a1 + 776) = 0;
      *(_OWORD *)(a1 + 792) = 0;
      *(_OWORD *)(a1 + 824) = 0;
      *(_OWORD *)(a1 + 840) = 0;
      a1[860] = 0;
      qword_66C30 = a1;
      v41 = sub_3B840((__int64)a1, 0, nullptr);
      v9 = (char *)qword_66C30;
      v17 = v114;
      if ( v41 )
      {
        if ( qword_66C30 )
          goto LABEL_2;
      }
      else
      {
        if ( qword_66C30 )
        {
          sub_1A3D0((__int64)qword_66C30);
          a2 = 864;
          a1 = v9;
          operator delete(v9, 0x360u);
          v17 = v114;
        }
        dword_66C28 = 1;
        qword_66C30 = nullptr;
      }
    }
    v18 = qword_66C20;
    v19 = qword_66C20;
    if ( qword_66C20 )
    {
      a2 = (unsigned int)dword_66C10;
      v20 = *((_QWORD *)qword_66C20 + 10);
      if ( dword_66C10 >= v20 && dword_66C10 )
        goto LABEL_34;
    }
    else
    {
      v115 = v17;
      v42 = (char *)operator new(0x208u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
      a1 = v42;
      v44 = _mm_load_si128((const __m128i *)&xmmword_574B0);
      *(_QWORD *)v42 = &off_62AA0;
      *((__m128i *)v42 + 6) = si128;
      v45 = _mm_load_si128((const __m128i *)&xmmword_574C0);
      *((__m128i *)v42 + 1) = v44;
      *(__m128i *)(v42 + 120) = v45;
      *((_QWORD *)v42 + 1) = v115;
      *((_QWORD *)v42 + 4) = -1;
      *((_DWORD *)v42 + 10) = 8;
      v42[44] = 1;
      *((_QWORD *)v42 + 6) = a3;
      v42[56] = 0;
      *((_QWORD *)v42 + 9) = 0;
      v42[112] = 0;
      *((_QWORD *)v42 + 17) = 0;
      *((_WORD *)v42 + 80) = 0;
      *((_QWORD *)v42 + 25) = 0;
      *((_QWORD *)v42 + 28) = 0;
      *((_QWORD *)v42 + 31) = 0;
      *((_QWORD *)v42 + 34) = 0;
      *((_QWORD *)v42 + 37) = 0;
      *((_QWORD *)v42 + 40) = 0;
      *((_OWORD *)v42 + 5) = 0;
      *((_OWORD *)v42 + 9) = 0;
      *((_OWORD *)v42 + 13) = 0;
      *(_OWORD *)(v42 + 232) = 0;
      *((_OWORD *)v42 + 16) = 0;
      *(_OWORD *)(v42 + 280) = 0;
      *((_OWORD *)v42 + 19) = 0;
      *(_OWORD *)(v42 + 328) = 0;
      *((_QWORD *)v42 + 43) = 0;
      *((_QWORD *)v42 + 46) = 0;
      *((_QWORD *)v42 + 49) = 0;
      *((_QWORD *)v42 + 52) = 0;
      *((_WORD *)v42 + 220) = 0;
      v42[442] = 0;
      *((_DWORD *)v42 + 111) = 0;
      *((_QWORD *)v42 + 58) = 0;
      *((_QWORD *)v42 + 59) = 0;
      *((_DWORD *)v42 + 120) = 0;
      *((_QWORD *)v42 + 61) = 0;
      *((_QWORD *)v42 + 64) = 0;
      *((_OWORD *)v42 + 22) = 0;
      *(_OWORD *)(v42 + 376) = 0;
      *((_OWORD *)v42 + 25) = 0;
      *(_OWORD *)(v42 + 424) = 0;
      *((_OWORD *)v42 + 28) = -1;
      *((_OWORD *)v42 + 31) = 0;
      qword_66C20 = v42;
      v46 = sub_25BB0((__int64)v42);
      v18 = qword_66C20;
      v19 = qword_66C20;
      if ( !v46 )
        goto LABEL_33;
      v47 = *((_QWORD *)qword_66C20 + 10);
      a2 = (unsigned int)dword_66C10;
      v20 = v47;
      if ( dword_66C10 )
      {
        if ( dword_66C10 >= (int)v47 )
          goto LABEL_33;
      }
    }
    if ( dword_66C0C <= 0 )
      goto LABEL_18;
    v19 = v18;
    if ( dword_66C0C <= 3 )
    {
LABEL_50:
      if ( *((_QWORD *)v18 + 15) != -1 )
      {
        v135 = 0;
        v137 = nullptr;
        v136 = 0;
        v138 = 0;
        sub_3CE10(v18[42], v18[43], &v135, (__int64 *)&v137, 0);
        sub_35470(v3);
        v35 = sub_14790(v18[42], v18[43], nullptr, (v18[41] & 0xFEFFFFFF) == -822415874);
        v36 = v35;
        if ( v35 && (v37 = strlen(v35), (v38 = v37) != 0) )
        {
          v67 = *(void **)v4;
          v68 = v37 + 1;
          if ( *(_QWORD *)(v4 + 16) < v37 + 1 )
          {
            v100 = qvector_reserve();
            *(_QWORD *)v4 = v100;
            v67 = (void *)v100;
          }
          *(_QWORD *)(v4 + 8) = v68;
          memmove(v67, v36, v38);
          *(_BYTE *)(*(_QWORD *)v4 + v38) = 0;
        }
        else
        {
          *(_QWORD *)(v4 + 8) = 0;
        }
        ++dword_66C0C;
        if ( v137 )
        {
          *(_QWORD *)&v138 = 0;
          qfree();
        }
        if ( v135 )
        {
          *(_QWORD *)&v136 = 0;
          qfree();
        }
        return 16409;
      }
      goto LABEL_149;
    }
    while ( 1 )
    {
      dword_66C0C = 0;
      a2 = (unsigned int)(dword_66C10 + 1);
      v21 = *((_QWORD *)v18 + 10);
      dword_66C10 = a2;
      v20 = v21;
      if ( (_DWORD)a2 && (int)a2 >= (int)v21 )
        goto LABEL_33;
LABEL_18:
      if ( (unsigned int)sub_1CB40((__int64)v18, a2, 0) == 3 )
        break;
      a2 = (unsigned int)dword_66C10;
      if ( !sub_25EF0((__int64)qword_66C20, dword_66C10, 0, 1) )
        break;
      a1 = (char *)qword_66C20;
      v23 = *((_DWORD *)qword_66C20 + 44);
      if ( v23 != 2 && v23 != 12 )
        break;
      a2 = (unsigned __int64)&v137;
      LOBYTE(v138) = 0;
      v137 = off_62D68;
      sub_27280((__int64)qword_66C20, (__m128i *)&v137, v22, v17);
      if ( !(_BYTE)v138 )
        break;
      v18 = qword_66C20;
      v19 = qword_66C20;
      if ( dword_66C0C <= 3 )
        goto LABEL_50;
    }
    if ( v20 )
    {
      v126 = (__int64 *)qword_66C18;
      if ( qword_66C18 )
      {
        v24 = *(_QWORD *)(qword_66C18 + 8);
        goto LABEL_25;
      }
      v127 = qword_66C20;
      v48 = qalloc_or_throw();
      *(_QWORD *)v48 = 0;
      v49 = (__int64 **)v48;
      *(_OWORD *)(v48 + 8) = 0;
      if ( v20 <= 0 )
      {
        qword_66C18 = v48;
LABEL_75:
        v19 = qword_66C20;
        goto LABEL_33;
      }
      v50 = v20;
      v51 = nullptr;
      v52 = 0;
      v24 = 0;
      v129 = v50;
      v133 = &v137;
      do
      {
        v17 = (__int64 (*)())v127;
        if ( v52 >= *((_QWORD *)v127 + 10) )
          break;
        v59 = (int *)(*((_QWORD *)v127 + 9) + 20 * v52);
        v116 = *v59;
        srca = v59[1];
        if ( (unsigned __int64)v49[2] < v24 + 1 )
        {
          v60 = qvector_reserve();
          v24 = (unsigned __int64)v49[1];
          *v49 = (__int64 *)v60;
          v51 = (__int64 *)v60;
        }
        v53 = (__int64 *)v133;
        v54 = &v51[8 * v24];
        *v54 = 0;
        v54[3] = 0;
        *(_OWORD *)(v54 + 1) = 0;
        *((_OWORD *)v54 + 2) = 0;
        v49[1] = (__int64 *)((char *)v49[1] + 1);
        v135 = 0;
        v137 = nullptr;
        v136 = 0;
        v138 = 0;
        sub_3CE10(v116, srca, &v135, v53, 0);
        sub_35470(v54);
        v55 = sub_14790(v116, srca, (_DWORD *)v54 + 12, *((_BYTE *)v127 + 160));
        if ( v55 && (src = v55, v56 = strlen(v55), v57 = src, (v58 = v56) != 0) )
        {
          v69 = (void *)v54[3];
          v70 = v56 + 1;
          if ( v54[5] < v56 + 1 )
          {
            v134 = v56;
            v132.m128i_i64[0] = (__int64)src;
            srcc = (void *)(v56 + 1);
            v101 = qvector_reserve();
            v54[3] = v101;
            v58 = v134;
            v69 = (void *)v101;
            v57 = (const char *)v132.m128i_i64[0];
            v70 = (__int64)srcc;
          }
          v54[4] = v70;
          srcd = (_BYTE *)v58;
          memmove(v69, v57, v58);
          srcd[v54[3]] = 0;
        }
        else
        {
          v54[4] = 0;
        }
        *((_DWORD *)v54 + 13) = v52;
        *((_BYTE *)v54 + 56) = (v116 & 0x3000000) != 0;
        if ( v137 )
        {
          *(_QWORD *)&v138 = 0;
          qfree();
        }
        if ( v135 )
        {
          *(_QWORD *)&v136 = 0;
          qfree();
        }
        v51 = *v49;
        v24 = (unsigned __int64)v49[1];
        ++v52;
      }
      while ( v129 != v52 );
      v71 = *(_DWORD *)(ph + 4);
      a2 = (unsigned __int64)&v51[8 * v24];
      if ( v51 == (__int64 *)a2 )
      {
LABEL_127:
        qword_66C18 = (__int64)v49;
        v126 = (__int64 *)v49;
LABEL_25:
        if ( dword_66C10 < v24 )
        {
          v25 = *v126 + ((__int64)dword_66C10 << 6);
          v26 = v25;
          if ( (__int64 *)v25 != v3 )
          {
            v27 = *(_QWORD *)(v25 + 8);
            if ( v27 > 1 )
            {
              v104 = *(const void **)v25;
              v105 = (void *)*v3;
              if ( v3[2] < v27 )
              {
                v110 = qvector_reserve();
                *v3 = v110;
                v105 = (void *)v110;
              }
              v3[1] = v27;
              memmove(v105, v104, v27 - 1);
              *(_BYTE *)(*v3 + v27 - 1) = 0;
            }
            else
            {
              v3[1] = 0;
            }
          }
          if ( v4 != v26 + 24 )
          {
            v28 = *(_QWORD *)(v26 + 32);
            if ( v28 > 1 )
            {
              v106 = *(const void **)(v26 + 24);
              v107 = *(void **)v4;
              if ( *(_QWORD *)(v4 + 16) < v28 )
              {
                v109 = qvector_reserve();
                *(_QWORD *)v4 = v109;
                v107 = (void *)v109;
              }
              *(_QWORD *)(v4 + 8) = v28;
              memmove(v107, v106, v28 - 1);
              *(_BYTE *)(*(_QWORD *)v4 + v28 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v4 + 8) = 0;
            }
          }
          goto LABEL_9;
        }
        goto LABEL_75;
      }
      v72 = ((__int64)(v24 << 6) >> 6) + 1;
      v73 = v72 / 2;
      v118 = v72 / 2;
      if ( v72 <= 1 )
      {
        if ( v118 )
          sub_16090((__int64)v51, (__int64 *)a2, v71);
        else
          sub_175D0(v51, v51, &v51[8 * v24], nullptr, v71);
LABEL_139:
        v77 = 0;
        goto LABEL_126;
      }
      srcb = v3;
      v74 = (__int64)v51;
      v75 = *(_DWORD *)(ph + 4);
      v128 = v4;
      v76 = &v51[8 * v24];
      while ( 1 )
      {
        v77 = v73 << 6;
        v78 = (__int64 *)operator new(v73 << 6, (const std::nothrow_t *)&std::nothrow);
        if ( v78 )
          break;
        if ( v73 == 1 )
        {
          v111 = v76;
          v126 = nullptr;
          v112 = v75;
          v3 = srcb;
          v4 = v128;
          v77 = 0;
          sub_16090(v74, v111, v112);
          goto LABEL_126;
        }
        v73 = (v73 + 1) >> 1;
      }
      v79 = (char *)v74;
      v80 = (__int64 *)((char *)v78 + v77);
      v81 = v76;
      v82 = v75;
      v4 = v128;
      v3 = srcb;
      v126 = v78;
      if ( v78 == (__int64 *)((char *)v78 + v77) )
      {
        if ( v118 == v73 )
        {
          sub_175D0((__int64 *)v79, (__int64 *)v79, v81, v78, v82);
          goto LABEL_139;
        }
        v77 = 0;
      }
      else
      {
        v83 = *(_QWORD *)v79;
        *(_QWORD *)v79 = 0;
        v84 = _mm_loadu_si128((const __m128i *)(v79 + 8));
        *v126 = v83;
        *(__m128i *)(v126 + 1) = v84;
        v85 = *((_QWORD *)v79 + 3);
        v86 = _mm_loadu_si128((const __m128i *)v79 + 2);
        *(_OWORD *)(v79 + 8) = 0;
        v126[3] = v85;
        *((__m128i *)v126 + 2) = v86;
        v87 = *((_QWORD *)v79 + 6);
        *((_QWORD *)v79 + 3) = 0;
        *((_OWORD *)v79 + 2) = 0;
        v126[6] = v87;
        *((_BYTE *)v126 + 56) = v79[56];
        v88 = (__m128i *)(v126 + 8);
        if ( v77 == 64 )
        {
          v94 = v126;
        }
        else
        {
          do
          {
            v89 = v88[-4].m128i_i64[0];
            v90 = _mm_loadu_si128((__m128i *)((char *)v88 - 56));
            *(__m128i *)((char *)&v88[-4] + 8) = 0;
            v88 += 4;
            v88[-8].m128i_i64[0] = 0;
            v88[-4].m128i_i64[0] = v89;
            v91 = v88[-7].m128i_i64[1];
            *(__m128i *)((char *)v88 - 56) = v90;
            v92 = _mm_loadu_si128(v88 - 6);
            v88[-3].m128i_i64[1] = v91;
            v93 = v88[-5].m128i_i64[0];
            v88[-7].m128i_i64[1] = 0;
            v88[-1].m128i_i64[0] = v93;
            LOBYTE(v93) = v88[-5].m128i_i8[8];
            v88[-2] = v92;
            v88[-6] = 0;
            v88[-1].m128i_i8[8] = v93;
          }
          while ( v88 != (__m128i *)v80 );
          v94 = v80 - 8;
        }
        v95 = (__int64 (__fastcall ***)())*v94;
        v96 = _mm_loadu_si128((const __m128i *)(v94 + 1));
        *v94 = 0;
        *(_OWORD *)(v94 + 1) = 0;
        if ( *(_QWORD *)v79 )
        {
          *((_QWORD *)v79 + 1) = 0;
          LODWORD(v134) = v82;
          v133 = v95;
          v130 = v94;
          srce = v79;
          v132 = v96;
          qfree();
          v82 = v134;
          v96 = _mm_load_si128(&v132);
          v95 = v133;
          v94 = v130;
          v79 = srce;
        }
        *(_QWORD *)v79 = v95;
        *(__m128i *)(v79 + 8) = v96;
        v97 = (__int64 (__fastcall ***)())v94[3];
        v98 = _mm_loadu_si128((const __m128i *)v94 + 2);
        v94[3] = 0;
        *((_OWORD *)v94 + 2) = 0;
        if ( *((_QWORD *)v79 + 3) )
        {
          *((_QWORD *)v79 + 4) = 0;
          LODWORD(v134) = v82;
          v133 = v97;
          v131 = v94;
          srcf = v79;
          v132 = v98;
          qfree();
          v82 = v134;
          v98 = _mm_load_si128(&v132);
          v97 = v133;
          v94 = v131;
          v79 = srcf;
        }
        *((_QWORD *)v79 + 3) = v97;
        *((__m128i *)v79 + 2) = v98;
        *((_DWORD *)v79 + 12) = *((_DWORD *)v94 + 12);
        *((_DWORD *)v79 + 13) = *((_DWORD *)v94 + 13);
        v79[56] = *((_BYTE *)v94 + 56);
        if ( v118 == v73 )
        {
          sub_175D0((__int64 *)v79, (__int64 *)&v79[v77], v81, v126, v82);
          goto LABEL_119;
        }
      }
      sub_183F0((__int64 *)v79, v81, v126, v73, v82);
LABEL_119:
      if ( v126 != v80 )
      {
        v99 = v126;
        do
        {
          if ( v99[3] )
          {
            v99[4] = 0;
            qfree();
          }
          if ( *v99 )
          {
            v99[1] = 0;
            qfree();
          }
          v99 += 8;
        }
        while ( v99 != v80 );
      }
LABEL_126:
      a2 = v77;
      operator delete(v126, v77);
      v24 = (unsigned __int64)v49[1];
      goto LABEL_127;
    }
    a2 = (unsigned int)dword_66C10;
    a1 = (char *)qword_66C20;
    v62 = sub_25EF0((__int64)qword_66C20, dword_66C10, 0, 1);
    v19 = qword_66C20;
    if ( v62 )
    {
      if ( *((_QWORD *)qword_66C20 + 15) != -1 )
      {
        v135 = 0;
        v137 = nullptr;
        v136 = 0;
        v138 = 0;
        sub_3CE10(*((_DWORD *)qword_66C20 + 42), *((_DWORD *)qword_66C20 + 43), &v135, (__int64 *)&v137, 0);
        sub_117C0(v19[44]);
        sub_35470(v3);
        v63 = sub_14790(v19[42], v19[43], nullptr, (v19[41] & 0xFEFFFFFF) == -822415874);
        v64 = v63;
        if ( v63 && (v65 = strlen(v63), (v66 = v65) != 0) )
        {
          v102 = *(void **)v4;
          v103 = v65 + 1;
          if ( *(_QWORD *)(v4 + 16) < v65 + 1 )
          {
            v108 = qvector_reserve();
            *(_QWORD *)v4 = v108;
            v102 = (void *)v108;
          }
          *(_QWORD *)(v4 + 8) = v103;
          memmove(v102, v64, v66);
          *(_BYTE *)(*(_QWORD *)v4 + v66) = 0;
        }
        else
        {
          *(_QWORD *)(v4 + 8) = 0;
        }
        if ( v137 )
        {
          *(_QWORD *)&v138 = 0;
          qfree();
        }
        if ( v135 )
        {
          *(_QWORD *)&v136 = 0;
          qfree();
        }
        goto LABEL_9;
      }
LABEL_149:
      v113 = (struct _Unwind_Exception *)sub_11CF0(a1, a2, v8, v17);
      if ( v137 )
      {
        *(_QWORD *)&v138 = 0;
        qfree();
      }
      if ( v135 )
      {
        *(_QWORD *)&v136 = 0;
        qfree();
      }
      _Unwind_Resume(v113);
    }
LABEL_33:
    if ( !v19 )
    {
LABEL_36:
      v30 = (__int64 *)qword_66C18;
      qword_66C20 = nullptr;
      if ( qword_66C18 )
      {
        v31 = *(_QWORD *)qword_66C18;
        if ( *(_QWORD *)qword_66C18 )
        {
          v32 = *(_QWORD *)(qword_66C18 + 8);
          if ( v32 )
          {
            for ( i = 0; i != v32; ++i )
            {
              v34 = (_QWORD *)(v31 + (i << 6));
              if ( v34[3] )
              {
                v34[4] = 0;
                qfree();
              }
              if ( *v34 )
              {
                v34[1] = 0;
                qfree();
              }
              v31 = *v30;
            }
          }
          v30[1] = 0;
          qfree();
        }
        qfree();
      }
      qword_66C18 = 0;
      return 0;
    }
LABEL_34:
    v29 = *(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL);
    if ( v29 == sub_16550 )
    {
      sub_162E0((__int64)v19);
      operator delete(v19, 0x208u);
    }
    else
    {
      ((void (__fastcall *)(_DWORD *, unsigned __int64, void (__fastcall *)(void *), __int64 (*)()))v29)(
        v19,
        a2,
        sub_16550,
        v17);
    }
    goto LABEL_36;
  }
LABEL_2:
  v10 = dword_66C10;
  v11 = v9 + 23;
  v12 = v9 + 32;
  if ( dword_66C10 > 1 )
  {
    sub_1A3D0((__int64)v9);
    operator delete(v9, 0x360u);
    dword_66C28 = 1;
    qword_66C30 = nullptr;
    return 0;
  }
  else
  {
    while ( *v11 == 32 )
    {
      if ( ++v11 == v12 )
        goto LABEL_5;
    }
    v12 = v11;
LABEL_5:
    v13 = sub_11C10(v12);
    v14 = strlen(v13);
    v15 = v14;
    if ( v14 )
    {
      v39 = *(void **)v4;
      v40 = v14 + 1;
      if ( *(_QWORD *)(v4 + 16) < v14 + 1 )
      {
        v117 = v14 + 1;
        v61 = qvector_reserve();
        v10 = dword_66C10;
        v40 = v117;
        *(_QWORD *)v4 = v61;
        v39 = (void *)v61;
      }
      *(_QWORD *)(v4 + 8) = v40;
      memmove(v39, v13, v15);
      *(_BYTE *)(*(_QWORD *)v4 + v15) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0;
    }
    if ( !v10 )
    {
      sub_35470(v3);
LABEL_9:
      ++dword_66C10;
      return 16409;
    }
    sub_35470(v3);
    ++dword_66C10;
    return 49177;
  }
}


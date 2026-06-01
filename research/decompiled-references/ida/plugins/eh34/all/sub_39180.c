__int64 __fastcall sub_39180(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, __int64); // rax
  __int64 v4; // rsi
  struct _Unwind_Exception *v5; // rbx
  _QWORD *v6; // rbp
  _QWORD *v7; // r12
  void *v8; // rdi
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD *); // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v16; // rbp
  _QWORD *v17; // r13
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD *, _DWORD *); // rax
  __int64 v19; // r12
  void (__fastcall *v20)(__int64, __int64 *, __int64, __int64); // rax
  void (__fastcall *v21)(__int64, void **, __int64, __int64); // rax
  __int64 v22; // rdi
  void *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  void (__fastcall *v27)(__int64, _QWORD *, __int64, __int64); // rax
  __int64 v28; // rbx
  _QWORD *v29; // r13
  void (__fastcall *v30)(__int64, _QWORD *); // rax
  __int64 v31; // rax
  _DWORD *v32; // r12
  __int64 v33; // r13
  void (__fastcall *v34)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v35; // r13
  void (__fastcall *v36)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  _QWORD *v40; // r12
  __int64 v41; // r13
  __int64 v42; // rbx
  void (__fastcall *v43)(__int64, _QWORD *, __int64, __int64); // rax
  unsigned __int64 v44; // rdi
  _QWORD *v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  _QWORD *v48; // r10
  __int64 v49; // r12
  _QWORD *v50; // rax
  int v51; // ecx
  __int64 v52; // rbx
  unsigned int v53; // ebp
  void (__fastcall *v54)(__int64, __int64, _QWORD); // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  _QWORD *v57; // rbx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  _QWORD *v60; // r13
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  unsigned __int64 v63; // r12
  int *v64; // rsi
  unsigned __int64 v65; // rdi
  int *v66; // rcx
  unsigned __int64 v67; // rdx
  _QWORD **v68; // rax
  int *v69; // rdx
  __int64 v70; // rbx
  std::__detail::_Prime_rehash_policy *v71; // rsi
  __int64 v72; // rax
  unsigned int (__fastcall *v73)(__int64, char *); // rax
  unsigned int (__fastcall *v74)(__int64, __int64, _QWORD *); // rax
  _DWORD *v75; // rsi
  _DWORD *v76; // rax
  __int64 (__fastcall *v77)(__int64, char *, _QWORD); // rax
  __int64 v78; // r14
  __int64 v79; // r12
  __int64 i; // rbp
  __int64 (__fastcall *v81)(__int64, __int64); // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  void (__fastcall *v84)(__int64, __int64, __int64); // rax
  __int64 (__fastcall *v85)(__int64, __int64, __int64, __int64); // rax
  __int64 v86; // rax
  void (__fastcall *v87)(__int64, __int64); // rax
  _QWORD *v88; // rdi
  __int64 v89; // rax
  int v90; // ebx
  __int64 v91; // rsi
  int v92; // eax
  void (__fastcall *v93)(__int64, __int64); // rax
  __int64 (__fastcall *v94)(__int64, char *, _QWORD); // rax
  __int64 v95; // rax
  _QWORD *v96; // rbx
  _QWORD *v97; // rbp
  void (__fastcall *v98)(__int64, __int64, _QWORD *); // rax
  __m128i v99; // xmm0
  __int64 v100; // rbp
  char v101; // [rsp+0h] [rbp-178h]
  __int64 v102; // [rsp+0h] [rbp-178h]
  __int64 v103; // [rsp+0h] [rbp-178h]
  unsigned __int64 v104; // [rsp+0h] [rbp-178h]
  _DWORD *v105; // [rsp+0h] [rbp-178h]
  std::__detail::_Prime_rehash_policy *v106; // [rsp+8h] [rbp-170h]
  __int64 nb; // [rsp+10h] [rbp-168h]
  unsigned int na; // [rsp+10h] [rbp-168h]
  __int64 v110; // [rsp+18h] [rbp-160h]
  __int64 v111; // [rsp+20h] [rbp-158h]
  _QWORD *v112; // [rsp+28h] [rbp-150h]
  char *v113; // [rsp+30h] [rbp-148h]
  unsigned int v114; // [rsp+3Ch] [rbp-13Ch]
  __int64 v116; // [rsp+68h] [rbp-110h] BYREF
  __int64 v117; // [rsp+70h] [rbp-108h] BYREF
  __int64 v118; // [rsp+78h] [rbp-100h] BYREF
  _QWORD v119[6]; // [rsp+80h] [rbp-F8h] BYREF
  void *s; // [rsp+B0h] [rbp-C8h] BYREF
  void *v121[2]; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 v122; // [rsp+C8h] [rbp-B0h]
  int v123; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v124; // [rsp+D8h] [rbp-A0h]
  _QWORD v125[2]; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v126[6]; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v127; // [rsp+120h] [rbp-58h]
  __int128 v128; // [rsp+128h] [rbp-50h]
  unsigned __int64 v129; // [rsp+138h] [rbp-40h]

  v129 = __readfsqword(0x28u);
  v126[0] = off_8C260;
  memset(&v126[1], 0, 32);
  v126[5] = "__eh34_try_continuation";
  v127 = 0;
  v128 = 0;
  hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(a1, a2);
  v12 = (_QWORD *)a3;
  v13 = 412;
  hexdsp(412, a3, v126);
  v14 = v128;
  if ( !(_QWORD)v128 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    goto LABEL_3;
  }
  v101 = 0;
  v16 = v128;
  do
  {
    while ( 1 )
    {
      --v16;
      v28 = v127 + 40 * v16;
      v29 = *(_QWORD **)(v28 + 32);
      v30 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v13, v12);
      v12 = v29;
      v13 = 338;
      v30(338, v29);
      v31 = *(_QWORD *)(v28 + 32);
      v32 = *(_DWORD **)(v31 + 8);
      if ( v32 )
        break;
      v33 = *(_QWORD *)(v31 + 24);
      v34 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(338, v12);
      v34(418, &v116, a3, v33);
      v35 = v116;
      v36 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v116);
      v36(417, &v117, a3, v35);
      v37 = v117;
      v38 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 8LL) + 72LL);
      v39 = sub_6DC00(v38, v117);
      v40 = *(_QWORD **)(v28 + 16);
      v41 = v39;
      v42 = *(_QWORD *)(v28 + 32);
      v43 = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64))get_hexdsp(v38, v37);
      v12 = v40;
      v13 = 364;
      v43(364, v40, v41, v42);
      if ( !v16 )
        goto LABEL_12;
    }
    if ( *v32 != 55 )
    {
      v17 = *(_QWORD **)(v28 + 16);
      v18 = (__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *))get_hexdsp(338, v12);
      v19 = v18(617, a3, v17, v32);
      v102 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 24LL);
      v20 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(617, a3);
      v20(418, &v118, a3, v102);
      v103 = v118;
      v21 = (void (__fastcall *)(__int64, void **, __int64, __int64))get_hexdsp(418, &v118);
      v21(417, &s, a3, v103);
      v22 = *(unsigned int *)(v19 + 72);
      v23 = s;
      v24 = sub_6DC00(v22, s);
      v25 = *(_QWORD *)(v28 + 32);
      v26 = v24;
      v27 = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64))get_hexdsp(v22, v23);
      v12 = v17;
      v13 = 364;
      v27(364, v17, v26, v25);
      v101 = 1;
    }
  }
  while ( v16 );
LABEL_12:
  if ( v101 )
  {
    *(_QWORD *)&v128 = 0;
    v98 = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(v13, v12);
    v12 = (_QWORD *)a3;
    v98(412, a3, v126);
    if ( (_QWORD)v128 != v14 )
    {
      sub_64B50(
        (unsigned int)&s,
        *(_QWORD *)(a2 + 8),
        (unsigned int)"adjust_try_continuation_boundaries(%a): initial results %zu vs. %zu",
        *(_QWORD *)(a3 + 40),
        v14,
        v128);
      v99 = _mm_loadu_si128((const __m128i *)v121);
      *(_QWORD *)a1 = s;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v99;
      goto LABEL_3;
    }
  }
  v121[0] = &dword_0 + 1;
  v44 = 1;
  v45 = v125;
  s = v125;
  v121[1] = nullptr;
  v122 = 0;
  v123 = 1065353216;
  v124 = 0;
  v125[0] = 0;
  while ( 1 )
  {
    --v14;
    v46 = v127 + 40 * v14;
    v47 = *(_QWORD *)(v46 + 16);
    v104 = **(int **)(v47 + 368);
    v48 = (_QWORD *)v45[v104 % v44];
    v49 = v104 % v44;
    if ( v48 )
    {
      v50 = (_QWORD *)*v48;
      if ( (_DWORD)v104 == *(_DWORD *)(*v48 + 8LL) )
      {
LABEL_19:
        if ( v48 && *v48 )
        {
          v52 = *v48 + 16LL;
          goto LABEL_22;
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)*v50;
          if ( !*v50 )
            break;
          v51 = *((_DWORD *)v12 + 2);
          v48 = v50;
          if ( v104 % v44 != v51 % v44 )
            break;
          v50 = (_QWORD *)*v50;
          if ( (_DWORD)v104 == v51 )
            goto LABEL_19;
        }
      }
    }
    v56 = operator new(0x20u);
    *(_DWORD *)(v56 + 8) = v104;
    v44 = (unsigned __int64)&v123;
    v57 = (_QWORD *)v56;
    *(_QWORD *)v56 = 0;
    v58 = v122;
    *(_QWORD *)(v56 + 16) = 0;
    v12 = v121[0];
    *(_QWORD *)(v56 + 24) = 0;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)&v123,
                            (unsigned __int64)v12,
                            v58,
                            1u) )
    {
      v63 = v59;
      if ( v59 == 1 )
      {
        v125[0] = 0;
        v60 = v125;
      }
      else
      {
        if ( v59 > 0xFFFFFFFFFFFFFFFLL )
        {
          if ( v59 >> 61 )
            sub_B371();
          std::__throw_bad_alloc();
        }
        nb = 8 * v59;
        v60 = (_QWORD *)operator new(8 * v59);
        memset(v60, 0, nb);
      }
      v64 = (int *)v121[1];
      v65 = 0;
      for ( v121[1] = nullptr; v64; v65 = v67 )
      {
        while ( 1 )
        {
          v66 = v64;
          v64 = *(int **)v64;
          v67 = v66[2] % v63;
          v68 = (_QWORD **)&v60[v67];
          if ( !*v68 )
            break;
          *(_QWORD *)v66 = **v68;
          **v68 = v66;
          if ( !v64 )
            goto LABEL_38;
        }
        *(void **)v66 = v121[1];
        v121[1] = v66;
        *v68 = &v121[1];
        if ( *(_QWORD *)v66 )
          v60[v65] = v66;
      }
LABEL_38:
      v44 = (unsigned __int64)s;
      v12 = v125;
      if ( s != v125 )
      {
        v12 = (_QWORD *)(8 * (__int64)v121[0]);
        operator delete(s, 8 * (__int64)v121[0]);
      }
      v121[0] = (void *)v63;
      s = v60;
      v49 = v104 % v63;
      v61 = &v60[v49];
      v62 = (_QWORD *)v60[v49];
      if ( !v62 )
      {
LABEL_41:
        v69 = (int *)v121[1];
        v121[1] = v57;
        *v57 = v69;
        if ( v69 )
        {
          v60[v69[2] % (unsigned __int64)v121[0]] = v57;
          v61 = (char *)s + v49 * 8;
        }
        *v61 = &v121[1];
        goto LABEL_27;
      }
    }
    else
    {
      v60 = s;
      v61 = (char *)s + v49 * 8;
      v62 = *(_QWORD **)((char *)s + v49 * 8);
      if ( !v62 )
        goto LABEL_41;
    }
    *v57 = *v62;
    *(_QWORD *)*v61 = v57;
LABEL_27:
    ++v122;
    v52 = (__int64)(v57 + 2);
    v47 = *(_QWORD *)(v46 + 16);
LABEL_22:
    v53 = *(_DWORD *)(v47 + 72);
    v54 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v44, v12);
    v12 = (_QWORD *)v52;
    v55 = 205;
    v54(205, v52, v53);
    if ( !v14 )
      break;
    v44 = (unsigned __int64)v121[0];
    v45 = s;
  }
  v70 = 0;
  v71 = (std::__detail::_Prime_rehash_policy *)v119;
  v106 = (std::__detail::_Prime_rehash_policy *)v121[1];
  if ( v121[1] )
  {
    while ( 1 )
    {
      v72 = *((unsigned int *)v106 + 2);
      if ( (unsigned int)v72 >= *(_DWORD *)(a3 + 64) )
        break;
      v111 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v72);
      if ( *(_DWORD *)(v111 + 76) == 3 )
      {
        v113 = (char *)v106 + 16;
        v73 = (unsigned int (__fastcall *)(__int64, char *))get_hexdsp(v55, v71);
        v55 = 218;
        v71 = (std::__detail::_Prime_rehash_policy *)v111;
        if ( *(_DWORD *)(v111 + 352) == v73(218, (char *)v106 + 16) )
        {
          memset(&v119[1], 0, 32);
          v119[0] = off_8C238;
          v74 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(218, v111);
          v55 = 366;
          v71 = (std::__detail::_Prime_rehash_policy *)v111;
          if ( !v74(366, v111, v119) )
          {
            v114 = **(_DWORD **)(v111 + 368);
            if ( v114 >= *(_DWORD *)(a3 + 64) )
              goto LABEL_81;
            v112 = *(_QWORD **)(*(_QWORD *)(a3 + 528) + 8LL * v114);
            *(_QWORD *)(v111 + 352) = 0;
            v75 = *(_DWORD **)(v111 + 56);
            v105 = v75;
            if ( v75 )
            {
              v76 = nullptr;
              if ( *v75 == 55 )
                v76 = *(_DWORD **)(v111 + 56);
              v105 = v76;
            }
            v77 = (__int64 (__fastcall *)(__int64, char *, _QWORD))get_hexdsp(366, v75);
            v55 = 227;
            v71 = v106;
            na = v77(227, v113, 0);
            if ( *((_DWORD *)v106 + 6) != na )
            {
              while ( na < *(_DWORD *)(a3 + 64) )
              {
                v78 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * na);
                v110 = *(_QWORD *)(v78 + 56);
                v79 = *(_QWORD *)(*(_QWORD *)(v110 + 16) + 16LL);
                for ( i = *(_QWORD *)(v111 + 48); v105 != (_DWORD *)i; v79 = v86 )
                {
                  v81 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v55, v71);
                  v82 = v81(129, 80);
                  *(_QWORD *)(v82 + 32) = 0xFFFFFFFF00000000LL;
                  v83 = v82;
                  *(_QWORD *)(v82 + 40) = 0;
                  *(_QWORD *)(v82 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v82 + 56) = 0;
                  *(_QWORD *)(v82 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v82 + 72) = 0;
                  *(_OWORD *)(v82 + 8) = 0;
                  v84 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
                  v84(334, v83, i);
                  v85 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(334, v83);
                  v71 = (std::__detail::_Prime_rehash_policy *)v78;
                  v55 = 364;
                  v86 = v85(364, v78, v83, v79);
                  i = *(_QWORD *)(i + 8);
                }
                v87 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v55, v71);
                v87(276, v110 + 32);
                v88 = v112;
                *(_BYTE *)(v110 + 32) = 7;
                *(_DWORD *)(v110 + 40) = v114;
                **(_DWORD **)(v78 + 368) = v114;
                v89 = v112[44];
                v90 = *(_DWORD *)(v78 + 72);
                v91 = v112[43];
                if ( v112[45] < (unsigned __int64)(v89 + 1) )
                {
                  v88 = v112 + 43;
                  v95 = qvector_reserve(v112 + 43, v91, v89 + 1, 4);
                  v112[43] = v95;
                  v91 = v95;
                  v89 = v112[44];
                }
                *(_DWORD *)(v91 + 4 * v89) = v90;
                ++v112[44];
                v92 = *(_DWORD *)(v78 + 24);
                BYTE1(v92) &= ~2u;
                LOBYTE(v92) = v92 | 0x80;
                *(_DWORD *)(v78 + 24) = v92;
                v93 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v88, v91);
                v93(404, a3);
                v70 = na + 1;
                v94 = (__int64 (__fastcall *)(__int64, char *, _QWORD))get_hexdsp(404, a3);
                v55 = 227;
                v71 = v106;
                na = v94(227, v113, (unsigned int)v70);
                if ( *((_DWORD *)v106 + 6) == na )
                {
                  v70 = 1;
                  goto LABEL_46;
                }
              }
              if ( !under_debugger )
              {
                interr(52719);
LABEL_81:
                if ( !under_debugger )
                {
                  v100 = interr(52719);
                  sub_38FA0(v70 + 64, (__int64)v71);
                  sub_38FA0(v70 + 48, (__int64)v71);
                  sub_38FA0(v70 + 32, (__int64)v71);
                  v3 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v70 + 32, v71);
                  v4 = v70;
                  v5 = (struct _Unwind_Exception *)v100;
                  v3(130, v4);
                  v6 = v121[1];
                  while ( v6 )
                  {
                    v7 = (_QWORD *)*v6;
                    qfree(v6[2]);
                    v8 = v6;
                    v6 = v7;
                    operator delete(v8, 0x20u);
                  }
                  memset(s, 0, 8 * (__int64)v121[0]);
                  v122 = 0;
                  v121[1] = nullptr;
                  if ( s != v125 )
                    operator delete(s, 8 * (__int64)v121[0]);
                  sub_388C0(v126);
                  _Unwind_Resume(v5);
                }
              }
LABEL_83:
              BUG();
            }
          }
        }
      }
LABEL_46:
      v106 = *(std::__detail::_Prime_rehash_policy **)v106;
      if ( !v106 )
      {
        if ( (_BYTE)v70 )
          nullsub_42(a3, "c:\\temp\\prealloc-tc-mod.txt");
        v96 = v121[1];
        *(_BYTE *)(a1 + 24) = 0;
        while ( v96 )
        {
          v97 = v96;
          v96 = (_QWORD *)*v96;
          qfree(v97[2]);
          operator delete(v97, 0x20u);
        }
        goto LABEL_68;
      }
    }
    if ( under_debugger )
      goto LABEL_83;
    interr(52719);
  }
  *(_BYTE *)(a1 + 24) = 0;
LABEL_68:
  memset(s, 0, 8 * (__int64)v121[0]);
  v122 = 0;
  v121[1] = nullptr;
  if ( s != v125 )
    operator delete(s, 8 * (__int64)v121[0]);
LABEL_3:
  v126[0] = off_8C260;
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree(v127);
  }
  return a1;
}


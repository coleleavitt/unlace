unsigned __int64 __fastcall sub_1B3E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  size_t v4; // rbp
  _QWORD *v5; // r13
  void *v6; // rax
  void *v7; // rax
  const void *v8; // rsi
  _QWORD *v9; // rax
  size_t v10; // rbp
  _QWORD *v11; // r13
  void *v12; // rax
  void *v13; // rax
  const void *v14; // rsi
  _QWORD *exception; // rax
  size_t v16; // rbp
  _QWORD *v17; // r13
  void *v18; // rax
  void *v19; // rax
  const void *v20; // rsi
  _QWORD *v21; // rax
  size_t v22; // rbp
  _QWORD *v23; // r13
  void *v24; // rax
  const void *v25; // rsi
  unsigned __int8 (__fastcall *hexdsp)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  _QWORD *v29; // rsi
  __m128i v30; // xmm2
  __int64 (__fastcall ***v31)(std::exception *); // rdi
  __int64 v32; // rdx
  __int64 v33; // rbp
  void (__fastcall *v34)(__int64, __int64, __int64); // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  unsigned __int8 (__fastcall *v37)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v38; // rsi
  __int64 v39; // r15
  __int32 v40; // r13d
  __int64 (__fastcall ***v41)(std::exception *); // rdi
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rdx
  unsigned __int8 (__fastcall *v45)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int32 v46; // r14d
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int8 (__fastcall *v50)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  _QWORD *v51; // rsi
  __int64 v52; // r14
  __int32 v53; // r13d
  __int64 v54; // rdx
  unsigned __int64 v55; // r14
  void (__fastcall *v56)(__int64, __int64 (__fastcall ***)(std::exception *), __int64); // rax
  __int64 (__fastcall ***v57)(std::exception *); // rsi
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r15
  __int64 v63; // r14
  __int64 (__fastcall *v64)(__int64, __int64 (__fastcall ***)(std::exception *), __int64); // rax
  int v65; // eax
  int v66; // eax
  __int64 v67; // r13
  int (__fastcall *v68)(__int64, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  void (__fastcall *v69)(__int64, __int64 (__fastcall ***)(std::exception *)); // rax
  int v70; // eax
  __int64 v71; // rdx
  void (__fastcall *v72)(__int64, __int64); // rax
  char *v73; // rbx
  _QWORD *v74; // rdi
  char *v75; // rbp
  __int64 v76; // rdx
  void (__fastcall *v77)(__int64, char *); // rax
  unsigned int v79; // r15d
  __m128i *v80; // r14
  __int64 v81; // rdx
  void (__fastcall *v82)(__int64, __m128i *, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v83; // rcx
  unsigned int (__fastcall *v84)(__int64, __int64 (__fastcall ***)(std::exception *), __int64); // rax
  __m128i v85; // [rsp+0h] [rbp-118h] BYREF
  __int64 v86; // [rsp+10h] [rbp-108h]
  __m128i *v87; // [rsp+18h] [rbp-100h]
  _QWORD *v88; // [rsp+20h] [rbp-F8h]
  __int64 v89; // [rsp+28h] [rbp-F0h]
  int *v90; // [rsp+30h] [rbp-E8h]
  __int64 m128i_i64; // [rsp+38h] [rbp-E0h]
  __m128i v92; // [rsp+40h] [rbp-D8h]
  char v93; // [rsp+50h] [rbp-C8h] BYREF
  int v94; // [rsp+54h] [rbp-C4h]
  __m128i v95; // [rsp+60h] [rbp-B8h] BYREF
  __int64 (__fastcall **v96)(std::exception *); // [rsp+70h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+78h] [rbp-A0h]
  void *src[2]; // [rsp+80h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+90h] [rbp-88h]
  _QWORD v100[2]; // [rsp+A0h] [rbp-78h] BYREF
  int v101; // [rsp+B0h] [rbp-68h] BYREF
  void *v102; // [rsp+B8h] [rbp-60h]
  int *v103; // [rsp+C0h] [rbp-58h]
  int *v104; // [rsp+C8h] [rbp-50h]
  __int64 v105; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v106; // [rsp+D8h] [rbp-40h]

  v86 = a2;
  v106 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &off_4D920;
  v89 = a1 + 32;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 32;
  *(_QWORD *)(a1 + 96) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 80;
  v100[0] = &off_4D8F8;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  v101 = 0;
  v90 = &v101;
  v103 = &v101;
  v104 = &v101;
  v102 = nullptr;
  v105 = 0;
  v95.m128i_i64[0] = 0;
  v95.m128i_i32[2] = 1;
  v96 = off_4D788;
  v97 = 0;
  src[0] = (void *)-1LL;
  src[1] = nullptr;
  *(_OWORD *)n = 0;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(a1, a2, a3);
  v87 = &v95;
  v88 = v100;
  v29 = v100;
  if ( !hexdsp(623, v100, &v95, a2, &v96) )
  {
    exception = __cxa_allocate_exception(0x30u);
    v16 = n[0];
    v17 = exception;
    *exception = off_4D788;
    LODWORD(exception) = v97;
    v17[3] = 0;
    *((_DWORD *)v17 + 2) = (_DWORD)exception;
    v18 = src[0];
    *((_OWORD *)v17 + 2) = 0;
    v17[2] = v18;
    if ( v16 )
    {
      v19 = (void *)qalloc_or_throw(v16);
      v17[3] = v19;
      v20 = src[1];
      v17[5] = v16;
      memcpy(v19, v20, v16);
      v17[4] = v16;
    }
    __cxa_throw(v17, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
  }
  v30 = _mm_load_si128(&v95);
  v96 = off_4D788;
  v85 = v30;
  if ( src[1] )
  {
    n[0] = 0;
    qfree(src[1]);
  }
  v31 = &v96;
  std::exception::~exception((std::exception *)&v96);
  v33 = (__int64)v103;
  v92 = _mm_load_si128(&v85);
  *(_QWORD *)(a1 + 8) = v92.m128i_i64[0];
  *(_DWORD *)(a1 + 16) = v92.m128i_i32[2];
  v85.m128i_i64[0] = (__int64)&v93;
  while ( (int *)v33 != v90 )
  {
    v34 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v31, v29, v32);
    v35 = v85.m128i_i64[0];
    v34(273, v85.m128i_i64[0], v33 + 32);
    v36 = (unsigned int)(v94 - 1);
    LOBYTE(v36) = (unsigned int)v36 > 1;
    if ( ((unsigned __int8)v36 & (((v94 - 4) & 0xFFFFFFFB) != 0)) != 0 )
      goto LABEL_73;
    *(_DWORD *)(v33 + 56) = v94;
    *(_QWORD *)(v33 + 48) = 1;
    v95.m128i_i64[0] = 0;
    v95.m128i_i32[2] = 1;
    v96 = off_4D788;
    v97 = 0;
    src[0] = (void *)-1LL;
    src[1] = nullptr;
    *(_OWORD *)n = 0;
    v37 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(273, v35, v36);
    v38 = (__int64)v88;
    if ( !v37(623, v88, v87, v86, &v96) )
    {
      v3 = __cxa_allocate_exception(0x30u);
      v4 = n[0];
      v5 = v3;
      *v3 = off_4D788;
      LODWORD(v3) = v97;
      v5[3] = 0;
      *((_DWORD *)v5 + 2) = (_DWORD)v3;
      v6 = src[0];
      *((_OWORD *)v5 + 2) = 0;
      v5[2] = v6;
      if ( v4 )
      {
        v7 = (void *)qalloc_or_throw(v4);
        v5[3] = v7;
        v8 = src[1];
        v5[5] = v4;
        memcpy(v7, v8, v4);
        v5[4] = v4;
      }
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
    }
    v39 = v95.m128i_i64[0];
    v96 = off_4D788;
    v40 = v95.m128i_i32[2];
    if ( src[1] )
    {
      n[0] = 0;
      qfree(src[1]);
    }
    v41 = &v96;
    std::exception::~exception((std::exception *)&v96);
    v42 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v42 != v40 )
    {
      if ( !under_debugger )
      {
        interr(52905);
LABEL_73:
        if ( !under_debugger )
          interr(52904);
      }
LABEL_75:
      BUG();
    }
    v43 = v39 - *(_QWORD *)(a1 + 8);
    if ( (unsigned int)(v40 - 1) <= 1 || v40 == 4 )
    {
      v43 &= ~(-1LL << (8 * (unsigned __int8)v40));
    }
    else if ( v40 != 8 )
    {
      goto LABEL_63;
    }
    if ( v94 < (int)v42 )
    {
      if ( (unsigned int)(v94 - 1) <= 1 || v94 == 4 )
      {
        v44 = (1LL << (8 * (unsigned __int8)v94)) - 1;
      }
      else
      {
        if ( v94 != 8 )
          goto LABEL_62;
        v44 = -1;
      }
      *(_DWORD *)(v33 + 56) = v94;
      *(_QWORD *)(v33 + 48) = v44;
      v95.m128i_i64[0] = 0;
      v95.m128i_i32[2] = 1;
      v96 = off_4D788;
      v97 = 0;
      src[0] = (void *)-1LL;
      src[1] = nullptr;
      *(_OWORD *)n = 0;
      v45 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(&v96, v38, v44);
      if ( !v45(623, v88, v87, v86, &v96) )
      {
        v9 = __cxa_allocate_exception(0x30u);
        v10 = n[0];
        v11 = v9;
        *v9 = off_4D788;
        LODWORD(v9) = v97;
        v11[3] = 0;
        *((_DWORD *)v11 + 2) = (_DWORD)v9;
        v12 = src[0];
        *((_OWORD *)v11 + 2) = 0;
        v11[2] = v12;
        if ( v10 )
        {
          v13 = (void *)qalloc_or_throw(v10);
          v11[3] = v13;
          v14 = src[1];
          v11[5] = v10;
          memcpy(v13, v14, v10);
          v11[4] = v10;
        }
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
      }
      v46 = v95.m128i_i32[2];
      m128i_i64 = v95.m128i_i64[0];
      v96 = off_4D788;
      if ( src[1] )
      {
        n[0] = 0;
        qfree(src[1]);
      }
      v41 = &v96;
      std::exception::~exception((std::exception *)&v96);
      v38 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v38 != v46 )
        goto LABEL_60;
      v48 = *(_QWORD *)(a1 + 8) - m128i_i64;
      v49 = (unsigned int)(v46 - 1);
      if ( (unsigned int)v49 <= 1 || v46 == 4 )
      {
        v49 = (unsigned int)(8 * v38);
        v42 = ~(-1LL << (8 * (unsigned __int8)v38));
        v48 &= v42;
      }
      else if ( v46 != 8 )
      {
        sub_18DB0();
LABEL_60:
        if ( !under_debugger )
        {
          interr(52905);
LABEL_62:
          sub_18DB0();
LABEL_63:
          if ( !under_debugger )
            interr(52904);
        }
        goto LABEL_75;
      }
      if ( (_DWORD)v38 == v40 && v43 == v48 )
      {
        v38 = v85.m128i_i64[0];
        v41 = (__int64 (__fastcall ***)(std::exception *))(a1 + 72);
        sub_1B240(a1 + 72, v85.m128i_i64[0], v42, v49, v47);
      }
    }
    v95.m128i_i64[0] = 0;
    v95.m128i_i32[2] = 1;
    v96 = off_4D788;
    v97 = 0;
    src[0] = (void *)-1LL;
    src[1] = nullptr;
    *(_OWORD *)n = 0;
    v50 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, __m128i *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v41, v38, v42);
    v51 = v88;
    if ( !v50(623, v88, v87, v86, &v96) )
    {
      v21 = __cxa_allocate_exception(0x30u);
      v22 = n[0];
      v23 = v21;
      *v21 = off_4D788;
      LODWORD(v21) = v97;
      *((_OWORD *)v23 + 2) = 0;
      *((_DWORD *)v23 + 2) = (_DWORD)v21;
      v23[2] = src[0];
      v23[3] = 0;
      if ( v22 )
      {
        v24 = (void *)qalloc_or_throw(v22);
        v23[3] = v24;
        v25 = src[1];
        v23[5] = v22;
        memcpy(v24, v25, v22);
        v23[4] = v22;
      }
      __cxa_throw(v23, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
    }
    v52 = v95.m128i_i64[0];
    v96 = off_4D788;
    v53 = v95.m128i_i32[2];
    if ( src[1] )
    {
      n[0] = 0;
      qfree(src[1]);
    }
    std::exception::~exception((std::exception *)&v96);
    if ( v53 != *(_DWORD *)(a1 + 16) )
      goto LABEL_69;
    v55 = v52 - *(_QWORD *)(a1 + 8);
    if ( (unsigned int)(v53 - 1) <= 1 || v53 == 4 )
    {
      v55 &= ~(-1LL << (8 * (unsigned __int8)v53));
    }
    else if ( v53 != 8 )
    {
      goto LABEL_67;
    }
    v56 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *), __int64))get_hexdsp(&v96, v51, v54);
    v57 = &v96;
    v58 = 273;
    v56(273, &v96, v85.m128i_i64[0]);
    v62 = *(_QWORD *)(a1 + 40);
    src[0] = (void *)v55;
    LODWORD(src[1]) = v53;
    if ( v62 )
    {
      while ( 1 )
      {
        v63 = v62 + 32;
        v64 = (__int64 (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *), __int64))get_hexdsp(v58, &v96, v59);
        v57 = &v96;
        v58 = 296;
        v65 = v64(296, &v96, v62 + 32);
        v59 = *(_QWORD *)(v62 + 24);
        if ( v65 < 0 )
          v59 = *(_QWORD *)(v62 + 16);
        v66 = (v65 >> 31) & 1;
        if ( !v59 )
          break;
        v62 = v59;
      }
      if ( !(_BYTE)v66 )
      {
        v67 = v62;
LABEL_44:
        v68 = (int (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(
                                                                                                  v58,
                                                                                                  &v96,
                                                                                                  v59);
        v57 = (__int64 (__fastcall ***)(std::exception *))v63;
        v58 = 296;
        if ( v68(296, v63, &v96) >= 0 )
          goto LABEL_45;
        goto LABEL_51;
      }
    }
    else
    {
      v62 = v89;
    }
    v67 = *(_QWORD *)(a1 + 48);
    if ( v62 != v67 )
    {
      v58 = v62;
      v67 = v62;
      v63 = std::_Rb_tree_decrement(v62, &v96, v59, v60, v61) + 32;
      goto LABEL_44;
    }
LABEL_51:
    LOBYTE(v79) = 1;
    if ( v89 != v67 )
    {
      v84 = (unsigned int (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *), __int64))get_hexdsp(v58, v57, v59);
      v57 = &v96;
      v79 = v84(296, &v96, v67 + 32) >> 31;
    }
    v80 = (__m128i *)operator new(0x40u);
    m128i_i64 = (__int64)v80[2].m128i_i64;
    v82 = (void (__fastcall *)(__int64, __m128i *, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(64, v57, v81);
    v82(273, v80 + 2, &v96);
    v83 = v89;
    v58 = (unsigned __int8)v79;
    v57 = (__int64 (__fastcall ***)(std::exception *))v80;
    v80[3] = _mm_load_si128((const __m128i *)src);
    std::_Rb_tree_insert_and_rebalance((unsigned __int8)v79, v80, v67, v83);
    ++*(_QWORD *)(a1 + 64);
LABEL_45:
    v69 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v58, v57, v59);
    v69(276, &v96);
    v70 = v94;
    v71 = (v94 - 4) & 0xFFFFFFFB;
    if ( ((v94 - 4) & 0xFFFFFFFB) != 0 )
    {
      v71 = (unsigned int)(v94 - 1);
      if ( (unsigned int)v71 > 1 )
      {
        if ( !under_debugger )
        {
          interr(52904);
LABEL_67:
          if ( !under_debugger )
          {
            interr(52904);
LABEL_69:
            if ( !under_debugger )
              interr(52905);
          }
        }
        goto LABEL_75;
      }
    }
    *(_QWORD *)(v33 + 48) = 0;
    *(_DWORD *)(v33 + 56) = v70;
    v72 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, &v96, v71);
    v29 = (_QWORD *)v85.m128i_i64[0];
    v72(276, v85.m128i_i64[0]);
    v31 = (__int64 (__fastcall ***)(std::exception *))v33;
    v33 = std::_Rb_tree_increment(v33);
  }
  v73 = (char *)v102;
  v100[0] = &off_4D8F8;
  if ( v102 )
  {
    do
    {
      v74 = *((_QWORD **)v73 + 3);
      v75 = v73;
      sub_19480(v74, (__int64)v29, v32);
      v73 = *((char **)v73 + 2);
      v77 = (void (__fastcall *)(__int64, char *))get_hexdsp(v74, v29, v76);
      v77(276, v75 + 32);
      v29 = (_QWORD *)&dword_40;
      operator delete(v75, 0x40u);
    }
    while ( v73 );
  }
  return v106 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_37A20(__int64 a1, __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  int v6; // edx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebp
  __int64 v13; // rdi
  int i; // r13d
  char v15; // cl
  unsigned __int8 (__fastcall *hexdsp)(__int64, _QWORD *, __int64 *, __m128i *, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(std::exception *); // rsi
  int *v22; // rdi
  __int64 v23; // rdx
  int *v24; // rbp
  __int64 v25; // r14
  void (__fastcall *v26)(__int64, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  void (__fastcall *v27)(__int64, __int64 (__fastcall ***)(std::exception *)); // rax
  void (__fastcall *v28)(__int64, __int64 (__fastcall ***)(std::exception *), int *); // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  const __m128i *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  bool v39; // cf
  char *v40; // rbx
  _QWORD *v41; // rdi
  char *v42; // rbp
  void (__fastcall *v43)(__int64, char *); // rax
  __int64 v45; // rax
  std::exception *v46; // rcx
  const __m128i *v47; // rdi
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r15
  __int64 v53; // r14
  const __m128i *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __m128i v57; // xmm0
  _QWORD *exception; // r12
  __int64 v59; // rax
  char *v60; // rax
  struct _Unwind_Exception *v61; // rbp
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdi
  _QWORD *v66; // rax
  size_t v67; // rbp
  _QWORD *v68; // r12
  __int64 v69; // rax
  void *v70; // rax
  void *v71; // rsi
  std::exception *v72; // [rsp+0h] [rbp-F8h]
  std::exception *v73; // [rsp+0h] [rbp-F8h]
  __int64 *v74; // [rsp+8h] [rbp-F0h]
  int v75; // [rsp+14h] [rbp-E4h]
  __m128i *v76; // [rsp+18h] [rbp-E0h]
  unsigned __int64 *v77; // [rsp+28h] [rbp-D0h]
  __int64 v78; // [rsp+30h] [rbp-C8h]
  __int64 v79; // [rsp+30h] [rbp-C8h]
  __int64 v80; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v81; // [rsp+48h] [rbp-B0h]
  __int64 (__fastcall **v82)(std::exception *); // [rsp+50h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-A0h]
  __int64 v84; // [rsp+60h] [rbp-98h]
  void *src; // [rsp+68h] [rbp-90h]
  size_t n[2]; // [rsp+70h] [rbp-88h]
  _QWORD v87[2]; // [rsp+80h] [rbp-78h] BYREF
  int v88; // [rsp+90h] [rbp-68h] BYREF
  void *v89; // [rsp+98h] [rbp-60h]
  int *v90; // [rsp+A0h] [rbp-58h]
  int *v91; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v92; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-40h]

  v76 = a2;
  v93 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &off_4DB00;
  v87[0] = &off_4D8F8;
  v88 = 0;
  v89 = nullptr;
  v90 = &v88;
  v91 = &v88;
  v92 = 0;
  v3 = sub_33BF0((__int64)v87, (__int64)a2);
  v4 = v92;
  v5 = v3;
  v7 = v6;
  if ( (int)v92 > 16 )
  {
    exception = __cxa_allocate_exception(0x30u);
    *exception = off_4D788;
    v59 = a2[1].m128i_i64[1];
    exception[3] = 0;
    *((_DWORD *)exception + 2) = -35;
    exception[2] = v59;
    *((_OWORD *)exception + 2) = 0;
    v60 = (char *)qvector_reserve(exception + 3, 0, 42, 1);
    exception[3] = v60;
    exception[4] = 42;
    qmemcpy(v60, "lin_conj_expr_t: too many input variables", 0x29u);
    *(_BYTE *)(exception[3] + 41LL) = 0;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
  }
  v75 = 1 << v92;
  v77 = (unsigned __int64 *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v8 + 1) )
  {
    a2 = nullptr;
    v72 = *(std::exception **)(a1 + 72);
    v9 = qvector_reserve(v77, 0, v8 + 1, 16);
    v45 = *(_QWORD *)(a1 + 64);
    v46 = *(std::exception **)(a1 + 72);
    v47 = *(const __m128i **)(a1 + 56);
    *(_QWORD *)(a1 + 72) = v72;
    v48 = v45 - 1;
    if ( v48 >= 0 )
    {
      a2 = (__m128i *)v9;
      do
      {
        v49 = _mm_loadu_si128(v47);
        ++a2;
        ++v47;
        a2[-1] = v49;
        v39 = v48-- == 0;
      }
      while ( !v39 );
      v47 = *(const __m128i **)(a1 + 56);
    }
    v73 = v46;
    qfree(v47);
    v8 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = v9;
    *(_QWORD *)(a1 + 72) = v73;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 56);
  }
  v10 = v9 + 16 * v8;
  *(_QWORD *)v10 = v5;
  *(_DWORD *)(v10 + 8) = v7;
  v11 = *(_QWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 64);
  if ( v11 < v75 )
  {
    a2 = nullptr;
    v50 = qvector_reserve(v77, 0, v75, 16);
    v51 = *(_QWORD *)(a1 + 64);
    v52 = *(_QWORD *)(a1 + 72);
    v53 = v50;
    *(_QWORD *)(a1 + 72) = v11;
    v54 = *(const __m128i **)(a1 + 56);
    v55 = v51 - 1;
    if ( v55 >= 0 )
    {
      v56 = v50;
      do
      {
        v57 = _mm_loadu_si128(v54);
        v56 += 16;
        ++v54;
        *(__m128i *)(v56 - 16) = v57;
        v39 = v55-- == 0;
      }
      while ( !v39 );
      v54 = *(const __m128i **)(a1 + 56);
    }
    qfree(v54);
    *(_QWORD *)(a1 + 56) = v53;
    *(_QWORD *)(a1 + 72) = v52;
  }
  v12 = 1;
  if ( (_DWORD)v4 )
  {
    do
    {
      v13 = (__int64)v90;
      for ( i = 0; (int *)v13 != &v88; v13 = std::_Rb_tree_increment(v13) )
      {
        v15 = i++;
        *(_QWORD *)(v13 + 48) = (v12 >> v15) & 1;
      }
      v81 = 1;
      v80 = 0;
      v82 = off_4D788;
      v83 = 0;
      v84 = -1;
      src = nullptr;
      *(_OWORD *)n = 0;
      hexdsp = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, __int64 *, __m128i *, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v13, a2);
      a2 = (__m128i *)v87;
      if ( !hexdsp(623, v87, &v80, v76, &v82) )
      {
        v66 = __cxa_allocate_exception(0x30u);
        v67 = n[0];
        *v66 = off_4D788;
        v68 = v66;
        LODWORD(v66) = v83;
        v68[3] = 0;
        *((_DWORD *)v68 + 2) = (_DWORD)v66;
        v69 = v84;
        *((_OWORD *)v68 + 2) = 0;
        v68[2] = v69;
        if ( v67 )
        {
          v70 = (void *)qalloc_or_throw(v67);
          v68[3] = v70;
          v71 = src;
          v68[5] = v67;
          memcpy(v70, v71, v67);
          v68[4] = v67;
        }
        __cxa_throw(v68, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
      }
      v17 = v80;
      v82 = off_4D788;
      v4 = v81;
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      std::exception::~exception((std::exception *)&v82);
      v18 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v18 + 1) )
      {
        v78 = *(_QWORD *)(a1 + 72);
        v33 = qvector_reserve(v77, 0, v18 + 1, 16);
        v34 = *(_QWORD *)(a1 + 64);
        a2 = *(__m128i **)(a1 + 72);
        v35 = *(const __m128i **)(a1 + 56);
        *(_QWORD *)(a1 + 72) = v78;
        v36 = v34 - 1;
        if ( v36 >= 0 )
        {
          v37 = v33;
          do
          {
            v38 = _mm_loadu_si128(v35);
            v37 += 16;
            ++v35;
            *(__m128i *)(v37 - 16) = v38;
            v39 = v36-- == 0;
          }
          while ( !v39 );
          v35 = *(const __m128i **)(a1 + 56);
        }
        v79 = v33;
        qfree(v35);
        v19 = v79;
        v18 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = v79;
        *(_QWORD *)(a1 + 72) = a2;
      }
      else
      {
        v19 = *(_QWORD *)(a1 + 56);
      }
      ++v12;
      v20 = 16 * v18 + v19;
      *(_QWORD *)v20 = v17;
      *(_DWORD *)(v20 + 8) = v4;
      ++*(_QWORD *)(a1 + 64);
    }
    while ( v75 != v12 );
  }
  v21 = (__int64 (__fastcall ***)(std::exception *))v77;
  v22 = (int *)(a1 + 32);
  sub_32600((__int64 *)(a1 + 32), v77);
  v23 = v92;
  v74 = (__int64 *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) < v92 )
  {
    v21 = *(__int64 (__fastcall ****)(std::exception *))(a1 + 8);
    v22 = (int *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = qvector_reserve(a1 + 8, v21, v92, 16);
  }
  v24 = v90;
  if ( v90 != &v88 )
  {
    v4 = (__int64)&v82;
    do
    {
      v28 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *), int *))get_hexdsp(v22, v21);
      v29 = 273;
      v28(273, &v82, v24 + 8);
      v30 = *(_QWORD *)(a1 + 16);
      v31 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v30 + 1) )
      {
        v29 = a1 + 8;
        v32 = qvector_reserve(v74, v31, v30 + 1, 16);
        *(_QWORD *)(a1 + 8) = v32;
        v30 = *(_QWORD *)(a1 + 16);
        v31 = v32;
      }
      v25 = v31 + 16 * v30;
      v26 = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v29, v31);
      v26(273, v25, &v82);
      ++*(_QWORD *)(a1 + 16);
      v27 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(273, v25);
      v21 = &v82;
      v27(276, &v82);
      v22 = v24;
      v24 = (int *)std::_Rb_tree_increment(v24);
    }
    while ( v24 != &v88 );
  }
  if ( 1LL << *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 40) )
  {
    if ( !under_debugger )
    {
      v61 = (struct _Unwind_Exception *)interr(30679);
      sub_C930(v4, (__int64)v21, v62);
      v87[0] = &off_4D8F8;
      sub_33860(v89, (__int64)v21, v63);
      v64 = *(_QWORD *)(a1 + 56);
      if ( v64 )
      {
        *(_QWORD *)(a1 + 64) = 0;
        qfree(v64);
      }
      v65 = *(_QWORD *)(a1 + 32);
      if ( v65 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        qfree(v65);
      }
      sub_379A0(v74, (__int64)v21);
      _Unwind_Resume(v61);
    }
    BUG();
  }
  v40 = (char *)v89;
  v87[0] = &off_4D8F8;
  if ( v89 )
  {
    do
    {
      v41 = *((_QWORD **)v40 + 3);
      v42 = v40;
      sub_33860(v41, (__int64)v21, v23);
      v40 = *((char **)v40 + 2);
      v43 = (void (__fastcall *)(__int64, char *))get_hexdsp(v41, v21);
      v43(276, v42 + 32);
      v21 = (__int64 (__fastcall ***)(std::exception *))&dword_40;
      operator delete(v42, 0x40u);
    }
    while ( v40 );
  }
  return v93 - __readfsqword(0x28u);
}

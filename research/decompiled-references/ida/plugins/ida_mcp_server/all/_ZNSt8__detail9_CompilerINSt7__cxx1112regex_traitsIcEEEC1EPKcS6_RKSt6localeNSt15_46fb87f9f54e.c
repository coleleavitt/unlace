// Alternative name is '_ZNSt8__detail9_CompilerINSt7__cxx1112regex_traitsIcEEEC2EPKcS6_RKSt6localeNSt15regex_constants18syntax_option_typeE'
unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_Compiler(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        const std::locale *a4,
        int a5)
{
  unsigned int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 *v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i *v22; // rax
  __int64 v23; // r12
  __int64 v24; // r12
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rbp
  __int64 v29; // r8
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbp
  _QWORD *v37; // rbp
  __m128i *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 i; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-E8h]
  __int64 v52; // [rsp+0h] [rbp-E8h]
  __int64 v53; // [rsp+0h] [rbp-E8h]
  __int64 v54; // [rsp+0h] [rbp-E8h]
  __int64 v55; // [rsp+0h] [rbp-E8h]
  __int64 v56; // [rsp+8h] [rbp-E0h]
  __int64 v57; // [rsp+8h] [rbp-E0h]
  __int64 v58; // [rsp+8h] [rbp-E0h]
  __int64 v59; // [rsp+8h] [rbp-E0h]
  __int64 v60; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+8h] [rbp-E0h]
  _BYTE v62[8]; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v63[4]; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v64; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v65; // [rsp+50h] [rbp-98h] BYREF
  __m128i v66; // [rsp+60h] [rbp-88h] BYREF
  __m128i v67; // [rsp+70h] [rbp-78h] BYREF
  __m128i v68; // [rsp+80h] [rbp-68h] BYREF
  __m128i v69; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v70; // [rsp+A8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v6 = a5 & 0x3F0;
  if ( (a5 & 0x3F0) == 0 )
  {
    a5 |= 0x10u;
    goto LABEL_3;
  }
  if ( v6 != 128 )
  {
    if ( v6 > 0x80 )
    {
      if ( ((v6 - 256) & 0xFFFFFEF0) != 0 )
        goto LABEL_24;
    }
    else
    {
      v26 = v6 - 16;
      if ( (unsigned int)v26 > 0x30 || (v27 = 0x1000000010001LL, !_bittest64(&v27, v26)) )
LABEL_24:
        std::__throw_regex_error();
    }
  }
LABEL_3:
  a1->m128i_i32[0] = a5;
  std::locale::locale((std::locale *)v63, a4);
  std::__detail::_Scanner<char>::_Scanner();
  std::locale::~locale((std::locale *)v63);
  a1[16].m128i_i64[0] = 0;
  v7 = operator new(0x68u);
  *(_QWORD *)(v7 + 32) = 0;
  v8 = v7 + 96;
  *(_QWORD *)(v7 + 8) = 0x100000001LL;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)v7 = off_445320;
  v9 = a1->m128i_i32[0];
  *(_BYTE *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 40) = v9;
  *(_QWORD *)(v7 + 88) = 0;
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 72) = 0;
  std::locale::locale((std::locale *)(v7 + 96));
  std::locale::locale((std::locale *)v62, a4);
  std::locale::locale((std::locale *)v63, (const std::locale *)(v7 + 96));
  std::locale::operator=();
  std::locale::operator=();
  std::locale::~locale((std::locale *)v63);
  std::locale::locale((std::locale *)v63, (const std::locale *)v62);
  std::locale::~locale((std::locale *)v63);
  std::locale::~locale((std::locale *)v62);
  a1[16].m128i_i64[1] = v7;
  a1[16].m128i_i64[0] = v7 + 16;
  a1[17].m128i_i64[0] = (__int64)a1[18].m128i_i64;
  a1[17].m128i_i64[1] = 0;
  a1[18].m128i_i8[0] = 0;
  a1[19].m128i_i64[0] = 0;
  a1[19].m128i_i64[1] = 8;
  a1[20] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  v10 = operator new(0x40u);
  a1[19].m128i_i64[0] = v10;
  v11 = v10;
  v12 = v10 + 24;
  v13 = operator new(0x1F8u);
  *(_QWORD *)(v11 + 24) = v13;
  a1[21].m128i_i64[0] = v13 + 504;
  a1[23].m128i_i64[0] = v13 + 504;
  a1[21].m128i_i64[1] = v12;
  a1[23].m128i_i64[1] = v12;
  a1[22].m128i_i64[1] = v13;
  a1[22].m128i_i64[0] = v13;
  a1[24].m128i_i64[0] = v8;
  a1[20] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8LL)
                  + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v14 )
    std::__throw_bad_cast();
  v15 = (_QWORD *)a1[16].m128i_i64[0];
  a1[24].m128i_i64[1] = v14;
  v16 = v15[5];
  v17 = v15[4];
  v15[5] = v16 + 1;
  v18 = (__int64 *)v15[1];
  v63[0] = v16;
  if ( v18 == (__int64 *)v15[2] )
  {
    v59 = v17;
    std::vector<unsigned long>::_M_realloc_append<unsigned long const&>();
    v17 = v59;
  }
  else
  {
    *v18 = v16;
    v15[1] = v18 + 1;
  }
  v65.m128i_i64[0] = v16;
  v19 = _mm_load_si128(&v65);
  v64.m128i_i32[0] = 8;
  v68 = v19;
  v20 = _mm_load_si128(&v66);
  v64.m128i_i64[1] = -1;
  v21 = _mm_load_si128(&v64);
  v69 = v20;
  v67 = v21;
  v22 = (__m128i *)v15[8];
  if ( v22 == (__m128i *)v15[9] )
  {
    v58 = v17;
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v23 = v15[8];
    v17 = v58;
  }
  else
  {
    *v22 = v21;
    v22[1] = _mm_load_si128(&v68);
    v22[2] = _mm_load_si128(&v69);
    v23 = v15[8] + 48LL;
    v15[8] = v23;
  }
  v24 = v23 - v15[7];
  if ( v24 > 4800000 )
    std::__throw_regex_error();
  v25 = 0xAAAAAAAAAAAAAAABLL * (v24 >> 4) - 1;
  if ( v67.m128i_i32[0] == 11 )
    goto LABEL_13;
LABEL_10:
  if ( v64.m128i_i32[0] == 11 )
  {
LABEL_15:
    if ( v66.m128i_i64[0] )
    {
      v57 = v17;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v66.m128i_i64[0])(&v65, &v65, 3);
      v17 = v57;
    }
  }
  while ( 1 )
  {
    *(_QWORD *)(v15[7] + 48 * v17 + 8) = v25;
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction();
    if ( a1[9].m128i_i32[2] == 27 )
      break;
    v25 = (unsigned __int64)&a1[13];
    std::__throw_regex_error();
LABEL_13:
    if ( !v69.m128i_i64[0] )
      goto LABEL_10;
    v56 = v17;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v69.m128i_i64[0])(&v68, &v68, 3);
    v17 = v56;
    if ( v64.m128i_i32[0] == 11 )
      goto LABEL_15;
  }
  std::string::_M_assign();
  std::__detail::_Scanner<char>::_M_advance();
  std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
  v28 = (_QWORD *)a1[16].m128i_i64[0];
  *(_QWORD *)(v15[7] + v24 - 40) = v63[1];
  v29 = v63[2];
  v30 = v28[1];
  v64.m128i_i32[0] = 9;
  v64.m128i_i64[1] = -1;
  v65.m128i_i64[0] = *(_QWORD *)(v30 - 8);
  v28[1] = v30 - 8;
  v31 = _mm_load_si128(&v64);
  v68 = _mm_load_si128(&v65);
  v32 = _mm_load_si128(&v66);
  v67 = v31;
  v69 = v32;
  v33 = (__m128i *)v28[8];
  if ( v33 == (__m128i *)v28[9] )
  {
    v55 = v29;
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v34 = v28[8];
    v29 = v55;
  }
  else
  {
    *v33 = v31;
    v33[1] = _mm_load_si128(&v68);
    v33[2] = _mm_load_si128(&v69);
    v34 = v28[8] + 48LL;
    v28[8] = v34;
  }
  v35 = v34 - v28[7];
  if ( v35 > 4800000 )
    std::__throw_regex_error();
  v36 = 0xAAAAAAAAAAAAAAABLL * (v35 >> 4) - 1;
  if ( v67.m128i_i32[0] == 11 && v69.m128i_i64[0] )
  {
    v60 = v35;
    v51 = v29;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v69.m128i_i64[0])(&v68, &v68, 3);
    v35 = v60;
    v29 = v51;
  }
  if ( v64.m128i_i32[0] == 11 && v66.m128i_i64[0] )
  {
    v61 = v35;
    v53 = v29;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v66.m128i_i64[0])(&v65, &v65, 3);
    v35 = v61;
    v29 = v53;
  }
  *(_QWORD *)(v15[7] + 48 * v29 + 8) = v36;
  v37 = (_QWORD *)a1[16].m128i_i64[0];
  v67.m128i_i32[0] = 12;
  v67.m128i_i64[1] = -1;
  v38 = (__m128i *)v37[8];
  if ( v38 == (__m128i *)v37[9] )
  {
    v54 = v35;
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v39 = v37[8];
    v35 = v54;
  }
  else
  {
    *v38 = _mm_load_si128(&v67);
    v38[1] = _mm_load_si128(&v68);
    v38[2] = _mm_load_si128(&v69);
    v39 = v37[8] + 48LL;
    v37[8] = v39;
  }
  v40 = v39 - v37[7];
  if ( v40 > 4800000 )
    std::__throw_regex_error();
  v41 = 0xAAAAAAAAAAAAAAABLL * (v40 >> 4) - 1;
  if ( v67.m128i_i32[0] == 11 && v69.m128i_i64[0] )
  {
    v52 = v35;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v69.m128i_i64[0])(&v68, &v68, 3);
    v35 = v52;
  }
  v42 = a1[16].m128i_i64[0];
  v43 = *(_QWORD *)(v42 + 64);
  v44 = *(_QWORD *)(v42 + 56);
  for ( *(_QWORD *)(v15[7] + v35 - 40) = v41; v43 != v44; v44 += 48 )
  {
    v45 = *(_QWORD *)(v44 + 8);
    if ( v45 >= 0 )
    {
      v46 = *(_QWORD *)(v42 + 56);
      do
      {
        v47 = v46 + 48 * v45;
        if ( *(_DWORD *)v47 != 10 )
          break;
        v45 = *(_QWORD *)(v47 + 8);
        *(_QWORD *)(v44 + 8) = v45;
      }
      while ( v45 >= 0 );
    }
    if ( (unsigned int)(*(_DWORD *)v44 - 1) <= 1 || *(_DWORD *)v44 == 7 )
    {
      for ( i = *(_QWORD *)(v44 + 16); i >= 0; *(_QWORD *)(v44 + 16) = i )
      {
        v50 = *(_QWORD *)(v42 + 56) + 48 * i;
        if ( *(_DWORD *)v50 != 10 )
          break;
        i = *(_QWORD *)(v50 + 8);
      }
    }
  }
  return v70 - __readfsqword(0x28u);
}


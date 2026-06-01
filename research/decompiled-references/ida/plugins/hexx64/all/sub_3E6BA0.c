unsigned __int64 __fastcall sub_3E6BA0(__m128i *a1, __int64 *a2)
{
  _DWORD *v2; // rax
  _DWORD *exception; // rax
  _DWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebp
  __int16 v18; // ax
  __int64 v19; // rax
  __m128i **v20; // r12
  __m128i *v21; // rsi
  unsigned __int64 v22; // rcx
  __m128i *v23; // rdx
  int v24; // r15d
  __int16 v25; // ax
  int v26; // r15d
  __int16 v27; // ax
  int v28; // r15d
  int v29; // eax
  __int16 v30; // ax
  int v31; // r15d
  __int16 v32; // ax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebp
  __int16 v36; // ax
  __int8 *v37; // rbp
  int v38; // r15d
  __int16 v39; // ax
  __int64 v40; // rax
  int v41; // r15d
  __int16 v42; // ax
  __int64 v43; // rax
  int v44; // eax
  __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm1
  __m128 v49; // xmm0
  __int64 v50; // rdi
  int v52; // [rsp+4h] [rbp-6Ch]
  int v53; // [rsp+4h] [rbp-6Ch]
  __int64 v54; // [rsp+10h] [rbp-60h] BYREF
  __int64 v55; // [rsp+18h] [rbp-58h] BYREF
  __m128i v56; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+30h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v14 = a2;
  v56 = 0;
  v54 = 0;
  v55 = 0;
  v17 = sub_3E6140(a1);
  if ( v17 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = v17;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v18 = a1[67].m128i_i16[2];
  if ( v18 == 4 )
  {
    a2 = (_QWORD *)&word_2;
    a1[67].m128i_i16[2] = 2;
  }
  else if ( v18 != 2 )
  {
    sub_5C092();
  }
  if ( a1[2].m128i_i8[0] )
  {
    a2 = &v54;
    sub_3E6620((__int64)a1, &v54);
  }
  v19 = qalloc_or_throw(24, (__int64)a2, v15, v16);
  *(_QWORD *)v19 = 0;
  v20 = (__m128i **)v19;
  v21 = nullptr;
  *(_OWORD *)(v19 + 8) = 0;
  v22 = 0;
  v23 = nullptr;
  while ( 1 )
  {
    if ( v22 < (unsigned __int64)v23->m128i_u64 + 1 )
    {
      v40 = qvector_reserve((__int64)v20, (__int64)v21, (__int64)v23->m128i_i64 + 1, 24);
      *v20 = (__m128i *)v40;
      v23 = v20[1];
      v21 = (__m128i *)v40;
    }
    v37 = &v21->m128i_i8[24 * (_QWORD)v23];
    *(_QWORD *)v37 = 0;
    *((_QWORD *)v37 + 1) = 0;
    *((_DWORD *)v37 + 4) = 0xFFFF;
    v20[1] = (__m128i *)((char *)v20[1] + 1);
    v38 = sub_3E6140(a1);
    if ( v38 )
    {
      v12 = __cxa_allocate_exception(4u);
      *v12 = v38;
      __cxa_throw(v12, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v39 = a1[67].m128i_i16[2];
    if ( v39 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_68:
      sub_5C092();
    }
    if ( v39 != 3 )
      goto LABEL_68;
    *((_WORD *)v37 + 8) = a1[66].m128i_i64[0];
    v24 = sub_3E6140(a1);
    if ( v24 )
    {
      v13 = __cxa_allocate_exception(4u);
      *v13 = v24;
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v25 = a1[67].m128i_i16[2];
    if ( v25 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_67:
      sub_5C092();
    }
    if ( v25 != 58 )
      goto LABEL_67;
    v26 = sub_3E6140(a1);
    if ( v26 )
    {
      v11 = __cxa_allocate_exception(4u);
      *v11 = v26;
      __cxa_throw(v11, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v27 = a1[67].m128i_i16[2];
    switch ( v27 )
    {
      case 4:
        a1[67].m128i_i16[2] = 2;
        break;
      case 94:
        v41 = sub_3E6140(a1);
        if ( v41 )
        {
          v5 = __cxa_allocate_exception(4u);
          *v5 = v41;
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
        }
        v42 = a1[67].m128i_i16[2];
        if ( v42 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
LABEL_54:
          sub_5C092();
        }
        if ( v42 != 3 )
          goto LABEL_54;
        v43 = a1[66].m128i_i64[0];
        *(_DWORD *)v37 = 1;
        *((_QWORD *)v37 + 1) = v43;
        goto LABEL_20;
      case 2:
        break;
      default:
        goto LABEL_64;
    }
    v21 = a1 + 2;
    v28 = sub_122A60(*(_DWORD **)(a1->m128i_i64[0] + 112), (__int64)a1[2].m128i_i64, nullptr);
    if ( v28 == -1 )
    {
LABEL_64:
      v10 = __cxa_allocate_exception(8u);
      *v10 = "Illegal scattered operand";
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'char const*, nullptr);
    }
    v29 = sub_3E6140(a1);
    if ( v29 )
    {
      v53 = v29;
      v9 = __cxa_allocate_exception(4u);
      *v9 = v53;
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v30 = a1[67].m128i_i16[2];
    if ( v30 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
    }
    else if ( v30 == 94 )
    {
      v44 = sub_3E6140(a1);
      if ( v44 )
      {
        v52 = v44;
        v4 = __cxa_allocate_exception(4u);
        *v4 = v52;
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'int, nullptr);
      }
      v45 = a1[67].m128i_i16[2];
      if ( v45 == 4 )
      {
        a1[67].m128i_i16[2] = 2;
LABEL_56:
        sub_5C092();
      }
      if ( v45 != 3 )
        goto LABEL_56;
      v28 += a1[66].m128i_i32[0];
    }
    *(_DWORD *)v37 = 3;
    *((_DWORD *)v37 + 2) = v28;
LABEL_20:
    if ( a1[67].m128i_i16[2] != 46 )
    {
      v8 = __cxa_allocate_exception(4u);
      *v8 = 47;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v31 = sub_3E6140(a1);
    if ( v31 )
    {
      v7 = __cxa_allocate_exception(4u);
      *v7 = v31;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v32 = a1[67].m128i_i16[2];
    if ( v32 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_60:
      sub_5C092();
    }
    if ( v32 != 3 )
      goto LABEL_60;
    *((_WORD *)v37 + 9) = a1[66].m128i_i64[0];
    v35 = sub_3E6140(a1);
    if ( v35 )
    {
      v6 = __cxa_allocate_exception(4u);
      *v6 = v35;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v36 = a1[67].m128i_i16[2];
    if ( v36 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_50:
      v2 = __cxa_allocate_exception(4u);
      *v2 = 47;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    if ( v36 != 44 )
      break;
    v23 = v20[1];
    v22 = (unsigned __int64)v20[2];
    v21 = *v20;
  }
  if ( v36 != 62 )
    goto LABEL_50;
  *(_BYTE *)v14 = 15;
  v46 = qalloc_or_throw(56, (__int64)v21, v33, v34);
  *(_DWORD *)v46 = 0;
  *(_QWORD *)(v46 + 8) = 0;
  v47 = v54;
  v54 = 0;
  v48 = _mm_loadu_si128(&v56);
  v49 = _mm_loadh_ps((const double *)&v55);
  *(_QWORD *)(v46 + 48) = v47;
  *(__m128 *)(v46 + 16) = v49;
  *(__m128i *)(v46 + 32) = v48;
  v55 = 0;
  v14[1] = v46;
  v56 = 0;
  if ( v20 )
  {
    *(_DWORD *)v46 = 2;
    v50 = v55;
    *(_QWORD *)(v46 + 8) = v20;
    if ( v50 )
    {
      v56.m128i_i64[0] = 0;
      qfree(v50);
    }
  }
  clear_tinfo_t();
  return v57 - __readfsqword(0x28u);
}


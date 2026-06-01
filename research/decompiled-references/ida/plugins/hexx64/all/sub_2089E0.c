__int64 __fastcall sub_2089E0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __m128i *a4,
        char a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        _BYTE *a9)
{
  _QWORD *exception; // rdi
  _QWORD *v10; // rax
  __int64 v14; // r15
  int v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r11d
  __int64 v19; // rax
  unsigned __int64 *v20; // rsi
  __int64 v21; // rdi
  char tinfo_property; // r13
  int v23; // eax
  _DWORD *v24; // rdx
  int v26; // eax
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  char v38; // cl
  unsigned __int64 v39; // rax
  char v40; // dl
  unsigned __int64 v41; // rdx
  _BYTE *v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rax
  signed __int64 v48; // [rsp+10h] [rbp-A0h]
  int v51; // [rsp+28h] [rbp-88h]
  signed __int64 v52; // [rsp+30h] [rbp-80h] BYREF
  __m128 *v53; // [rsp+38h] [rbp-78h] BYREF
  __m128 v54; // [rsp+40h] [rbp-70h] BYREF
  signed __int64 v55; // [rsp+50h] [rbp-60h]
  int v56; // [rsp+58h] [rbp-58h]
  __m128i v57; // [rsp+60h] [rbp-50h]
  int v58; // [rsp+70h] [rbp-40h]
  char v59; // [rsp+74h] [rbp-3Ch]
  unsigned __int64 v60; // [rsp+78h] [rbp-38h]

  v51 = a2;
  v60 = __readfsqword(0x28u);
  v10 = *(_QWORD **)(a3 + 8);
  if ( a2 >= v10[55] )
  {
    if ( !under_debugger )
      sub_383060(0xCAE4u, *(double *)a7.m128i_i64);
    BUG();
  }
  v14 = v10[54] + 104 * a2;
  v15 = sub_1FBEA0(v10[187], a1, *(int ***)(a3 + 32), *(double *)a7.m128i_i64);
  v16 = sub_2010F0(*(_QWORD *)(a3 + 8), a1, (int *)v14, v15, &v52, *(double *)a7.m128i_i64);
  v18 = v16;
  if ( v16 != 1 )
  {
    if ( v16 != 2 )
      goto LABEL_4;
    if ( *(_BYTE *)a1 == 5 && sub_228C90(*(_QWORD *)(a3 + 8), v14) )
    {
      v43 = *(_QWORD *)(a3 + 8);
      if ( a6 || *(_BYTE *)(v43 + 320) || (*(_BYTE *)(v14 + 24) & 2) != 0 )
      {
        if ( (unsigned __int8)sub_229120((_DWORD *)v14, v43, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), v15) )
        {
          v44 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
          if ( *(_DWORD *)v14 == 1 )
            v45 = *(_QWORD *)(v14 + 8);
          else
            v45 = -1;
          v46 = *(_QWORD *)(a3 + 8);
          v52 = v44 - v45;
          sub_1F45B0(v46, 0xFFFFFFFFFFFFFFFFLL, v14);
          *(_DWORD *)(v14 + 24) |= 0x400u;
LABEL_4:
          if ( !a4 )
            goto LABEL_14;
          goto LABEL_5;
        }
      }
    }
    return 2;
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    if ( v52 < 0 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v35 = *(_QWORD *)(a3 + 8);
      v36 = *(int *)(v35 + 116);
      v37 = *(_QWORD *)(v35 + 136);
      if ( v34 >= v37 && v36 && v36 + v37 - 1 >= v34 )
        return 2;
    }
  }
  else if ( a5 != 1 && *(_BYTE *)a1 == 1 )
  {
    v26 = *(_DWORD *)(a1 + 4);
    v27 = (unsigned int)(v26 - 1);
    if ( (v26 & (unsigned int)v27) == 0 && *(_DWORD *)v14 == 4 && (**(_DWORD **)(a3 + 8) & 0x40000) == 0 )
    {
      sub_123A40((__int64)&v54, (unsigned __int8 *)a1, v27, v17);
      sub_1252A0(a1, *(unsigned int *)(a1 + 8), *(_DWORD *)(a1 + 4) / 2 + *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4) / 2);
      if ( !(unsigned int)sub_2089E0(*(_QWORD *)(a1 + 8), a2, a3, a4, 0, a6, nullptr)
        || !(unsigned int)sub_2089E0(*(_QWORD *)(a1 + 8) + 16LL, a2, a3, a4, 0, a6, nullptr) )
      {
        sub_11CDA0((__int64)&v54);
        return 0;
      }
      sub_11CA10((char *)a1, (char *)&v54);
      sub_11CDA0((__int64)&v54);
      v18 = 1;
    }
  }
  if ( !a6 )
    return v18;
  if ( !a4 )
  {
    *(_DWORD *)(v14 + 24) &= ~0x80000u;
    return 0;
  }
LABEL_5:
  v19 = *(_QWORD *)(a3 + 16);
  a7 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  a8 = _mm_loadh_ps((const double *)(a3 + 8));
  v53 = &v54;
  LODWORD(v19) = *(_DWORD *)(v19 + 72);
  v56 = v51;
  v20 = (unsigned __int64 *)a4->m128i_i64[0];
  v48 = v52;
  v58 = v19;
  v55 = v52;
  v59 = a5;
  v54 = a8;
  v57 = a7;
  if ( !v20 )
  {
    v47 = qalloc();
    a8 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
    if ( !v47 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v47 + 16) = 0;
    *(_OWORD *)(v47 + 32) = 0;
    *(_OWORD *)(v47 + 48) = 0;
    *(_QWORD *)v47 = v47 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v47 + 64) = 0;
    *(__m128 *)(v47 + 8) = a8;
    a4->m128i_i64[0] = v47;
    *(_QWORD *)v47 = v47 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v47 & 3LL;
    a7 = _mm_unpacklo_epi64((__m128i)a4->m128i_u64[0], (__m128i)a4->m128i_u64[0]);
    *(__m128i *)(a4->m128i_i64[0] + 8) = a7;
    *(_QWORD *)a4->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a4->m128i_i64[0] |= 2uLL;
    v20 = (unsigned __int64 *)a4->m128i_i64[0];
    goto LABEL_7;
  }
  if ( !a4->m128i_i64[1] )
  {
LABEL_7:
    sub_208870(a4, v20, 1, (const __m128i **)&v53);
    goto LABEL_8;
  }
  v38 = 1;
  v39 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v39 & 2) != 0 )
  {
    v40 = 1;
LABEL_60:
    sub_208870(a4, v20, v40, (const __m128i **)&v53);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v41 = *(_QWORD *)(v39 + 24);
    if ( a1 < v41 )
    {
      v42 = *(_BYTE **)(v39 + 8);
      v38 = 1;
      goto LABEL_64;
    }
    if ( v41 >= a1 )
      break;
    v42 = *(_BYTE **)(v39 + 16);
    v38 = 0;
LABEL_64:
    if ( (*v42 & 2) != 0 )
      goto LABEL_65;
    v39 = (unsigned __int64)v42;
  }
  if ( !v39 )
  {
LABEL_65:
    v40 = v38;
    v20 = (unsigned __int64 *)v39;
    goto LABEL_60;
  }
LABEL_8:
  if ( a9 )
  {
    v21 = *(_QWORD *)a9;
    if ( (unsigned __int8)*(_QWORD *)a9 )
    {
      if ( (v21 & 0xE) != 0 || (v21 & 0x30) == 0 )
      {
        v54.m128_u64[0] = 0;
        v54.m128_u64[0] = get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 && !v48 && *(_DWORD *)(v14 + 88) == *(_DWORD *)(a1 + 4) )
        {
          v28 = get_tinfo_property();
          if ( (v28 & 0xE) == 0 && (v28 & 0x30) != 0 && *(_DWORD *)v14 == 1 )
          {
            v29 = *(_QWORD *)(a3 + 8);
            v30 = *(_QWORD **)(v29 + 816);
            if ( v30 )
            {
              v31 = *v30 & 0xFFFFFFFFFFFFFFFCLL;
              if ( !v31 )
                goto LABEL_83;
              if ( (*(_BYTE *)v31 & 2) == 0 )
              {
                v32 = *(_QWORD *)(v14 + 8);
                do
                {
                  v33 = *(_QWORD *)(v31 + 24);
                  if ( v32 >= v33 )
                  {
                    if ( v33 >= v32 )
                    {
                      if ( v30 != (_QWORD *)v31 )
LABEL_83:
                        sub_1EF8F0(v14, *(_QWORD *)(v29 + 1504), a9, 0, *(double *)a7.m128i_i64);
                      break;
                    }
                    v31 = *(_QWORD *)(v31 + 16);
                  }
                  else
                  {
                    v31 = *(_QWORD *)(v31 + 8);
                  }
                }
                while ( (*(_BYTE *)v31 & 2) == 0 );
              }
            }
          }
        }
      }
    }
  }
LABEL_14:
  *(_DWORD *)(v14 + 24) &= ~0x80000u;
  if ( a6 )
    return 0;
  if ( !v52 || !(unsigned __int8)sub_208540(a3, a1, a5, v52, v14, a7, a8) )
  {
    v23 = **(_DWORD **)(a3 + 8);
    if ( !a5 && (v23 & 0x40000) == 0 )
    {
      if ( (unsigned __int8)sub_2076A0(a3, a1, *(double *)a7.m128i_i64) )
        goto LABEL_19;
      v23 = **(_DWORD **)(a3 + 8);
    }
    if ( (v23 & 0x8020000) != 0 )
      return 3;
    return 0;
  }
LABEL_19:
  v24 = *(_DWORD **)(a3 + 8);
  if ( (*v24 & 0x20000) != 0 )
    return 3;
  v18 = 4;
  *v24 |= 0x8000000u;
  return v18;
}


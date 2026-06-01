unsigned __int64 __fastcall sub_3CE630(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *exception; // rdi
  _QWORD *v6; // rdi
  int func_qty; // eax
  __int64 v8; // r14
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  unsigned __int64 *v13; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm0
  char v24; // si
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rcx
  unsigned __int64 v30; // rbp
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rcx
  char j; // r15
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __m128i v46; // xmm0
  unsigned __int64 *v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v49; // [rsp+8h] [rbp-60h]
  unsigned __int64 v50; // [rsp+20h] [rbp-48h]
  unsigned __int64 v51; // [rsp+28h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  func_qty = get_func_qty();
  if ( func_qty > 0 )
  {
    v8 = (unsigned int)(func_qty - 1);
    for ( i = 0; ; ++i )
    {
      v10 = (__int64 *)getn_func();
      if ( v10 )
      {
        v11 = *v10;
        v12 = sub_2B6440(*v10, 0);
        if ( v12 != -1 )
          break;
      }
LABEL_16:
      if ( v8 == i )
        goto LABEL_17;
    }
    ea2node();
    v50 = v12 + 1;
    netnode_supset();
    if ( netnode_valobj() >= 0 )
    {
      v20 = netnode_valobj();
      v21 = -1;
      if ( v20 > 0 )
        v21 = 0;
      v50 = v21;
      netnode_set();
      v13 = *(unsigned __int64 **)(a1 + 1432);
      if ( v13 )
      {
LABEL_8:
        if ( *(_QWORD *)(a1 + 1440) )
        {
          v24 = 1;
          v25 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v25 & 2) == 0 )
          {
            v26 = *(_QWORD *)(v25 + 24);
            v18 = v25 + 24;
            if ( v12 >= v26 )
              goto LABEL_28;
LABEL_26:
            v27 = *(_QWORD *)(v25 + 8);
            v24 = 1;
            if ( (*(_BYTE *)v27 & 2) != 0 )
            {
LABEL_30:
              v13 = (unsigned __int64 *)v25;
            }
            else
            {
              while ( 1 )
              {
                v25 = v27;
                v26 = *(_QWORD *)(v27 + 24);
                v18 = v27 + 24;
                if ( v12 < v26 )
                  goto LABEL_26;
LABEL_28:
                if ( v26 >= v12 )
                  break;
                v27 = *(_QWORD *)(v25 + 16);
                v24 = 0;
                if ( (*(_BYTE *)v27 & 2) != 0 )
                  goto LABEL_30;
              }
              if ( v25 )
              {
LABEL_15:
                *(_QWORD *)(v18 + 8) = v11;
                goto LABEL_16;
              }
              v13 = nullptr;
            }
          }
          v49 = v13;
          v14 = qalloc();
          if ( !v14 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v15 = v49;
          *(_QWORD *)(v14 + 32) = 0;
          *(_OWORD *)v14 = 0;
          *(_OWORD *)(v14 + 16) = 0;
          *(_QWORD *)(v14 + 24) = v12;
          *(_QWORD *)v14 = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFCLL;
          v28 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
          *(_QWORD *)v14 = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFCLL | 1;
          *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v28, v28);
          if ( *(unsigned __int64 **)(a1 + 1432) != v49 )
          {
            if ( !v24 )
            {
              v49[2] = v14;
              v29 = *(_QWORD *)(a1 + 1432);
              if ( *(unsigned __int64 **)(v29 + 16) == v49 )
                *(_QWORD *)(v29 + 16) = v14;
              goto LABEL_13;
            }
LABEL_11:
            v15[1] = v14;
            v17 = *(_QWORD *)(a1 + 1432);
            if ( *(unsigned __int64 **)(v17 + 8) == v15 )
              *(_QWORD *)(v17 + 8) = v14;
LABEL_13:
            v48 = v14;
            sub_89B50((_QWORD *)(a1 + 1432), (__int64 *)v14);
            v14 = v48;
LABEL_14:
            ++*(_QWORD *)(a1 + 1440);
            v18 = v14 + 24;
            goto LABEL_15;
          }
LABEL_45:
          *v15 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v15 & 3;
          *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 8LL) = v14;
          *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 16LL) = v14;
          v36 = *(_QWORD *)v14 & 2LL;
          *(_QWORD *)v14 &= ~1uLL;
          *(_QWORD *)v14 = v36 | *(_QWORD *)(a1 + 1432) & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_14;
        }
LABEL_9:
        v47 = v13;
        v14 = qalloc();
        if ( !v14 )
        {
          v2 = __cxa_allocate_exception(8u);
          *v2 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v2,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v15 = v47;
        *(_QWORD *)(v14 + 32) = 0;
        *(_OWORD *)v14 = 0;
        *(_OWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v14 + 24) = v12;
        *(_QWORD *)v14 = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
        *(_QWORD *)v14 = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v16, v16);
        if ( *(unsigned __int64 **)(a1 + 1432) != v47 )
          goto LABEL_11;
        goto LABEL_45;
      }
    }
    else
    {
      v13 = *(unsigned __int64 **)(a1 + 1432);
      if ( v13 )
        goto LABEL_8;
    }
    v22 = qalloc();
    v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
    if ( !v22 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v22 + 32) = 0;
    *(_OWORD *)(v22 + 16) = 0;
    *(__m128i *)(v22 + 8) = v23;
    *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 1432) = v22;
    *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1432));
    **(_QWORD **)(a1 + 1432) &= ~1uLL;
    **(_QWORD **)(a1 + 1432) |= 2uLL;
    v13 = *(unsigned __int64 **)(a1 + 1432);
    goto LABEL_9;
  }
LABEL_17:
  netnode_check();
  if ( v50 != -1 )
  {
    v30 = *(_QWORD *)(a1 + 1432);
    if ( v30 )
    {
      if ( *(_QWORD *)(a1 + 1440) )
      {
        j = 1;
        v38 = *(_QWORD *)v30 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v38 & 2) == 0 )
        {
          v42 = *(_QWORD *)(v38 + 24);
          v35 = (__int64 *)(v38 + 24);
          if ( v50 >= v42 )
            goto LABEL_58;
LABEL_55:
          v43 = *(_QWORD *)(v38 + 8);
          for ( j = 1; ; j = 0 )
          {
            if ( (*(_BYTE *)v43 & 2) != 0 )
            {
              v30 = v38;
              goto LABEL_49;
            }
            v38 = v43;
            v42 = *(_QWORD *)(v43 + 24);
            v35 = (__int64 *)(v43 + 24);
            if ( v50 < v42 )
              goto LABEL_55;
LABEL_58:
            if ( v42 >= v50 )
              break;
            v43 = *(_QWORD *)(v38 + 16);
          }
          if ( v38 )
            goto LABEL_44;
          v30 = 0;
        }
LABEL_49:
        v39 = qalloc();
        v32 = v39;
        if ( !v39 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v39 + 32) = 0;
        *(_OWORD *)(v39 + 16) = 0;
        *(_OWORD *)v39 = 0;
        *(_QWORD *)(v39 + 24) = v50;
        *(_QWORD *)v39 = v30 & 0xFFFFFFFFFFFFFFFCLL;
        v40 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
        *(_QWORD *)v39 = v30 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64(v40, v40);
        if ( *(_QWORD *)(a1 + 1432) != v30 )
        {
          if ( !j )
          {
            *(_QWORD *)(v30 + 16) = v39;
            v41 = *(_QWORD *)(a1 + 1432);
            if ( *(_QWORD *)(v41 + 16) == v30 )
              *(_QWORD *)(v41 + 16) = v32;
            goto LABEL_42;
          }
LABEL_40:
          *(_QWORD *)(v30 + 8) = v32;
          v34 = *(_QWORD *)(a1 + 1432);
          if ( *(_QWORD *)(v34 + 8) == v30 )
            *(_QWORD *)(v34 + 8) = v32;
LABEL_42:
          sub_89B50((_QWORD *)(a1 + 1432), (__int64 *)v32);
LABEL_43:
          ++*(_QWORD *)(a1 + 1440);
          v35 = (__int64 *)(v32 + 24);
LABEL_44:
          v35[1] = -1;
          return v51 - __readfsqword(0x28u);
        }
LABEL_61:
        *(_QWORD *)v30 = v32 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 8LL) = v32;
        *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 16LL) = v32;
        v44 = *(_QWORD *)v32 & 2LL;
        *(_QWORD *)v32 &= ~1uLL;
        *(_QWORD *)v32 = v44 | *(_QWORD *)(a1 + 1432) & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_43;
      }
    }
    else
    {
      v45 = qalloc();
      v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
      if ( !v45 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v45 + 32) = 0;
      *(_OWORD *)(v45 + 16) = 0;
      *(__m128i *)(v45 + 8) = v46;
      *(_QWORD *)v45 = v45 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_QWORD *)(a1 + 1432) = v45;
      *(_QWORD *)v45 = v45 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v45 & 3LL;
      *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432));
      **(_QWORD **)(a1 + 1432) &= ~1uLL;
      **(_QWORD **)(a1 + 1432) |= 2uLL;
      v30 = *(_QWORD *)(a1 + 1432);
    }
    v31 = qalloc();
    v32 = v31;
    if ( !v31 )
    {
      v1 = __cxa_allocate_exception(8u);
      *v1 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v1, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v31 + 32) = 0;
    *(_OWORD *)(v31 + 16) = 0;
    *(_OWORD *)v31 = 0;
    *(_QWORD *)(v31 + 24) = v50;
    *(_QWORD *)v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
    v33 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
    *(_QWORD *)v31 = v30 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v33, v33);
    if ( *(_QWORD *)(a1 + 1432) != v30 )
      goto LABEL_40;
    goto LABEL_61;
  }
  return v51 - __readfsqword(0x28u);
}


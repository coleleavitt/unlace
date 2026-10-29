unsigned __int64 __fastcall sub_3257E0(__int64 a1, __int64 a2, __m128 a3)
{
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __m128i v15; // xmm2
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  char v20; // si
  unsigned __int64 v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm6
  char v26; // si
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm5
  __int64 v31; // rdx
  unsigned __int64 v32; // r13
  __int64 *v33; // r12
  __int64 v34; // rdx
  __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 v40; // rbp
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+18h] [rbp-70h]
  unsigned __int64 v46; // [rsp+20h] [rbp-68h]
  char v47; // [rsp+2Eh] [rbp-5Ah]
  char v48; // [rsp+2Fh] [rbp-59h]
  _QWORD v49[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v45 = a1;
  v50 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 120) )
  {
    if ( !under_debugger )
      sub_383060(0xC5F4u, *(double *)a3.m128_u64);
    goto LABEL_74;
  }
  v7 = 0;
  v8 = 0;
  sub_323720(a2 + 64, *(double *)a3.m128_u64);
  v9 = *(_QWORD *)(a2 + 120);
  v47 = 0;
  v10 = *(_QWORD *)(a2 + 112);
  if ( !(56 * v9) )
    return v50 - __readfsqword(0x28u);
  do
  {
    sub_325CD0(v45, v10, *(double *)a3.m128_u64);
    v11 = *(_QWORD *)(v10 + 40);
    if ( !v11 )
    {
      if ( !v47 )
      {
        v47 = 1;
        goto LABEL_6;
      }
      if ( !under_debugger )
        sub_383060(0xC5F5u, *(double *)a3.m128_u64);
LABEL_74:
      BUG();
    }
    v12 = *(unsigned __int64 **)(v10 + 32);
    if ( 8 * v11 )
    {
      v13 = v7 + 1;
      if ( !v8 )
      {
        v29 = qalloc();
        v8 = v29;
        v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
        if ( !v29 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v30 = _mm_load_si128(&v44);
        *(_OWORD *)(v29 + 16) = 0;
        *(__m128i *)(v29 + 8) = v30;
        *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_11:
        v14 = qalloc();
        a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
        if ( !v14 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v15 = _mm_load_si128(&v44);
        *(_OWORD *)v14 = 0;
        v7 = v13;
        *(_OWORD *)(v14 + 16) = 0;
        v16 = *v12;
        *(__m128i *)(v14 + 8) = v15;
        *(_QWORD *)(v14 + 24) = v16;
        *(_QWORD *)v14 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v17 = *(_QWORD *)v8;
        *(__m128 *)(v8 + 8) = a3;
        *(_QWORD *)v8 = v14 & 0xFFFFFFFFFFFFFFFCLL | v17 & 3;
        *(_QWORD *)v14 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 2LL;
        goto LABEL_13;
      }
      v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
LABEL_14:
      if ( !v7 )
        goto LABEL_11;
      v18 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v18 = v8;
        v20 = 1;
        goto LABEL_19;
      }
      v19 = *v12;
      v20 = 1;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v18 + 24);
        if ( v19 >= v21 )
        {
          if ( v21 >= v19 )
          {
            if ( v18 )
            {
              if ( !under_debugger )
                sub_383060(0xC5F6u, *(double *)a3.m128_u64);
              goto LABEL_74;
            }
LABEL_19:
            v48 = v20;
            v46 = v18;
            v23 = qalloc();
            if ( !v23 )
            {
              v5 = __cxa_allocate_exception(8u);
              *v5 = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                v5,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            v24 = v46;
            v25 = _mm_load_si128(&v44);
            *(_OWORD *)v23 = 0;
            v26 = v48;
            *(_OWORD *)(v23 + 16) = 0;
            v27 = *v12;
            *(__m128i *)(v23 + 8) = v25;
            *(_QWORD *)(v23 + 24) = v27;
            v28 = v24 & 0xFFFFFFFFFFFFFFFCLL;
            *(_QWORD *)v23 = v24 & 0xFFFFFFFFFFFFFFFCLL | 1;
            if ( v8 == v24 )
            {
              a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
              v31 = *(_QWORD *)v8 & 3LL;
              *(__m128 *)(v8 + 8) = a3;
              *(_QWORD *)v8 = v23 & 0xFFFFFFFFFFFFFFFCLL | v31;
              *(_QWORD *)v23 = v28 | *(_QWORD *)v23 & 2LL;
            }
            else
            {
              if ( v26 )
              {
                *(_QWORD *)(v24 + 8) = v23;
                if ( *(_QWORD *)(v8 + 8) == v24 )
                  *(_QWORD *)(v8 + 8) = v23;
              }
              else
              {
                *(_QWORD *)(v24 + 16) = v23;
                if ( *(_QWORD *)(v8 + 16) == v24 )
                  *(_QWORD *)(v8 + 16) = v23;
              }
              v49[0] = v8;
              v49[1] = v7;
              sub_31C150(v49, (__int64 *)v23);
            }
            v7 = v13;
LABEL_13:
            ++v12;
            ++v13;
            if ( v12 == (unsigned __int64 *)(*(_QWORD *)(v10 + 32) + 8LL * *(_QWORD *)(v10 + 40)) )
              break;
            goto LABEL_14;
          }
          v22 = *(_BYTE **)(v18 + 16);
          v20 = 0;
          if ( (*v22 & 2) != 0 )
            goto LABEL_19;
        }
        else
        {
          v22 = *(_BYTE **)(v18 + 8);
          v20 = 1;
          if ( (*v22 & 2) != 0 )
            goto LABEL_19;
        }
        v18 = (unsigned __int64)v22;
      }
    }
LABEL_6:
    v10 += 56;
  }
  while ( v10 != *(_QWORD *)(a2 + 112) + 56LL * *(_QWORD *)(a2 + 120) );
  if ( !v8 )
    return v50 - __readfsqword(0x28u);
  if ( !v7 )
    goto LABEL_41;
  v32 = *(_QWORD *)v8;
  v33 = (__int64 *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
  v34 = *v33;
  if ( (*v33 & 2) != 0 )
    goto LABEL_41;
  v36 = (__int64 *)v33[1];
  v37 = *v36;
  if ( (*v36 & 2) != 0 )
  {
    v40 = v33[2];
    if ( (*(_BYTE *)v40 & 2) == 0 )
      goto LABEL_51;
    goto LABEL_58;
  }
  v38 = (__int64 *)v36[1];
  if ( (*(_BYTE *)v38 & 2) != 0 )
  {
    v39 = (__int64 *)v36[2];
    if ( (*(_BYTE *)v39 & 2) == 0 )
    {
LABEL_46:
      sub_323170(v39);
      goto LABEL_47;
    }
    goto LABEL_64;
  }
  sub_323170(v38);
  v39 = (__int64 *)v36[2];
  if ( (*(_BYTE *)v39 & 2) == 0 )
    goto LABEL_46;
LABEL_47:
  v37 = *v36;
  if ( (*v36 & 2) == 0 )
LABEL_64:
    *v36 = v37 | 2;
  if ( v36 )
    qfree((__int64)v36);
  v40 = v33[2];
  if ( (*(_BYTE *)v40 & 2) == 0 )
  {
LABEL_51:
    v41 = *(__int64 **)(v40 + 8);
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = *(__int64 **)(v40 + 16);
      if ( (*(_BYTE *)v42 & 2) == 0 )
      {
LABEL_53:
        sub_323170(v42);
        goto LABEL_54;
      }
      v43 = *(_QWORD *)v40;
    }
    else
    {
      sub_323170(v41);
      v42 = *(__int64 **)(v40 + 16);
      if ( (*(_BYTE *)v42 & 2) == 0 )
        goto LABEL_53;
LABEL_54:
      v43 = *(_QWORD *)v40;
      if ( (*(_QWORD *)v40 & 2) != 0 )
      {
LABEL_55:
        if ( v40 )
          qfree(v40);
        goto LABEL_57;
      }
    }
    *(_QWORD *)v40 = v43 | 2;
    goto LABEL_55;
  }
LABEL_57:
  v34 = *v33;
  if ( (*v33 & 2) == 0 )
LABEL_58:
    *v33 = v34 | 2;
  if ( v32 > 3 )
    qfree((__int64)v33);
LABEL_41:
  qfree(v8);
  return v50 - __readfsqword(0x28u);
}


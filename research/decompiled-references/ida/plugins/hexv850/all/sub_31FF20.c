unsigned __int64 __fastcall sub_31FF20(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __m128i v14; // xmm0
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
  __int64 *v40; // rbp
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
      sub_37CFE0(50676);
    goto LABEL_74;
  }
  v6 = 0;
  v7 = 0;
  sub_31DE60(a2 + 64);
  v8 = *(_QWORD *)(a2 + 120);
  v47 = 0;
  v9 = *(_QWORD *)(a2 + 112);
  if ( !(56 * v8) )
    return v50 - __readfsqword(0x28u);
  do
  {
    sub_320410(v45, v9);
    v10 = *(_QWORD *)(v9 + 40);
    if ( !v10 )
    {
      if ( !v47 )
      {
        v47 = 1;
        goto LABEL_6;
      }
      if ( !under_debugger )
        sub_37CFE0(50677);
LABEL_74:
      BUG();
    }
    v11 = *(unsigned __int64 **)(v9 + 32);
    if ( 8 * v10 )
    {
      v12 = v6 + 1;
      if ( !v7 )
      {
        v29 = qalloc();
        v7 = v29;
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
        v13 = qalloc();
        v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
        if ( !v13 )
        {
          v2 = __cxa_allocate_exception(8u);
          *v2 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v2,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v15 = _mm_load_si128(&v44);
        *(_OWORD *)v13 = 0;
        v6 = v12;
        *(_OWORD *)(v13 + 16) = 0;
        v16 = *v11;
        *(__m128i *)(v13 + 8) = v15;
        *(_QWORD *)(v13 + 24) = v16;
        *(_QWORD *)v13 = v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v17 = *(_QWORD *)v7;
        *(__m128i *)(v7 + 8) = v14;
        *(_QWORD *)v7 = v13 & 0xFFFFFFFFFFFFFFFCLL | v17 & 3;
        *(_QWORD *)v13 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 2LL;
        goto LABEL_13;
      }
      v44 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
LABEL_14:
      if ( !v6 )
        goto LABEL_11;
      v18 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v18 = v7;
        v20 = 1;
        goto LABEL_19;
      }
      v19 = *v11;
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
                sub_37CFE0(50678);
              goto LABEL_74;
            }
LABEL_19:
            v48 = v20;
            v46 = v18;
            v23 = qalloc();
            if ( !v23 )
            {
              v4 = __cxa_allocate_exception(8u);
              *v4 = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                v4,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            v24 = v46;
            v25 = _mm_load_si128(&v44);
            *(_OWORD *)v23 = 0;
            v26 = v48;
            *(_OWORD *)(v23 + 16) = 0;
            v27 = *v11;
            *(__m128i *)(v23 + 8) = v25;
            *(_QWORD *)(v23 + 24) = v27;
            v28 = v24 & 0xFFFFFFFFFFFFFFFCLL;
            *(_QWORD *)v23 = v24 & 0xFFFFFFFFFFFFFFFCLL | 1;
            if ( v7 == v24 )
            {
              v31 = *(_QWORD *)v7 & 3LL;
              *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
              *(_QWORD *)v7 = v23 & 0xFFFFFFFFFFFFFFFCLL | v31;
              *(_QWORD *)v23 = v28 | *(_QWORD *)v23 & 2LL;
            }
            else
            {
              if ( v26 )
              {
                *(_QWORD *)(v24 + 8) = v23;
                if ( *(_QWORD *)(v7 + 8) == v24 )
                  *(_QWORD *)(v7 + 8) = v23;
              }
              else
              {
                *(_QWORD *)(v24 + 16) = v23;
                if ( *(_QWORD *)(v7 + 16) == v24 )
                  *(_QWORD *)(v7 + 16) = v23;
              }
              v49[0] = v7;
              v49[1] = v6;
              sub_316890(v49, (__int64 *)v23);
            }
            v6 = v12;
LABEL_13:
            ++v11;
            ++v12;
            if ( v11 == (unsigned __int64 *)(*(_QWORD *)(v9 + 32) + 8LL * *(_QWORD *)(v9 + 40)) )
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
    v9 += 56;
  }
  while ( v9 != *(_QWORD *)(a2 + 112) + 56LL * *(_QWORD *)(a2 + 120) );
  if ( !v7 )
    return v50 - __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_41;
  v32 = *(_QWORD *)v7;
  v33 = (__int64 *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
  v34 = *v33;
  if ( (*v33 & 2) != 0 )
    goto LABEL_41;
  v36 = (__int64 *)v33[1];
  v37 = *v36;
  if ( (*v36 & 2) != 0 )
  {
    v40 = (__int64 *)v33[2];
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
      sub_31D8B0(v39);
      goto LABEL_47;
    }
    goto LABEL_64;
  }
  sub_31D8B0(v38);
  v39 = (__int64 *)v36[2];
  if ( (*(_BYTE *)v39 & 2) == 0 )
    goto LABEL_46;
LABEL_47:
  v37 = *v36;
  if ( (*v36 & 2) == 0 )
LABEL_64:
    *v36 = v37 | 2;
  if ( v36 )
    qfree();
  v40 = (__int64 *)v33[2];
  if ( (*(_BYTE *)v40 & 2) == 0 )
  {
LABEL_51:
    v41 = (__int64 *)v40[1];
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v42 & 2) == 0 )
      {
LABEL_53:
        sub_31D8B0(v42);
        goto LABEL_54;
      }
      v43 = *v40;
    }
    else
    {
      sub_31D8B0(v41);
      v42 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v42 & 2) == 0 )
        goto LABEL_53;
LABEL_54:
      v43 = *v40;
      if ( (*v40 & 2) != 0 )
      {
LABEL_55:
        if ( v40 )
          qfree();
        goto LABEL_57;
      }
    }
    *v40 = v43 | 2;
    goto LABEL_55;
  }
LABEL_57:
  v34 = *v33;
  if ( (*v33 & 2) == 0 )
LABEL_58:
    *v33 = v34 | 2;
  if ( v32 > 3 )
    qfree();
LABEL_41:
  qfree();
  return v50 - __readfsqword(0x28u);
}


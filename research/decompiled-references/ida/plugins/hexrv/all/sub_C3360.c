__int64 __fastcall sub_C3360(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *exception; // rdi
  char *v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  const char *v10; // rcx
  int v11; // eax
  unsigned __int64 *v12; // rsi
  __m128i *v13; // r8
  int v15; // eax
  int v16; // eax
  char v17; // bp
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  const char *v20; // rcx
  _BYTE *v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __m128i v25; // xmm1
  char *v26; // [rsp+0h] [rbp-78h]
  char *v27; // [rsp+0h] [rbp-78h]
  char *s2; // [rsp+8h] [rbp-70h]
  char *s2a; // [rsp+8h] [rbp-70h]
  char *s1; // [rsp+10h] [rbp-68h]
  char *s1a; // [rsp+10h] [rbp-68h]
  __m128i *v32; // [rsp+18h] [rbp-60h]
  __int64 v33[9]; // [rsp+30h] [rbp-48h] BYREF

  v33[1] = __readfsqword(0x28u);
  v6 = *(char **)(a1 + 1360);
  if ( v6 )
  {
    v7 = 24;
    v8 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
    {
LABEL_17:
      if ( a3 )
        copy_tinfo_t();
      LOBYTE(v8) = *(_BYTE *)(v7 + 24) != 0;
      return (unsigned int)v8;
    }
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      do
      {
        v7 = v8 + 24;
        if ( *(_QWORD *)(v8 + 32) )
        {
          v10 = *(const char **)(v8 + 24);
          if ( !v9 )
          {
            if ( !*v10 )
              goto LABEL_16;
LABEL_8:
            v8 = *(_QWORD *)(v8 + 8);
            continue;
          }
        }
        else
        {
          if ( !v9 )
          {
            if ( v6 != (char *)v8 )
              goto LABEL_17;
            break;
          }
          v10 = ::s1;
        }
        v26 = v6;
        s1 = (char *)v10;
        s2 = *(char **)a2;
        v15 = strcmp(*(const char **)a2, v10);
        v6 = v26;
        if ( v15 < 0 )
          goto LABEL_8;
        v16 = strcmp(s1, s2);
        v6 = v26;
        if ( v16 >= 0 )
        {
LABEL_16:
          if ( v6 != (char *)v8 )
            goto LABEL_17;
          break;
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( (*(_BYTE *)v8 & 2) == 0 );
    }
  }
  v11 = parse_decl();
  v12 = *(unsigned __int64 **)(a1 + 1360);
  v33[0] = a2;
  LODWORD(v8) = v11;
  v13 = (__m128i *)(a1 + 1360);
  if ( !v12 )
  {
    v24 = qalloc();
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
    if ( !v24 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v24 + 48) = 0;
    v13 = (__m128i *)(a1 + 1360);
    *(_OWORD *)(v24 + 16) = 0;
    *(_OWORD *)(v24 + 32) = 0;
    *(__m128i *)(v24 + 8) = v25;
    *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 1360) = v24;
    *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 1360) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1360),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1360));
    **(_QWORD **)(a1 + 1360) &= ~1uLL;
    **(_QWORD **)(a1 + 1360) |= 2uLL;
    v12 = *(unsigned __int64 **)(a1 + 1360);
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 1368) )
  {
LABEL_12:
    sub_C30F0(v13, v12, 1, v33);
    goto LABEL_13;
  }
  v17 = 1;
  v18 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v18 & 2) != 0 )
  {
LABEL_36:
    sub_C30F0(v13, v12, v17, v33);
    goto LABEL_13;
  }
  v19 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( *(_QWORD *)(v18 + 32) )
    {
      v20 = *(const char **)(v18 + 24);
      if ( !v19 )
      {
        if ( !*v20 )
          break;
LABEL_33:
        v21 = *(_BYTE **)(v18 + 8);
        v17 = 1;
        goto LABEL_34;
      }
    }
    else
    {
      if ( !v19 )
        break;
      v20 = ::s1;
    }
    v32 = v13;
    s1a = (char *)v18;
    s2a = (char *)v20;
    v27 = *(char **)a2;
    v22 = strcmp(*(const char **)a2, v20);
    v18 = (unsigned __int64)s1a;
    v13 = v32;
    if ( v22 < 0 )
      goto LABEL_33;
    v23 = strcmp(s2a, v27);
    v18 = (unsigned __int64)s1a;
    v13 = v32;
    if ( v23 >= 0 )
      break;
    v21 = *((_BYTE **)s1a + 2);
    v17 = 0;
LABEL_34:
    if ( (*v21 & 2) != 0 )
      goto LABEL_35;
    v18 = (unsigned __int64)v21;
  }
  if ( !v18 )
  {
LABEL_35:
    v12 = (unsigned __int64 *)v18;
    goto LABEL_36;
  }
LABEL_13:
  copy_tinfo_t();
  if ( a3 )
    *a3 = 0;
  clear_tinfo_t();
  return (unsigned int)v8;
}


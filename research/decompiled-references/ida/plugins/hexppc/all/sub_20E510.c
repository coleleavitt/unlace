unsigned __int64 __fastcall sub_20E510(__m128i *a1)
{
  const char **v1; // rbx
  __int64 v3; // r15
  char *v4; // rdi
  const char *v5; // r14
  int v6; // r12d
  size_t v7; // r15
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  const char *v10; // r14
  _BYTE *v11; // rax
  char v12; // al
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __m128i v16; // xmm1
  _QWORD *exception; // rdi
  __int64 v19; // [rsp+0h] [rbp-88h]
  char v20; // [rsp+Fh] [rbp-79h]
  const char *s2; // [rsp+10h] [rbp-78h]
  unsigned __int64 v22; // [rsp+18h] [rbp-70h]
  char **p_s1; // [rsp+28h] [rbp-60h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v1 = (const char **)&off_4CC220;
  v26 = __readfsqword(0x28u);
  a1->m128i_i64[0] = 0;
  a1->m128i_i64[1] = 0;
  do
  {
    v5 = *v1;
    v6 = *((_DWORD *)v1 + 2);
    s1 = nullptr;
    v25 = 0;
    if ( v5 )
    {
      v7 = strlen(v5);
      s1 = (char *)qvector_reserve();
      *(_QWORD *)&v25 = v7 + 1;
      memmove(s1, v5, v7);
      s1[v7] = 0;
    }
    v8 = (unsigned __int64 *)a1->m128i_i64[0];
    p_s1 = &s1;
    if ( !v8 )
    {
      v15 = qalloc();
      v8 = (unsigned __int64 *)v15;
      v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
      if ( !v15 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v15 + 48) = 0;
      *(_OWORD *)(v15 + 16) = 0;
      *(_OWORD *)(v15 + 32) = 0;
      *(__m128i *)(v15 + 8) = v16;
      a1->m128i_i64[0] = v15;
      *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_2:
      v3 = sub_20E3A0(a1, v8, 1, (__int64 **)&p_s1) + 24;
      goto LABEL_3;
    }
    if ( !a1->m128i_i64[1] )
      goto LABEL_2;
    v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v12 = 1;
LABEL_17:
      v3 = sub_20E3A0(a1, v8, v12, (__int64 **)&p_s1) + 24;
      goto LABEL_3;
    }
    v20 = 1;
    v19 = v25;
    while ( 1 )
    {
      v3 = v9 + 24;
      if ( *(_QWORD *)(v9 + 32) )
      {
        v10 = *(const char **)(v9 + 24);
        if ( !v19 )
        {
          if ( !*v10 )
            break;
LABEL_15:
          v11 = *(_BYTE **)(v9 + 8);
          v20 = 1;
          if ( (*v11 & 2) != 0 )
            goto LABEL_16;
          goto LABEL_24;
        }
      }
      else
      {
        if ( !v19 )
          break;
        v10 = ::s1;
      }
      v22 = v9;
      s2 = s1;
      v13 = strcmp(s1, v10);
      v9 = v22;
      if ( v13 < 0 )
        goto LABEL_15;
      v14 = strcmp(v10, s2);
      v9 = v22;
      if ( v14 >= 0 )
        break;
      v11 = *(_BYTE **)(v22 + 16);
      v20 = 0;
      if ( (*v11 & 2) != 0 )
        goto LABEL_16;
LABEL_24:
      v9 = (unsigned __int64)v11;
    }
    if ( !v9 )
    {
LABEL_16:
      v12 = v20;
      v8 = (unsigned __int64 *)v9;
      goto LABEL_17;
    }
LABEL_3:
    v4 = s1;
    *(_DWORD *)(v3 + 24) = v6;
    if ( v4 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    v1 += 2;
  }
  while ( &unk_4CC670 != (_UNKNOWN *)v1 );
  return v26 - __readfsqword(0x28u);
}


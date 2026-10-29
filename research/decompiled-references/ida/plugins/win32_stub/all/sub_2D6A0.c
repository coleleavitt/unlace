const char *__fastcall sub_2D6A0(__int64 a1)
{
  const char *v1; // rbp
  unsigned __int64 v3; // rbp
  const char *v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r12
  void *v9; // rdi
  size_t v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r12
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i v19; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v1 = *(const char **)(a1 + 64);
  v20 = __readfsqword(0x28u);
  if ( !strcmp(v1, "irs") )
  {
    v5 = (const char *)sub_25D90(*(_QWORD *)(a1 + 32));
    v6 = v5;
    if ( !v5 || (v7 = strlen(v5), (v8 = v7) == 0) )
    {
      *(_QWORD *)(a1 + 48) = 0;
      goto LABEL_14;
    }
    v9 = *(void **)(a1 + 40);
    v10 = v7 + 1;
    if ( *(_QWORD *)(a1 + 56) < v7 + 1 )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(a1 + 40) = v16;
      v9 = (void *)v16;
    }
    *(_QWORD *)(a1 + 48) = v10;
    memmove(v9, v6, v8);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + v8) = 0;
    v3 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    if ( !strcmp(v1, "dlopen") || !strcmp(v1, "dlsym") )
    {
      dlerror();
      sub_C7A0((__int64 *)(a1 + 40));
      v3 = *(_QWORD *)(a1 + 48);
      goto LABEL_9;
    }
    if ( !strcmp(v1, "unsupported_version") )
      goto LABEL_31;
    if ( strcmp(v1, "openssl") )
    {
      if ( !strcmp(v1, "openssl_verify") )
      {
        (*(void (__fastcall **)(_QWORD))(qword_3BC20 + 360))(*(int *)(a1 + 72));
        sub_C7A0((__int64 *)(a1 + 40));
        v3 = *(_QWORD *)(a1 + 48);
        goto LABEL_9;
      }
      if ( strcmp(v1, "load_root_ca_certificate")
        && strcmp(v1, "certchain_not_found")
        && strcmp(v1, "privkey_not_found") )
      {
        if ( !strcmp(v1, "connection_closed_by_peer") )
          sub_C7A0((__int64 *)(a1 + 40));
        v3 = *(_QWORD *)(a1 + 48);
        goto LABEL_9;
      }
LABEL_31:
      sub_C7A0((__int64 *)(a1 + 40));
      v3 = *(_QWORD *)(a1 + 48);
      goto LABEL_9;
    }
    sub_2D4F0(&v18);
    v11 = _mm_loadu_si128(&v19);
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v18;
    v19 = 0;
    v18 = 0;
    v3 = v11.m128i_i64[0];
    if ( v12 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v17 = v11;
      qfree();
      v14 = _mm_load_si128(&v17);
      v15 = v18;
      *(_QWORD *)(a1 + 40) = v13;
      *(__m128i *)(a1 + 48) = v14;
      if ( v15 )
      {
        v19.m128i_i64[0] = 0;
        qfree();
        v3 = *(_QWORD *)(a1 + 48);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 40) = v13;
      *(__m128i *)(a1 + 48) = v11;
    }
  }
LABEL_9:
  if ( v3 > 1 )
    return *(const char **)(a1 + 40);
LABEL_14:
  sub_C7A0((__int64 *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 48) )
    return *(const char **)(a1 + 40);
  return &s;
}


__int64 __fastcall sub_78770(__int64 a1, _BYTE *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // r12
  __int64 *v5; // rbx
  const char *v6; // rsi
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r12
  const char *v10; // rsi
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // r12
  const char *v14; // rsi
  unsigned int v15; // ebp
  void *v17; // [rsp+60h] [rbp-48h]
  void *v18; // [rsp+60h] [rbp-48h]
  void *v19; // [rsp+60h] [rbp-48h]

  if ( *a2 )
  {
    v15 = serialize_tinfo();
    if ( !(_BYTE)v15 )
      return v15;
  }
  v17 = nullptr;
  if ( !src )
  {
    v5 = (__int64 *)(a1 + 72);
    goto LABEL_17;
  }
  v2 = strlen(src);
  v3 = v2 + 1;
  v4 = v2;
  v17 = (void *)qvector_reserve();
  v5 = (__int64 *)(a1 + 72);
  memmove(v17, src, v4);
  *((_BYTE *)v17 + v4) = 0;
  v6 = (const char *)v17;
  if ( !v3 )
LABEL_17:
    v6 = s1;
  sub_78650(v5, v6);
  if ( v17 )
    qfree();
  v18 = nullptr;
  if ( !src
    || (v7 = strlen(src),
        v8 = v7 + 1,
        v9 = v7,
        v18 = (void *)qvector_reserve(),
        memmove(v18, src, v9),
        *((_BYTE *)v18 + v9) = 0,
        v10 = (const char *)v18,
        !v8) )
  {
    v10 = s1;
  }
  sub_78650(v5, v10);
  if ( v18 )
    qfree();
  v19 = nullptr;
  if ( !src
    || (v11 = strlen(src),
        v12 = v11 + 1,
        v13 = v11,
        v19 = (void *)qvector_reserve(),
        memmove(v19, src, v13),
        *((_BYTE *)v19 + v13) = 0,
        v14 = (const char *)v19,
        !v12) )
  {
    v14 = s1;
  }
  sub_78650(v5, v14);
  if ( v19 )
    qfree();
  return 1;
}


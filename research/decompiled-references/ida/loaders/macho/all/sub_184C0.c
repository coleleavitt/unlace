__int64 __fastcall sub_184C0(__int64 a1, const char *a2, const char *a3)
{
  const char *v3; // rbp
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  size_t v8; // r13
  size_t v9; // r15
  size_t v10; // r8
  size_t v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 i; // rbx
  const char *v16; // rsi
  const char *v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 *v20; // rax
  size_t v21; // [rsp+0h] [rbp-68h]
  size_t v22; // [rsp+8h] [rbp-60h]
  char *v23; // [rsp+10h] [rbp-58h]
  size_t v24; // [rsp+18h] [rbp-50h]

  v3 = a2;
  v24 = 0;
  if ( !a2 )
  {
    if ( !a3 )
    {
      v20 = *(__int64 **)(a1 + 40);
      v13 = *v20;
      v14 = *v20 + 24 * v20[1];
      if ( v14 != *v20 )
        goto LABEL_8;
      return -1;
    }
    v8 = 0;
    v9 = strlen(a3);
    v11 = v9 + 1;
    v10 = v9;
LABEL_23:
    v22 = v10;
    v21 = v11;
    v23 = (char *)qvector_reserve();
    v10 = v22;
    v3 = v23;
    v11 = v21;
LABEL_6:
    v24 = v11;
    v3[v10] = 0;
    memmove(&v23[v8], a3, v9);
    v3 = v23;
    goto LABEL_7;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  v23 = (char *)qvector_reserve();
  v24 = v6;
  memmove(v23, a2, v7);
  v23[v7] = 0;
  v3 = v23;
  if ( a3 )
  {
    v8 = v6;
    v9 = strlen(a3);
    if ( v24 )
    {
      v8 = v24 - 1;
      v10 = v9 + v24 - 1;
    }
    else
    {
      v10 = v9;
    }
    v11 = v10 + 1;
    if ( v10 == -1 )
      goto LABEL_6;
    goto LABEL_23;
  }
LABEL_7:
  v12 = *(__int64 **)(a1 + 40);
  v13 = *v12;
  v14 = *v12 + 24 * v12[1];
  if ( *v12 != v14 )
  {
LABEL_8:
    for ( i = v13; i != v14; i += 24 )
    {
      if ( *(_QWORD *)(i + 8) )
      {
        v16 = *(const char **)i;
        v17 = s1;
        if ( !v24 )
          goto LABEL_10;
      }
      else
      {
        if ( !v24 )
        {
LABEL_20:
          v18 = 0xAAAAAAAAAAAAAAABLL * ((i - v13) >> 3);
          goto LABEL_17;
        }
        v16 = s1;
      }
      v17 = v3;
LABEL_10:
      if ( !strcmp(v17, v16) )
        goto LABEL_20;
    }
  }
  v18 = -1;
LABEL_17:
  if ( v3 )
    qfree();
  return v18;
}


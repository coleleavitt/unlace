__int64 __fastcall sub_1B1E0(__int64 a1)
{
  unsigned __int64 v1; // r12
  size_t v2; // rbx
  const char *v3; // rsi
  char *v5; // [rsp+0h] [rbp-38h]
  unsigned __int64 v6; // [rsp+10h] [rbp-28h]

  v1 = 2;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 16);
  v5 = (char *)qalloc_or_throw();
  memcpy(v5, *(const void **)(a1 + 8), v2);
  v3 = v5;
  if ( v2 != 1 )
  {
    if ( v5[v2 - 2] == 10 )
      goto LABEL_5;
    v1 = v2 + 1;
  }
  --v2;
  if ( v6 < v1 )
  {
LABEL_2:
    v5 = (char *)qvector_reserve();
    v3 = v5;
  }
  v3[v2] = 10;
  v3 = src;
  v5[v2 + 1] = 0;
  if ( v1 )
    v3 = v5;
LABEL_5:
  sub_1A4E0(qword_24798, v3);
  if ( v5 )
    qfree();
  return 0;
}


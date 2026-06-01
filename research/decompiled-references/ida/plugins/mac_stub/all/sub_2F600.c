void *__fastcall sub_2F600(__int64 *a1, const char *a2)
{
  char *v2; // r14
  size_t v3; // rax
  unsigned __int64 v4; // rbx
  size_t v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v10; // rax

  if ( !a2 )
  {
    v4 = a1[1];
    v5 = 1;
    v2 = "";
    v6 = v4 + 1;
    if ( v4 == -1 )
    {
      v4 = -1;
      v2 = "";
      a1[1] = 0x7FFFFFFFFFFFFFFFLL;
      return memcpy((void *)(*a1 + v4), v2, v5);
    }
    goto LABEL_3;
  }
  v2 = (char *)a2;
  v3 = strlen(a2);
  v4 = a1[1];
  v5 = v3 + 1;
  v6 = v3 + 1 + v4;
  if ( !__CFADD__(v3 + 1, v4) )
  {
LABEL_3:
    v7 = *a1;
    v8 = v4;
    if ( a1[2] < v6 )
    {
      v10 = qvector_reserve();
      *a1 = v10;
      v7 = v10;
      v8 = a1[1];
    }
    memset((void *)(v7 + v8), 0, v6 - v8);
    a1[1] = v6;
    return memcpy((void *)(*a1 + v4), v2, v5);
  }
  if ( v4 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_3;
  }
  if ( v4 != 0x7FFFFFFFFFFFFFFFLL )
    a1[1] = 0x7FFFFFFFFFFFFFFFLL;
  return memcpy((void *)(*a1 + v4), v2, v5);
}


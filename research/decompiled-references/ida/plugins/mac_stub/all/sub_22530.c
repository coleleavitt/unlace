void *__fastcall sub_22530(__int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v5 = a1[1];
  v6 = a3 + v5;
  if ( !__CFADD__(a3, v5) )
  {
    if ( v5 >= v6 )
      return memcpy((void *)(*a1 + v5), a2, a3);
    goto LABEL_8;
  }
  if ( v5 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
    v8 = *a1;
    v9 = a1[1];
    if ( a1[2] < v6 )
    {
      v10 = qvector_reserve();
      *a1 = v10;
      v8 = v10;
      v9 = a1[1];
    }
    memset((void *)(v8 + v9), 0, v6 - v9);
    a1[1] = v6;
    return memcpy((void *)(*a1 + v5), a2, a3);
  }
  if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
    a1[1] = 0x7FFFFFFFFFFFFFFFLL;
  return memcpy((void *)(*a1 + v5), a2, a3);
}


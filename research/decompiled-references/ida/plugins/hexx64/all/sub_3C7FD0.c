void *__fastcall sub_3C7FD0(__int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rax

  v5 = a1[1];
  v6 = a3 + v5;
  if ( !__CFADD__(a3, v5) )
    goto LABEL_2;
  if ( v5 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_2:
    v7 = *a1;
    v8 = a1[1];
    if ( a1[2] < v6 )
    {
      v10 = qvector_reserve((__int64)a1, v7, v6, 1);
      *a1 = v10;
      v7 = v10;
      v8 = a1[1];
    }
    memset((void *)(v7 + v8), 0, v6 - v8);
    a1[1] = v6;
    return memcpy((void *)(*a1 + v5), a2, a3);
  }
  if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
    a1[1] = 0x7FFFFFFFFFFFFFFFLL;
  return memcpy((void *)(*a1 + v5), a2, a3);
}


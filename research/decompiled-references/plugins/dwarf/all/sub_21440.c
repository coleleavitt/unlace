__int64 *__fastcall sub_21440(__int64 a1, __int64 *a2, char a3)
{
  __int64 *result; // rax
  const void *v6; // r13
  size_t v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 *v13; // rbx
  __int64 v14; // r13
  int v15; // edx
  void *v16; // rdi
  char *v17; // r14
  __int64 v18; // rax

  a2[1] = 0;
  if ( a3 )
    return sub_213D0((unsigned __int8 *)(a1 + 5132), a2);
  v6 = (const void *)(a1 + 1034);
  result = (__int64 *)strlen((const char *)(a1 + 1034));
  v7 = (size_t)result;
  if ( !result )
    goto LABEL_4;
  v16 = (void *)*a2;
  v17 = (char *)result + 1;
  if ( a2[2] < (unsigned __int64)result + 1 )
  {
    v18 = qvector_reserve(a2, *a2, (char *)result + 1, 1);
    *a2 = v18;
    v16 = (void *)v18;
  }
  a2[1] = (__int64)v17;
  memmove(v16, v6, v7);
  result = (__int64 *)*a2;
  *(_BYTE *)(*a2 + v7) = 0;
  v10 = a2[1];
  if ( v10 )
  {
    v8 = *a2;
    v11 = v10 - 1;
    v9 = v10 + 1;
    if ( a2[2] >= (unsigned __int64)(v10 + 1) )
      goto LABEL_5;
  }
  else
  {
LABEL_4:
    v8 = *a2;
    v9 = 2;
    v10 = 1;
    v11 = 0;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_5;
  }
  result = (__int64 *)qvector_reserve(a2, v8, v9, 1);
  *a2 = (__int64)result;
  v8 = (__int64)result;
LABEL_5:
  a2[1] = v9;
  *(_BYTE *)(v8 + v10) = 0;
  *(_BYTE *)(*a2 + v11) = 124;
  v12 = *(unsigned __int16 *)(a1 + 8);
  v13 = (unsigned __int8 *)(a1 + 10);
  v14 = a1 + v12 + 10;
  if ( (_WORD)v12 )
  {
    do
    {
      v15 = *v13++;
      result = sub_1F510(a2, (__int64)"%02X", v15);
    }
    while ( v13 != (unsigned __int8 *)v14 );
  }
  return result;
}

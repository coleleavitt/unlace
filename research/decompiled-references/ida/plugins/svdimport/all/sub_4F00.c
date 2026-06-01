__int64 *__fastcall sub_4F00(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 *result; // rax
  __int64 *v6; // rbx
  unsigned __int64 v7; // rbp
  const void *v8; // r13
  __int64 *v9; // rdi
  __int64 v10; // rax

  result = &qword_1C320;
  if ( a5 < *(_QWORD *)(a1 + 192) )
    result = (__int64 *)(*(_QWORD *)(a1 + 184) + 80 * a5);
  v6 = *a2;
  if ( *a2 != result + 6 )
  {
    v7 = result[7];
    if ( v7 > 1 )
    {
      v8 = (const void *)result[6];
      v9 = (__int64 *)*v6;
      if ( v6[2] < v7 )
      {
        v10 = qvector_reserve();
        *v6 = v10;
        v9 = (__int64 *)v10;
      }
      v6[1] = v7;
      memmove(v9, v8, v7 - 1);
      result = (__int64 *)*v6;
      *(_BYTE *)(*v6 + v7 - 1) = 0;
    }
    else
    {
      v6[1] = 0;
    }
  }
  return result;
}


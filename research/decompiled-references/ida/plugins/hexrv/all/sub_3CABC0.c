void *__fastcall sub_3CABC0(__int64 *a1, __int64 a2)
{
  void *result; // rax
  size_t v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  size_t v6; // r14
  size_t v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax

  result = (void *)tag_strlen();
  v3 = a2 - (_QWORD)result;
  if ( a2 - (__int64)result > 0 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = v4 - 1;
      v6 = v3 + v4 - 1;
      v7 = v3 + v4;
      if ( v4 >= v3 + v4 )
        return memset((void *)(v5 + *a1), 32, v3);
    }
    else
    {
      v7 = v3 + 1;
      v6 = v3;
      v5 = 0;
    }
    v8 = *a1;
    if ( a1[2] < v7 )
    {
      v9 = qvector_reserve();
      *a1 = v9;
      v8 = v9;
    }
    a1[1] = v7;
    *(_BYTE *)(v8 + v6) = 0;
    return memset((void *)(v5 + *a1), 32, v3);
  }
  return result;
}


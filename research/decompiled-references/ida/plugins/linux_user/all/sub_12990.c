__int64 __fastcall sub_12990(_QWORD *a1, int a2)
{
  __int64 result; // rax
  const char *v3; // rbp
  size_t v4; // rax
  __int64 v5; // r12
  size_t v6; // r13
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax

  result = 0;
  if ( a2 == 1 )
  {
    v3 = (const char *)unpack_ds();
    if ( a1[163] )
    {
      a1[164] = 0;
      qfree();
      a1[163] = 0;
      a1[165] = 0;
    }
    if ( v3 )
    {
      v4 = strlen(v3);
      v5 = a1[164];
      v6 = v4;
      v7 = v4;
      if ( v5 )
      {
        --v5;
        v7 = v4 + v5;
      }
      v8 = a1[163];
      if ( a1[165] < v7 + 1 )
      {
        v9 = qvector_reserve();
        a1[163] = v9;
        v8 = v9;
      }
      a1[164] = v7 + 1;
      *(_BYTE *)(v8 + v7) = 0;
      memmove((void *)(v5 + a1[163]), v3, v6);
    }
    return 1;
  }
  return result;
}


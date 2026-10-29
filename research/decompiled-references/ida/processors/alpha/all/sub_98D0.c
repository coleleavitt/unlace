__int64 __fastcall sub_98D0(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  const char *v5; // rsi
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3;
    if ( v3 )
    {
      v7 = (void *)a1[22];
      v8 = v3 + 1;
      if ( a1[24] < v3 + 1 )
      {
        v9 = qvector_reserve();
        a1[22] = v9;
        v7 = (void *)v9;
      }
      a1[23] = v8;
      memmove(v7, a2, v4);
      *(_BYTE *)(a1[22] + v4) = 0;
    }
    else
    {
      a1[23] = 0;
    }
    netnode_supset();
  }
  v5 = (const char *)&qword_D948;
  if ( a1[23] )
    v5 = (const char *)a1[22];
  return sub_9720(a1, v5);
}


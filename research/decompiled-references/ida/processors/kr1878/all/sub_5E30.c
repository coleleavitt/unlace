__int64 __fastcall sub_5E30(_QWORD *a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v6 = (void *)a1[18];
    v7 = v3 + 1;
    if ( a1[20] < v3 + 1 )
    {
      v8 = qvector_reserve();
      a1[18] = v8;
      v6 = (void *)v8;
    }
    a1[19] = v7;
    memmove(v6, a2, v4);
    *(_BYTE *)(a1[18] + v4) = 0;
  }
  else
  {
    a1[19] = 0;
  }
  netnode_supset();
  return sub_5D40(a1);
}


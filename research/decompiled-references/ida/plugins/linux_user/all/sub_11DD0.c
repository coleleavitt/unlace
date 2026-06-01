__int64 __fastcall sub_11DD0(_QWORD *a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v6 = (void *)a1[2];
    v7 = v3 + 1;
    if ( a1[4] < v3 + 1 )
    {
      v8 = qvector_reserve();
      a1[2] = v8;
      v6 = (void *)v8;
    }
    a1[3] = v7;
    memmove(v6, a2, v4);
    *(_BYTE *)(a1[2] + v4) = 0;
    return 2;
  }
  else
  {
    a1[3] = 0;
    return 2;
  }
}


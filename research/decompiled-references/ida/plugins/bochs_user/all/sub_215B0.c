void __fastcall sub_215B0(_QWORD *a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v5 = (void *)a1[35];
    v6 = v3 + 1;
    if ( a1[37] < v3 + 1 )
    {
      v7 = qvector_reserve();
      a1[35] = v7;
      v5 = (void *)v7;
    }
    a1[36] = v6;
    memmove(v5, a2, v4);
    *(_BYTE *)(a1[35] + v4) = 0;
  }
  else
  {
    a1[36] = 0;
  }
}


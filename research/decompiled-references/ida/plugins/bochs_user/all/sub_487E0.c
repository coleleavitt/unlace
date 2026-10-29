void __fastcall sub_487E0(__int64 a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v5 = *(void **)a1;
    v6 = v3 + 1;
    if ( *(_QWORD *)(a1 + 16) < v3 + 1 )
    {
      v7 = qvector_reserve();
      *(_QWORD *)a1 = v7;
      v5 = (void *)v7;
    }
    *(_QWORD *)(a1 + 8) = v6;
    memmove(v5, a2, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
}


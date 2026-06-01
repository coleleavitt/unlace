void __fastcall sub_343670(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // r12
  void *v5; // rax

  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8), a2, a3, a4);
    a1[2] = v4;
    *a1 = v5;
    memcpy(v5, *(const void **)a2, v4);
    a1[1] = v4;
  }
}


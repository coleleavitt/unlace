void __fastcall sub_EAC0(__int64 a1, const void *a2, __int64 a3)
{
  size_t v3; // r13
  void *v5; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 )
  {
    v3 = 32 * a3;
    v5 = (void *)qalloc_or_throw(32 * a3);
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)a1 = v5;
    memcpy(v5, a2, v3);
    *(_QWORD *)(a1 + 8) = a3;
  }
}


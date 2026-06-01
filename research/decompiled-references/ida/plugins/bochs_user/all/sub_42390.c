__int64 __fastcall sub_42390(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  size_t v3; // rax
  size_t v5; // r13
  size_t v6; // rbp
  void *v7; // rax

  v2 = (const char *)(*(_QWORD *)(*(_QWORD *)(qword_753F8 + 4824) + 1200LL) + 13456LL);
  v3 = strlen(v2);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v5 = v3 + 1;
    v6 = v3;
    v7 = (void *)qvector_reserve();
    *(_QWORD *)(a2 + 16) = v5;
    *(_QWORD *)(a2 + 8) = v7;
    memmove(v7, v2, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
  }
  return 0;
}


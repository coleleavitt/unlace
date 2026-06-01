__int64 __fastcall sub_2A150(__int64 a1)
{
  const char *v1; // rax
  const char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  void *v6; // rax

  get_path();
  qdirname();
  qbasename();
  v1 = (const char *)qmakepath();
  *(_QWORD *)a1 = 0;
  v2 = v1;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v1 )
  {
    v3 = strlen(v1);
    v4 = v3 + 1;
    v5 = v3;
    v6 = (void *)qvector_reserve();
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v4;
    memmove(v6, v2, v5);
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  }
  return a1;
}


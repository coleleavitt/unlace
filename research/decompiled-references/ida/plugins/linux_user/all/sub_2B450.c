__int64 __fastcall sub_2B450(__int64 a1, __int64 a2, unsigned int a3)
{
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  void *v8; // rax

  v3 = sub_286B0(a2, a3);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen(v3);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve();
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v6;
    memmove(v8, v4, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
    if ( *(_QWORD *)(a1 + 8) > 1u )
      return a1;
  }
  sub_BF00((__int64 *)a1);
  return a1;
}


__int64 *__fastcall sub_32790(__int64 *a1, __int64 a2)
{
  const char *v2; // r13
  __int64 v3; // rbx
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  void *v7; // rax

  v2 = nptr;
  v3 = operator new(0x28u);
  if ( *(_QWORD *)(a2 + 24) )
    v2 = *(const char **)(a2 + 16);
  *(_DWORD *)(v3 + 8) = 1;
  *(_QWORD *)v3 = &off_7D8B8;
  *(_QWORD *)(v3 + 16) = 0;
  *(_OWORD *)(v3 + 24) = 0;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)qvector_reserve();
    *(_QWORD *)(v3 + 16) = v7;
    *(_QWORD *)(v3 + 24) = v5;
    memmove(v7, v2, v6);
    *(_BYTE *)(*(_QWORD *)(v3 + 16) + v6) = 0;
  }
  *a1 = v3;
  return a1;
}


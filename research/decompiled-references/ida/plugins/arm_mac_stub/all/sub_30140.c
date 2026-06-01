size_t __fastcall sub_30140(__int64 a1, __int64 a2)
{
  const char *v3; // r12
  size_t result; // rax
  size_t v5; // rbx
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  *(_DWORD *)(a1 + 4) = unpack_dd();
  v3 = *(const char **)a2;
  result = *(_QWORD *)a2;
  do
  {
    if ( result >= *(_QWORD *)(a2 + 8) )
      goto LABEL_4;
    ++result;
  }
  while ( *(_BYTE *)(result - 1) );
  *(_QWORD *)a2 = result;
  if ( !v3 || (result = strlen(v3), (v5 = result) == 0) )
  {
LABEL_4:
    *(_QWORD *)(a1 + 16) = 0;
    return result;
  }
  v6 = *(void **)(a1 + 8);
  v7 = result + 1;
  if ( *(_QWORD *)(a1 + 24) < result + 1 )
  {
    v8 = qvector_reserve();
    *(_QWORD *)(a1 + 8) = v8;
    v6 = (void *)v8;
  }
  *(_QWORD *)(a1 + 16) = v7;
  memmove(v6, v3, v5);
  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + v5) = 0;
  return result;
}


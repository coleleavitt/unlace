size_t __fastcall sub_2EBC0(_QWORD *a1, __int64 a2)
{
  const char *v3; // r12
  size_t result; // rax
  size_t v5; // rbx
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  *a1 = unpack_dq() - 1;
  a1[1] = unpack_dq() - 1;
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
    a1[3] = 0;
    return result;
  }
  v6 = (void *)a1[2];
  v7 = result + 1;
  if ( a1[4] < result + 1 )
  {
    v8 = qvector_reserve();
    a1[2] = v8;
    v6 = (void *)v8;
  }
  a1[3] = v7;
  memmove(v6, v3, v5);
  result = a1[2];
  *(_BYTE *)(result + v5) = 0;
  return result;
}


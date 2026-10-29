__int64 __fastcall sub_23C10(__int64 a1, __int64 a2)
{
  const char *v3; // r12
  const char *v4; // rax
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r13
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax

  v3 = *(const char **)a2;
  v4 = *(const char **)a2;
  do
  {
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 8) )
      goto LABEL_4;
    ++v4;
  }
  while ( *(v4 - 1) );
  *(_QWORD *)a2 = v4;
  if ( !v3 || (v6 = strlen(v3), (v7 = v6) == 0) )
  {
LABEL_4:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_5;
  }
  v8 = *(void **)a1;
  v9 = v6 + 1;
  if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
  {
    v10 = qvector_reserve();
    *(_QWORD *)a1 = v10;
    v8 = (void *)v10;
  }
  *(_QWORD *)(a1 + 8) = v9;
  memmove(v8, v3, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
LABEL_5:
  *(_QWORD *)(a1 + 24) = unpack_dq() - 1;
  *(_QWORD *)(a1 + 32) = unpack_dq() - 1;
  result = unpack_dq() - 1;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}


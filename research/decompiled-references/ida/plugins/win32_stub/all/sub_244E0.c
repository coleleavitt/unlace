size_t __fastcall sub_244E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // eax
  const char *v6; // r12
  const char *v7; // rax
  const char *v8; // r12
  size_t result; // rax
  size_t v10; // rax
  size_t v11; // r13
  void *v12; // rdi
  size_t v13; // r14
  size_t v14; // rbx
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = unpack_dq();
  *(_QWORD *)(a1 + 64) = v3 - 1;
  v4 = 16 * (v3 - 1) + unpack_dq() - 1;
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v4 + unpack_dq() - 1;
  v5 = unpack_dd();
  *(_BYTE *)(a1 + 72) = v5 >> 4;
  *(_BYTE *)(a1 + 73) = v5 & 7;
  v6 = *(const char **)a2;
  v7 = *(const char **)a2;
  do
  {
    if ( (unsigned __int64)v7 >= *(_QWORD *)(a2 + 8) )
      goto LABEL_4;
    ++v7;
  }
  while ( *(v7 - 1) );
  *(_QWORD *)a2 = v7;
  if ( !v6 || (v10 = strlen(v6), (v11 = v10) == 0) )
  {
LABEL_4:
    *(_QWORD *)(a1 + 24) = 0;
    goto LABEL_5;
  }
  v12 = *(void **)(a1 + 16);
  v13 = v10 + 1;
  if ( *(_QWORD *)(a1 + 32) < v10 + 1 )
  {
    v17 = qvector_reserve();
    *(_QWORD *)(a1 + 16) = v17;
    v12 = (void *)v17;
  }
  *(_QWORD *)(a1 + 24) = v13;
  memmove(v12, v6, v11);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + v11) = 0;
LABEL_5:
  v8 = *(const char **)a2;
  result = *(_QWORD *)a2;
  do
  {
    if ( result >= *(_QWORD *)(a2 + 8) )
      goto LABEL_8;
    ++result;
  }
  while ( *(_BYTE *)(result - 1) );
  *(_QWORD *)a2 = result;
  if ( !v8 || (result = strlen(v8), (v14 = result) == 0) )
  {
LABEL_8:
    *(_QWORD *)(a1 + 48) = 0;
    return result;
  }
  v15 = *(void **)(a1 + 40);
  v16 = result + 1;
  if ( *(_QWORD *)(a1 + 56) < result + 1 )
  {
    v18 = qvector_reserve();
    *(_QWORD *)(a1 + 40) = v18;
    v15 = (void *)v18;
  }
  *(_QWORD *)(a1 + 48) = v16;
  memmove(v15, v8, v14);
  result = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(result + v14) = 0;
  return result;
}


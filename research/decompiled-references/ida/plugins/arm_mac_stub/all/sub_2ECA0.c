size_t __fastcall sub_2ECA0(__int64 *a1, __int64 a2)
{
  size_t result; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  const char *v10; // r15
  size_t v11; // r8
  void *v12; // rdi
  size_t v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // [rsp+0h] [rbp-48h]
  size_t v17; // [rsp+0h] [rbp-48h]
  size_t v18; // [rsp+8h] [rbp-40h]

  result = unpack_dd();
  v5 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v6 = 0;
    do
    {
      v7 = a1[1];
      v8 = *a1;
      if ( a1[2] < (unsigned __int64)(v7 + 1) )
      {
        v14 = qvector_reserve();
        v7 = a1[1];
        *a1 = v14;
        v8 = v14;
      }
      v9 = v8 + 32 * v7;
      *(_QWORD *)(v9 + 8) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      ++a1[1];
      *(_DWORD *)v9 = unpack_dd();
      v10 = *(const char **)a2;
      result = *(_QWORD *)a2;
      do
      {
        if ( result >= *(_QWORD *)(a2 + 8) )
          goto LABEL_8;
        ++result;
      }
      while ( *(_BYTE *)(result - 1) );
      *(_QWORD *)a2 = result;
      if ( !v10 || (result = strlen(v10), (v11 = result) == 0) )
      {
LABEL_8:
        *(_QWORD *)(v9 + 16) = 0;
        goto LABEL_9;
      }
      v12 = *(void **)(v9 + 8);
      v13 = result + 1;
      if ( *(_QWORD *)(v9 + 24) < result + 1 )
      {
        v18 = result;
        v17 = result + 1;
        v15 = qvector_reserve();
        v11 = v18;
        v13 = v17;
        *(_QWORD *)(v9 + 8) = v15;
        v12 = (void *)v15;
      }
      *(_QWORD *)(v9 + 16) = v13;
      v16 = v11;
      memmove(v12, v10, v11);
      result = *(_QWORD *)(v9 + 8);
      *(_BYTE *)(result + v16) = 0;
LABEL_9:
      ++v6;
    }
    while ( v5 != v6 );
  }
  return result;
}


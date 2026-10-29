__int64 __fastcall sub_5790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  const char *v9; // rax
  const char *v10; // rbp
  size_t v11; // rax
  size_t v12; // r13
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax

  v7 = qfwrite();
  if ( v7 == a4 || !a5 )
    return v7;
  v9 = (const char *)qstrerror();
  v10 = v9;
  if ( v9 )
  {
    v11 = strlen(v9);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(void **)a5;
      v14 = v11 + 1;
      if ( *(_QWORD *)(a5 + 16) < v11 + 1 )
      {
        v15 = qvector_reserve();
        *(_QWORD *)a5 = v15;
        v13 = (void *)v15;
      }
      *(_QWORD *)(a5 + 8) = v14;
      memmove(v13, v10, v12);
      *(_BYTE *)(*(_QWORD *)a5 + v12) = 0;
      return v7;
    }
  }
  *(_QWORD *)(a5 + 8) = 0;
  return v7;
}


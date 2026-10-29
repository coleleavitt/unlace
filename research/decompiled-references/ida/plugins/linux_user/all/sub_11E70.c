__int64 __fastcall sub_11E70(__int64 a1, const void *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v7; // r12
  size_t v8; // rax
  size_t v9; // rbp
  __int64 v10; // rax
  const char *v11; // rcx
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax

  v7 = *(_QWORD **)(a1 + 24);
  if ( a2 && (v8 = strlen((const char *)a2), (v9 = v8) != 0) )
  {
    v13 = (void *)v7[14];
    v14 = v8 + 1;
    if ( v7[16] < v8 + 1 )
    {
      v15 = qvector_reserve();
      v7[14] = v15;
      v13 = (void *)v15;
    }
    v7[15] = v14;
    memmove(v13, a2, v9);
    *(_BYTE *)(v7[14] + v9) = 0;
  }
  else
  {
    v7[15] = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = s;
  if ( *(_QWORD *)(v10 + 24) )
    v11 = *(const char **)(v10 + 16);
  sub_32190(*(_QWORD *)(a1 + 16), (unsigned int)"Build ID '%s' of '%s'\n", (_DWORD)a2, (_DWORD)v11, a5, a6);
  return 0;
}


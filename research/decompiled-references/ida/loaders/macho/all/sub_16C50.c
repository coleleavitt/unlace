__int64 __fastcall sub_16C50(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  v2 = (const char *)qbasename();
  v3 = v2;
  if ( v2 && (v4 = strlen(v2), (v5 = v4) != 0) )
  {
    v7 = *(void **)a2;
    v8 = v4 + 1;
    if ( *(_QWORD *)(a2 + 16) < v4 + 1 )
    {
      v9 = qvector_reserve();
      *(_QWORD *)a2 = v9;
      v7 = (void *)v9;
    }
    *(_QWORD *)(a2 + 8) = v8;
    memmove(v7, v3, v5);
    *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
    return 1;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
    return 1;
  }
}


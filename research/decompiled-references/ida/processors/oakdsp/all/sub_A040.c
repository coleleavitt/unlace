__int64 __fastcall sub_A040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax
  const char *v5; // rbx
  size_t v6; // rax
  size_t v7; // r12
  unsigned __int64 v9; // r13
  void *v10; // rdi
  __int64 v11; // rax

  v4 = (const char *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 8) + 32LL))(
                       *(_QWORD *)(a1 + 8),
                       a3,
                       a4);
  if ( v4 )
  {
    v5 = v4;
    if ( v4 == (const char *)-1LL )
    {
      v9 = 27;
      v5 = "SKIP device (logic error):";
      v7 = 26;
    }
    else
    {
      v6 = strlen(v4);
      v7 = v6;
      if ( !v6 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        return 0;
      }
      v9 = v6 + 1;
    }
    v10 = *(void **)a2;
    if ( *(_QWORD *)(a2 + 16) < v9 )
    {
      v11 = qvector_reserve();
      *(_QWORD *)a2 = v11;
      v10 = (void *)v11;
    }
    *(_QWORD *)(a2 + 8) = v9;
    memmove(v10, v5, v7);
    *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
    return 0;
  }
  return 1;
}


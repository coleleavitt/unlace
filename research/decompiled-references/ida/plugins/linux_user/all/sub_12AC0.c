__int64 __fastcall sub_12AC0(__int64 a1, __int64 a2, const void *a3)
{
  __int64 v5; // r12
  size_t v6; // rax
  size_t v7; // rbp
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax

  if ( a2 != 14 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16);
  if ( a3 && (v6 = strlen((const char *)a3), (v7 = v6) != 0) )
  {
    v8 = *(void **)v5;
    v9 = v6 + 1;
    if ( *(_QWORD *)(v5 + 16) < v6 + 1 )
    {
      v10 = qvector_reserve();
      *(_QWORD *)v5 = v10;
      v8 = (void *)v10;
    }
    *(_QWORD *)(v5 + 8) = v9;
    memmove(v8, a3, v7);
    *(_BYTE *)(*(_QWORD *)v5 + v7) = 0;
  }
  else
  {
    *(_QWORD *)(v5 + 8) = 0;
  }
  return 1;
}


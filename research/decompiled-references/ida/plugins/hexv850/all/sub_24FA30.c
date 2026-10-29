__int64 __fastcall sub_24FA30(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  int v5; // ecx
  __int64 result; // rax
  const void *v7; // r12
  size_t v8; // rax
  size_t v9; // rbp
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == 64 )
    return sub_1CDDD0(a2, *(_QWORD *)(a1 + 24), a4);
  result = 0;
  if ( v5 == 68 )
  {
    v7 = *(const void **)(a1 + 24);
    if ( v7 && (v8 = strlen(*(const char **)(a1 + 24)), (v9 = v8) != 0) )
    {
      v10 = (void *)*a2;
      v11 = v8 + 1;
      if ( a2[2] < v8 + 1 )
      {
        v12 = qvector_reserve();
        *a2 = v12;
        v10 = (void *)v12;
      }
      a2[1] = v11;
      memmove(v10, v7, v9);
      *(_BYTE *)(*a2 + v9) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    return 1;
  }
  return result;
}


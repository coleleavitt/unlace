__int64 __fastcall sub_267A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  const void *v5; // r12
  size_t v6; // rax
  size_t v7; // rbx
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax

  result = 10;
  if ( *(_BYTE *)a1 )
  {
    result = sub_266F0(a1, a2, 18);
    if ( !(_DWORD)result )
    {
      if ( a3 )
      {
        v5 = *(const void **)(a1 + 72);
        if ( v5 && (v6 = strlen(*(const char **)(a1 + 72)), (v7 = v6) != 0) )
        {
          v8 = *(void **)a3;
          v9 = v6 + 1;
          if ( *(_QWORD *)(a3 + 16) < v6 + 1 )
          {
            v10 = qvector_reserve();
            *(_QWORD *)a3 = v10;
            v8 = (void *)v10;
          }
          *(_QWORD *)(a3 + 8) = v9;
          memmove(v8, v5, v7);
          *(_BYTE *)(*(_QWORD *)a3 + v7) = 0;
          return 0;
        }
        else
        {
          *(_QWORD *)(a3 + 8) = 0;
          return 0;
        }
      }
    }
  }
  return result;
}


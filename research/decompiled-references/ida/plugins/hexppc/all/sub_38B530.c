__int64 __fastcall sub_38B530(__int64 a1, _QWORD *a2, const char *a3)
{
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r12
  __int64 v8; // rdx
  void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rax

  if ( !a2 )
    return 0;
  result = 0;
  if ( a3 )
  {
    v6 = strlen(a3);
    v7 = v6;
    if ( v6 )
    {
      v9 = (void *)a2[7];
      v10 = v6 + 1;
      if ( a2[9] < v6 + 1 )
      {
        v11 = qvector_reserve();
        a2[7] = v11;
        v9 = (void *)v11;
      }
      a2[8] = v10;
      memmove(v9, a3, v7);
      *(_BYTE *)(a2[7] + v7) = 0;
    }
    else
    {
      a2[8] = 0;
    }
    sub_2B5F80(*(_QWORD *)(a1 + 24));
    sub_339EC0(*(_QWORD *)(a1 + 128), 0x71u, a1, a2, a3);
    sub_38B4A0(a1, 0, v8);
    return 1;
  }
  return result;
}


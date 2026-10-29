__int64 __fastcall sub_38F6B0(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r12
  void *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax

  if ( !a2 )
    return 0;
  result = 0;
  if ( a3 )
  {
    v6 = strlen(a3);
    v7 = v6;
    if ( v6 )
    {
      v8 = (void *)a2[7];
      v9 = v6 + 1;
      if ( a2[9] < v6 + 1 )
      {
        v10 = qvector_reserve((__int64)(a2 + 7), a2[7], v9, 1);
        a2[7] = v10;
        v8 = (void *)v10;
      }
      a2[8] = v9;
      memmove(v8, a3, v7);
      *(_BYTE *)(a2[7] + v7) = 0;
    }
    else
    {
      a2[8] = 0;
    }
    sub_2B9C00(*(_QWORD *)(a1 + 24));
    sub_33E140(*(_QWORD *)(a1 + 128), 0x71u, a1, a2, a3);
    sub_38F620(a1, 0);
    return 1;
  }
  return result;
}


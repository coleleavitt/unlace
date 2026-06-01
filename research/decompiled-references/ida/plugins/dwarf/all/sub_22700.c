__int64 __fastcall sub_22700(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  const char *v5; // rdi
  unsigned __int64 v7; // rbp
  const char *v8; // r13
  void *v9; // rdi
  __int64 v10; // rax

  if ( *(_BYTE *)(a2 + 29) )
  {
    if ( a1 && (__int64 *)a2 != a1 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 > 1 )
      {
        v8 = *(const char **)a2;
        v9 = (void *)*a1;
        if ( a1[2] < v7 )
        {
          v10 = qvector_reserve(a1, v9, v7, 1);
          *a1 = v10;
          v9 = (void *)v10;
        }
        a1[1] = v7;
        memmove(v9, v8, v7 - 1);
        *(_BYTE *)(*a1 + v7 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 0;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)(v4 - 10) <= 1 || v4 == 18 )
    {
      return sub_1F5D0(a1, a2, a3);
    }
    else
    {
      v5 = src;
      if ( *(_QWORD *)(a2 + 8) )
        v5 = *(const char **)a2;
      return sub_21FF0(
               v5,
               a2 + 5160,
               (__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64))sub_14E80,
               (__int64)a1);
    }
  }
}


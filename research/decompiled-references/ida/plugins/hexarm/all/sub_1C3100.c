__int64 __fastcall sub_1C3100(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  _DWORD *v7; // rcx
  int *v8; // rax
  int v9; // edx

  result = a1[1];
  v2 = (unsigned int)(result - 1);
  if ( (int)result - 1 > 0 )
  {
    v3 = result - 2;
    v4 = 24 * (v2 - v3);
    v5 = 24 * v2;
    v6 = 24 * ((int)v3 - v2);
    while ( 1 )
    {
      v7 = (_DWORD *)(*a1 + v5);
      v8 = (int *)(v6 + v5 + *a1);
      v9 = *v8;
      if ( *v8 + v8[4] == v7[4] && v9 + v8[5] == v7[5] )
      {
        *v8 = *v7 + v9;
        memmove((void *)(v5 + *a1), (const void *)(v5 + *a1 + 24), 24LL * a1[1]-- - 24 - v5);
        result = v5 - 24;
        if ( v5 == v4 )
          return result;
      }
      else
      {
        result = v5 - 24;
        if ( v5 == v4 )
          return result;
      }
      v5 = result;
    }
  }
  return result;
}


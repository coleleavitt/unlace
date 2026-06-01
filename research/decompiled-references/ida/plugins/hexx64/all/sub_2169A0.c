__int64 __fastcall sub_2169A0(_QWORD *a1, int **a2, double a3)
{
  int *v3; // rbp
  __int64 result; // rax
  int *v5; // r12
  unsigned __int64 v6; // rax
  int *v7; // r13
  int *v8; // rbx

  v3 = *a2;
  result = (__int64)a2[1];
  v5 = &(*a2)[result];
  if ( v5 != *a2 )
  {
    do
    {
      v6 = *v3;
      if ( a1[55] < v6 )
      {
        if ( !under_debugger )
          sub_383060(0xC85Eu, a3);
        BUG();
      }
      v7 = (int *)a1[157];
      v8 = (int *)(a1[54] + 104 * v6);
      result = 96LL * a1[158];
      if ( result )
      {
        while ( 1 )
        {
          result = sub_3307E0(v7, v8);
          if ( !(_DWORD)result )
            break;
          v7 += 24;
          result = a1[157] + 96LL * a1[158];
          if ( v7 == (int *)result )
            goto LABEL_9;
        }
        if ( v7 )
          v7[22] |= 1u;
      }
LABEL_9:
      ++v3;
    }
    while ( v5 != v3 );
  }
  return result;
}


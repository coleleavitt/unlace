__int64 __fastcall sub_211DA0(_QWORD *a1, int **a2)
{
  int *v2; // rbp
  __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbx

  v2 = *a2;
  result = (__int64)a2[1];
  v4 = (__int64)&(*a2)[result];
  if ( (int *)v4 != *a2 )
  {
    do
    {
      v5 = *v2;
      if ( a1[55] < v5 )
      {
        if ( !under_debugger )
          sub_37DDE0(51294);
        BUG();
      }
      v6 = a1[157];
      v7 = a1[54] + 104 * v5;
      result = 96LL * a1[158];
      if ( result )
      {
        while ( 1 )
        {
          result = sub_32B410(v6, v7);
          if ( !(_DWORD)result )
            break;
          v6 += 96;
          result = a1[157] + 96LL * a1[158];
          if ( v6 == result )
            goto LABEL_9;
        }
        if ( v6 )
          *(_DWORD *)(v6 + 88) |= 1u;
      }
LABEL_9:
      ++v2;
    }
    while ( (int *)v4 != v2 );
  }
  return result;
}


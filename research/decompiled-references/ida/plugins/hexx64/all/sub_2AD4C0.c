bool __fastcall sub_2AD4C0(int *a1, int a2, double a3)
{
  int v3; // eax
  unsigned int v4; // edx
  bool result; // al
  int **v6; // rax
  int *v7; // rbx
  __int64 v8; // r12
  int *v9; // rdi
  int v10; // eax

  v3 = *a1;
  if ( *a1 == 3 )
  {
    v10 = a1[2];
    if ( v10 >= a2 )
    {
      *a1 = 1;
      *((_QWORD *)a1 + 1) = v10 - a2;
    }
    return 1;
  }
  if ( v3 <= 3 )
  {
    if ( v3 == 2 )
    {
      v6 = *((int ***)a1 + 1);
      v7 = *v6;
      v8 = (__int64)&(*v6)[6 * (_QWORD)v6[1]];
      if ( (int *)v8 != *v6 )
      {
        do
        {
          v9 = v7;
          v7 += 6;
          sub_2AD4C0(v9, a2);
        }
        while ( (int *)v8 != v7 );
      }
    }
    return 1;
  }
  if ( v3 != 4 )
  {
    if ( (unsigned int)(v3 - 5) <= 1 )
    {
      if ( !under_debugger )
        sub_383060(0xC7A5u, a3);
      BUG();
    }
    return 1;
  }
  v4 = a1[2];
  result = 0;
  if ( a2 > (unsigned __int16)v4 )
    return a2 > (int)HIWORD(v4);
  return result;
}


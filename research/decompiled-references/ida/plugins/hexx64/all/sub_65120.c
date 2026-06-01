int *__fastcall sub_65120(int **a1, int a2, int a3)
{
  int v3; // r11d
  int v4; // r10d
  int v5; // ebx
  int *v6; // r8
  int *v7; // r9
  int *result; // rax
  int v9; // ecx

  if ( a2 >= a3 )
  {
    v3 = a2;
    v4 = a3;
    v5 = 1;
  }
  else
  {
    v3 = a3;
    v4 = a2;
    v5 = -1;
  }
  v6 = a1[1];
  v7 = *a1;
  result = *a1;
  if ( 4LL * (_QWORD)v6 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *result;
        if ( a2 != *result )
          break;
        *result = a3;
        v7 = *a1;
        ++result;
        v6 = a1[1];
        if ( result == &(*a1)[(_QWORD)v6] )
          return result;
      }
      if ( v4 <= v9 && v3 >= v9 )
      {
        *result = v5 + v9;
        v7 = *a1;
        v6 = a1[1];
      }
      ++result;
    }
    while ( result != &v7[(_QWORD)v6] );
  }
  return result;
}


void __fastcall sub_218E40(int *src, int *a2, _QWORD *a3, double a4)
{
  int *i; // rbx
  char v6; // al
  int v7; // ebp
  int *j; // r15
  int v9; // edx
  int *v10; // r13

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      while ( 1 )
      {
        v6 = sub_215AC0(a3, *i, *src, a4);
        v7 = *i;
        if ( v6 )
          break;
        for ( j = i; ; j[1] = *j )
        {
          v9 = *(j - 1);
          v10 = j--;
          if ( !sub_215AC0(a3, v7, v9, a4) )
            break;
        }
        *v10 = v7;
        if ( a2 == ++i )
          return;
      }
      if ( (char *)i - (char *)src <= 4 )
      {
        if ( (char *)i - (char *)src == 4 )
          *i = *src;
      }
      else
      {
        memmove(src + 1, src, (char *)i - (char *)src);
      }
      *src = v7;
    }
  }
}


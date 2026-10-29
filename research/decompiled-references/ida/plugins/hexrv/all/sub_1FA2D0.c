void __fastcall sub_1FA2D0(char *src, char *a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  char *i; // rbx
  char v5; // al
  __int64 v6; // rbp
  char *j; // r15
  __int64 v8; // rsi
  char *v9; // r13

  if ( src != a2 )
  {
    for ( i = src + 8; a2 != i; i += 8 )
    {
      while ( 1 )
      {
        v5 = a3(*(_QWORD *)i, *(_QWORD *)src);
        v6 = *(_QWORD *)i;
        if ( v5 )
          break;
        for ( j = i; ; *((_QWORD *)j + 1) = *(_QWORD *)j )
        {
          v8 = *((_QWORD *)j - 1);
          v9 = j;
          j -= 8;
          if ( !(unsigned __int8)a3(v6, v8) )
            break;
        }
        *(_QWORD *)v9 = v6;
        i += 8;
        if ( a2 == i )
          return;
      }
      if ( i - src <= 8 )
      {
        if ( i - src == 8 )
          *(_QWORD *)i = *(_QWORD *)src;
      }
      else
      {
        memmove(src + 8, src, i - src);
      }
      *(_QWORD *)src = v6;
    }
  }
}


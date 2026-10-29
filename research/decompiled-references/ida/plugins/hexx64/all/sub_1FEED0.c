void __fastcall sub_1FEED0(char *src, char *a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 *v3; // rbx
  char v5; // al
  __int64 v6; // rbp
  __int64 *i; // r15
  __int64 v8; // rsi
  __int64 *v9; // r13

  if ( src != a2 )
  {
    v3 = (__int64 *)(src + 8);
    if ( a2 != src + 8 )
    {
      do
      {
        while ( 1 )
        {
          v5 = a3(*v3, *(_QWORD *)src);
          v6 = *v3;
          if ( v5 )
            break;
          for ( i = v3; ; i[1] = *i )
          {
            v8 = *(i - 1);
            v9 = i--;
            if ( !(unsigned __int8)a3(v6, v8) )
              break;
          }
          *v9 = v6;
          if ( a2 == (char *)++v3 )
            return;
        }
        if ( (char *)v3 - src <= 8 )
        {
          if ( (char *)v3 - src == 8 )
            *v3 = *(_QWORD *)src;
        }
        else
        {
          memmove(src + 8, src, (char *)v3 - src);
        }
        *(_QWORD *)src = v6;
        ++v3;
      }
      while ( a2 != (char *)v3 );
    }
  }
}


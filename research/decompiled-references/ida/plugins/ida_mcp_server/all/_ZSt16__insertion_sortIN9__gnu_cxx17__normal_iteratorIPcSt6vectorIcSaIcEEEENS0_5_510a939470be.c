void __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        char *src,
        char *a2)
{
  char *i; // rbp
  char *v4; // rdi
  char v5; // bl
  char v6; // dl
  char *v7; // rax
  char *v8; // rcx

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; *src = v5 )
    {
      while ( 1 )
      {
        v5 = *i;
        if ( *i < *src )
          break;
        v6 = *(i - 1);
        if ( v5 >= v6 )
        {
          *i = v5;
        }
        else
        {
          v7 = i - 1;
          do
          {
            v7[1] = v6;
            v8 = v7;
            v6 = *--v7;
          }
          while ( v5 < v6 );
          *v8 = v5;
        }
        if ( a2 == ++i )
          return;
      }
      v4 = src + 1;
      if ( i - src <= 1 )
      {
        if ( i - src == 1 )
          *v4 = *src;
      }
      else
      {
        memmove(v4, src, i - src);
      }
      ++i;
    }
  }
}


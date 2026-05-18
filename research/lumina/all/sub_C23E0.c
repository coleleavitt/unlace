void __fastcall sub_C23E0(char *a1)
{
  __int64 v1; // rax
  char v2; // r9
  int v3; // edx
  int i; // ecx
  unsigned __int8 v5; // si
  char *v6; // rax

  if ( a1 )
  {
    v1 = (unsigned __int8)*a1;
    v2 = *a1;
    if ( byte_1BEF00[v1] < 0 )
    {
      v3 = 1;
      if ( (_BYTE)v1 == 91 )
        v2 = 93;
      for ( i = 0; ; ++i )
      {
        v5 = a1[v3];
        v6 = &a1[i];
        if ( v5 == v2 )
        {
          if ( v2 != a1[v3 + 1] )
          {
            *v6 = 0;
            return;
          }
          *v6 = v2;
          ++v3;
        }
        else
        {
          *v6 = v5;
        }
        ++v3;
      }
    }
  }
}

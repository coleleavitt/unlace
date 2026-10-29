void __fastcall sub_CECD0(char *a1, int a2, char *a3)
{
  int v3; // r12d
  __int64 v4; // r14
  char *v5; // rbx
  unsigned __int8 *v6; // rbp

  if ( a2 )
  {
    v3 = (int)a3;
    v4 = (__int64)&a3[a2 - 1 + 1];
    v5 = a3;
    do
    {
      v6 = (unsigned __int8 *)sub_C4360(a1, (int)v5 - v3);
      if ( (unsigned __int8)sub_C68F0(v6, *v5) == 65 || *v5 == 65 || (unsigned int)sub_CEC30((char *)v6, *v5) )
        *v5 = 65;
      ++v5;
    }
    while ( v5 != (char *)v4 );
  }
}

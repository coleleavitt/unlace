__int64 __fastcall sub_E4400(__int64 *a1, unsigned int **a2, int *a3, const char *a4)
{
  int v7; // edx
  unsigned int *v8; // r15
  _DWORD *v9; // rbx
  int i; // r13d
  signed int v11; // eax

  if ( !a3 || *(_BYTE *)(*a1 + 103) || *((_BYTE *)a1 + 292) > 1u )
    return 0;
  v7 = *a3;
  if ( v7 > *(_DWORD *)(*a1 + 144) )
  {
    sub_DBD10((__int64)a1, "too many terms in %s BY clause", a4);
    return 1;
  }
  v8 = *a2;
  v9 = a3 + 2;
  if ( v7 > 0 )
  {
    for ( i = 0; i < *a3; ++i )
    {
      v11 = *((unsigned __int16 *)v9 + 10);
      if ( (_WORD)v11 )
      {
        if ( v11 > (int)*v8 )
        {
          sub_E43A0((__int64)a1, (__int64)a4, (unsigned int)(i + 1), *v8, 0);
          return 1;
        }
        sub_DF0A0(a1, (__int64)v8, v11 - 1, *(_QWORD *)v9, 0);
      }
      v9 += 6;
    }
  }
  return 0;
}

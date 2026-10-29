__int64 __fastcall sub_1F0400(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 i; // rbx

  v3 = a1[1];
  v4 = *a1;
  if ( 104 * v3 )
  {
    for ( i = *a1; i != v4 + 104 * v3; i += 104 )
    {
      if ( *(_QWORD *)(i + 16) == *(_QWORD *)(a2 + 16) )
      {
        if ( sub_1C51E0(i, a2, a3) )
          return i;
        v4 = *a1;
        v3 = a1[1];
      }
    }
  }
  return 0;
}


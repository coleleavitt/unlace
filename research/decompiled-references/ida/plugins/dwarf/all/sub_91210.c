void __fastcall sub_91210(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v5; // r13
  __int64 i; // rbp

  if ( a4 + 1 == *(_DWORD *)(a1 + 24) )
  {
    v5 = a3[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        if ( (unsigned int)sub_90E60(a1, (int *)(*a3 + 8 * i)) )
        {
          if ( !*(_DWORD *)(a1 + 28) )
            *(_DWORD *)(a1 + 28) = 1;
        }
      }
    }
  }
}


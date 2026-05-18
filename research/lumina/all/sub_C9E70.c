void __fastcall sub_C9E70(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 v5; // rdi

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v3 = (__int64 *)(a1 + 16);
      v4 = (__int64 *)(a1 + 512);
      do
      {
        v5 = *v3++;
        sub_C9E70(v5);
      }
      while ( v3 != v4 );
    }
    sub_C91C0(a1, a2);
  }
}

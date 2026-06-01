void __fastcall sub_5CE40(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rsi

  v1 = *(_QWORD *)(a1 + 5456);
  if ( v1 )
  {
    v2 = v1 + 32LL * *(_QWORD *)(v1 - 8);
    if ( v1 == v2 )
    {
      v4 = 0;
    }
    else
    {
      do
      {
        v3 = v2;
        v2 -= 32;
        clear_tinfo_t();
      }
      while ( *(_QWORD *)(a1 + 5456) != v2 );
      v4 = 32LL * *(_QWORD *)(v3 - 40);
    }
    operator delete[]((void *)(v2 - 8), v4 + 8);
  }
  *(_QWORD *)(a1 + 5456) = 0;
  *(_QWORD *)(a1 + 5464) = 0;
}

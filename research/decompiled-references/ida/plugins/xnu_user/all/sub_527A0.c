__int64 __fastcall sub_527A0(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rax

  if ( a2 )
  {
    *a2 = 0;
    if ( !*(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) && sub_525A0(a1, a3, a5, a6, a7, a8) != -1 )
    {
      v10 = getseg();
      if ( v10 )
      {
        if ( !*(_BYTE *)(v10 + 43) )
          *a2 = (unsigned int)(16 * a4);
      }
    }
    return 1;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_52830(30049);
  }
}


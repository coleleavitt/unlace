__int64 __fastcall sub_1D5AE0(__int64 a1, int a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r12

  v3 = *(_DWORD *)(a1 + 64);
  if ( a2 >= (int)v3 )
    return 0;
  v4 = a2;
  do
  {
    if ( v4 >= v3 )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, a3);
      BUG();
    }
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v4);
    if ( !(unsigned __int8)sub_1D55D0(v5, a3) )
    {
      *(_QWORD *)(a1 + 488) = *(_QWORD *)(v5 + 32);
      return 4294967292LL;
    }
    v3 = *(_DWORD *)(a1 + 64);
    ++v4;
  }
  while ( (int)v3 > (int)v4 );
  return 0;
}


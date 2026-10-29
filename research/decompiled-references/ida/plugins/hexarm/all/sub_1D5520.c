__int64 __fastcall sub_1D5520(__int64 a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r12

  v2 = *(_DWORD *)(a1 + 64);
  if ( a2 >= (int)v2 )
    return 0;
  v3 = a2;
  do
  {
    if ( v3 >= v2 )
    {
      if ( !under_debugger )
        sub_3835A0(52719);
      BUG();
    }
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v3);
    if ( !(unsigned __int8)sub_1D5010(v4) )
    {
      *(_QWORD *)(a1 + 488) = *(_QWORD *)(v4 + 32);
      return 4294967292LL;
    }
    v2 = *(_DWORD *)(a1 + 64);
    ++v3;
  }
  while ( (int)v2 > (int)v3 );
  return 0;
}


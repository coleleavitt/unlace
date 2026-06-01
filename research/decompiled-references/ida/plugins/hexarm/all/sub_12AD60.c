__int64 __fastcall sub_12AD60(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( *(_DWORD *)(a1 + 4) < a4 )
  {
    if ( !under_debugger )
      sub_3835A0(52599);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 4) != a4
    && (*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_11B5D0((unsigned __int8 *)a1)
     || !(unsigned __int8)sub_12A590(a1, a2, a4, 1)) )
  {
    sub_120220((char *)a1, a2, 10, a3, a4);
  }
  return 1;
}


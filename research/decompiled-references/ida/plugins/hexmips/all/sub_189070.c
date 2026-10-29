__int64 __fastcall sub_189070(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[185] )
  {
    if ( !under_debugger )
      sub_37E160(52822);
    BUG();
  }
  return *(_QWORD *)(*(_QWORD *)(a1[187] + 24LL) + 16LL) & (*(_QWORD *)(a1[184] + 40 * a2 + 24) + a1[180]);
}


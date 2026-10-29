__int64 __fastcall sub_26860(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi

  if ( !*(_BYTE *)a1 )
    return 10;
  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_265B0();
    qflush();
  }
  if ( !(unsigned __int8)sub_41260(*(_QWORD *)(a1 + 8), "blist\n") )
    return 12;
  *(_DWORD *)(a1 + 48) = 9;
  qsem_post();
  qsem_wait();
  v3 = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 48) = 0;
  return sub_2B0C0(a1 + 16, v3, a2);
}


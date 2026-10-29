__int64 __fastcall sub_27110(__int64 a1)
{
  __int64 v1; // rsi

  if ( !*(_BYTE *)a1 )
    return 10;
  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_265B0();
    qflush();
  }
  if ( !(unsigned __int8)sub_41260(*(_QWORD *)(a1 + 8), "info tab\n") )
    return 12;
  *(_DWORD *)(a1 + 48) = 17;
  qsem_post();
  qsem_wait();
  v1 = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 48) = 0;
  return sub_2B940(a1 + 16, v1, a1 + 80, 0);
}


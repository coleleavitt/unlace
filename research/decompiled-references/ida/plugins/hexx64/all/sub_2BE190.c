__int64 __fastcall sub_2BE190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdx
  __int64 v7; // rsi

  if ( *(_QWORD *)a2 )
  {
    v6 = sub_1F04A0((__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 432LL), a4, a5);
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    if ( v6 )
      sub_2604A0(a1, (_QWORD *)v7, v6, 1, a5);
    else
      sub_1AFBD0(a1, *(_DWORD **)(v7 + 1504), a4);
  }
  else
  {
    sub_2BDE70(a1, a3, a4);
  }
  return a1;
}


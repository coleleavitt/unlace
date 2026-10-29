__int64 __fastcall sub_2B9910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rsi

  if ( *(_QWORD *)a2 )
  {
    v5 = sub_1EBC20((__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 432LL), a4);
    v6 = *(_QWORD **)(*(_QWORD *)a2 + 8LL);
    if ( v5 )
      sub_25BC20(a1, v6, v5, 1);
    else
      sub_1AB890(a1, v6[188], a4);
  }
  else
  {
    sub_2B95F0(a1, a3, a4);
  }
  return a1;
}


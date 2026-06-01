__int64 __fastcall sub_2BA510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rsi

  if ( *(_QWORD *)a2 )
  {
    v5 = sub_1EC820((__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 432LL), a4);
    v6 = *(_QWORD **)(*(_QWORD *)a2 + 8LL);
    if ( v5 )
      sub_25C820(a1, v6, v5, 1);
    else
      sub_1AC190(a1, v6[188], a4);
  }
  else
  {
    sub_2BA1F0(a1, a3, a4);
  }
  return a1;
}


__int64 __fastcall sub_1B6370(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx

  v3 = a3;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == -1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a2[187] + 24LL) + 16LL);
  sub_330F80(a2, v3);
  sub_6B870((__int64 *)a1);
  return a1;
}


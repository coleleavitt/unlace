__int64 __fastcall sub_186FE0(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi

  result = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 112) + a2;
  *(_QWORD *)(a1 + 112) = v3;
  if ( v3 >= *(_QWORD *)(result + 8) )
    sub_2F260((__int64)"interr: bad idc move_ip");
  return result;
}

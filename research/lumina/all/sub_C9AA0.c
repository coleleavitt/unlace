void __fastcall sub_C9AA0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi

  if ( *(_DWORD *)(a2 + 32) )
  {
    v3 = *(_QWORD **)(a2 + 40);
    if ( v3 )
      sub_C9250(a1, v3);
  }
  sub_C9250(a1, (_QWORD *)a2);
}

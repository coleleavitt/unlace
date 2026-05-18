void __fastcall sub_D0050(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi

  v3 = *(_QWORD **)(a2 + 8);
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( v3 )
      sub_C9250(*(_QWORD *)a2, v3);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  }
}

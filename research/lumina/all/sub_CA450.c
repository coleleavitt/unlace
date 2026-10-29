__int64 __fastcall sub_CA450(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // r11

  if ( !a2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  v2 = sub_CA320(a1, a2);
  if ( v2 < 0 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL * v2 + 8);
}

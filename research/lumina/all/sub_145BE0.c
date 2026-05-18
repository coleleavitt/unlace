__int64 __fastcall sub_145BE0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rbx

  v3 = sub_144470(a1, 0, a2 + 8, a3);
  sub_D8230(*a1, *(_QWORD **)(a2 + 40));
  *(_QWORD *)(a2 + 40) = v3;
  if ( !v3 )
    return 0;
  ++*(_DWORD *)(v3 + 44);
  if ( (*(_BYTE *)(a2 + 69) & 2) != 0 && (unsigned int)sub_E4310((__int64)a1, (_QWORD *)(a2 + 8)) )
    return 0;
  else
    return v3;
}

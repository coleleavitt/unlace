__int64 __fastcall sub_BAB70(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbp
  int v4; // eax

  v3 = *a1;
  v4 = sub_141DB0(*(_QWORD *)(*a1 + 24));
  LOBYTE(v2) = v4 == 101;
  if ( a2 && v4 != 101 )
    sub_BAA10(a2, *(_QWORD *)(v3 + 16));
  return v2;
}

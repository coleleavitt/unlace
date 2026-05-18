bool __fastcall sub_BABB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v3 = sub_141DB0(*(_QWORD *)(v2 + 24));
  if ( (unsigned int)(v3 - 100) <= 1 || !a2 )
    return v3 == 100;
  sub_BAA10(a2, *(_QWORD *)(v2 + 16));
  return v3 == 100;
}

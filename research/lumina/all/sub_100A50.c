__int64 __fastcall sub_100A50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax

  if ( (unsigned int)sub_FEBD0(a1, (__int64)a2) )
    return 7;
  v2 = sub_D1E10(40, (__int64)a2);
  if ( !v2 )
    return 7;
  *(_QWORD *)v2 = a1;
  *(_OWORD *)(v2 + 8) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *a2 = v2;
  return 0;
}

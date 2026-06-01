__int64 __fastcall sub_3EB110(__int64 a1, unsigned __int8 **a2, double a3)
{
  unsigned int v3; // ebx

  v3 = sub_7EF80(a1, (__int64)a2, a3);
  if ( (_BYTE)v3 )
  {
    sub_7EF00(a1 + 360, a2, a3);
    *(_BYTE *)(a1 + 392) = (unsigned __int8)sub_7CD00(a2, a3) != 0;
  }
  return v3;
}


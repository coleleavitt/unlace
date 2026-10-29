__int64 __fastcall sub_3EAB70(__int64 a1, unsigned __int8 **a2)
{
  unsigned int v2; // r12d

  v2 = sub_7E9C0(a1, (__int64)a2);
  if ( (_BYTE)v2 )
  {
    sub_7E940(a1 + 360, a2);
    *(_QWORD *)(a1 + 392) = sub_7C900(a2);
    *(_BYTE *)(a1 + 400) = (unsigned __int8)sub_7C740(a2) != 0;
  }
  return v2;
}


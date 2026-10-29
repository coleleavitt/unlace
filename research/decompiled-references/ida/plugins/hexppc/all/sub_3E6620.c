__int64 __fastcall sub_3E6620(__int64 a1, unsigned __int8 **a2)
{
  unsigned int v2; // ebx

  v2 = sub_7B540(a1, (__int64)a2);
  if ( (_BYTE)v2 )
  {
    sub_7B4C0(a1 + 368, a2);
    *(_BYTE *)(a1 + 400) = (unsigned __int8)sub_792C0(a2) != 0;
  }
  return v2;
}


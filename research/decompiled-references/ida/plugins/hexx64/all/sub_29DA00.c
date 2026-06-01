__int64 __fastcall sub_29DA00(__int64 **a1, __int64 a2, int a3, int a4, int a5, double a6)
{
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // r8d
  bool v13; // al

  v9 = *(_QWORD *)(a2 + 1504);
  LOBYTE(v10) = sub_29B010(v9, a4, 0, a3);
  v11 = v10;
  if ( !(_BYTE)v10 && !a5 )
  {
    v13 = sub_29B010(v9, a4, -1, a3);
    v11 = 0;
    if ( v13 )
      LOBYTE(v11) = (int)sub_29BCC0(a1, a2, a4, 0, a6) > 0;
  }
  return v11;
}


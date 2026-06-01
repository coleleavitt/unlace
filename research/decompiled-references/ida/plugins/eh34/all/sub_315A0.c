__int64 __fastcall sub_315A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // al
  unsigned int v6; // edx

  v4 = sub_31370();
  v5 = netnode_charval(v4, a2, 323);
  v6 = 0;
  if ( v5 )
  {
    v6 = 1;
    *(_BYTE *)(a3 + 1) = v5 - 1;
  }
  return v6;
}


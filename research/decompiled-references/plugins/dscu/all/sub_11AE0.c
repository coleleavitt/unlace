__int64 __fastcall sub_11AE0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a4 )
  {
    v5 = operator new(0x38u);
    sub_119C0(v5, a1, a2, a3, v6, v7);
  }
  else
  {
    v5 = operator new(0x38u);
    sub_8D00(v5, a1, a2, a3, v9, v10);
  }
  return v5;
}

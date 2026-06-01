void __fastcall sub_315E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax

  if ( !a5 )
  {
    v6 = ea2node(a2);
    v7 = ea2node(a3);
    v8 = sub_31370();
    netnode_altshift(v8, v6, v7, a4, 67);
  }
}

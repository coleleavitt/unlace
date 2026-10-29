void __fastcall sub_1E970(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13

  if ( !a4 )
  {
    v5 = sub_1DD10();
    v6 = ea2node(a1);
    v7 = ea2node(a2);
    netnode_altshift(v5, v6, v7, a3, 97);
    netnode_altshift(v5, v6, v7, a3, 98);
    netnode_charshift(v5, v6, v7, a3, 99);
    netnode_charshift(v5, v6, v7, a3, 100);
    netnode_blobshift(v5, v6, v7, a3, 101);
    netnode_altshift(v5, v6, v7, a3, 102);
    netnode_altshift(v5, v6, v7, a3, 103);
    netnode_altshift(v5, v6, v7, a3, 104);
  }
}


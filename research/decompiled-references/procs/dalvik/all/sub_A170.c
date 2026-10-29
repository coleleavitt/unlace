unsigned __int64 sub_A170()
{
  __int64 i; // rbp
  __int64 j; // rbp
  __int64 k; // rbp
  __int64 m; // r14
  __int64 n; // rbp
  __int64 ii; // r15
  __int64 jj; // rbp
  __int64 kk; // r15
  __int64 v9; // rax
  __int64 mm; // r15
  __int64 v11; // rax
  __int64 nn; // r15
  __int64 v13; // rax
  __int64 i1; // rbp
  __int64 i2; // r15
  int v16; // [rsp+1Ch] [rbp-57Ch] BYREF
  __int64 v17; // [rsp+20h] [rbp-578h] BYREF
  __int64 v18; // [rsp+28h] [rbp-570h] BYREF
  __int64 v19; // [rsp+30h] [rbp-568h] BYREF
  __int64 v20; // [rsp+38h] [rbp-560h] BYREF
  __int64 v21; // [rsp+40h] [rbp-558h] BYREF
  __int128 v22; // [rsp+48h] [rbp-550h]
  __int64 v23; // [rsp+60h] [rbp-538h] BYREF
  __int128 v24; // [rsp+68h] [rbp-530h]
  _BYTE v25[208]; // [rsp+80h] [rbp-518h] BYREF
  char v26; // [rsp+150h] [rbp-448h] BYREF
  __int64 v27; // [rsp+151h] [rbp-447h]
  unsigned __int64 v28; // [rsp+558h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  netnode_check(&v17, "$ dex_meta", 0, 0);
  if ( netnode_hashval(v17, "version", &v16, 4, 72) == 4 && v16 == 7 )
  {
    netnode_check(&v18, "$ dex_cmn", 0, 1);
    netnode_check(&v19, "$ dex_var", 0, 1);
    netnode_check(&v20, "$ dex_strtab", 0, 0);
    for ( i = netnode_supfirst(v20, 2); i != -1; i = netnode_supnext(v20, i, 2) )
    {
      LODWORD(v23) = netnode_altval(v20, i, 2);
      netnode_supset(v18, i, &v23, 4, 339);
    }
    for ( j = netnode_supfirst(v20, 1); j != -1; j = netnode_supnext(v20, j, 1) )
    {
      v23 = netnode_altval(v20, j, 1);
      netnode_supset(v19, j, &v23, 8, 595);
    }
    netnode_kill(&v20);
    netnode_check(&v23, "$ dex_methtab", 0, 0);
    v20 = v23;
    for ( k = netnode_supfirst(v23, 2); k != -1; k = netnode_supnext(v20, k, 2) )
    {
      LODWORD(v23) = netnode_altval(v20, k, 2);
      netnode_supset(v18, k, &v23, 4, 333);
    }
    for ( m = netnode_supfirst(v20, 3); m != -1; m = netnode_supnext(v20, m, 3) )
    {
      memset(v25, 0, 0xC8u);
      if ( (unsigned __int64)netnode_supval(v20, m, v25, 200, 3) > 0xC7 )
        netnode_supset(v19, m, v25, 200, 77);
    }
    sub_9CD0(v19, 0x4Eu, v20, 4u);
    sub_9CD0(v19, 0x4Fu, v20, 5u);
    netnode_kill(&v20);
    netnode_check(&v23, "$ dex_types", 0, 0);
    v20 = v23;
    for ( n = netnode_supfirst(v23, 1); n != -1; n = netnode_supnext(v20, n, 1) )
    {
      LODWORD(v23) = netnode_altval(v20, n, 1);
      netnode_supset(v19, n, &v23, 4, 84);
    }
    sub_9CD0(v19, 0x55u, v20, 2u);
    sub_9CD0(v19, 0x56u, v20, 3u);
    netnode_kill(&v20);
    netnode_check(&v23, "$ dex_fields", 0, 0);
    v20 = v23;
    for ( ii = netnode_supfirst(v23, 2); ii != -1; ii = netnode_supnext(v20, ii, 2) )
    {
      if ( netnode_supval(v20, ii, &v26, 1024, 2) == 9 && !v26 )
      {
        v23 = v27;
        netnode_kill(&v23);
      }
    }
    netnode_supdel_all(v20, 2);
    for ( jj = netnode_supfirst(v20, 1); jj != -1; jj = netnode_supnext(v20, jj, 1) )
    {
      if ( (unsigned __int64)netnode_supval(v20, jj, &v23, 24, 1) > 0x17 )
        netnode_supset(v19, jj, &v23, 24, 70);
    }
    netnode_kill(&v20);
    netnode_check(&v23, "$ dex_tries", 0, 0);
    v20 = v23;
    for ( kk = netnode_supfirst(v23, 3); kk != -1; kk = netnode_supnext(v20, kk, 3) )
    {
      v9 = netnode_supval(v20, kk, &v26, 1024, 3);
      if ( v9 > 0 )
        netnode_supset(v19, kk, &v26, v9, 89);
    }
    for ( mm = netnode_supfirst(v20, 4); mm != -1; mm = netnode_supnext(v20, mm, 4) )
    {
      v11 = netnode_supval(v20, mm, &v26, 1024, 4);
      if ( v11 > 3 )
        netnode_supset(v18, mm, &v26, v11, 325);
    }
    for ( nn = netnode_supfirst(v20, 5); nn != -1; nn = netnode_supnext(v20, nn, 5) )
    {
      v13 = netnode_supval(v20, nn, &v26, 1024, 5);
      if ( v13 > 3 )
        netnode_supset(v18, nn, &v26, v13, 345);
    }
    netnode_kill(&v20);
    netnode_check(&v23, "$ dex_debinfo", 0, 0);
    v20 = v23;
    for ( i1 = netnode_supfirst(v23, 1); i1 != -1; i1 = netnode_supnext(v20, i1, 1) )
    {
      if ( (unsigned __int64)netnode_supval(v20, i1, &v23, 16, 1) > 0xF )
        netnode_supset(v18, i1, &v23, 16, 324);
    }
    for ( i2 = netnode_supfirst(v20, 83); i2 != -1; i2 = netnode_supnext(v20, i2, 83) )
    {
      if ( netnode_supstr(v20, i2, &v26, 1024, 83) > 0 )
        netnode_supset(v18, i2, &v26, 0, 322);
    }
    netnode_kill(&v20);
    v22 = 0;
    v21 = 0;
    v21 = qvector_reserve(&v21, 0, 1, 8);
    *(_QWORD *)(v21 + 8 * v22) = 0;
    *(_QWORD *)&v22 = v22 + 1;
    v23 = 0;
    v24 = 0;
    sub_9EF0(&v23, 0, &v21);
    netnode_setblob(v17, v23, v24, 0, 1);
    v16 = 8;
    netnode_hashset(v17, "version", &v16, 4, 72);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, "version");
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, "version");
    }
  }
  return v28 - __readfsqword(0x28u);
}

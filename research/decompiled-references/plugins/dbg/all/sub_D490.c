__int64 __fastcall sub_D490(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r15d
  int v23; // r13d
  __int64 plugin; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  const char *v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+6h] [rbp-47Ah]
  char v39; // [rsp+7h] [rbp-479h]
  __int16 v40; // [rsp+Ah] [rbp-476h] BYREF
  int v41; // [rsp+Ch] [rbp-474h] BYREF
  __int64 v42; // [rsp+10h] [rbp-470h] BYREF
  __int128 v43; // [rsp+18h] [rbp-468h] BYREF
  __int64 v44; // [rsp+28h] [rbp-458h]
  char v45[1032]; // [rsp+38h] [rbp-448h] BYREF
  unsigned __int64 v46; // [rsp+440h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v44 = 0;
  v43 = 0;
  netnode_check(&v42, "$ dbg_params", 0, 0);
  v9 = 0;
  if ( netnode_supval(v42, 0, &v43, 24, 83) != 24 )
  {
    if ( under_debugger )
      goto LABEL_37;
    interr(30463, 0, v10, v11, v12, v13);
LABEL_35:
    if ( !under_debugger )
      interr(30464, v9, v32, v33, v34, v35);
LABEL_37:
    BUG();
  }
  v14 = v43;
  v38 = 0;
  v39 = v44;
  if ( (_QWORD)v43 )
    goto LABEL_3;
  v9 = 1;
  if ( netnode_supstr(v42, 1, v45, 1024, 83) <= 0 )
    goto LABEL_35;
  v38 = 1;
  v14 = open_linput(v45, 0);
  if ( !v14 )
  {
    if ( v39 )
    {
      v36 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_5800((__int64)"%s: %s\n", v45, v36);
    }
    return 1;
  }
LABEL_3:
  v15 = qlsize(v14);
  v20 = getinf(5, 0, v16, v17, v18, v19);
  v22 = v20;
  v23 = v20;
  if ( v20 != 18 )
  {
    if ( v20 <= 18 )
    {
      if ( (unsigned int)(v20 - 10) <= 1 )
      {
        plugin = find_plugin("dwarf", 1);
        run_plugin(plugin, 1);
        if ( v22 == 10 )
        {
          *(_QWORD *)&v43 = v14;
          netnode_supset(v42, 0, &v43, 24, 83);
          v37 = find_plugin("pdb", 1);
          run_plugin(v37, 4);
        }
      }
      goto LABEL_8;
    }
    if ( v20 != 25 )
    {
LABEL_8:
      v41 = 0;
      v25 = 0;
      do
      {
        qlseek(v14, v25, 0, v21);
        lread(v14, &v40, 2);
        switch ( v40 )
        {
          case 18756:
            sub_C5A0((__int64)a1, v14, v41, v26, (__m128)0LL, a3, a4, a5, v28, v29, a8, a9);
            goto LABEL_21;
          case 17744:
            sub_CDF0(a1, v14, v41, v26, 0.0, a3, a4, a5, v28, v29, a8, a9);
            goto LABEL_21;
          case 17742:
            sub_C730((__int64)a1, v14, (__m128)0LL, a3, a4, a5, v28, v29, a8, a9, v27, v26);
            goto LABEL_21;
        }
        if ( v23 != 11
          && (unsigned __int8)sub_C730((__int64)a1, v14, (__m128)0LL, a3, a4, a5, v28, v29, a8, a9, v27, v26) )
        {
          goto LABEL_21;
        }
        if ( v41 )
          break;
        qlseek(v14, 60, 0, v26);
        if ( qlread(v14, &v41, 4) != 4 )
          break;
        v25 = v41;
        if ( !v41 )
          break;
      }
      while ( v15 - 2 >= (unsigned __int64)v41 );
      if ( !v39 )
        goto LABEL_22;
      sub_5800((__int64)"Cannot find debug info signature\n");
      if ( v38 )
        goto LABEL_26;
      return 1;
    }
  }
  v30 = find_plugin("dwarf", 1);
  run_plugin(v30, 1);
LABEL_21:
  netnode_supdel(v42, 0, 83);
LABEL_22:
  if ( v38 )
LABEL_26:
    close_linput(v14);
  return 1;
}

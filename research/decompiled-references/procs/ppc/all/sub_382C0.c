__int64 __fastcall sub_382C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  char v11; // r13
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // r15d
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v28; // [rsp+18h] [rbp-100h]
  char v29; // [rsp+27h] [rbp-F1h] BYREF
  __int64 v30; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-E0h]
  __int64 v33; // [rsp+40h] [rbp-D8h]
  __int128 v34; // [rsp+48h] [rbp-D0h]
  __int64 v35; // [rsp+58h] [rbp-C0h]
  __int128 v36; // [rsp+60h] [rbp-B8h]
  __int64 v37; // [rsp+70h] [rbp-A8h]
  __int128 v38; // [rsp+78h] [rbp-A0h]
  __int64 v39; // [rsp+88h] [rbp-90h]
  __int128 v40; // [rsp+90h] [rbp-88h]
  __int64 v41; // [rsp+A0h] [rbp-78h]
  __int128 v42; // [rsp+A8h] [rbp-70h]
  char v43; // [rsp+B8h] [rbp-60h]
  __int64 v44; // [rsp+C0h] [rbp-58h]
  char v45; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 120);
  v46 = __readfsqword(0x28u);
  v11 = netnode_charval(v9, v8, 324);
  if ( v11 )
    netnode_supdel(*(_QWORD *)(a1 + 120), *(_QWORD *)(a2 + 16), 324);
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 24) - 10) > 1u )
    return 0;
  v12 = *(_QWORD **)a3;
  v13 = *(_QWORD *)(a3 + 8);
  if ( v13 != 1 )
  {
    v14 = v12 + 3;
    v15 = 3 * v13;
    v16 = &v12[v15];
    if ( v15 != 3 )
    {
      while ( **(_QWORD **)a3 == *v14 )
      {
        v14 += 3;
        if ( v14 == v16 )
          goto LABEL_11;
      }
      return 0;
    }
  }
LABEL_11:
  v19 = a3;
  v20 = sub_34AD0(a2, a4, nullptr);
  v22 = v21 ^ v20;
  v31 = a1;
  v23 = v21 | v20;
  v33 = 0;
  if ( (a5 & 0xF) == 5 )
    v23 = v22;
  v35 = 0;
  v37 = 0;
  v32 = v23;
  v39 = 0;
  v41 = 0;
  v43 = 1;
  v44 = 0;
  v45 = 1;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v17 = sub_5D2E0(&v31, a3, a2, a4, 6);
  if ( !(_BYTE)v17 )
    goto LABEL_16;
  v28 = use_mapping(v23);
  if ( !(unsigned __int8)is_mapped(v28) )
    goto LABEL_15;
  if ( (unsigned int)sub_318F0(v28, v11) == 2 )
  {
    sub_5D950(&v31, 0);
    insn_add_dref(a2, v32, (unsigned int)*(char *)(a4 + 2), 1);
    v19 = *(_QWORD *)(a2 + 16);
    netnode_supdel(*(_QWORD *)(a1 + 120), v19, 321);
    goto LABEL_16;
  }
  if ( v11 == 2 || *(__int16 *)(a1 + 472) >= 0 )
  {
LABEL_15:
    v19 = *(_QWORD *)(a2 + 16);
    v25 = *(_QWORD *)(a1 + 120);
    v30 = v23;
    netnode_supset(v25, v19, &v30, 8, 833);
  }
  else
  {
    v19 = *(_QWORD *)(a2 + 16);
    v26 = *(_QWORD *)(a1 + 120);
    v29 = 1;
    netnode_supset(v26, v19, &v29, 1, 324);
  }
LABEL_16:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41, v19, v24, 0.0);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v19, v24, 0.0);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v19, v24, 0.0);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v19, v24, 0.0);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, v19, v24, 0.0);
  }
  return v17;
}

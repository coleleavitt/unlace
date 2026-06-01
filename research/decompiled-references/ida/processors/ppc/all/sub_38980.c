__int64 __fastcall sub_38980(__int64 a1, __int64 a2, __int64 **a3, unsigned __int8 *a4, __int16 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  char v10; // r13
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdx
  unsigned int v17; // r15d
  __int64 **v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v25; // [rsp+10h] [rbp-118h]
  char v26; // [rsp+1Dh] [rbp-10Bh]
  __int64 v27; // [rsp+20h] [rbp-108h]
  char v28; // [rsp+37h] [rbp-F1h] BYREF
  __int64 v29; // [rsp+38h] [rbp-F0h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-D8h]
  __int128 v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+68h] [rbp-C0h]
  __int128 v34; // [rsp+70h] [rbp-B8h]
  __int64 v35; // [rsp+80h] [rbp-A8h]
  __int128 v36; // [rsp+88h] [rbp-A0h]
  __int64 v37; // [rsp+98h] [rbp-90h]
  __int128 v38; // [rsp+A0h] [rbp-88h]
  __int64 v39; // [rsp+B0h] [rbp-78h]
  __int128 v40; // [rsp+B8h] [rbp-70h]
  char v41; // [rsp+C8h] [rbp-60h]
  __int64 v42; // [rsp+D0h] [rbp-58h]
  char v43; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 120);
  v26 = HIBYTE(a5);
  v44 = __readfsqword(0x28u);
  v10 = netnode_charval(v9, v8, 324);
  if ( v10 )
    netnode_supdel(*(_QWORD *)(a1 + 120), *(_QWORD *)(a2 + 16), 324);
  if ( (unsigned __int8)(*((_BYTE *)a3 + 24) - 10) > 1u )
    return 0;
  v11 = *a3;
  v12 = a3[1];
  v13 = **a3;
  if ( v12 != (__int64 *)((char *)&dword_0 + 1) )
  {
    v14 = v11 + 3;
    v15 = 3LL * (_QWORD)v12;
    v16 = &v11[v15];
    if ( v15 != 3 )
    {
      while ( *v14 == v13 )
      {
        v14 += 3;
        if ( v14 == v16 )
          goto LABEL_11;
      }
      return 0;
    }
  }
LABEL_11:
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v13 + sub_34AD0(a2, (__int64)a4, nullptr));
  v25 = use_mapping(v27);
  if ( v25 <= 0x20 )
    return 0;
  v19 = a3;
  v30[0] = a1;
  v30[1] = v27;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 1;
  v42 = 0;
  v43 = 1;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v17 = sub_5D2E0(v30, a3, a2, a4, 6);
  if ( (_BYTE)v17 )
  {
    if ( (unsigned __int8)is_mapped(v25) )
    {
      if ( (unsigned int)sub_318F0(v25, v10) == 2 )
      {
LABEL_29:
        sub_5D950(v30, 0);
LABEL_30:
        insn_add_dref(a2, v25, (unsigned int)(char)a4[2], 1);
        v19 = *(__int64 ***)(a2 + 16);
        netnode_supdel(*(_QWORD *)(a1 + 120), v19, 321);
        goto LABEL_31;
      }
      if ( v10 != 2 && *(__int16 *)(a1 + 472) < 0 )
      {
LABEL_35:
        v19 = *(__int64 ***)(a2 + 16);
        v21 = *(_QWORD *)(a1 + 120);
        v28 = 1;
        netnode_supset(v21, v19, &v28, 1, 324);
        goto LABEL_31;
      }
    }
    if ( (*(_BYTE *)(a1 + 472) & 1) == 0 || !(unsigned __int8)is_mapped(v25) )
    {
      v19 = *(__int64 ***)(a2 + 16);
      v23 = *(_QWORD *)(a1 + 120);
      v29 = v27;
      netnode_supset(v23, v19, &v29, 8, 833);
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  if ( (v26 & 8) != 0 )
    goto LABEL_16;
  if ( !*((_QWORD *)a4 + 1) )
    goto LABEL_16;
  if ( (unsigned __int8)sub_5C800(a3) )
    goto LABEL_16;
  v22 = use_mapping(v13);
  if ( (unsigned __int8)is_spec_ea(v22) )
    goto LABEL_16;
  if ( (unsigned __int8)is_mapped(v25) )
  {
    v19 = (__int64 **)(unsigned int)v10;
    if ( (unsigned int)sub_318F0(v25, v10) != 2 )
    {
      if ( v10 == 2 || *(__int16 *)(a1 + 472) >= 0 )
        goto LABEL_31;
      goto LABEL_35;
    }
    sub_5DA70(a2, *a4, *((_QWORD *)a4 + 1), a3);
    goto LABEL_30;
  }
LABEL_31:
  v17 = 1;
LABEL_16:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v19, v20, 0.0);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v19, v20, 0.0);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v19, v20, 0.0);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, v19, v20, 0.0);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, v19, v20, 0.0);
  }
  return v17;
}


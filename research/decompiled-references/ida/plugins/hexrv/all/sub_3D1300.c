_QWORD *__fastcall sub_3D1300(_QWORD *a1, int a2, int a3, int a4)
{
  int v4; // r15d
  _QWORD *v5; // rbx
  int v6; // eax
  char *v7; // rax
  int v8; // edx
  _QWORD **v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rdi
  bool v13; // zf
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+0h] [rbp-C8h]
  __int64 v21; // [rsp+0h] [rbp-C8h]
  __int64 v22; // [rsp+0h] [rbp-C8h]
  __int64 v23; // [rsp+0h] [rbp-C8h]
  __int64 v24; // [rsp+0h] [rbp-C8h]
  __int64 v25; // [rsp+0h] [rbp-C8h]
  __int64 v26; // [rsp+0h] [rbp-C8h]
  __int64 v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+0h] [rbp-C8h]
  __int64 v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+0h] [rbp-C8h]
  __int64 v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+0h] [rbp-C8h]
  __int64 v35; // [rsp+0h] [rbp-C8h]
  __int64 v36; // [rsp+0h] [rbp-C8h]
  __int64 v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+0h] [rbp-C8h]
  __int64 v40; // [rsp+0h] [rbp-C8h]
  __int64 v41; // [rsp+0h] [rbp-C8h]
  __int64 v42; // [rsp+0h] [rbp-C8h]
  __int64 v43; // [rsp+0h] [rbp-C8h]
  __int64 v44; // [rsp+0h] [rbp-C8h]
  __int64 v45; // [rsp+8h] [rbp-C0h]
  __int64 v46; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+8h] [rbp-C0h]
  __int64 v48; // [rsp+8h] [rbp-C0h]
  __int64 v49; // [rsp+8h] [rbp-C0h]
  __int64 v50; // [rsp+8h] [rbp-C0h]
  __int64 v51; // [rsp+8h] [rbp-C0h]
  __int64 v52; // [rsp+8h] [rbp-C0h]
  __int64 v53; // [rsp+8h] [rbp-C0h]
  __int64 v54; // [rsp+8h] [rbp-C0h]
  __int64 v55; // [rsp+8h] [rbp-C0h]
  __int64 v56; // [rsp+8h] [rbp-C0h]
  __int64 v57; // [rsp+8h] [rbp-C0h]
  __int64 v58; // [rsp+8h] [rbp-C0h]
  __int64 v59; // [rsp+8h] [rbp-C0h]
  __int64 v60; // [rsp+8h] [rbp-C0h]
  __int64 v61; // [rsp+8h] [rbp-C0h]
  __int64 v62; // [rsp+8h] [rbp-C0h]
  __int64 v63; // [rsp+8h] [rbp-C0h]
  __int64 v64; // [rsp+8h] [rbp-C0h]
  __int64 v65; // [rsp+8h] [rbp-C0h]
  __int64 v66; // [rsp+8h] [rbp-C0h]
  __int64 v67; // [rsp+8h] [rbp-C0h]
  __int64 v68; // [rsp+8h] [rbp-C0h]
  __int64 v69; // [rsp+8h] [rbp-C0h]
  __int128 v71; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+20h] [rbp-A8h]
  __int64 v73; // [rsp+28h] [rbp-A0h]
  int v74; // [rsp+30h] [rbp-98h]
  _QWORD v75[5]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v76; // [rsp+68h] [rbp-60h]
  __int128 v77; // [rsp+78h] [rbp-50h]
  unsigned __int64 v78; // [rsp+88h] [rbp-40h]

  v4 = a4;
  v78 = __readfsqword(0x28u);
  if ( !a4 )
    v4 = dword_4C0944++;
  netnode_check();
  v75[0] = (unsigned int)dword_4C0944;
  netnode_supset();
  v5 = (_QWORD *)operator new(0x60u);
  v6 = sub_3CE100(a1, a3);
  sub_3D04E0((__int64)v5, (__int64)a1, v6, v4);
  v7 = (char *)&unk_40B200;
  while ( 1 )
  {
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 >= a2 )
      break;
    v7 += 4;
    if ( "$ mbui.view_id" == v7 )
    {
      v8 = 1;
      break;
    }
  }
  *((_DWORD *)v5 + 14) = v8;
  v9 = (_QWORD **)(a1[261] + 8LL * *((unsigned int *)v5 + 2));
  v10 = *v9;
  *v9 = v5;
  if ( v10 )
  {
    v11 = v10[10];
    *v10 = 0;
    v10[11] = 0;
    if ( v11 )
      qfree();
    v12 = (volatile signed __int32 *)v10[9];
    if ( v12 )
      sub_3D0460(v12);
    if ( v10[2] )
    {
      v10[3] = 0;
      qfree();
    }
    operator delete(v10, 0x60u);
  }
  v13 = v5[3] == 0;
  *(_QWORD *)((char *)&v75[1] + 4) = 3;
  v75[0] = off_4BBAD0;
  v14 = s1;
  *(_QWORD *)((char *)&v75[3] + 4) = 0x4900000000LL;
  v76 = -1;
  v77 = -1;
  *(_QWORD *)((char *)&v75[2] + 4) = 0;
  v72 = 0;
  v73 = 0xFFFFFFFFLL;
  v74 = 1;
  v71 = 0;
  if ( !v13 )
    v14 = (const char *)v5[2];
  v15 = callui(148, v14, v75, v75, v75, &v71, v5, &unk_4BC060, v5, 0);
  *v5 = v15;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(77, v15, 7, v16, v17, v18);
  callui(131, *v5, 0, "mv:LowerMicro", 0, 0, v20, v45, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:RaiseMicro", 0, 0, v21, v46, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:HighestMicro", 0, 0, v22, v47, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:JmpXref", 0, 0, v23, v48, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:JmpXrefFrom", 0, 0, v24, v49, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, 0, 0, 0, v25, v50, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:EditBlockCmt", 0, 0, v26, v51, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:EditCmt", 0, 0, v27, v52, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, 0, 0, 0, v28, v53, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:InsertInsn", 0, 0, v29, v54, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:DeleteInsn", 0, 0, v30, v55, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, 0, 0, 0, v31, v56, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:StructuralAna", 0, 0, v32, v57, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:DisplayChains", 0, 0, v33, v58, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:DisplayVdTypes", 0, 0, v34, v59, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:DisplayMCGraph", 0, 0, v35, v60, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:DisplayCTree", 0, 0, v36, v61, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, 0, 0, 0, v37, v62, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:ToggleViewShort", 0, 0, v38, v63, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:ToggleDisplayNumorig", 0, 0, v39, v64, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:ToggleDisplayValnums", 0, 0, v40, v65, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:ToggleDisplayEA", 0, 0, v41, v66, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, 0, 0, 0, v42, v67, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "mv:Refresh", 0, 0, v43, v68, v71, *((_QWORD *)&v71 + 1));
  callui(131, *v5, 0, "MoveFunctionToFolder", 0, 0, v44, v69, v71, *((_QWORD *)&v71 + 1));
  return v5;
}


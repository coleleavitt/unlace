unsigned __int64 __fastcall sub_59770(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // r13
  __int64 v11; // r12
  __int64 idati; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // eax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  signed __int32 v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // [rsp+8h] [rbp-50h] BYREF
  const char *v35; // [rsp+10h] [rbp-48h] BYREF
  __int128 v36; // [rsp+18h] [rbp-40h]
  unsigned __int64 v37; // [rsp+28h] [rbp-30h]

  v3 = *a1;
  v4 = *(_QWORD *)(a2 + 128);
  v37 = __readfsqword(0x28u);
  if ( v3 && v3 != v4 )
  {
    if ( !under_debugger )
      interr(30612);
    BUG();
  }
  *a1 = v4;
  v5 = **(__int64 ***)(a2 + 136);
  v36 = 0;
  v35 = nullptr;
  (*(void (__fastcall **)(__int64 *, const char **))(*v5 + 24))(v5, &v35);
  v10 = src;
  if ( (_QWORD)v36 )
    v10 = v35;
  v11 = a1[1];
  idati = get_idati(v5, &v35, v6, v7, v8, v9);
  v13 = *a1;
  if ( v11 == idati )
  {
    v15 = sub_1CBE0(v13);
  }
  else
  {
    v14 = sub_1C690(v13);
    v15 = netnode_hashval_long(v14, v10, 72);
    if ( !v15 )
    {
      v34 = -1;
      netnode_check(&v34, 0, 0, 1);
      v15 = v34;
    }
  }
  sub_1CE00(*a1, v5, v15);
  a1[2] = v15;
  LOBYTE(v16) = sub_58CD0((__int64)a1, a2 + 224, a2 + 232, (__int64)v10);
  v20 = v16;
  v21 = debug & 0x400000;
  if ( (_BYTE)v20 )
  {
    if ( v21 )
      sub_88B80(
        (unsigned int)"Found offset biases for \"%s\": %llu, %llu\n",
        (_DWORD)v10,
        *(_QWORD *)(a2 + 224),
        *(_QWORD *)(a2 + 232),
        v18,
        v19);
  }
  else
  {
    if ( v21 )
      sub_88B80((unsigned int)"No offset biases for \"%s\" found. Creating new\n", (_DWORD)v10, v20, v17, v18, v19);
    *(_QWORD *)(a2 + 224) = netnode_altval(a1[2], 2, 83);
    v22 = netnode_altval(a1[2], 3, 83);
    *(_QWORD *)(a2 + 232) = v22;
    sub_59660((__int64)a1, (__int64)v10, *(_QWORD *)(a2 + 224), v22, v23, v24);
    v25 = sub_836D0(*(_QWORD *)(a2 + 136));
    if ( v25 )
      sub_59570((__int64)a1, 1, *(_QWORD *)(a2 + 224) + *(unsigned int *)(v25 + 8), v26, v27, v28);
    v29 = sub_83700(*(_QWORD *)(a2 + 136));
    if ( v29 )
      sub_59570((__int64)a1, 0, *(_QWORD *)(a2 + 232) + *(unsigned int *)(v29 + 8), v30, v31, v32);
  }
  sub_58B20(a1);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return v37 - __readfsqword(0x28u);
}


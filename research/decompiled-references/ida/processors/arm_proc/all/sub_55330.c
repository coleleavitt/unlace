unsigned __int64 __fastcall sub_55330(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  int v4; // r13d
  _BYTE *v5; // rsi
  int v6; // r13d
  _BYTE *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r13d
  _BYTE *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r13d
  _BYTE *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r13d
  _BYTE *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // r13d
  _BYTE *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // r13d
  _BYTE *v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // r13d
  _BYTE *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // r13d
  _BYTE *v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  const char *v38; // rsi
  const char *v39; // rsi
  __int64 v40; // rax
  char v41; // r13
  _BYTE *v42; // rsi
  int v43; // r13d
  _BYTE *v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  char v47; // bl
  _BYTE *v48; // rsi
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  int v51; // eax
  _BYTE *v52; // rdi
  _BYTE *v54; // [rsp+0h] [rbp-48h] BYREF
  __int128 v55; // [rsp+8h] [rbp-40h]
  unsigned __int64 v56; // [rsp+18h] [rbp-30h]

  v56 = __readfsqword(0x28u);
  v55 = 0;
  v54 = (_BYTE *)qvector_reserve();
  *v54 = 6;
  *(_QWORD *)&v55 = v55 + 1;
  sub_550D0((__int64 *)&v54);
  v3 = v55;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = v54;
  if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
  {
    v54 = (_BYTE *)qvector_reserve();
    v5 = v54;
    v3 = v55;
  }
  v5[v3] = v4;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = v54;
  v8 = v55 + 1;
  v9 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v9 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v7 = v54;
    v8 = v55;
  }
  v7[v8] = v6;
  v10 = *(_DWORD *)(a1 + 12);
  v11 = v54;
  v12 = v55 + 1;
  v13 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v13 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v11 = v54;
    v12 = v55;
  }
  v11[v12] = v10;
  v14 = *(_DWORD *)(a1 + 20);
  v15 = v54;
  v16 = v55 + 1;
  v17 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v17 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v15 = v54;
    v16 = v55;
  }
  v15[v16] = v14;
  v18 = *(_DWORD *)(a1 + 24);
  v19 = v54;
  v20 = v55 + 1;
  v21 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v21 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v19 = v54;
    v20 = v55;
  }
  v19[v20] = v18;
  v22 = *(_DWORD *)(a1 + 28);
  v23 = v54;
  v24 = v55 + 1;
  v25 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v25 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v23 = v54;
    v24 = v55;
  }
  v23[v24] = v22;
  v26 = *(_DWORD *)(a1 + 32);
  v27 = v54;
  v28 = v55 + 1;
  v29 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v29 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v27 = v54;
    v28 = v55;
  }
  v27[v28] = v26;
  v30 = *(_DWORD *)(a1 + 36);
  v31 = v54;
  v32 = v55 + 1;
  v33 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v33 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v31 = v54;
    v32 = v55;
  }
  v31[v32] = v30;
  v34 = *(_DWORD *)(a1 + 40);
  v35 = v54;
  v36 = v55 + 1;
  v37 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v37 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v35 = v54;
    v36 = v55;
  }
  v35[v36] = v34;
  v38 = &s1;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *(_QWORD *)(a1 + 56) )
    v38 = *(const char **)(a1 + 48);
  sub_551E0((__int64 *)&v54, v38);
  v39 = &s1;
  if ( *(_QWORD *)(a1 + 80) )
    v39 = *(const char **)(a1 + 72);
  sub_551E0((__int64 *)&v54, v39);
  v40 = v55;
  v41 = *(_BYTE *)(a1 + 96);
  v42 = v54;
  if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
  {
    v54 = (_BYTE *)qvector_reserve();
    v42 = v54;
    v40 = v55;
  }
  v42[v40] = v41;
  v43 = *(_DWORD *)(a1 + 16);
  v44 = v54;
  v45 = v55 + 1;
  v46 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v46 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v44 = v54;
    v45 = v55;
  }
  v44[v45] = v43;
  v47 = *(_BYTE *)(a1 + 97);
  v48 = v54;
  v49 = v55 + 1;
  v50 = v55 + 2;
  *(_QWORD *)&v55 = v55 + 1;
  if ( *((_QWORD *)&v55 + 1) < v50 )
  {
    v54 = (_BYTE *)qvector_reserve();
    v48 = v54;
    v49 = v55;
  }
  v48[v49] = v47;
  *(_QWORD *)&v55 = v55 + 1;
  netnode_setblob();
  v51 = 16;
  if ( !a2[51] && !a2[52] )
    v51 = 8;
  v52 = v54;
  a2[128] = v51;
  if ( v52 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  return v56 - __readfsqword(0x28u);
}


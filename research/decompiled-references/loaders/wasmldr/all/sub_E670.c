unsigned __int64 __fastcall sub_E670(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int *v5; // rbx
  unsigned int *v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int *v12; // rbx
  unsigned int *v13; // r13
  __int64 v14; // rcx
  unsigned int *v15; // rsi
  unsigned int *v16; // rbx
  unsigned int *v17; // r13
  __int64 v18; // rcx
  unsigned int *v19; // rsi
  unsigned int *v20; // rbx
  unsigned int *v21; // r13
  __int64 v22; // rcx
  unsigned int *v23; // rsi
  __int64 v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v3 = *a2;
  v28 = __readfsqword(0x28u);
  v26 = 6386541;
  if ( !(unsigned __int8)netnode_supset(v3, 0, &v26, 8, 83) )
    sub_3940((__int64)"couldn't write magic number to node");
  v5 = *(unsigned int **)(a1 + 72);
  v6 = &v5[4 * *(_QWORD *)(a1 + 80)];
  if ( v5 != v6 )
  {
    while ( 1 )
    {
      netnode_setblob(*a2, v5, 16, *v5, 358);
      v8 = v5[3];
      if ( v8 >= *(_QWORD *)(a1 + 56) )
        goto LABEL_6;
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v8);
      v10 = v9[1];
      if ( v10 )
      {
        netnode_setblob(*a2, *v9, 8 * v10, *v5, 368);
        v7 = v9[4];
        if ( v7 )
          goto LABEL_10;
LABEL_6:
        v5 += 4;
        if ( v6 == v5 )
          break;
      }
      else
      {
        v7 = v9[4];
        if ( !v7 )
          goto LABEL_6;
LABEL_10:
        v11 = *v5;
        v5 += 4;
        netnode_setblob(*a2, v9[3], 8 * v7, v11, 370);
        if ( v6 == v5 )
          break;
      }
    }
  }
  v12 = *(unsigned int **)(a1 + 96);
  v13 = &v12[24 * *(_QWORD *)(a1 + 104)];
  while ( v13 != v12 )
  {
    v14 = *v12;
    v15 = v12;
    v12 += 24;
    netnode_setblob(*a2, v15, 96, v14, 103);
  }
  v16 = *(unsigned int **)(a1 + 120);
  v17 = &v16[*(_QWORD *)(a1 + 128)];
  while ( v17 != v16 )
  {
    v18 = *v16;
    v19 = v16++;
    netnode_setblob(*a2, v19, 4, v18, 105);
  }
  v20 = *(unsigned int **)(a1 + 144);
  v21 = &v20[6 * *(_QWORD *)(a1 + 152)];
  while ( v21 != v20 )
  {
    v22 = *v20;
    v23 = v20;
    v20 += 6;
    netnode_setblob(*a2, v23, 24, v22, 101);
  }
  if ( *(_DWORD *)(a1 + 192) )
  {
    v25 = *a2;
    v27 = *(unsigned int *)(a1 + 192);
    netnode_supset(v25, 0, &v27, 8, 115);
  }
  return v28 - __readfsqword(0x28u);
}

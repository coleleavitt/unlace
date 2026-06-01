__int64 __fastcall sub_12FE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _WORD **v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _WORD *v8; // rbp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned int v11; // r13d
  __int64 v13; // rsi
  __int64 v14; // rax
  _WORD *v15; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v3 = sub_12E80(1, 0);
  v4 = &v15;
  v16 = 0;
  v15 = nullptr;
  v5 = netnode_qgetblob(v3, &v15, 1, a2, 83);
  v8 = v15;
  if ( v5 <= 1 )
  {
    v11 = 0;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)(a1 + 16);
  *(_WORD *)a1 = *v15;
  v9 = v16 - 2;
  v10 = (unsigned __int64)(v16 - 2) >> 1;
  if ( v7 < v10 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) < v10 )
    {
      v14 = qvector_reserve(a1 + 8, v13, (unsigned __int64)(v16 - 2) >> 1, 2);
      *(_QWORD *)(a1 + 8) = v14;
      v7 = *(_QWORD *)(a1 + 16);
      v13 = v14;
    }
    memset((void *)(v13 + 2 * v7), 0, 2 * (v10 - v7));
    *(_QWORD *)(a1 + 16) = v10;
    goto LABEL_13;
  }
  if ( v10 != v7 )
    *(_QWORD *)(a1 + 16) = v10;
  v11 = 1;
  if ( v9 > 1 )
  {
LABEL_13:
    v4 = (_WORD **)(v8 + 1);
    v11 = 1;
    memcpy(*(void **)(a1 + 8), v8 + 1, v9 & 0xFFFFFFFFFFFFFFFELL);
    v8 = v15;
  }
LABEL_6:
  if ( v8 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v8, v4, v6, v7);
  }
  return v11;
}

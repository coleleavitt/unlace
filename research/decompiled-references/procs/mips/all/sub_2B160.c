unsigned __int64 __fastcall sub_2B160(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  char v7; // al
  __int64 *v8; // r14
  char v9; // bp
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // r13
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v17; // rdi
  unsigned int v18; // [rsp+0h] [rbp-A4h]
  unsigned __int64 v19; // [rsp+14h] [rbp-90h] BYREF
  __int64 v20; // [rsp+1Ch] [rbp-88h] BYREF
  __int128 v21; // [rsp+24h] [rbp-80h]
  __int64 *v22; // [rsp+3Ch] [rbp-68h] BYREF
  __int128 v23; // [rsp+44h] [rbp-60h]
  char v24; // [rsp+54h] [rbp-50h]
  unsigned __int64 v25; // [rsp+64h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v22 = nullptr;
  v24 = 0;
  v23 = 0;
  v7 = sub_488A0(a1, &v22, a2, a3);
  v8 = v22;
  v9 = v7;
  if ( !v7 || (unsigned __int8)(v24 - 10) > 1u )
  {
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
    return v25 - __readfsqword(0x28u);
  }
  v10 = 3 * v23;
  if ( (_QWORD)v23 == 1 || (v11 = v22 + 3, v10 == 3) )
  {
    v20 = 0;
    v21 = 0;
  }
  else
  {
    while ( *v22 == *v11 )
    {
      v11 += 3;
      if ( v11 == &v22[v10] )
        goto LABEL_9;
    }
    v9 = 0;
LABEL_9:
    v20 = 0;
    v12 = v22;
    v21 = 0;
    if ( !(v10 * 8) )
      goto LABEL_19;
  }
  v18 = a4 == 0 ? 19 : 17;
  do
  {
    v13 = sub_2A800(a1, *v8);
    v14 = (__int64 *)(v20 + 8 * v21);
    if ( (__int64 *)v20 == v14 )
      goto LABEL_25;
    v15 = (__int64 *)v20;
    while ( v13 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_25;
    }
    if ( v15 == v14 )
    {
LABEL_25:
      if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
      {
        v20 = qvector_reserve(&v20, v20, v21 + 1, 8);
        v14 = (__int64 *)(v20 + 8 * v21);
      }
      *v14 = v13;
      *(_QWORD *)&v21 = v21 + 1;
      if ( sub_3B330(a1, v13 & 0xFFFFFFFFFFFFFFFELL, 0) )
      {
        if ( !v9 )
          goto LABEL_16;
        goto LABEL_29;
      }
      add_cref(a2, v13 & 0xFFFFFFFFFFFFFFFELL, v18);
      split_sreg_range(v13 & 0xFFFFFFFFFFFFFFFELL, 67, v13 & 1, 3, 1);
      if ( v9 )
      {
        auto_apply_type(a2, v13 & 0xFFFFFFFFFFFFFFFELL);
LABEL_29:
        v17 = *(_QWORD *)(a1 + 152);
        v19 = v13 & 0xFFFFFFFFFFFFFFFELL;
        netnode_supset(v17, a2, &v19, 8, 833);
      }
    }
LABEL_16:
    v12 = v22;
    v8 += 3;
  }
  while ( v8 != &v22[3 * (_QWORD)v23] );
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
    v12 = v22;
  }
LABEL_19:
  if ( v12 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v12);
  }
  return v25 - __readfsqword(0x28u);
}

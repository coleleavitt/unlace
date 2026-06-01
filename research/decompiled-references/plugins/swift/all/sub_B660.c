unsigned __int64 __fastcall sub_B660(_QWORD *a1)
{
  const char *v2; // rdx
  __int64 v3; // rax
  const char *v4; // rdx
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r13
  size_t v11; // r8
  size_t v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rsi
  size_t v15; // [rsp+10h] [rbp-68h]
  size_t v16; // [rsp+18h] [rbp-60h]
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited() )
    return v19 - __readfsqword(0x28u);
  netnode_supset(a1[13], -2, a1 + 30, 4, 83);
  v2 = s1;
  if ( a1[15] )
    v2 = (const char *)a1[14];
  reg_str_set("SwiftDemanglerPath", 0, v2);
  v3 = a1[68];
  v17 = 0;
  v18 = 0;
  if ( !v3 )
    goto LABEL_6;
  v5 = a1[67];
  v6 = v3 - 1;
  v7 = v5 + 24 * v3;
  if ( v5 == v7 )
  {
    if ( v3 == 1 )
    {
LABEL_6:
      v4 = s1;
      goto LABEL_7;
    }
LABEL_29:
    v17 = qvector_reserve(&v17, 0, v6, 1);
    v5 = a1[67];
    v6 = v18;
    v7 = v5 + 24LL * a1[68];
    if ( v5 == v7 )
      goto LABEL_30;
    goto LABEL_25;
  }
  v8 = a1[67];
  do
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      v6 = v9 + v6 - 1;
    v8 += 24;
  }
  while ( v7 != v8 );
  if ( v6 )
    goto LABEL_29;
  do
  {
LABEL_25:
    if ( v6 > 1 )
    {
      v14 = v17;
      if ( *((_QWORD *)&v18 + 1) < v6 + 1 )
      {
        v17 = qvector_reserve(&v17, v17, v6 + 1, 1);
        v14 = v17;
      }
      *(_QWORD *)&v18 = v6 + 1;
      *(_BYTE *)(v14 + v6) = 0;
      *(_BYTE *)(v17 + v6 - 1) = 59;
      v6 = v18;
    }
    v10 = *(_QWORD *)(v5 + 8);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v10 != 1 )
      {
        v12 = v10 - 1;
        if ( v6 )
        {
          --v6;
          v12 = v11 + v6;
          v10 += v6;
        }
        v13 = v17;
        if ( *((_QWORD *)&v18 + 1) < v10 )
        {
          v16 = v12;
          v15 = v11;
          v17 = qvector_reserve(&v17, v17, v10, 1);
          v12 = v16;
          v13 = v17;
          v11 = v15;
        }
        *(_QWORD *)&v18 = v10;
        *(_BYTE *)(v13 + v12) = 0;
        memcpy((void *)(v6 + v17), *(const void **)v5, v11);
        v6 = v18;
      }
    }
    v5 += 24;
  }
  while ( v7 != v5 );
LABEL_30:
  if ( !v6 )
    goto LABEL_6;
  v4 = (const char *)v17;
LABEL_7:
  netnode_supset(a1[13], -4, v4, 0, 83);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return v19 - __readfsqword(0x28u);
}

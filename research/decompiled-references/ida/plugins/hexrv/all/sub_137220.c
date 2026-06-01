_BOOL8 __fastcall sub_137220(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r12
  char v10; // al
  __int64 v11; // r15
  __int64 v12; // rbp
  bool v13; // al
  char v14; // al
  char v15; // al
  unsigned __int8 v16; // al
  char v17; // al
  __int64 v18; // [rsp+0h] [rbp-C8h]
  bool v19; // [rsp+0h] [rbp-C8h]
  unsigned __int8 v20; // [rsp+0h] [rbp-C8h]
  __int64 v21; // [rsp+10h] [rbp-B8h]
  int v22; // [rsp+1Ch] [rbp-ACh]
  __int64 v23; // [rsp+20h] [rbp-A8h]
  __int64 v24[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+60h] [rbp-68h] BYREF
  __int64 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+78h] [rbp-50h]
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v6 = a1[7];
  v32 = __readfsqword(0x28u);
  v7 = sub_136DA0(a1, v6, a3, a4, a5, a6);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( *(_DWORD *)(v7 + 76) == 6 || *(_DWORD *)(v7 + 352) != 1 || *(_BYTE *)(v6 + 48) != 2 )
    return 0;
  v10 = *(_BYTE *)(v6 + 32);
  if ( (unsigned __int8)(v10 - 5) <= 1u || v10 == 1 )
  {
    v11 = 0;
    v18 = v6 + 32;
    v23 = v6 + 48;
    v22 = (unsigned __int8)sub_136F00(v8, v6 + 48, v6 + 32);
    sub_123560((__int64)v24, (__int64)a1, v6, 1);
    goto LABEL_9;
  }
  if ( v10 != 4 )
    return 0;
  v21 = *(_QWORD *)(a1[60] + 112LL);
  sub_1201C0((__int64)v24, (__int64)a1, v6, 1u);
  v11 = *(_QWORD *)(v6 + 16);
  if ( !v11 )
  {
LABEL_46:
    sub_8F680((__int64)v24);
    return 0;
  }
  while ( 1 )
  {
    sub_123560((__int64)&v28, (__int64)a1, v11, 1);
    if ( (unsigned __int8)sub_60400(v24, &v28) || (unsigned __int8)sub_313370(&v25, &v30) )
      goto LABEL_45;
    if ( sub_1216D0((unsigned __int8 *)v11, v21, *(unsigned int **)(v6 + 40), 0) )
      break;
    sub_5FF00(v24, &v28);
    sub_311BB0(&v25, &v30);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    qfree();
    v11 = *(_QWORD *)(v11 + 16);
    if ( !v11 )
      goto LABEL_46;
  }
  v18 = v11 + 64;
  v17 = *(_BYTE *)(v11 + 64);
  if ( (unsigned __int8)(v17 - 5) > 1u && v17 != 1 || *(_DWORD *)(v11 + 68) != *(_DWORD *)(v6 + 52) )
  {
LABEL_45:
    sub_8F680((__int64)&v28);
    goto LABEL_46;
  }
  sub_8F680((__int64)&v28);
  sub_8F680((__int64)v24);
  v23 = v6 + 48;
  v22 = (unsigned __int8)sub_136F00(v8, v6 + 48, v18);
  sub_123560((__int64)v24, (__int64)a1, v6, 1);
  if ( v6 == v11 )
    v11 = 0;
LABEL_9:
  v12 = *(_QWORD *)(v6 + 16);
  if ( v11 == v12 )
    goto LABEL_14;
  while ( 1 )
  {
    v31 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    sub_123B20((__int64)a1, &v28, v18, 1u);
    if ( (unsigned __int8)sub_60400(v24, &v28) )
    {
      if ( !v30 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( (unsigned __int8)sub_313370(&v25, &v30) )
      break;
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    qfree();
    if ( *(_DWORD *)v12 != 4 )
      goto LABEL_29;
    v14 = *(_BYTE *)(v12 + 32);
    if ( ((unsigned __int8)(v14 - 5) <= 1u || v14 == 1) && sub_1216A0((unsigned __int8 *)(v12 + 64), v18, 0) )
    {
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      sub_123B20((__int64)a1, &v28, v12 + 32, 1u);
      if ( (unsigned __int8)sub_60400(v24, &v28) )
      {
        if ( v30 )
          goto LABEL_36;
      }
      else
      {
        if ( !(unsigned __int8)sub_313370(&v25, &v30) )
        {
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree();
          }
          qfree();
          v16 = sub_136F00(v8, v23, v12 + 32);
          v24[1] = 0;
          if ( v25 )
          {
            v20 = v16;
            v26 = 0;
            qfree();
            v25 = 0;
            v16 = v20;
            v27 = 0;
          }
          v22 += v16;
          v18 = v12 + 32;
          goto LABEL_32;
        }
        if ( v30 )
        {
LABEL_36:
          *(_QWORD *)&v31 = 0;
          qfree();
        }
      }
      qfree();
    }
    v15 = *(_BYTE *)(v12 + 64);
    if ( (unsigned __int8)(v15 - 5) > 1u && v15 != 1 || !sub_1216A0((unsigned __int8 *)(v12 + 32), v18, 0) )
      goto LABEL_29;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    sub_123B20((__int64)a1, &v28, v12 + 64, 1u);
    if ( !(unsigned __int8)sub_60400(v24, &v28) )
    {
      if ( !(unsigned __int8)sub_313370(&v25, &v30) )
      {
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        qfree();
        v22 += (unsigned __int8)sub_136F00(v8, v23, v12 + 64);
        goto LABEL_32;
      }
      if ( !v30 )
        goto LABEL_41;
LABEL_40:
      *(_QWORD *)&v31 = 0;
      qfree();
      goto LABEL_41;
    }
    if ( v30 )
      goto LABEL_40;
LABEL_41:
    qfree();
LABEL_29:
    sub_123560((__int64)&v28, (__int64)a1, v12, 1);
    sub_5FF00(v24, &v28);
    sub_311BB0(&v25, &v30);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    qfree();
LABEL_32:
    v12 = *(_QWORD *)(v12 + 16);
    if ( v11 == v12 )
      goto LABEL_14;
  }
  if ( v30 )
  {
LABEL_12:
    *(_QWORD *)&v31 = 0;
    qfree();
  }
LABEL_13:
  qfree();
LABEL_14:
  v13 = v22 != 0;
  if ( v25 )
  {
    v26 = 0;
    qfree();
    v13 = v22 != 0;
  }
  v19 = v13;
  qfree();
  return v19;
}


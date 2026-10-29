__int64 __fastcall sub_114C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v4; // r12
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // r13
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  _QWORD v33[2]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 *v35[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1 + 121;
  v6 = a4;
  v7 = (_QWORD *)a1[122];
  v33[0] = a4;
  v35[1] = (unsigned __int64 *)__readfsqword(0x28u);
  v34 = a4;
  if ( !v7 )
    goto LABEL_33;
  v8 = a1 + 121;
  v9 = v7;
  do
  {
    while ( 1 )
    {
      v10 = v9[2];
      v11 = v9[3];
      if ( v9[4] < v6 )
        break;
      v8 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v10 )
        goto LABEL_6;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v11 );
LABEL_6:
  if ( v4 == v8 || v6 < v8[4] )
  {
LABEL_33:
    v27 = sub_113B0((__int64)a1, v6, 1);
    v28 = v27;
    if ( v27 == -1 )
    {
      v6 = v33[0];
      goto LABEL_16;
    }
    v29 = (_QWORD *)a1[122];
    v34 = v27;
    if ( v29 )
    {
      v6 = v33[0];
      v30 = v4;
      do
      {
        while ( 1 )
        {
          v31 = v29[2];
          v32 = v29[3];
          if ( v29[4] < v33[0] )
            break;
          v30 = v29;
          v29 = (_QWORD *)v29[2];
          if ( !v31 )
            goto LABEL_40;
        }
        v29 = (_QWORD *)v29[3];
      }
      while ( v32 );
LABEL_40:
      if ( v4 != v30 && v33[0] >= v30[4] )
        goto LABEL_43;
    }
    else
    {
      v30 = v4;
    }
    v35[0] = v33;
    v30 = sub_D780(a1 + 120, v30, v35);
    v6 = v33[0];
LABEL_43:
    v30[5] = v28;
    goto LABEL_16;
  }
  v12 = v4;
  do
  {
    while ( 1 )
    {
      v13 = v7[2];
      v14 = v7[3];
      if ( v7[4] < v6 )
        break;
      v12 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !v13 )
        goto LABEL_12;
    }
    v7 = (_QWORD *)v7[3];
  }
  while ( v14 );
LABEL_12:
  if ( v4 == v12 || v6 < v12[4] )
  {
    v35[0] = v33;
    v15 = sub_D780(a1 + 120, v12, v35);
    v6 = v33[0];
    v12 = v15;
  }
  v34 = v12[5];
LABEL_16:
  v16 = (_QWORD *)a1[110];
  if ( !v16 )
  {
    v18 = a1 + 109;
LABEL_23:
    v35[0] = &v34;
    v21 = sub_D780(a1 + 108, v18, v35);
    v17 = v34;
    v18 = v21;
    goto LABEL_24;
  }
  v17 = v34;
  v18 = a1 + 109;
  do
  {
    while ( 1 )
    {
      v19 = v16[2];
      v20 = v16[3];
      if ( v16[4] < v34 )
        break;
      v18 = v16;
      v16 = (_QWORD *)v16[2];
      if ( !v19 )
        goto LABEL_21;
    }
    v16 = (_QWORD *)v16[3];
  }
  while ( v20 );
LABEL_21:
  if ( v18 == a1 + 109 || v34 < v18[4] )
    goto LABEL_23;
LABEL_24:
  v18[5] = v6;
  v22 = (_QWORD *)a1[116];
  if ( !v22 )
  {
    v23 = a1 + 115;
LABEL_31:
    v35[0] = v33;
    v23 = sub_D780(a1 + 114, v23, v35);
    goto LABEL_32;
  }
  v23 = a1 + 115;
  do
  {
    while ( 1 )
    {
      v24 = v22[2];
      v25 = v22[3];
      if ( v22[4] < v33[0] )
        break;
      v23 = v22;
      v22 = (_QWORD *)v22[2];
      if ( !v24 )
        goto LABEL_29;
    }
    v22 = (_QWORD *)v22[3];
  }
  while ( v25 );
LABEL_29:
  if ( v23 == a1 + 115 || v33[0] < v23[4] )
    goto LABEL_31;
LABEL_32:
  v23[5] = v17;
  return 1;
}


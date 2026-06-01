__int64 __fastcall sub_8F8F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // r14
  unsigned int v9; // r14d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // ebx
  char v18; // bp
  unsigned __int8 v19; // r12
  char v20; // al
  unsigned __int8 v21; // [rsp+Fh] [rbp-149h]
  __int64 v22; // [rsp+10h] [rbp-148h]
  __int64 v23[2]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+78h] [rbp-E0h]
  _QWORD v28[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-B8h]
  __int64 v30; // [rsp+A8h] [rbp-B0h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-88h]
  __int64 v33; // [rsp+D8h] [rbp-80h]
  __int64 v34[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+100h] [rbp-58h] BYREF
  __int64 v36; // [rsp+108h] [rbp-50h]
  unsigned __int64 v37; // [rsp+118h] [rbp-40h]

  v21 = a5;
  v37 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !(unsigned __int8)sub_9DDC0(v8) || !(unsigned __int8)sub_9DDC0(v8) )
    return 0;
  sub_122E60(v23, a1, a3, 1);
  if ( a2 != sub_11DE40(*(_QWORD *)(a3 + 8)) )
  {
    sub_122E60(v25, a1, a2, 1);
    if ( a5 )
    {
      v21 = 0;
      if ( (unsigned int)(*(_DWORD *)a4 - 12) <= 2 )
        v21 = sub_12D600(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a4 + 8), a4 + 64);
    }
    if ( a3 != sub_11DE40(*(_QWORD *)(a2 + 8)) )
    {
LABEL_10:
      if ( a2 )
      {
        if ( (unsigned __int8)sub_11D680(a3, *(_QWORD *)(a2 + 8), 0) )
        {
          v22 = a3;
          v11 = a2;
        }
        else
        {
          v22 = a2;
          v11 = a3;
        }
      }
      else
      {
        v22 = 0;
        v11 = a3;
      }
      v12 = *(_QWORD *)(v11 + 8);
      sub_11FAC0(v28, a1, a2, 1);
      if ( sub_A4EE0(a1, v28, v12, v22, 1) || !v21 && (unsigned __int8)sub_AB670(a1, v25, v12, v22, 3, 1) )
        goto LABEL_14;
      if ( a3 == v22 )
      {
        sub_11FAC0(v31, a1, a4, 1);
        if ( (unsigned int)sub_11E070(v31, v28) && sub_A4EE0(a1, v31, v12, v22, 1) )
        {
          if ( v32 )
          {
            v33 = 0;
            qfree();
          }
          goto LABEL_33;
        }
        sub_11FAC0(v34, a1, a3, 0);
        v18 = v21;
        v19 = 0;
        if ( !(unsigned __int8)sub_5FD00(v25, v34) )
        {
          v20 = sub_312BB0(&v26, &v35);
          v18 = v20 & v21;
          v19 = v20 ^ 1;
        }
        if ( v35 )
        {
          v36 = 0;
          qfree();
        }
        qfree();
        if ( v32 )
        {
          v33 = 0;
          qfree();
        }
        qfree();
        if ( v18 )
          goto LABEL_14;
        v17 = 2 * v19;
      }
      else
      {
        sub_122E60(v34, a1, a4, 0);
        sub_5FBC0(v34, v23, v13, v14, v15, v16);
        sub_3123A0(&v35, v24);
        if ( (unsigned int)sub_11E070(v34, v25) && (unsigned __int8)sub_AB670(a1, v34, v12, v22, 3, 1) )
        {
          if ( v35 )
          {
            v36 = 0;
            qfree();
          }
LABEL_33:
          qfree();
LABEL_14:
          if ( v29 )
          {
            v30 = 0;
            qfree();
          }
          qfree();
          if ( v26 )
          {
            v27 = 0;
            qfree();
          }
          goto LABEL_18;
        }
        if ( v35 )
        {
          v36 = 0;
          qfree();
        }
        v17 = 2;
        qfree();
      }
      if ( v29 )
      {
        v30 = 0;
        qfree();
      }
      qfree();
      if ( !v26 )
      {
LABEL_41:
        qfree();
        v9 = v17 | (4 * v21) | 1;
        goto LABEL_19;
      }
LABEL_40:
      v27 = 0;
      qfree();
      goto LABEL_41;
    }
    sub_11FAC0(v34, a1, a3, 0);
    if ( (unsigned __int8)sub_5FD00(v25, v34) )
    {
      if ( !v35 )
      {
LABEL_45:
        qfree();
        goto LABEL_10;
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_312BB0(&v26, &v35) )
      {
        if ( v35 )
        {
          v36 = 0;
          qfree();
        }
        v17 = 2;
        qfree();
        if ( !v26 )
          goto LABEL_41;
        goto LABEL_40;
      }
      if ( !v35 )
        goto LABEL_45;
    }
    v36 = 0;
    qfree();
    goto LABEL_45;
  }
  sub_11FAC0(v34, a1, a2, 0);
  if ( !(unsigned __int8)sub_5FD00(v23, v34) )
  {
    if ( !(unsigned __int8)sub_312BB0(v24, &v35) )
    {
      if ( v35 )
      {
        v36 = 0;
        qfree();
      }
      qfree();
      v9 = 3;
      goto LABEL_19;
    }
    if ( !v35 )
      goto LABEL_18;
    goto LABEL_25;
  }
  if ( v35 )
  {
LABEL_25:
    v36 = 0;
    qfree();
  }
LABEL_18:
  qfree();
  v9 = 0;
LABEL_19:
  if ( v24[0] )
  {
    v24[1] = 0;
    qfree();
  }
  qfree();
  return v9;
}


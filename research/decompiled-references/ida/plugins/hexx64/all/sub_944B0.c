__int64 __fastcall sub_944B0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v9; // r14
  unsigned int v10; // r14d
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  int v25; // ebx
  unsigned __int64 *v26; // rdi
  __int64 v27; // rdi
  char v28; // al
  char v29; // bp
  unsigned __int8 v30; // r12
  char v31; // al
  char v32; // al
  unsigned __int8 v33; // [rsp+Fh] [rbp-149h]
  __int64 v34; // [rsp+10h] [rbp-148h]
  __int64 v35[2]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 *v36[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v37[2]; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 *v38; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-E0h]
  __int64 v40[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-B8h]
  __int64 v42; // [rsp+A8h] [rbp-B0h]
  __int64 v43[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-88h]
  __int64 v45; // [rsp+D8h] [rbp-80h]
  __int64 v46[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+100h] [rbp-58h] BYREF
  __int64 v48; // [rsp+108h] [rbp-50h]
  unsigned __int64 v49; // [rsp+118h] [rbp-40h]

  v33 = a5;
  v49 = __readfsqword(0x28u);
  v9 = a1[4].m128i_i64[0];
  if ( !(unsigned __int8)sub_A2980(v9, a2) || !(unsigned __int8)sub_A2980(v9, a3) )
    return 0;
  sub_127A20((__int64)v35, (__int64)a1, a3, 1, v12, v13);
  if ( a2 != sub_122A00(*(_QWORD *)(a3 + 8)) )
  {
    sub_127A20((__int64)v37, (__int64)a1, a2, 1, v14, v15);
    if ( a5 )
    {
      v33 = 0;
      if ( (unsigned int)(*(_DWORD *)a4 - 12) <= 2 )
        v33 = sub_1321C0(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a4 + 8), a4 + 64);
    }
    if ( a3 != sub_122A00(*(_QWORD *)(a2 + 8)) )
    {
LABEL_10:
      if ( a2 )
      {
        if ( sub_122240(a3, *(_QWORD *)(a2 + 8), 0) )
        {
          v34 = a3;
          v16 = a2;
        }
        else
        {
          v34 = a2;
          v16 = a3;
        }
      }
      else
      {
        v34 = 0;
        v16 = a3;
      }
      v17 = *(_QWORD *)(v16 + 8);
      sub_124680((__int64)v40, (__int64)a1, a2, 1u);
      if ( sub_A9AA0((__int64)a1, v40, v17, v34, 1u) || !v33 && sub_B0230((__int64)a1, v37, v17, v34, 3, 1u) )
        goto LABEL_14;
      if ( a3 == v34 )
      {
        sub_124680((__int64)v43, (__int64)a1, a4, 1u);
        if ( sub_122C30((__int64)v43, (__int64)v40) && sub_A9AA0((__int64)a1, v43, v17, v34, 1u) )
        {
          if ( v44 )
          {
            v45 = 0;
            qfree(v44);
          }
          qfree(v43[0]);
          goto LABEL_14;
        }
        sub_124680((__int64)v46, (__int64)a1, a3, 0);
        v29 = v33;
        v30 = 0;
        if ( !(unsigned __int8)sub_64780(v37, v46) )
        {
          v32 = sub_318470(&v38, (__int64)&v47);
          v29 = v32 & v33;
          v30 = v32 ^ 1;
        }
        if ( v47 )
        {
          v48 = 0;
          qfree(v47);
        }
        qfree(v46[0]);
        if ( v44 )
        {
          v45 = 0;
          qfree(v44);
        }
        qfree(v43[0]);
        if ( v29 )
        {
LABEL_14:
          if ( v41 )
          {
            v42 = 0;
            qfree(v41);
          }
          qfree(v40[0]);
          if ( v38 )
          {
            v39 = 0;
            qfree((__int64)v38);
          }
          qfree(v37[0]);
          goto LABEL_19;
        }
        v25 = 2 * v30;
      }
      else
      {
        sub_127A20((__int64)v46, (__int64)a1, a4, 0, v18, v19);
        sub_64640(v46, v35, v21, v22, v23, v24);
        sub_317C60(&v47, (__int64)v36);
        if ( sub_122C30((__int64)v46, (__int64)v37) && sub_B0230((__int64)a1, v46, v17, v34, 3, 1u) )
        {
          if ( v47 )
          {
            v48 = 0;
            qfree(v47);
          }
          qfree(v46[0]);
          goto LABEL_14;
        }
        if ( v47 )
        {
          v48 = 0;
          qfree(v47);
        }
        v25 = 2;
        qfree(v46[0]);
      }
      if ( v41 )
      {
        v42 = 0;
        qfree(v41);
      }
      qfree(v40[0]);
      v26 = v38;
      if ( !v38 )
      {
LABEL_42:
        qfree(v37[0]);
        v10 = v25 | (4 * v33) | 1;
        goto LABEL_20;
      }
LABEL_41:
      v39 = 0;
      qfree((__int64)v26);
      goto LABEL_42;
    }
    sub_124680((__int64)v46, (__int64)a1, a3, 0);
    if ( (unsigned __int8)sub_64780(v37, v46) )
    {
      v27 = v47;
      if ( !v47 )
      {
LABEL_46:
        qfree(v46[0]);
        goto LABEL_10;
      }
    }
    else
    {
      v31 = sub_318470(&v38, (__int64)&v47);
      v27 = v47;
      if ( !v31 )
      {
        if ( v47 )
        {
          v48 = 0;
          qfree(v47);
        }
        v25 = 2;
        qfree(v46[0]);
        v26 = v38;
        if ( !v38 )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( !v47 )
        goto LABEL_46;
    }
    v48 = 0;
    qfree(v27);
    goto LABEL_46;
  }
  sub_124680((__int64)v46, (__int64)a1, a2, 0);
  if ( !(unsigned __int8)sub_64780(v35, v46) )
  {
    v28 = sub_318470(v36, (__int64)&v47);
    v20 = v47;
    if ( !v28 )
    {
      if ( v47 )
      {
        v48 = 0;
        qfree(v47);
      }
      qfree(v46[0]);
      v10 = 3;
      goto LABEL_20;
    }
    if ( !v47 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v20 = v47;
  if ( v47 )
  {
LABEL_26:
    v48 = 0;
    qfree(v20);
  }
LABEL_27:
  qfree(v46[0]);
LABEL_19:
  v10 = 0;
LABEL_20:
  if ( v36[0] )
  {
    v36[1] = nullptr;
    qfree((__int64)v36[0]);
  }
  qfree(v35[0]);
  return v10;
}


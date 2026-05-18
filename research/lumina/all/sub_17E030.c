__int64 __fastcall sub_17E030(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // r15
  const char *v25; // rdx
  __int64 v26; // rax
  char v27; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  v31 = qword_242890;
  sub_19A520(qword_242890);
  v11 = a1[3];
  v12 = v11 + 24 * a1[4];
  if ( v12 != v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = a1[3];
    if ( !a5 )
      goto LABEL_7;
    v19 = s1;
    if ( v13 )
LABEL_13:
      v19 = *(const char **)v11;
    while ( strcasecmp(v19, a5) )
    {
      v14 += 24;
      if ( v12 == v14 )
        goto LABEL_18;
      v11 = v14;
      v19 = s1;
      if ( *(_QWORD *)(v14 + 8) )
        goto LABEL_13;
    }
    while ( 1 )
    {
      v14 += 24;
      v11 = v14;
      if ( v12 == v14 )
        break;
      v13 = *(_QWORD *)(v14 + 8);
LABEL_7:
      v15 = s1;
      if ( v13 )
        v15 = *(const char **)v11;
      v16 = sub_197540(a2, a3, (_DWORD)v15, a4, 0, v10, v27);
      v17 = v16;
      if ( a6 )
      {
        if ( (unsigned __int8)sub_17C940(v16, a3) )
          goto LABEL_11;
      }
      else if ( (unsigned __int8)sub_197CA0(v16) )
      {
        goto LABEL_11;
      }
    }
  }
LABEL_18:
  v20 = a1[1];
  if ( !v20 )
  {
    sub_195070(a1, "idc", 0);
    v20 = a1[1];
  }
  v21 = *a1;
  v22 = *a1 + 24 * v20;
  v23 = *a1;
  if ( v22 == *a1 )
  {
LABEL_29:
    v17 = sub_195350(a2, a3, a4, 0);
  }
  else
  {
    while ( 1 )
    {
      v25 = s1;
      if ( *(_QWORD *)(v23 + 8) )
        v25 = *(const char **)v23;
      v26 = sub_197540(a2, a3, (_DWORD)v25, a4, 0, v21, v27);
      v17 = v26;
      if ( a6 ? sub_17C940(v26, a3) : (unsigned __int8)sub_197CA0(v26) )
        break;
      v23 += 24;
      if ( v22 == v23 )
        goto LABEL_29;
    }
  }
LABEL_11:
  sub_19A570(v31);
  return v17;
}

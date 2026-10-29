__int64 __fastcall py_customidamemo_t_set_groups_visibility(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  int v8; // edx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 **v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 *v26; // [rsp+18h] [rbp-50h] BYREF
  __int64 *v27; // [rsp+20h] [rbp-48h] BYREF
  __int128 v28; // [rsp+28h] [rbp-40h]
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v8 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 832))(a2);
  v9 = qword_24798;
  if ( !v8 || *(_QWORD *)(qword_24798 + 1056) != a3[1] )
    return *(_QWORD *)(v9 + 1136);
  if ( !(*(unsigned int (__fastcall **)(__int64 *))(qword_24798 + 712))(a4) )
  {
    v9 = qword_24798;
    return *(_QWORD *)(v9 + 1136);
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a2);
    if ( a3 )
      goto LABEL_9;
    if ( !a4 )
    {
      v26 = a2;
      v27 = nullptr;
      v28 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    if ( a3 )
    {
LABEL_9:
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a3);
      if ( !a4 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( !a4 )
    {
      v27 = nullptr;
      v26 = nullptr;
      v28 = 0;
      goto LABEL_32;
    }
  }
LABEL_10:
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a4);
LABEL_11:
  v26 = a2;
  v27 = nullptr;
  v28 = 0;
  if ( !a2 )
  {
LABEL_32:
    v11 = &v26;
    sub_7700((__int64 *)&v27, &v26);
    goto LABEL_14;
  }
LABEL_12:
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a2);
  v11 = &v26;
  v12 = (__int64 *)&v27;
  sub_7700((__int64 *)&v27, &v26);
  if ( *a2 <= 0 )
  {
LABEL_37:
    sub_6C20((__int64)v12, (int)v11, v13, v14, v15, v16, v21);
LABEL_38:
    sub_6C20((__int64)v12, (int)v11, v17, v18, v19, v20, v21);
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
LABEL_14:
  if ( (_QWORD)v28 )
  {
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 624))(a4);
    v11 = *(__int64 ***)(a1 + 24);
    v17 = sub_8E40();
    if ( v17 == 1 )
      result = *(_QWORD *)(qword_24798 + 1144);
    else
      result = *(_QWORD *)(qword_24798 + 1128);
  }
  else
  {
    result = *(_QWORD *)(qword_24798 + 1136);
  }
  v12 = v27;
  if ( v27 )
  {
    v22 = result;
    *(_QWORD *)&v28 = 0;
    qfree();
    result = v22;
  }
  if ( a4 )
  {
    if ( *a4 <= 0 )
      goto LABEL_38;
    v23 = result;
    v12 = a4;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a4);
    result = v23;
  }
  if ( !a3 )
    goto LABEL_24;
  if ( *a3 <= 0 )
  {
    sub_6C20((__int64)v12, (int)v11, v17, v18, v19, v20, v21);
    goto LABEL_37;
  }
  v24 = result;
  v12 = a3;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a3);
  result = v24;
LABEL_24:
  if ( a2 )
  {
    if ( *a2 <= 0 )
      sub_6C20((__int64)v12, (int)v11, v17, v18, v19, v20, v21);
    v25 = result;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
    return v25;
  }
  return result;
}


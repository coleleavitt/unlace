__int64 __fastcall py_customidamemo_t_delete_groups(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // r12
  __int64 **v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // [rsp+0h] [rbp-58h]
  __int64 *v19; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v20; // [rsp+10h] [rbp-48h] BYREF
  __int128 v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(qword_24798 + 832))(a2)
    && (*(unsigned int (__fastcall **)(__int64 *))(qword_24798 + 712))(a3) )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a2);
      if ( !a3 )
      {
        v19 = a2;
        v20 = nullptr;
        v21 = 0;
        goto LABEL_8;
      }
    }
    else if ( !a3 )
    {
      v8 = &v19;
      v20 = nullptr;
      v21 = 0;
      v19 = nullptr;
      sub_7700((__int64 *)&v20, &v19);
      goto LABEL_10;
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a3);
    v19 = a2;
    v20 = nullptr;
    v21 = 0;
    if ( !a2 )
    {
      v8 = &v19;
      sub_7700((__int64 *)&v20, &v19);
      goto LABEL_10;
    }
LABEL_8:
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a2);
    v8 = &v19;
    v9 = (__int64 *)&v20;
    sub_7700((__int64 *)&v20, &v19);
    if ( *a2 <= 0 )
      goto LABEL_29;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
LABEL_10:
    if ( (_QWORD)v21 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 624))(a3);
      v8 = *(__int64 ***)(a1 + 24);
      v14 = sub_8E40();
      if ( v14 == 1 )
        v6 = *(_QWORD *)(qword_24798 + 1144);
      else
        v6 = *(_QWORD *)(qword_24798 + 1128);
    }
    else
    {
      v6 = *(_QWORD *)(qword_24798 + 1136);
    }
    v9 = v20;
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( a3 )
    {
      if ( *a3 <= 0 )
      {
LABEL_28:
        sub_6C20((__int64)v9, (int)v8, v14, v15, v16, v17, v18);
LABEL_29:
        sub_6C20((__int64)v9, (int)v8, v10, v11, v12, v13, v18);
      }
      v9 = a3;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a3);
    }
    if ( !a2 )
      return v6;
    if ( *a2 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
      return v6;
    }
    sub_6C20((__int64)v9, (int)v8, v14, v15, v16, v17, v18);
    goto LABEL_28;
  }
  return *(_QWORD *)(qword_24798 + 1136);
}


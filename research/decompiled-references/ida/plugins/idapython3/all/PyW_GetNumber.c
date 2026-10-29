__int64 __fastcall PyW_GetNumber(__int64 a1, __int64 *a2, char *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r12
  char *v12; // rbx
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _Unwind_Exception *v29; // rbx
  char v30; // [rsp+0h] [rbp-48h]
  char v31; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v32[7]; // [rsp+10h] [rbp-38h] BYREF

  v11 = a2;
  v32[1] = __readfsqword(0x28u);
  v12 = a3;
  v31 = 0;
  v32[0] = 0;
  if ( !a2 )
    v11 = v32;
  if ( !a3 )
    v12 = &v31;
  *v12 = 0;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(qword_24798 + 1112) )
    return 0;
  v14 = (*(__int64 (**)(void))(qword_24798 + 632))();
  if ( !(*(__int64 (**)(void))(qword_24798 + 424))() )
  {
    if ( !((unsigned __int64)(v14 + 0x80000000LL) >> 32) )
    {
LABEL_13:
      *v11 = v14;
      return 1;
    }
LABEL_12:
    *v12 = 1;
    goto LABEL_13;
  }
  (*(void (**)(void))(qword_24798 + 400))();
  v14 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 648))(a1);
  if ( !(*(__int64 (**)(void))(qword_24798 + 424))() )
    goto LABEL_12;
  v15 = (*(__int64 (**)(void))(qword_24798 + 424))();
  v16 = qword_24798;
  if ( **(_QWORD **)(qword_24798 + 1080) != v15 )
  {
LABEL_10:
    (*(void (**)(void))(v16 + 400))();
    return 0;
  }
  (*(void (**)(void))(qword_24798 + 400))();
  v17 = (__int64 *)(*(__int64 (__fastcall **)(char *, __int64))(qword_24798 + 968))("K", -1);
  v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(qword_24798 + 704))(a1, v17);
  v23 = (__int64 *)v18;
  if ( !v18 )
    goto LABEL_20;
  if ( !v17
    || (a1 = v18,
        v24 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 648))(v18),
        (*(__int64 (**)(void))(qword_24798 + 424))()) )
  {
    if ( *v23 <= 0 )
    {
LABEL_28:
      sub_6C20(a1, (int)v17, v19, v20, v21, v22, v30);
      goto LABEL_29;
    }
    a1 = (__int64)v23;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v23);
LABEL_20:
    if ( !v17 )
    {
LABEL_23:
      v16 = qword_24798;
      goto LABEL_10;
    }
    if ( *v17 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v17);
      goto LABEL_23;
    }
    sub_6C20(a1, (int)v17, v19, v20, v21, v22, v30);
    goto LABEL_28;
  }
  *v12 = 1;
  *v11 = v24;
  if ( *v23 <= 0 )
    goto LABEL_30;
  a1 = (__int64)v23;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v23);
  if ( *v17 <= 0 )
  {
LABEL_29:
    sub_6C20(a1, (int)v17, v25, v26, v27, v28, v30);
LABEL_30:
    v29 = (struct _Unwind_Exception *)sub_6C20(a1, (int)v17, v19, v20, v21, v22, v30);
    sub_6DF0(v23, (int)v17, v3, v4, v5, v6);
    sub_6DF0(v17, (int)v17, v7, v8, v9, v10);
    _Unwind_Resume(v29);
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v17);
  return 1;
}


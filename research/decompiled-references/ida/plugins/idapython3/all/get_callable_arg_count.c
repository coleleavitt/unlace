__int64 __fastcall get_callable_arg_count(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r13
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  struct _Unwind_Exception *v43; // r12
  __int64 *v44[7]; // [rsp+0h] [rbp-38h] BYREF

  v44[1] = (__int64 *)__readfsqword(0x28u);
  v20 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 568))("inspect");
  if ( !v20 )
    return -1;
  v21 = (__int64 *)v20;
  v22 = (__int64 *)v20;
  (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v20);
  if ( *v21 <= 0 )
    goto LABEL_26;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v21);
  LODWORD(a2) = (_DWORD)v21;
  PyW_TryGetAttrString(v44, v21, "getfullargspec");
  v22 = v44[0];
  if ( v44[0] )
  {
    a2 = *a1;
    v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(qword_24798 + 728))(v44[0], *a1, 0);
    a1 = (__int64 *)v31;
    if ( v31 )
    {
      v22 = *(__int64 **)(v31 + 8);
      if ( ((*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 928))(v22) & 0x4000000) != 0
        && (LODWORD(a2) = 0,
            v22 = a1,
            v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 896))(a1, 0),
            (v18 = (__int64 *)v36) != nullptr) )
      {
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v36);
        v22 = v18;
        if ( (*(unsigned int (__fastcall **)(__int64 *))(qword_24798 + 832))(v18) )
        {
          v22 = v18;
          v41 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 848))(v18);
        }
        else
        {
          v41 = -1;
        }
        if ( *v18 <= 0 )
        {
LABEL_28:
          v43 = (struct _Unwind_Exception *)sub_6C20((__int64)v22, a2, v37, v38, v39, v40, (char)v44[0]);
          sub_6DF0(v18, a2, v2, v3, v4, v5);
          sub_6DF0(a1, a2, v6, v7, v8, v9);
          sub_6DF0(v44[0], a2, v10, v11, v12, v13);
          sub_6DF0(v21, a2, v14, v15, v16, v17);
          _Unwind_Resume(v43);
        }
        v22 = v18;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
      }
      else
      {
        v41 = -1;
      }
      if ( *a1 <= 0 )
      {
LABEL_27:
        sub_6C20((__int64)v22, a2, v32, v33, v34, v35, (char)v44[0]);
        goto LABEL_28;
      }
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a1);
    }
    else
    {
      v41 = -1;
    }
    v22 = v44[0];
    if ( v44[0] )
    {
      if ( *v44[0] <= 0 )
      {
        sub_6C20((__int64)v44[0], a2, v27, v28, v29, v30, (char)v44[0]);
        goto LABEL_25;
      }
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  else
  {
    v41 = -1;
  }
  if ( *v21 <= 0 )
  {
LABEL_25:
    sub_6C20((__int64)v22, a2, v27, v28, v29, v30, (char)v44[0]);
LABEL_26:
    sub_6C20((__int64)v22, a2, v23, v24, v25, v26, (char)v44[0]);
    goto LABEL_27;
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v21);
  return v41;
}


__int64 **__fastcall create_linked_class_instance(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v11; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r13
  __int64 v23; // rax
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // r14
  struct _Unwind_Exception *v35; // r12
  _QWORD v36[7]; // [rsp+0h] [rbp-38h] BYREF

  v36[1] = __readfsqword(0x28u);
  *a1 = nullptr;
  v11 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 568))(a2);
  v12 = (__int64 *)v11;
  if ( v11 )
  {
    v13 = (_QWORD *)v11;
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v11);
    if ( *v12 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v12);
      v13 = v36;
      LODWORD(a2) = (_DWORD)v12;
      PyW_TryGetAttrString(v36, v12, a3);
      if ( v36[0] )
      {
        v22 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(qword_24798 + 352))(
                           a4,
                           "$valid$",
                           0);
        LODWORD(a2) = (_DWORD)v22;
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD))(qword_24798 + 728))(v36[0], v22, 0);
        v24 = (__int64 *)v23;
        if ( v23 )
        {
          v13 = (_QWORD *)v23;
          (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v23);
          if ( *v24 <= 0 )
          {
LABEL_23:
            sub_6C20((__int64)v13, a2, v25, v26, v27, v28, v36[0]);
            goto LABEL_24;
          }
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v24);
          LODWORD(a2) = 1;
          v13 = nullptr;
          if ( !(unsigned __int8)PyW_GetError(0, 1) )
          {
            v33 = *a1;
            *a1 = v24;
            v13 = v24;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v24);
            if ( v33 )
            {
              v13 = v33;
              (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v33);
            }
          }
          if ( *v24 <= 0 )
            goto LABEL_25;
          v13 = v24;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v24);
        }
        else
        {
          LODWORD(a2) = 1;
          v13 = nullptr;
          PyW_GetError(0, 1);
        }
        if ( v22 )
        {
          if ( *v22 <= 0 )
            goto LABEL_26;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v22);
        }
        v13 = (_QWORD *)v36[0];
        if ( v36[0] )
        {
          if ( *(__int64 *)v36[0] <= 0 )
          {
LABEL_24:
            sub_6C20((__int64)v13, a2, v18, v19, v20, v21, v36[0]);
LABEL_25:
            sub_6C20((__int64)v13, a2, v29, v30, v31, v32, v36[0]);
LABEL_26:
            v35 = (struct _Unwind_Exception *)sub_6C20((__int64)v13, a2, v18, v19, v20, v21, v36[0]);
            sub_6DF0(*a1, a2, v4, v5, v6, v7);
            _Unwind_Resume(v35);
          }
          (*(void (**)(void))(qword_24798 + 984))();
        }
      }
      if ( *v12 > 0 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v12);
        return a1;
      }
      sub_6C20((__int64)v13, a2, v18, v19, v20, v21, v36[0]);
    }
    sub_6C20((__int64)v13, a2, v14, v15, v16, v17, v36[0]);
    goto LABEL_23;
  }
  return a1;
}


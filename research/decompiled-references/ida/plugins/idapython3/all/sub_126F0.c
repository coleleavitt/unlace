__int64 __fastcall sub_126F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v13; // rbx
  unsigned int v15; // ebp
  const char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v28; // eax
  struct _Unwind_Exception *v29; // rbx
  __int64 *v30; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v31; // [rsp+8h] [rbp-40h] BYREF
  __int64 v32[7]; // [rsp+10h] [rbp-38h] BYREF

  v13 = a2;
  v32[1] = __readfsqword(0x28u);
  v15 = (*(__int64 (**)(void))(qword_24798 + 536))();
  PyW_TryImportModule(&v30, "__main__");
  LODWORD(a2) = (_DWORD)v30;
  if ( !v30 )
    goto LABEL_33;
  v31 = nullptr;
  if ( v13 )
  {
    if ( *(_BYTE *)v13 == 7 )
    {
      v16 = src;
      if ( v13[2] )
        v16 = (const char *)v13[1];
      PyW_TryGetAttrString(v32, v30, v16);
      v13 = v31;
      v31 = (__int64 *)v32[0];
      if ( v32[0] )
      {
        (*(void (**)(void))(qword_24798 + 1008))();
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( v13 )
      {
LABEL_8:
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v13);
LABEL_9:
        v21 = (__int64 *)v32[0];
        if ( v32[0] )
        {
          if ( *(__int64 *)v32[0] <= 0 )
          {
LABEL_39:
            sub_6C20((__int64)v21, (int)a2, v17, v18, v19, v20, (char)v30);
LABEL_40:
            v29 = (struct _Unwind_Exception *)sub_6C20((__int64)v21, (int)a2, v17, v18, v19, v20, (char)v30);
            sub_6DF0(v31, (int)a2, v4, v5, v6, v7);
            sub_6DF0(v30, (int)a2, v8, v9, v10, v11);
            (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v15);
            _Unwind_Resume(v29);
          }
          (*(void (**)(void))(qword_24798 + 984))();
          v22 = v31;
LABEL_12:
          if ( v22 )
            goto LABEL_13;
          goto LABEL_30;
        }
LABEL_28:
        v22 = v31;
        goto LABEL_12;
      }
    }
    else
    {
      a2 = (__int64 *)&v31;
      v28 = idcvar_to_pyvar(v13, &v31, 0);
      v22 = v31;
      if ( v28 == 2 )
        goto LABEL_12;
      v31 = nullptr;
      if ( v22 )
      {
        (*(void (**)(void))(qword_24798 + 984))();
        goto LABEL_28;
      }
    }
LABEL_30:
    v21 = v30;
    if ( v30 )
    {
      if ( *v30 <= 0 )
        goto LABEL_40;
      (*(void (**)(void))(qword_24798 + 984))();
    }
LABEL_33:
    LODWORD(v13) = 0;
    goto LABEL_24;
  }
  v31 = v30;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v30);
LABEL_13:
  a2 = v32;
  v32[0] = 0;
  if ( (int)idcvar_to_pyvar(a4, v32, 0) <= 0 )
  {
    LODWORD(v13) = 0;
  }
  else
  {
    LODWORD(a2) = a3;
    LOBYTE(v13) = (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64))(qword_24798 + 800))(v31, a3, v32[0]) != -1;
  }
  v21 = (__int64 *)v32[0];
  if ( v32[0] )
  {
    if ( *(__int64 *)v32[0] <= 0 )
    {
      sub_6C20(v32[0], (int)a2, v23, v24, v25, v26, (char)v30);
      goto LABEL_37;
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
  v21 = v31;
  if ( !v31 )
    goto LABEL_21;
  if ( *v31 <= 0 )
  {
LABEL_37:
    sub_6C20((__int64)v21, (int)a2, v23, v24, v25, v26, (char)v30);
LABEL_38:
    sub_6C20((__int64)v21, (int)a2, v23, v24, v25, v26, (char)v30);
    goto LABEL_39;
  }
  (*(void (**)(void))(qword_24798 + 984))();
LABEL_21:
  v21 = v30;
  if ( v30 )
  {
    if ( *v30 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_24;
    }
    goto LABEL_38;
  }
LABEL_24:
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v15);
  return (unsigned int)v13;
}


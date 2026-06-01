__int64 __fastcall idapython_convert_cli_completions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _QWORD *a6)
{
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v32; // rbx
  int v34; // esi
  __int64 v35; // rax
  __int64 *v36; // r15
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rbp
  struct _Unwind_Exception *v44; // rbx
  __int64 *v45; // [rsp+0h] [rbp-58h]
  __int64 *v46; // [rsp+0h] [rbp-58h]
  __int64 *v47; // [rsp+8h] [rbp-50h]
  __int64 *v48; // [rsp+10h] [rbp-48h]
  __int64 *v49; // [rsp+18h] [rbp-40h]

  if ( *a6
    && ((*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(*a6 + 8LL)) & 0x4000000) != 0
    && (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 920))(*a6) == 5 )
  {
    v46 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_24798 + 896))(*a6, 0);
    if ( v46 )
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v46);
    v48 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(qword_24798 + 896))(*a6, 1);
    if ( v48 )
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v48);
    v49 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(qword_24798 + 896))(*a6, 2);
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v49);
    v47 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(qword_24798 + 896))(*a6, 3);
    if ( v47 )
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v47);
    v34 = 4;
    v35 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_24798 + 896))(*a6, 4);
    v36 = (__int64 *)v35;
    if ( v35 )
      (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v35);
    v37 = v46[1];
    if ( ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v37) & 0x2000000) != 0
      && (v37 = v47[1], ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v37) & 0x1000000) != 0)
      && (v37 = v36[1], ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v37) & 0x1000000) != 0)
      && (v42 = PyW_PySeqToStrVec(a1, v46, -1),
          v34 = (int)v49,
          v37 = a3,
          v43 = PyW_PySeqToStrVec(a2, v48, -1),
          v32 = PyW_PySeqToStrVec(a3, v49, -1),
          (*(void (**)(void))(qword_24798 + 400))(),
          v42 > 0)
      && ((LOBYTE(v38) = v32 == 0, v32 == 0 || v42 == v43) && v43 == v32 || (v32 & v43) == 0xFFFFFFFFFFFFFFFFLL) )
    {
      *a4 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 624))(v47);
      v37 = (__int64)v36;
      *a5 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 624))(v36);
      LOBYTE(v32) = (*(__int64 (**)(void))(qword_24798 + 424))() == 0;
    }
    else
    {
      LODWORD(v32) = 0;
    }
    if ( v36 )
    {
      if ( *v36 <= 0 )
        goto LABEL_45;
      v37 = (__int64)v36;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v36);
    }
    if ( v47 )
    {
      if ( *v47 <= 0 )
      {
LABEL_44:
        sub_6C20(v37, v34, v38, v39, v40, v41, (char)v46);
LABEL_45:
        v44 = (struct _Unwind_Exception *)sub_6C20(v37, v34, v38, v39, v40, v41, (char)v46);
        sub_6DF0(v36, v34, v6, v7, v8, v9);
        sub_6DF0(v47, v34, v10, v11, v12, v13);
        sub_6DF0(v49, v34, v14, v15, v16, v17);
        sub_6DF0(v48, v34, v18, v19, v20, v21);
        sub_6DF0(v45, v34, v22, v23, v24, v25);
        _Unwind_Resume(v44);
      }
      v37 = (__int64)v47;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v47);
    }
    if ( v49 )
    {
      if ( *v49 <= 0 )
      {
LABEL_43:
        sub_6C20(v37, v34, v38, v39, v40, v41, (char)v46);
        goto LABEL_44;
      }
      v37 = (__int64)v49;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v49);
    }
    if ( v48 )
    {
      if ( *v48 <= 0 )
      {
LABEL_42:
        sub_6C20(v37, v34, v38, v39, v40, v41, (char)v46);
        goto LABEL_43;
      }
      v37 = (__int64)v48;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v48);
    }
    if ( v46 )
    {
      if ( *v46 > 0 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v46);
        return (unsigned int)v32;
      }
      sub_6C20(v37, v34, v38, v39, v40, v41, (char)v46);
      goto LABEL_42;
    }
  }
  else
  {
    LODWORD(v32) = 0;
  }
  return (unsigned int)v32;
}


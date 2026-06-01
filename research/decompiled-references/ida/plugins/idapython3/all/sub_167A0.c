__int64 __fastcall sub_167A0(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 *a5, __int64 *a6)
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
  __int64 *v24; // r15
  __int64 *v25; // r14
  unsigned int v27; // r12d
  __int64 *v28; // rsi
  __int64 **v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // r13
  __int64 *v50; // rdi
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // r13d
  __int64 ***v58; // rax
  __int64 v59; // rbp
  __int64 v60; // rbx
  __int64 *v61; // rdi
  struct _Unwind_Exception *v63; // rbp
  __int64 v64; // [rsp+0h] [rbp-898h]
  __int64 *v66; // [rsp+10h] [rbp-888h] BYREF
  __int64 *v67; // [rsp+18h] [rbp-880h] BYREF
  __int64 *v68; // [rsp+20h] [rbp-878h] BYREF
  __int64 *v69; // [rsp+28h] [rbp-870h] BYREF
  __int64 ***v70; // [rsp+30h] [rbp-868h] BYREF
  __int128 v71; // [rsp+38h] [rbp-860h]
  _BYTE v72[1024]; // [rsp+50h] [rbp-848h] BYREF
  _BYTE v73[1032]; // [rsp+450h] [rbp-448h] BYREF
  unsigned __int64 v74; // [rsp+858h] [rbp-40h]

  v64 = a2;
  v24 = (__int64 *)v73;
  v25 = (__int64 *)v72;
  v74 = __readfsqword(0x28u);
  v27 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v71 = 0;
  v70 = nullptr;
  sub_6D60(a3);
  PyW_TryImportModule(&v66, v72);
  v28 = v66;
  if ( !v66 )
  {
    v29 = (__int64 **)"Could not import module '%s'!";
    sub_14130(a6);
    goto LABEL_34;
  }
  v67 = nullptr;
  v25 = (__int64 *)&v69;
  if ( a5 != (__int64 *)((char *)&dword_0 + 1) || *(_BYTE *)a4 != 8 )
    goto LABEL_3;
  v44 = *(_QWORD *)(a4 + 8);
  v68 = v66;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v66);
  v29 = &v68;
  try_create_swig_wrapper(&v69, &v68, v73, v44);
  v49 = v67;
  v67 = v69;
  if ( v69 )
  {
    (*(void (**)(void))(qword_24798 + 1008))();
    if ( !v49 )
      goto LABEL_19;
  }
  else if ( !v49 )
  {
    goto LABEL_22;
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v49);
LABEL_19:
  v39 = v69;
  if ( v69 )
  {
    if ( *v69 <= 0 )
      goto LABEL_61;
    (*(void (**)(void))(qword_24798 + 984))();
  }
LABEL_22:
  v50 = v68;
  if ( v68 )
  {
    if ( *v68 <= 0 )
    {
      sub_6C20((__int64)v68, (int)&v68, v45, v46, v47, v48, v64);
      goto LABEL_66;
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
  if ( v67 )
  {
    v51 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 656))(2);
    (*(void (__fastcall **)(__int64 *, const char *, __int64))(qword_24798 + 800))(v67, "__idc_cvt_id__", v51);
    goto LABEL_27;
  }
  while ( 1 )
  {
    v28 = v66;
LABEL_3:
    PyW_TryGetAttrString(v25, v28, v24);
    if ( !v69 )
      break;
    v25 = (__int64 *)&v70;
    v29 = (__int64 **)(unsigned int)a5;
    if ( !(unsigned __int8)pyw_convert_idc_args(a4, (unsigned int)a5, &v70, 1, a6) )
      goto LABEL_48;
    v29 = nullptr;
    if ( (_QWORD)v71 )
      v29 = *v70;
    v34 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 **))(qword_24798 + 744))(v69, v29);
    v24 = v67;
    a5 = v34;
    v67 = v34;
    if ( !v34 )
    {
      if ( v24 )
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v24);
      goto LABEL_12;
    }
    v39 = v34;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v34);
    if ( v24 )
    {
      v39 = v24;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v24);
    }
    if ( *a5 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a5);
LABEL_12:
      v39 = v69;
      if ( !v69 )
        goto LABEL_27;
      if ( *v69 > 0 )
      {
        (*(void (**)(void))(qword_24798 + 984))();
LABEL_27:
        v29 = &v67;
        LOBYTE(v52) = sub_15D90(v64, &v67, a6);
        v50 = v67;
        v57 = v52;
        if ( !v67 )
          goto LABEL_30;
        if ( *v67 > 0 )
        {
          (*(void (**)(void))(qword_24798 + 984))();
LABEL_30:
          v50 = v66;
          if ( !v66 )
            goto LABEL_38;
          if ( *v66 > 0 )
          {
            (*(void (**)(void))(qword_24798 + 984))();
            goto LABEL_38;
          }
LABEL_69:
          v63 = (struct _Unwind_Exception *)sub_6C20((__int64)v50, (int)v29, v53, v54, v55, v56, v64);
          sub_6DF0(a5, (int)v29, v6, v7, v8, v9);
          sub_6DF0(v69, (int)v29, v10, v11, v12, v13);
          sub_6DF0(v67, (int)v29, v14, v15, v16, v17);
          sub_6DF0(v66, (int)v29, v18, v19, v20, v21);
          func(v25);
          (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v27);
          _Unwind_Resume(v63);
        }
LABEL_66:
        sub_6C20((__int64)v50, (int)v29, v53, v54, v55, v56, v64);
LABEL_67:
        sub_6C20((__int64)v50, (int)v29, v30, v31, v32, v33, v64);
LABEL_68:
        sub_6C20((__int64)v50, (int)v29, v30, v31, v32, v33, v64);
        goto LABEL_69;
      }
LABEL_62:
      sub_6C20((__int64)v39, (int)v29, v35, v36, v37, v38, v64);
    }
    sub_6C20((__int64)v39, (int)v29, v40, v41, v42, v43, v64);
  }
  v29 = (__int64 **)"Could not find class type '%s'!";
  v25 = (__int64 *)&v70;
  sub_14130(a6);
LABEL_48:
  v50 = v69;
  if ( v69 )
  {
    if ( *v69 <= 0 )
      goto LABEL_68;
    (*(void (__fastcall **)(__int64 *, __int64 **))(qword_24798 + 984))(v69, v29);
  }
  v50 = v67;
  if ( v67 )
  {
    if ( *v67 <= 0 )
      goto LABEL_67;
    (*(void (__fastcall **)(__int64 *, __int64 **))(qword_24798 + 984))(v67, v29);
  }
LABEL_34:
  v39 = v66;
  if ( !v66 )
    goto LABEL_37;
  if ( *v66 <= 0 )
  {
    sub_6C20((__int64)v66, (int)v29, v30, v31, v32, v33, v64);
LABEL_61:
    sub_6C20((__int64)v39, (int)v29, v45, v46, v47, v48, v64);
    goto LABEL_62;
  }
  (*(void (__fastcall **)(__int64 *, __int64 **))(qword_24798 + 984))(v66, v29);
LABEL_37:
  v57 = 0;
LABEL_38:
  v58 = v70;
  if ( v70 )
  {
    v59 = v71;
    if ( (_QWORD)v71 )
    {
      v60 = 0;
      do
      {
        v61 = (__int64 *)v58[v60];
        if ( v61 )
        {
          if ( *v61 <= 0 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          (*(void (**)(void))(qword_24798 + 984))();
          v58 = v70;
        }
        ++v60;
      }
      while ( v59 != v60 );
    }
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v27);
  return v57;
}


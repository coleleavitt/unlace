__int64 *__fastcall PyW_from_jvalue_t(__int64 *a1, char *a2)
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
  __int64 *v19; // rbx
  __int64 *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  struct _Unwind_Exception *v60; // r14
  __int64 v61; // [rsp+0h] [rbp-48h]
  char v62; // [rsp+0h] [rbp-48h]

  if ( !*(_DWORD *)a1 )
    goto LABEL_19;
  v19 = a1;
  v20 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 568))("json");
  v21 = qword_24798;
  if ( !v20 )
    return *(__int64 **)(v21 + 1136);
  v22 = (__int64)v20;
  v23 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 696))(v20);
  v28 = (__int64 *)v23;
  if ( !v23 )
    goto LABEL_17;
  (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v23);
  a2 = "loads";
  v22 = (__int64)v28;
  v29 = (*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 368))(v28, "loads");
  v18 = (__int64 *)v29;
  if ( !v29 )
  {
LABEL_15:
    if ( *v28 <= 0 )
    {
LABEL_23:
      sub_6C20(v22, (int)a2, v30, v31, v32, v33, v62);
      goto LABEL_24;
    }
    v22 = (__int64)v28;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v28);
LABEL_17:
    if ( *v20 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v20);
LABEL_19:
      v21 = qword_24798;
      return *(__int64 **)(v21 + 1136);
    }
    sub_6C20(v22, (int)a2, v24, v25, v26, v27, v62);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v29);
  a2 = (char *)v19;
  v62 = 0;
  if ( !(unsigned __int8)serialize_json()
    || (a2 = "s",
        v38 = (*(__int64 (__fastcall **)(__int64 *, char *, const char *))(qword_24798 + 720))(v18, "s", src),
        (v19 = (__int64 *)v38) == nullptr) )
  {
    v22 = 0;
    if ( *v18 <= 0 )
    {
LABEL_24:
      sub_6C20(v22, (int)a2, v34, v35, v36, v37, v62);
      goto LABEL_25;
    }
    v22 = (__int64)v18;
    (*(void (__fastcall **)(__int64 *, char *))(qword_24798 + 984))(v18, a2);
    goto LABEL_15;
  }
  v22 = v38;
  (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v38);
  if ( *v19 <= 0 )
    goto LABEL_29;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v19);
  v22 = (__int64)v19;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v19);
  if ( *v19 <= 0 )
  {
LABEL_28:
    sub_6C20(v22, (int)a2, v43, v44, v45, v46, v62);
LABEL_29:
    v60 = (struct _Unwind_Exception *)sub_6C20(v22, (int)a2, v39, v40, v41, v42, v62);
    sub_6DF0(v19, (int)a2, v2, v3, v4, v5);
    if ( v61 )
      qfree();
    sub_6DF0(v18, (int)a2, v6, v7, v8, v9);
    sub_6DF0(v28, (int)a2, v10, v11, v12, v13);
    sub_6DF0(v20, (int)a2, v14, v15, v16, v17);
    _Unwind_Resume(v60);
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v19);
  v22 = 0;
  if ( *v18 <= 0 )
    goto LABEL_26;
  v22 = (__int64)v18;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
  if ( *v28 <= 0 )
  {
LABEL_25:
    sub_6C20(v22, (int)a2, v51, v52, v53, v54, v62);
LABEL_26:
    sub_6C20(v22, (int)a2, v47, v48, v49, v50, v62);
    goto LABEL_27;
  }
  v22 = (__int64)v28;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v28);
  if ( *v20 <= 0 )
  {
LABEL_27:
    sub_6C20(v22, (int)a2, v55, v56, v57, v58, v62);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v20);
  return v19;
}


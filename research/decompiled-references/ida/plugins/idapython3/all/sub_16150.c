__int64 __fastcall sub_16150(__int64 a1, const char *p_src, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // r13
  unsigned int v19; // ebp
  const char *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rbx
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  int v28; // ebx
  __int64 v29; // rax
  __int64 *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  int v50; // eax
  int v51; // eax
  size_t v52; // r8
  void *v53; // r9
  size_t v54; // rdx
  size_t v55; // rbx
  void *v56; // rax
  struct _Unwind_Exception *v57; // rbx
  char v58; // [rsp+0h] [rbp-98h]
  size_t v59; // [rsp+8h] [rbp-90h]
  size_t v60; // [rsp+10h] [rbp-88h]
  void *v61; // [rsp+18h] [rbp-80h]
  __int64 *v62; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v63; // [rsp+28h] [rbp-70h] BYREF
  void *src; // [rsp+30h] [rbp-68h] BYREF
  size_t n; // [rsp+38h] [rbp-60h] BYREF
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  size_t v67[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v68; // [rsp+58h] [rbp-40h]

  v16 = (char *)p_src;
  v68 = __readfsqword(0x28u);
  v19 = (*(__int64 (**)(void))(qword_24798 + 536))();
  PyW_TryImportModule(&v62, "__main__");
  LODWORD(p_src) = (_DWORD)v62;
  if ( !v62 )
  {
    v28 = 0;
    goto LABEL_38;
  }
  v63 = nullptr;
  if ( !a3 )
  {
    v63 = v62;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v62);
    v27 = v63;
    goto LABEL_14;
  }
  if ( *(_BYTE *)a3 != 7 )
  {
    p_src = (const char *)&v63;
    v50 = idcvar_to_pyvar(a3, &v63, 0);
    v27 = v63;
    v28 = v50;
    if ( v50 == 2 )
      goto LABEL_13;
    v63 = nullptr;
    if ( v27 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_42;
    }
    goto LABEL_58;
  }
  v20 = ::src;
  if ( *(_QWORD *)(a3 + 16) )
    v20 = *(const char **)(a3 + 8);
  PyW_TryGetAttrString(&dest, v62, v20);
  v25 = v63;
  v63 = (__int64 *)dest;
  if ( !dest )
  {
    if ( v25 )
      goto LABEL_8;
LABEL_58:
    v28 = -1;
    goto LABEL_34;
  }
  (*(void (**)(void))(qword_24798 + 1008))();
  if ( v25 )
LABEL_8:
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v25);
  v26 = (__int64 *)dest;
  if ( dest )
  {
    if ( *(__int64 *)dest <= 0 )
    {
LABEL_68:
      sub_6C20((__int64)v26, (int)p_src, v21, v22, v23, v24, v58);
      goto LABEL_69;
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
  v27 = v63;
  v28 = -1;
LABEL_13:
  if ( !v27 )
    goto LABEL_34;
LABEL_14:
  if ( a4 && *a4 )
  {
    LODWORD(p_src) = (_DWORD)v27;
    PyW_TryGetAttrString(&dest, v27, a4);
    v26 = (__int64 *)dest;
    if ( !dest )
      goto LABEL_42;
    if ( v16 )
    {
      LODWORD(p_src) = (_DWORD)v16;
      v51 = pyvar_to_idcvar(&dest, v16, 0);
      v26 = (__int64 *)dest;
      v28 = v51;
      if ( !dest )
      {
LABEL_51:
        v26 = v63;
        if ( v63 )
        {
          if ( *v63 <= 0 )
          {
LABEL_73:
            sub_6C20((__int64)v26, (int)p_src, v21, v22, v23, v24, v58);
LABEL_74:
            v57 = (struct _Unwind_Exception *)sub_6C20((__int64)v26, (int)p_src, v21, v22, v23, v24, v58);
            sub_6DF0((__int64 *)dest, (int)p_src, v4, v5, v6, v7);
            sub_6DF0(v63, (int)p_src, v8, v9, v10, v11);
            sub_6DF0(v62, (int)p_src, v12, v13, v14, v15);
            (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v19);
            _Unwind_Resume(v57);
          }
          (*(void (**)(void))(qword_24798 + 984))();
        }
        v26 = v62;
        if ( !v62 )
          goto LABEL_37;
        if ( *v62 > 0 )
          goto LABEL_36;
LABEL_72:
        sub_6C20((__int64)v26, (int)p_src, v21, v22, v23, v24, v58);
        goto LABEL_73;
      }
    }
    else
    {
      v28 = 1;
    }
    if ( *v26 <= 0 )
      goto LABEL_74;
    (*(void (**)(void))(qword_24798 + 984))();
    goto LABEL_51;
  }
  p_src = "__class__";
  v29 = (*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 760))(v27, "__class__");
  v30 = (__int64 *)v29;
  if ( !v29 )
  {
LABEL_42:
    v28 = -1;
    goto LABEL_31;
  }
  v26 = (__int64 *)v29;
  p_src = "__name__";
  v31 = (*(__int64 (__fastcall **)(__int64, const char *))(qword_24798 + 760))(v29, "__name__");
  v36 = (__int64 *)v31;
  if ( v31 )
  {
    v26 = (__int64 *)v31;
    v37 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 808))(v31);
    v42 = (__int64 *)v37;
    if ( !v37 )
    {
      v28 = -1;
LABEL_27:
      if ( *v36 <= 0 )
      {
LABEL_70:
        sub_6C20((__int64)v26, (int)p_src, v38, v39, v40, v41, v58);
LABEL_71:
        sub_6C20((__int64)v26, (int)p_src, v44, v45, v46, v47, v58);
        goto LABEL_72;
      }
      v26 = v36;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v36);
      goto LABEL_29;
    }
    dest = nullptr;
    *(_OWORD *)v67 = 0;
    v43 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 944))(v37);
    v48 = v43;
    if ( v43 )
    {
      p_src = (const char *)&src;
      src = nullptr;
      n = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v43, &src, &n) >= 0 )
      {
        v52 = n;
        v53 = src;
        v67[0] = 0;
        p_src = (const char *)dest;
        v54 = n + 1;
        if ( v67[1] < n + 1 )
        {
          v61 = src;
          v60 = n;
          v59 = n + 1;
          dest = (void *)qvector_reserve();
          v53 = v61;
          p_src = (const char *)dest;
          v52 = v60;
          v54 = v59;
        }
        v67[0] = v54;
        p_src[v52] = 0;
        LODWORD(p_src) = (_DWORD)v53;
        memmove(dest, v53, v52);
        (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v48);
        free_idcv();
        v55 = v67[0];
        *v16 = 7;
        *((_QWORD *)v16 + 1) = 0;
        *((_OWORD *)v16 + 1) = 0;
        if ( v55 )
        {
          v56 = (void *)qalloc_or_throw();
          *((_QWORD *)v16 + 1) = v56;
          p_src = (const char *)dest;
          *((_QWORD *)v16 + 3) = v55;
          memcpy(v56, p_src, v55);
          *((_QWORD *)v16 + 2) = v55;
        }
        v28 = 1;
        goto LABEL_23;
      }
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v48);
    }
    v28 = -1;
LABEL_23:
    v26 = (__int64 *)dest;
    if ( dest )
    {
      v67[0] = 0;
      qfree();
    }
    if ( *v42 <= 0 )
      goto LABEL_71;
    v26 = v42;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v42);
    goto LABEL_27;
  }
  v28 = -1;
LABEL_29:
  if ( *v30 <= 0 )
  {
LABEL_69:
    sub_6C20((__int64)v26, (int)p_src, v32, v33, v34, v35, v58);
    goto LABEL_70;
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v30);
LABEL_31:
  v26 = v63;
  if ( v63 )
  {
    if ( *v63 <= 0 )
    {
LABEL_67:
      sub_6C20((__int64)v26, (int)p_src, v21, v22, v23, v24, v58);
      goto LABEL_68;
    }
    (*(void (**)(void))(qword_24798 + 984))();
  }
LABEL_34:
  v26 = v62;
  if ( v62 )
  {
    if ( *v62 > 0 )
    {
LABEL_36:
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_37;
    }
    sub_6C20((__int64)v62, (int)p_src, v21, v22, v23, v24, v58);
    goto LABEL_67;
  }
LABEL_37:
  LOBYTE(v28) = v28 > 0;
LABEL_38:
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v19);
  return (unsigned int)v28;
}


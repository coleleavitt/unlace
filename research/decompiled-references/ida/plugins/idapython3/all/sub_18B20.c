__int64 __fastcall sub_18B20(__int64 a1)
{
  unsigned int v1; // ebp
  char *v4; // rsi
  size_t v5; // rax
  size_t v6; // r12
  char **v7; // r15
  _UNKNOWN **v8; // r12
  void (*v9)(int); // r15
  __int64 v10; // rax
  _DWORD *v11; // rax
  const char *v12; // rsi
  __int64 v13; // rdi
  unsigned int (*v14)(void); // rax
  void **p_dest; // rsi
  const char *v16; // rax
  void **v17; // r13
  size_t v18; // rax
  size_t v19; // r15
  void *v20; // rdi
  size_t v21; // rdx
  const char *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  const char *v33; // rdi
  __int64 *v34; // r13
  const char *v35; // rdi
  __int64 *v36; // r14
  const char *v37; // rsi
  const char *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // r15d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void *v48; // rdi
  size_t v49; // r14
  size_t v50; // rax
  size_t v51; // r13
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  void *v59; // rdi
  size_t v60; // rdx
  struct _Unwind_Exception *v61; // rbx
  char v62; // [rsp+0h] [rbp-30E8h]
  unsigned int v63; // [rsp+8h] [rbp-30E0h]
  size_t v64; // [rsp+8h] [rbp-30E0h]
  char v65; // [rsp+10h] [rbp-30D8h]
  __int64 v66; // [rsp+10h] [rbp-30D8h]
  __int64 v67; // [rsp+10h] [rbp-30D8h]
  size_t v68; // [rsp+28h] [rbp-30C0h]
  __int64 *v69; // [rsp+38h] [rbp-30B0h] BYREF
  const char *v70; // [rsp+40h] [rbp-30A8h] BYREF
  __int128 v71; // [rsp+48h] [rbp-30A0h]
  void *v72; // [rsp+60h] [rbp-3088h]
  __int128 v73; // [rsp+68h] [rbp-3080h]
  void *dest; // [rsp+80h] [rbp-3068h] BYREF
  __int128 v75; // [rsp+88h] [rbp-3060h]
  char v76[4096]; // [rsp+A0h] [rbp-3048h] BYREF
  char src[4096]; // [rsp+10A0h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+20A0h] [rbp-1048h] BYREF
  unsigned __int64 v79; // [rsp+30A8h] [rbp-40h]

  v1 = *(unsigned __int8 *)(a1 + 1152);
  v79 = __readfsqword(0x28u);
  if ( (_BYTE)v1 )
    return v1;
  read_config2();
  sub_11D20(a1);
  if ( !(unsigned __int8)qgetenv() )
    qsetenv();
  if ( !(unsigned __int8)qgetenv() )
    qsetenv();
  idadir();
  v4 = (_BYTE *)&stru_1000;
  qmakepath();
  v5 = strlen(s);
  v6 = v5;
  if ( v5 )
  {
    v48 = *(void **)(a1 + 216);
    v49 = v5 + 1;
    if ( *(_QWORD *)(a1 + 232) < v5 + 1 )
    {
      v52 = qvector_reserve();
      *(_QWORD *)(a1 + 216) = v52;
      v48 = (void *)v52;
    }
    *(_QWORD *)(a1 + 224) = v49;
    v4 = s;
    memmove(v48, s, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 216) + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 224) = 0;
  }
  LODWORD(qword_24618) = *(_DWORD *)(a1 + 176);
  if ( !(unsigned __int8)sub_12A20(a1, v4) )
    return 0;
  v70 = nullptr;
  v71 = 0;
  v65 = sub_9320(a1 + 264, (__int64 *)&v70);
  if ( !v65 )
  {
    v22 = ::src;
    if ( (_QWORD)v71 )
      v22 = v70;
    sub_7D60((__int64)"Couldn't initialize IDAPython: %s", v22);
    goto LABEL_47;
  }
  if ( *(_BYTE *)(a1 + 180) )
  {
    v7 = off_23C50;
    while ( 1 )
    {
      v8 = &off_23C80;
      do
      {
        qsnprintf();
        if ( (unsigned __int8)qfileexist() )
          goto LABEL_132;
        ++v8;
      }
      while ( &unk_23CA8 != (_UNKNOWN *)v8 );
      if ( (unsigned __int8)qfileexist() )
        break;
      if ( &unk_23C68 == (_UNKNOWN *)++v7 )
        goto LABEL_18;
    }
    qstrncpy();
LABEL_132:
    if ( (int)sub_8340(
                0,
                (__int64)"HIDECANCEL\n"
                         "TITLE IDAPython\n"
                         "The script '%s' was found in the current directory\n"
                         "and will be automatically executed by Python.\n"
                         "\n"
                         "Do you want to continue loading IDAPython?",
                v76) <= 0 )
      goto LABEL_47;
  }
LABEL_18:
  v9 = signal(6, handler);
  sub_1BF90(sub_6D30);
  v72 = nullptr;
  v73 = 0;
  if ( (unsigned __int8)qgetenv() && (unsigned __int8)qfileexist() )
    goto LABEL_24;
  if ( !(unsigned __int8)search_path() || (qdirname(), qmakepath(), !(unsigned __int8)qfileexist()) )
  {
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
      v72 = nullptr;
      *((_QWORD *)&v73 + 1) = 0;
    }
LABEL_24:
    v10 = v73;
    goto LABEL_25;
  }
  v50 = strlen(src);
  v51 = v50;
  if ( !v50 )
  {
    *(_QWORD *)&v73 = 0;
LABEL_91:
    v65 = 0;
    goto LABEL_30;
  }
  v59 = v72;
  v60 = v50 + 1;
  if ( *((_QWORD *)&v73 + 1) < v50 + 1 )
  {
    v64 = v50 + 1;
    v72 = (void *)qvector_reserve();
    v60 = v64;
    v59 = v72;
  }
  *(_QWORD *)&v73 = v60;
  memmove(v59, src, v51);
  *((_BYTE *)v72 + v51) = 0;
  v10 = v73;
LABEL_25:
  if ( !v10 )
    goto LABEL_91;
  v11 = *(_DWORD **)(a1 + 1120);
  if ( !v11 )
    goto LABEL_91;
  *v11 = 1;
  v12 = ::src;
  if ( (_QWORD)v73 )
    v12 = (const char *)v72;
  sub_7F30((__int64)"IDAPython: Requested to use virtual environment interpreter at %s\n", v12);
LABEL_30:
  if ( (*(unsigned int (**)(void))(qword_24798 + 1024))() )
  {
    *(_BYTE *)(a1 + 1153) = 0;
    dword_24504 = 1;
    goto LABEL_33;
  }
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 1016))(0);
  dword_24504 = 1;
  signal(6, v9);
  if ( (*(unsigned int (**)(void))(qword_24798 + 1024))() )
  {
    *(_BYTE *)(a1 + 1153) = 1;
LABEL_33:
    LODWORD(v69) = 0;
    LODWORD(dest) = 0;
    v13 = (*(__int64 (**)(void))(qword_24798 + 1000))();
    qsscanf();
    v63 = (*(__int64 (__fastcall **)(__int64, const char *))(qword_24798 + 536))(v13, "%d.%d");
    sub_13010(a1, (int)"%d.%d");
    v14 = *(unsigned int (**)(void))(a1 + 496);
    if ( v14 && *(_QWORD *)(a1 + 472) && !v14() )
      (*(void (**)(void))(a1 + 472))();
    p_dest = &dest;
    dest = nullptr;
    v75 = 0;
    if ( !(unsigned __int8)qgetenv() )
    {
      v16 = (const char *)idadir();
      v17 = (void **)v16;
      if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
      {
        v20 = dest;
        v21 = v18 + 1;
        if ( *((_QWORD *)&v75 + 1) < v18 + 1 )
        {
          v68 = v18 + 1;
          dest = (void *)qvector_reserve();
          v21 = v68;
          v20 = dest;
        }
        *(_QWORD *)&v75 = v21;
        p_dest = v17;
        memmove(v20, v17, v19);
        *((_BYTE *)dest + v19) = 0;
      }
      else
      {
        *(_QWORD *)&v75 = 0;
      }
    }
    v23 = (*(__int64 (__fastcall **)(const char *, void **))(qword_24798 + 560))("__main__", p_dest);
    v24 = qword_24798;
    if ( v23 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v23);
      v24 = qword_24798;
    }
    v25 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(v24 + 904))(3);
    v26 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 656))(9);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(qword_24798 + 912))(v25, 0, v26);
    v27 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 656))(3);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(qword_24798 + 912))(v25, 1, v27);
    v28 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 656))(0);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(qword_24798 + 912))(v25, 2, v28);
    (*(void (__fastcall **)(__int64, const char *, __int64 *))(qword_24798 + 392))(v23, "IDAPYTHON_VERSION", v25);
    if ( *(_BYTE *)(a1 + 181) )
      v29 = *(_QWORD *)(qword_24798 + 1144);
    else
      v29 = *(_QWORD *)(qword_24798 + 1128);
    (*(void (__fastcall **)(__int64, const char *, __int64))(qword_24798 + 392))(
      v23,
      "IDAPYTHON_REMOVE_CWD_SYS_PATH",
      v29);
    if ( *(_BYTE *)(a1 + 182) )
      v30 = *(_QWORD *)(qword_24798 + 1144);
    else
      v30 = *(_QWORD *)(qword_24798 + 1128);
    (*(void (__fastcall **)(__int64, const char *, __int64))(qword_24798 + 392))(
      v23,
      "IDAPYTHON_COMPAT_AUTOIMPORT_MODULES",
      v30);
    if ( *(_BYTE *)(a1 + 185) )
      v31 = *(_QWORD *)(qword_24798 + 1144);
    else
      v31 = *(_QWORD *)(qword_24798 + 1128);
    (*(void (__fastcall **)(__int64, const char *, __int64))(qword_24798 + 392))(v23, "IDAPYTHON_IDAUSR_SYSPATH", v31);
    if ( *(_BYTE *)(a1 + 1153) )
      v32 = *(_QWORD *)(qword_24798 + 1144);
    else
      v32 = *(_QWORD *)(qword_24798 + 1128);
    (*(void (__fastcall **)(__int64, const char *, __int64))(qword_24798 + 392))(
      v23,
      "IDAPYTHON_OWNING_INTERPRETER",
      v32);
    v33 = ::src;
    if ( (_QWORD)v75 )
      v33 = (const char *)dest;
    v34 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 952))(v33);
    (*(void (__fastcall **)(__int64, const char *, __int64 *))(qword_24798 + 392))(v23, "IDAPYTHON_DYNLOAD_BASE", v34);
    v35 = ::src;
    if ( (_QWORD)v73 )
      v35 = (const char *)v72;
    v36 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 952))(v35);
    v37 = "IDAPYTHON_VENV_EXECUTABLE";
    (*(void (__fastcall **)(__int64, const char *, __int64 *))(qword_24798 + 392))(
      v23,
      "IDAPYTHON_VENV_EXECUTABLE",
      v36);
    if ( *(_BYTE *)(a1 + 183) )
      dword_24468 |= 2u;
    install_extlang();
    if ( v65 )
    {
      LODWORD(v37) = 0;
      (*(void (__fastcall **)(const char *, _QWORD))(a1 + 816))(
        "import sys\nsys.executable = IDAPYTHON_VENV_EXECUTABLE\nimport site\nsite.main()\n",
        0);
    }
    v38 = (const char *)a1;
    v43 = sub_12AE0(a1);
    if ( !(_BYTE)v43 )
    {
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
        v70 = nullptr;
        *((_QWORD *)&v71 + 1) = 0;
      }
      if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
        PyW_GetError(&v70, 0);
      (*(void (__fastcall **)(const char *, _QWORD))(a1 + 816))("import traceback;traceback.print_exc();", 0);
      v37 = ::src;
      if ( (_QWORD)v71 )
        v37 = v70;
      sub_7D60(
        (__int64)"IDAPython: error executing init.py:\n%s\n\nRefer to the message window to see the full error log.",
        v37);
      goto LABEL_73;
    }
    if ( byte_24768 )
    {
LABEL_98:
      if ( !v36 )
        goto LABEL_101;
      if ( *v36 > 0 )
      {
        v38 = (const char *)v36;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v36);
LABEL_101:
        if ( v34 )
        {
          if ( *v34 <= 0 )
          {
LABEL_147:
            sub_6C20((__int64)v38, (int)v37, v39, v40, v41, v42, v62);
LABEL_148:
            sub_6C20((__int64)v38, (int)v37, v44, v45, v46, v47, v62);
LABEL_149:
            v61 = (struct _Unwind_Exception *)sub_6C20((__int64)v38, (int)v37, v39, v40, v41, v42, v62);
            if ( v72 )
            {
              *(_QWORD *)&v73 = 0;
              qfree();
            }
            if ( v70 )
            {
              *(_QWORD *)&v71 = 0;
              qfree();
            }
            _Unwind_Resume(v61);
          }
          v38 = (const char *)v34;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v34);
        }
        if ( v25 )
        {
          if ( *v25 <= 0 )
            goto LABEL_149;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v25);
        }
        if ( dest )
        {
          *(_QWORD *)&v75 = 0;
          qfree();
        }
        (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v63);
        add_idc_func();
        add_idc_func();
        add_idc_func();
        add_idc_func();
        if ( *(_DWORD *)(a1 + 168) == 3 )
          sub_18A20(a1);
        hook_event_listener();
        hook_event_listener();
        enable_python_cli(1);
        sub_8000(0);
        if ( *(_BYTE *)(a1 + 1153) )
        {
          v53 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_24798 + 888))(0, a1 + 120);
          (*(void (__fastcall **)(__int64))(qword_24798 + 480))(v53);
        }
        *(_BYTE *)(a1 + 1152) = 1;
        v1 = v43;
        goto LABEL_114;
      }
      sub_6C20((__int64)v38, (int)v37, v39, v40, v41, v42, v62);
LABEL_144:
      sub_6C20((__int64)v38, (int)v37, v55, v56, v57, v58, v62);
      goto LABEL_145;
    }
    if ( qword_24778 )
    {
LABEL_71:
      if ( !(unsigned __int8)add_idc_func() )
      {
LABEL_72:
        sub_7D60((__int64)"IDAPython: init_pywraps() failed!");
LABEL_73:
        v38 = (const char *)&unk_24460;
        remove_extlang();
        if ( !v36 )
        {
LABEL_76:
          if ( !v34 )
          {
LABEL_79:
            if ( !v25 )
            {
LABEL_82:
              if ( dest )
              {
                *(_QWORD *)&v75 = 0;
                qfree();
              }
              (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v63);
              goto LABEL_114;
            }
            if ( *v25 > 0 )
            {
              (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v25);
              goto LABEL_82;
            }
            goto LABEL_148;
          }
          if ( *v34 > 0 )
          {
            v38 = (const char *)v34;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v34);
            goto LABEL_79;
          }
          goto LABEL_146;
        }
        if ( *v36 > 0 )
        {
          v38 = (const char *)v36;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v36);
          goto LABEL_76;
        }
LABEL_145:
        sub_6C20((__int64)v38, (int)v37, v44, v45, v46, v47, v62);
LABEL_146:
        sub_6C20((__int64)v38, (int)v37, v44, v45, v46, v47, v62);
        goto LABEL_147;
      }
      v38 = "py_idc_cvt_helper_t";
      if ( !find_idc_class() )
      {
        LODWORD(v37) = 0;
        v67 = add_idc_class();
        if ( !v67 || !(unsigned __int8)add_idc_func() )
          goto LABEL_72;
        v38 = (const char *)v67;
        v37 = "py_idc_cvt_helper_t.dtor_name";
        set_idc_dtor();
      }
      byte_24768 = 1;
      goto LABEL_98;
    }
    v37 = "ida_idaapi";
    PyW_TryImportModule(&v69, "ida_idaapi");
    v54 = qword_24778;
    qword_24778 = (__int64)v69;
    if ( v69 )
    {
      v66 = v54;
      (*(void (**)(void))(qword_24798 + 1008))();
      v54 = v66;
      if ( !v66 )
      {
LABEL_119:
        v38 = (const char *)v69;
        if ( v69 )
        {
          if ( *v69 <= 0 )
            goto LABEL_144;
          (*(void (**)(void))(qword_24798 + 984))();
        }
        if ( !qword_24778 )
          goto LABEL_72;
        goto LABEL_71;
      }
    }
    else if ( !v54 )
    {
      goto LABEL_72;
    }
    (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v54);
    goto LABEL_119;
  }
  sub_7D60((__int64)"IDAPython: Py_InitializeEx() failed");
LABEL_114:
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
LABEL_47:
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  return v1;
}


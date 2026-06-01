__int64 __fastcall sub_17D00(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 a6, char a7)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rbx
  __int64 *v32; // r13
  __int64 *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  char *p_n; // rsi
  __int64 *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  char *v45; // rdi
  __int64 *v46; // r15
  __int64 plugin_instance; // rax
  char Error; // al
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r15
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned int v56; // r14d
  int v58; // r15d
  const char *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 *v65; // r15
  __m128i si128; // xmm0
  __int64 v67; // rax
  __int64 v68; // rax
  size_t v69; // r8
  void *v70; // r9
  size_t v71; // rdx
  __int64 v72; // rax
  struct _Unwind_Exception *v73; // r14
  char v74; // [rsp+0h] [rbp-4D8h]
  size_t v75; // [rsp+8h] [rbp-4D0h]
  __int64 idc_gvar; // [rsp+10h] [rbp-4C8h]
  size_t v77; // [rsp+10h] [rbp-4C8h]
  void *v78; // [rsp+18h] [rbp-4C0h]
  __int64 *v80; // [rsp+38h] [rbp-4A0h] BYREF
  void *src; // [rsp+40h] [rbp-498h] BYREF
  size_t n; // [rsp+48h] [rbp-490h] BYREF
  char v83; // [rsp+50h] [rbp-488h] BYREF
  __int128 v84; // [rsp+58h] [rbp-480h]
  __int64 v85; // [rsp+68h] [rbp-470h]
  _BYTE v86[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v87; // [rsp+498h] [rbp-40h]

  v35 = a5;
  v87 = __readfsqword(0x28u);
  if ( !qword_24778 )
  {
    v80 = nullptr;
    goto LABEL_48;
  }
  v31 = a3;
  PyW_TryGetAttrString(&v80, qword_24778, a5);
  if ( !v80 )
  {
LABEL_48:
    p_n = "Could not find %s.%s ?!";
    sub_14130(a4);
    v56 = 0;
    goto LABEL_43;
  }
  qstrncpy();
  strrpl();
  v32 = (__int64 *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(qword_24798 + 952))(v86, 92);
  v36 = qword_24798;
  if ( !v31 )
  {
    v31 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 560))("__main__");
    v36 = qword_24798;
    if ( v31 )
    {
      v31 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 696))(v31);
      v36 = qword_24798;
    }
  }
  v37 = (*(__int64 (__fastcall **)(const char *))(v36 + 560))("__main__");
  v38 = qword_24798;
  if ( v37 )
  {
    v37 = (*(__int64 (**)(void))(qword_24798 + 696))();
    v38 = qword_24798;
  }
  if ( v31 != (__int64 *)v37 )
  {
    a2 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(v38 + 952))("__file__");
    LODWORD(p_n) = (_DWORD)a2;
    v40 = v31;
    if ( !(*(unsigned int (__fastcall **)(__int64 *, __int64 *))(qword_24798 + 360))(v31, a2) )
    {
      LODWORD(p_n) = (_DWORD)a2;
      v40 = v31;
      (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))(qword_24798 + 384))(v31, a2, v32);
    }
    if ( a2 )
    {
      if ( *a2 <= 0 )
      {
LABEL_80:
        sub_6C20((__int64)v40, (int)p_n, v41, v42, v43, v44, v74);
LABEL_81:
        if ( under_debugger )
          goto LABEL_86;
        interr();
LABEL_83:
        if ( !under_debugger )
        {
          v40 = (_QWORD *)(&loc_75C8 + 2);
          interr();
LABEL_85:
          v73 = (struct _Unwind_Exception *)sub_6C20((__int64)v40, (int)p_n, v49, v50, v51, v52, v74);
          sub_6DF0((__int64 *)n, (int)p_n, v7, v8, v9, v10);
          sub_6DF0(v31, (int)p_n, v11, v12, v13, v14);
          sub_6DF0(v35, (int)p_n, v15, v16, v17, v18);
          sub_6DF0(a2, (int)p_n, v19, v20, v21, v22);
          sub_6DF0(v32, (int)p_n, v23, v24, v25, v26);
          sub_6DF0(v80, (int)p_n, v27, v28, v29, v30);
          _Unwind_Resume(v73);
        }
LABEL_86:
        BUG();
      }
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
    }
    v38 = qword_24798;
  }
  p_n = "IDAPython_ExecScript";
  v45 = (char *)v35;
  a2 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(v38 + 600))(0);
  if ( !strcmp((const char *)v35, "IDAPython_ExecScript") && (v45 = "ARGV", (idc_gvar = find_idc_gvar()) != 0) )
  {
    v83 = 2;
    v58 = 1;
    v85 = 0;
    v84 = 0;
    while ( 1 )
    {
      qsnprintf();
      p_n = (char *)idc_gvar;
      if ( (unsigned int)get_idcv_attr() )
        break;
      v59 = ::src;
      if ( *((_QWORD *)&v84 + 1) )
        v59 = (const char *)v84;
      v35 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 952))(v59);
      LODWORD(p_n) = (_DWORD)v35;
      v40 = a2;
      (*(void (__fastcall **)(__int64 *, __int64 *))(qword_24798 + 576))(a2, v35);
      if ( v35 )
      {
        if ( *v35 <= 0 )
          goto LABEL_75;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v35);
      }
      ++v58;
    }
    v45 = &v83;
    v46 = a2;
    free_idcv();
  }
  else
  {
    v46 = nullptr;
  }
  v35 = *(__int64 **)(qword_24798 + 1128);
  if ( v35 )
  {
    v45 = *(char **)(qword_24798 + 1128);
    (*(void (__fastcall **)(char *))(qword_24798 + 1008))(v45);
  }
  plugin_instance = get_plugin_instance(v45, p_n);
  LODWORD(p_n) = 1;
  v40 = a4;
  v31 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *, __int64 *, __int64 *, _QWORD))(plugin_instance + 728))(
                     v80,
                     v32,
                     v31,
                     v35,
                     v46,
                     0);
  Error = PyW_GetError(a4, 1);
  if ( v31 && !Error )
  {
    if ( a7 )
    {
      if ( !a6
        || ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v31[1]) & 0x4000000) == 0
        || (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 920))(v31) != 2 )
      {
        goto LABEL_81;
      }
      LODWORD(p_n) = 0;
      v53 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 896))(v31, 0);
      v54 = qword_24798;
      if ( v53 == *(_QWORD *)(qword_24798 + 1136) )
      {
        n = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 896))(v31, 1);
        if ( n )
          (*(void (__fastcall **)(size_t))(qword_24798 + 1008))(n);
        p_n = (char *)&n;
        LOBYTE(v55) = sub_15D90(a6, &n, a4);
        v40 = (__int64 *)n;
        v56 = v55;
        if ( n )
        {
          if ( *(__int64 *)n <= 0 )
            goto LABEL_85;
          (*(void (**)(void))(qword_24798 + 984))();
        }
        goto LABEL_32;
      }
    }
    else
    {
      v54 = qword_24798;
      v53 = (__int64)v31;
      if ( v31 == *(__int64 **)(qword_24798 + 1136) )
      {
        v56 = 1;
        goto LABEL_32;
      }
    }
    if ( ((*(__int64 (__fastcall **)(_QWORD))(v54 + 928))(*(_QWORD *)(v53 + 8)) & 0x10000000) == 0 )
      goto LABEL_83;
    v40 = (__int64 *)v53;
    v64 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 944))(v53);
    v65 = (__int64 *)v64;
    if ( v64 )
    {
      p_n = (char *)&src;
      src = nullptr;
      n = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v64, &src, &n) >= 0 )
      {
        v69 = n;
        v70 = src;
        a4[1] = 0;
        p_n = (char *)*a4;
        v71 = v69 + 1;
        if ( a4[2] < v69 + 1 )
        {
          v78 = v70;
          v77 = v69;
          v75 = v69 + 1;
          v72 = qvector_reserve();
          v70 = v78;
          v69 = v77;
          *a4 = v72;
          p_n = (char *)v72;
          v71 = v75;
        }
        a4[1] = v71;
        p_n[v69] = 0;
        LODWORD(p_n) = (_DWORD)v70;
        memmove((void *)*a4, v70, v69);
      }
      v40 = v65;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v65);
    }
LABEL_31:
    v56 = 0;
LABEL_32:
    if ( *v31 <= 0 )
    {
LABEL_77:
      sub_6C20((__int64)v40, (int)p_n, v49, v50, v51, v52, v74);
      goto LABEL_78;
    }
    v40 = v31;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v31);
    goto LABEL_34;
  }
  (*(void (**)(void))(qword_24798 + 400))();
  if ( (unsigned __int64)a4[1] <= 1 )
  {
    p_n = (char *)*a4;
    if ( (unsigned __int64)a4[2] <= 0x12 )
    {
      v40 = a4;
      v68 = qvector_reserve();
      *a4 = v68;
      p_n = (char *)v68;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D980);
    a4[1] = 19;
    *((_WORD *)p_n + 8) = 25701;
    *(__m128i *)p_n = si128;
    v67 = *a4;
    v56 = 0;
    *(_BYTE *)(v67 + 18) = 0;
    if ( v31 )
      goto LABEL_31;
  }
  else
  {
    v56 = 0;
    if ( v31 )
      goto LABEL_31;
  }
LABEL_34:
  if ( v35 )
  {
    if ( *v35 <= 0 )
    {
LABEL_78:
      sub_6C20((__int64)v40, (int)p_n, v49, v50, v51, v52, v74);
      goto LABEL_79;
    }
    v40 = v35;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v35);
  }
  if ( a2 )
  {
    if ( *a2 <= 0 )
    {
LABEL_76:
      sub_6C20((__int64)v40, (int)p_n, v49, v50, v51, v52, v74);
      goto LABEL_77;
    }
    v40 = a2;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
  }
  if ( v32 )
  {
    if ( *v32 <= 0 )
    {
LABEL_79:
      sub_6C20((__int64)v40, (int)p_n, v49, v50, v51, v52, v74);
      goto LABEL_80;
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v32);
  }
LABEL_43:
  v40 = v80;
  if ( v80 )
  {
    if ( *v80 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      return v56;
    }
    sub_6C20((__int64)v80, (int)p_n, v49, v50, v51, v52, v74);
LABEL_75:
    sub_6C20((__int64)v40, (int)p_n, v60, v61, v62, v63, v74);
    goto LABEL_76;
  }
  return v56;
}


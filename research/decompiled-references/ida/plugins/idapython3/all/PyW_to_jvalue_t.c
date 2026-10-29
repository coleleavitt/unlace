__int64 __fastcall PyW_to_jvalue_t(__int64 a1, const char *p_src)
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
  __int64 *v14; // r12
  const char *v15; // r13
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r15
  size_t v38; // r8
  void *v39; // r9
  _BYTE *v40; // rsi
  size_t v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _Unwind_Exception *v50; // r13
  char v51; // [rsp+0h] [rbp-88h]
  size_t v52; // [rsp+8h] [rbp-80h]
  size_t v53; // [rsp+10h] [rbp-78h]
  void *v54; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+20h] [rbp-68h] BYREF
  size_t n; // [rsp+28h] [rbp-60h] BYREF
  void *dest; // [rsp+30h] [rbp-58h]
  __int128 v58; // [rsp+38h] [rbp-50h]
  unsigned __int64 v59; // [rsp+48h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v15 = p_src;
  v16 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 568))("json");
  if ( !v16 )
    return 0;
  v17 = (__int64 *)v16;
  v18 = v16;
  v19 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v16);
  v24 = (__int64 *)v19;
  if ( !v19 )
    goto LABEL_16;
  (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v19);
  p_src = "dumps";
  v18 = (__int64)v24;
  v25 = (*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 368))(v24, "dumps");
  v14 = (__int64 *)v25;
  if ( !v25 )
    goto LABEL_14;
  (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v25);
  p_src = "O";
  v30 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *, const char *))(qword_24798 + 720))(v14, "O", v15);
  dest = nullptr;
  v58 = 0;
  v31 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 944))(v30);
  v36 = v31;
  if ( !v31 )
  {
LABEL_7:
    v18 = (__int64)dest;
    if ( dest )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    if ( v30 )
    {
      if ( *v30 <= 0 )
      {
LABEL_36:
        sub_6C20(v18, (int)p_src, v32, v33, v34, v35, v51);
        goto LABEL_37;
      }
      v18 = (__int64)v30;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v30);
    }
    if ( *v14 <= 0 )
      goto LABEL_34;
    v18 = (__int64)v14;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v14);
LABEL_14:
    if ( *v24 > 0 )
    {
      v18 = (__int64)v24;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v24);
LABEL_16:
      if ( *v17 > 0 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v17);
        return 0;
      }
      goto LABEL_35;
    }
    sub_6C20(v18, (int)p_src, v26, v27, v28, v29, v51);
LABEL_34:
    sub_6C20(v18, (int)p_src, v32, v33, v34, v35, v51);
LABEL_35:
    sub_6C20(v18, (int)p_src, v20, v21, v22, v23, v51);
    goto LABEL_36;
  }
  p_src = (const char *)&src;
  src = nullptr;
  n = 0;
  if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v31, &src, &n) < 0 )
  {
    (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v36);
    goto LABEL_7;
  }
  v38 = n;
  v39 = src;
  *(_QWORD *)&v58 = 0;
  v40 = dest;
  v41 = n + 1;
  if ( *((_QWORD *)&v58 + 1) < n + 1 )
  {
    v54 = src;
    v53 = n;
    v52 = n + 1;
    dest = (void *)qvector_reserve();
    v39 = v54;
    v40 = dest;
    v38 = v53;
    v41 = v52;
  }
  *(_QWORD *)&v58 = v41;
  v40[v38] = 0;
  memmove(dest, v39, v38);
  (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v36);
  p_src = ::src;
  if ( (_QWORD)v58 )
    p_src = (const char *)dest;
  if ( (unsigned int)parse_json_string() )
    goto LABEL_7;
  v18 = (__int64)dest;
  if ( dest )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v30 )
  {
    if ( *v30 <= 0 )
      goto LABEL_40;
    v18 = (__int64)v30;
    (*(void (__fastcall **)(__int64 *, const char *))(qword_24798 + 984))(v30, p_src);
  }
  if ( *v14 <= 0 )
  {
LABEL_39:
    sub_6C20(v18, (int)p_src, v32, v33, v34, v35, v51);
LABEL_40:
    v50 = (struct _Unwind_Exception *)sub_6C20(v18, (int)p_src, v32, v33, v34, v35, v51);
    sub_6DF0(v14, (int)p_src, v2, v3, v4, v5);
    sub_6DF0(v24, (int)p_src, v6, v7, v8, v9);
    sub_6DF0(v17, (int)p_src, v10, v11, v12, v13);
    _Unwind_Resume(v50);
  }
  v18 = (__int64)v14;
  (*(void (__fastcall **)(__int64 *, const char *))(qword_24798 + 984))(v14, p_src);
  if ( *v24 <= 0 )
  {
LABEL_38:
    sub_6C20(v18, (int)p_src, v42, v43, v44, v45, v51);
    goto LABEL_39;
  }
  v18 = (__int64)v24;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v24);
  if ( *v17 <= 0 )
  {
LABEL_37:
    sub_6C20(v18, (int)p_src, v46, v47, v48, v49, v51);
    goto LABEL_38;
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v17);
  return 1;
}


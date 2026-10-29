void __fastcall sub_10CB0(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 **v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 **v15; // r12
  __int64 *v16; // rdi
  __int64 plugin_instance; // rax
  struct _Unwind_Exception *v18; // rbx
  char v19; // [rsp+0h] [rbp-18h]

  if ( !*(_BYTE *)(a1 + 34) )
    goto LABEL_11;
  v7 = *(_QWORD *)(a1 + 40) == 0;
  *(_BYTE *)(a1 + 34) = 0;
  if ( v7 )
  {
    plugin_instance = get_plugin_instance();
    (*(void (__fastcall **)(_QWORD, _QWORD))(plugin_instance + 488))(0, 0);
    goto LABEL_11;
  }
  v10 = (__int64 **)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 568))("sys");
  if ( !v10 )
  {
    v10 = *(__int64 ***)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0;
    if ( !v10 )
      goto LABEL_11;
    v16 = *v10;
    if ( !*v10 )
      goto LABEL_19;
    if ( *v16 > 0 )
    {
LABEL_18:
      (*(void (**)(void))(qword_24798 + 984))();
LABEL_19:
      operator delete(v10, 8u);
      goto LABEL_11;
    }
LABEL_17:
    sub_6C20((__int64)v16, (int)a2, v8, v9, v11, v12, v19);
    goto LABEL_18;
  }
  v13 = get_plugin_instance();
  v14 = (__int64)v10;
  a2 = "settrace";
  (*(void (__fastcall **)(__int64 **, const char *, const char *, _QWORD))(v13 + 736))(
    v10,
    "settrace",
    "O",
    **(_QWORD **)(a1 + 40));
  v15 = *(__int64 ***)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0;
  if ( v15 )
  {
    v16 = *v15;
    if ( !*v15 )
    {
LABEL_8:
      LODWORD(a2) = 8;
      v14 = (__int64)v15;
      operator delete(v15, 8u);
      goto LABEL_9;
    }
    if ( *v16 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_9:
  if ( (__int64)*v10 <= 0 )
  {
    v18 = (struct _Unwind_Exception *)sub_6C20(v14, (int)a2, v8, v9, v11, v12, v19);
    sub_6DF0((__int64 *)v10, (int)a2, v2, v3, v4, v5);
    _Unwind_Resume(v18);
  }
  (*(void (__fastcall **)(__int64 **))(qword_24798 + 984))(v10);
LABEL_11:
  if ( *(_BYTE *)(a1 + 32) )
  {
    idapython_hide_wait_box();
    *(_BYTE *)(a1 + 32) = 0;
  }
}


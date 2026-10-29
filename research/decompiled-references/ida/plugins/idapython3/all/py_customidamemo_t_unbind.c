void __fastcall py_customidamemo_t_unbind(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rdi
  __int64 *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  struct _Unwind_Exception *v13; // rbx
  char v14; // [rsp+0h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, const char *, _QWORD))(qword_24798 + 736))(
                      v6,
                      "_OnBind",
                      "O",
                      *(_QWORD *)(qword_24798 + 1128));
    if ( !v7 && (*(__int64 (**)(void))(qword_24798 + 424))() )
    {
      sub_7F30((__int64)"WARNING: Couldn't unbind form object at %p:\n", *(const void **)(a1 + 16));
      (*(void (**)(void))(qword_24798 + 432))();
    }
    (*(void (__fastcall **)(_QWORD, const char *, _QWORD))(qword_24798 + 800))(
      *(_QWORD *)(a1 + 16),
      "_this",
      *(_QWORD *)(qword_24798 + 1136));
    v12 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0;
    if ( v12 )
      (*(void (**)(void))(qword_24798 + 984))();
    *(_QWORD *)(a1 + 24) = 0;
    if ( v7 )
    {
      if ( *v7 <= 0 )
      {
        v13 = (struct _Unwind_Exception *)sub_6C20(v12, (int)"_this", v8, v9, v10, v11, v14);
        sub_6DF0(v7, (int)"_this", v1, v2, v3, v4);
        _Unwind_Resume(v13);
      }
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v7);
    }
  }
}


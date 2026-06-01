__int64 *__fastcall pyobj_get_clink(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _Unwind_Exception *v11; // rbx
  __int64 *v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = (__int64 *)__readfsqword(0x28u);
  PyW_TryGetAttrString(v12, a1, "__clink__");
  v5 = v12[0];
  if ( v12[0] )
  {
    v5 = (*(unsigned int (__fastcall **)(__int64 *, const char *))(qword_24798 + 344))(v12[0], "$valid$")
       ? (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 336))(v12[0], "$valid$")
       : nullptr;
    if ( v12[0] )
    {
      if ( *v12[0] <= 0 )
      {
        v11 = (struct _Unwind_Exception *)sub_6C20((__int64)v12[0], (int)"$valid$", v6, v7, v8, v9, (char)v12[0]);
        sub_6DF0(v12[0], (int)"$valid$", v1, v2, v3, v4);
        _Unwind_Resume(v11);
      }
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  return v5;
}


__int64 __fastcall sub_C350(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _Unwind_Exception *v14; // rbx
  __int64 *v15[3]; // [rsp+0h] [rbp-18h] BYREF

  v15[1] = (__int64 *)__readfsqword(0x28u);
  v7 = a1;
  PyW_TryGetAttrString(v15, a2, a3);
  v8 = (int)v15[0];
  if ( v15[0] )
  {
    LOBYTE(v7) = (*(unsigned int (__fastcall **)(__int64))(qword_24798 + 776))(a1) != 0;
    if ( v15[0] )
    {
      if ( *v15[0] <= 0 )
      {
        v14 = (struct _Unwind_Exception *)sub_6C20((__int64)v15[0], v8, v9, v10, v11, v12, (char)v15[0]);
        sub_6DF0(v15[0], v8, v3, v4, v5, v6);
        _Unwind_Resume(v14);
      }
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  else
  {
    return 0;
  }
  return v7;
}


__int64 __fastcall sub_C290(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  struct _Unwind_Exception *v11; // rbx
  __int64 *v12[3]; // [rsp+0h] [rbp-18h] BYREF

  v12[1] = (__int64 *)__readfsqword(0x28u);
  PyW_TryGetAttrString(v12, a1, "__idc_cvt_id__");
  if ( v12[0] )
  {
    if ( ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v12[0][1]) & 0x1000000) != 0 )
      v9 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 624))(v12[0]);
    else
      v9 = -1;
    if ( v12[0] )
    {
      if ( *v12[0] <= 0 )
      {
        v11 = (struct _Unwind_Exception *)sub_6C20((__int64)v12[0], a1, v5, v6, v7, v8, (char)v12[0]);
        sub_6DF0(v12[0], a1, v1, v2, v3, v4);
        _Unwind_Resume(v11);
      }
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v9;
}


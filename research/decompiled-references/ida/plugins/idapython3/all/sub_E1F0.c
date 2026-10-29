__int64 __fastcall sub_E1F0(__int64 a1)
{
  unsigned int v1; // ebp
  const char *v2; // rsi
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int IdcException; // r12d
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _Unwind_Exception *v15; // r12
  const char *v16; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v1 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v2 = (_BYTE *)(&dword_0 + 1);
  v3 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_24798 + 728))(*(_QWORD *)(a1 + 8), 0);
  v16 = nullptr;
  v17 = 0;
  if ( (unsigned __int8)PyW_GetError(&v16, 1) )
  {
    v2 = src;
    if ( (_QWORD)v17 )
      v2 = v16;
    IdcException = PyW_CreateIdcException();
  }
  else
  {
    IdcException = 0;
  }
  v9 = (__int64)v16;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v3 )
  {
    if ( *v3 <= 0 )
    {
      v15 = (struct _Unwind_Exception *)sub_6C20(v9, (int)v2, v4, v5, v6, v7, (char)v16);
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      sub_6DF0(v3, (int)v2, v11, v12, v13, v14);
      (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v1);
      _Unwind_Resume(v15);
    }
    (*(void (__fastcall **)(__int64 *, const char *))(qword_24798 + 984))(v3, v2);
  }
  (*(void (__fastcall **)(_QWORD, const char *))(qword_24798 + 552))(v1, v2);
  return IdcException;
}


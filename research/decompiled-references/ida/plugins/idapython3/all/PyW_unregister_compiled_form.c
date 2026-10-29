__int64 __fastcall PyW_unregister_compiled_form(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 **v15; // rbp
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 **v19; // r12
  __int64 v20; // rbp
  __int64 *v21; // rdi
  struct _Unwind_Exception *v23; // rbp
  char v24; // [rsp+0h] [rbp-18h]

  v10 = a1;
  if ( a1 )
  {
    (*(void (**)(void))(qword_24798 + 1008))();
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a1);
    if ( *a1 <= 0 )
      goto LABEL_31;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a1);
    v15 = (__int64 **)qword_24780;
    v16 = qword_24780 + 8 * xmmword_24788;
    if ( qword_24780 == v16 )
    {
LABEL_25:
      if ( *v10 <= 0 )
        goto LABEL_32;
      return (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 984))(v10);
    }
  }
  else
  {
    v15 = (__int64 **)qword_24780;
    result = xmmword_24788;
    v16 = qword_24780 + 8 * xmmword_24788;
    if ( v16 == qword_24780 )
      return result;
  }
  result = (__int64)v15;
  while ( a1 != *(__int64 **)result )
  {
    result += 8;
    if ( result == v16 )
      goto LABEL_24;
  }
  if ( result != v16 )
  {
    while ( a1 != *v15 )
    {
      if ( ++v15 == (__int64 **)v16 )
        goto LABEL_24;
    }
    if ( v15 != (__int64 **)v16 )
    {
      if ( a1 )
      {
        if ( *a1 <= 0 )
          goto LABEL_33;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a1);
      }
      v18 = xmmword_24788;
      v19 = v15 + 1;
      result = (qword_24780 + 8 * (__int64)xmmword_24788 - (__int64)v15) >> 3;
      v20 = result - 2;
      if ( result - 2 < 0 )
        goto LABEL_23;
      while ( 1 )
      {
        v21 = *v19;
        *(v19 - 1) = *v19;
        if ( v21 )
          result = (*(__int64 (**)(void))(qword_24798 + 1008))();
        a1 = *v19;
        if ( *v19 )
        {
          if ( *a1 <= 0 )
          {
            sub_6C20((__int64)a1, a2, v18, a4, a5, a6, v24);
LABEL_31:
            sub_6C20((__int64)a1, a2, v11, v12, v13, v14, v24);
LABEL_32:
            sub_6C20((__int64)a1, a2, v16, a4, a5, a6, v24);
LABEL_33:
            v23 = (struct _Unwind_Exception *)sub_6C20((__int64)a1, a2, v16, a4, a5, a6, v24);
            sub_6DF0(v10, a2, v6, v7, v8, v9);
            _Unwind_Resume(v23);
          }
          result = (*(__int64 (**)(void))(qword_24798 + 984))();
        }
        ++v19;
        if ( v20-- == 0 )
        {
          v18 = xmmword_24788;
LABEL_23:
          v16 = v18 - 1;
          *(_QWORD *)&xmmword_24788 = v16;
          break;
        }
      }
    }
  }
LABEL_24:
  if ( v10 )
    goto LABEL_25;
  return result;
}


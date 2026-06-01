__int64 **__fastcall PyW_register_compiled_form(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 **result; // rax
  __int64 v16; // rdx
  __int64 **v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 **v30; // rbp
  __int64 v31; // r12
  _QWORD *v32; // r13
  __int64 *v33; // rdi
  struct _Unwind_Exception *v35; // rbp
  char v36; // [rsp+0h] [rbp-38h]

  v10 = a1;
  if ( a1 )
  {
    (*(void (**)(void))(qword_24798 + 1008))();
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a1);
    if ( *a1 <= 0 )
      goto LABEL_32;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a1);
    result = (__int64 **)qword_24780;
    v16 = xmmword_24788;
    v17 = (__int64 **)(qword_24780 + 8 * xmmword_24788);
    if ( (__int64 **)qword_24780 != v17 )
    {
LABEL_6:
      while ( a1 != *result )
      {
        if ( v17 == ++result )
          goto LABEL_12;
      }
      if ( v17 != result )
      {
        if ( !a1 )
          return result;
        goto LABEL_9;
      }
LABEL_12:
      if ( !a1 )
        goto LABEL_18;
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a1);
    v18 = *((_QWORD *)&xmmword_24788 + 1);
    if ( *((_QWORD *)&xmmword_24788 + 1) >= (unsigned __int64)(xmmword_24788 + 1) )
    {
      *(_QWORD *)(qword_24780 + 8 * xmmword_24788) = a1;
      goto LABEL_15;
    }
  }
  else
  {
    result = (__int64 **)qword_24780;
    v16 = xmmword_24788;
    v17 = (__int64 **)(qword_24780 + 8 * xmmword_24788);
    if ( v17 != (__int64 **)qword_24780 )
      goto LABEL_6;
LABEL_18:
    v18 = *((_QWORD *)&xmmword_24788 + 1);
    if ( *((_QWORD *)&xmmword_24788 + 1) >= (unsigned __int64)(v16 + 1) )
    {
      *v17 = nullptr;
LABEL_20:
      *(_QWORD *)&xmmword_24788 = xmmword_24788 + 1;
      return result;
    }
  }
  a2 = 0;
  v23 = qvector_reserve();
  v28 = *((_QWORD *)&xmmword_24788 + 1);
  v29 = v23;
  *((_QWORD *)&xmmword_24788 + 1) = v18;
  v30 = (__int64 **)qword_24780;
  v31 = xmmword_24788 - 1;
  if ( (__int64)xmmword_24788 - 1 >= 0 )
  {
    v32 = (_QWORD *)v23;
    do
    {
      v33 = *v30;
      *v32 = *v30;
      if ( v33 )
        (*(void (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 1008))(v33, 0);
      a1 = *v30;
      if ( *v30 )
      {
        if ( *a1 <= 0 )
        {
          sub_6C20((__int64)a1, 0, v24, v25, v26, v27, v36);
LABEL_32:
          sub_6C20((__int64)a1, a2, v11, v12, v13, v14, v36);
LABEL_33:
          sub_6C20((__int64)a1, a2, v16, (__int64)v17, a5, a6, v36);
LABEL_34:
          v35 = (struct _Unwind_Exception *)sub_6C20((__int64)a1, a2, v19, v20, v21, v22, v36);
          sub_6DF0(v10, a2, v6, v7, v8, v9);
          _Unwind_Resume(v35);
        }
        (*(void (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 984))(a1, 0);
      }
      ++v30;
      ++v32;
    }
    while ( v31-- != 0 );
  }
  qfree();
  result = (__int64 **)xmmword_24788;
  qword_24780 = v29;
  *((_QWORD *)&xmmword_24788 + 1) = v28;
  *(_QWORD *)(v29 + 8 * xmmword_24788) = v10;
  if ( !v10 )
    goto LABEL_20;
LABEL_15:
  a1 = v10;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v10);
  *(_QWORD *)&xmmword_24788 = xmmword_24788 + 1;
  if ( *v10 <= 0 )
    goto LABEL_34;
  a1 = v10;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v10);
LABEL_9:
  if ( *v10 <= 0 )
    goto LABEL_33;
  return (__int64 **)(*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 984))(v10);
}


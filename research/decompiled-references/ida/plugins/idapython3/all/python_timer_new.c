__int64 __fastcall python_timer_new(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  struct _Unwind_Exception *v17; // rbp
  char v18; // [rsp+0h] [rbp-18h]

  v6 = (__int64 *)a1;
  v7 = operator new(0x10u);
  *(_OWORD *)v7 = 0;
  if ( a1 )
  {
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(a1);
    v8 = qword_24798;
    v9 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = a1;
    (*(void (__fastcall **)(__int64))(v8 + 1008))(a1);
    if ( v9 )
    {
      a1 = v9;
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v9);
    }
    if ( *v6 <= 0 )
    {
      v17 = (struct _Unwind_Exception *)sub_6C20(a1, a2, v10, v11, v12, v13, v18);
      sub_6DF0(v6, a2, v2, v3, v4, v5);
      _Unwind_Resume(v17);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v6);
  }
  v14 = xmmword_24698;
  v15 = qword_24690;
  if ( *((_QWORD *)&xmmword_24698 + 1) < (unsigned __int64)(xmmword_24698 + 1) )
  {
    qword_24690 = qvector_reserve();
    v15 = qword_24690;
    v14 = xmmword_24698;
  }
  *(_QWORD *)(v15 + 8 * v14) = v7;
  *(_QWORD *)&xmmword_24698 = xmmword_24698 + 1;
  return v7;
}


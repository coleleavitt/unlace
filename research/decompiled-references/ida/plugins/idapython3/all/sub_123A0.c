__int64 __fastcall sub_123A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // rdi
  __int64 *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  void *v22; // rsi
  __int64 v23; // rax
  struct _Unwind_Exception *v24; // rbx
  char v25; // [rsp+0h] [rbp-48h]
  char v26; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v10 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v11 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 560))("__main__");
  if ( !v11 )
    goto LABEL_10;
  v12 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v11);
  if ( !v12 )
    goto LABEL_10;
  if ( *a3 )
  {
    a3[1] = 0;
    qfree();
    *a3 = 0;
    a3[2] = 0;
  }
  (*(void (**)(void))(qword_24798 + 400))();
  setup_new_execution(&v26, 1);
  v13 = 257;
  v14 = a2;
  v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a1 + 824))(
                     a2,
                     257,
                     v12,
                     v12,
                     0);
  if ( !v15 )
  {
    sub_E310(a3, 1u);
    goto LABEL_9;
  }
  if ( !(*(__int64 (**)(void))(qword_24798 + 424))() )
  {
    if ( *v15 > 0 )
    {
      v20 = 1;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v15);
      setup_new_execution(&v26, 0);
      goto LABEL_12;
    }
LABEL_19:
    v24 = (struct _Unwind_Exception *)sub_6C20(v14, v13, v16, v17, v18, v19, v25);
    sub_6DF0(v15, v13, v3, v4, v5, v6);
    setup_new_execution(&v26, 0);
    (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v10);
    _Unwind_Resume(v24);
  }
  v13 = 1;
  v14 = (__int64)a3;
  sub_E310(a3, 1u);
  if ( *v15 <= 0 )
    goto LABEL_19;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v15);
LABEL_9:
  setup_new_execution(&v26, 0);
LABEL_10:
  if ( (unsigned __int64)a3[1] <= 1 )
  {
    v22 = (void *)*a3;
    if ( (unsigned __int64)a3[2] <= 0xE )
    {
      v23 = qvector_reserve();
      *a3 = v23;
      v22 = (void *)v23;
    }
    a3[1] = 15;
    qmemcpy(v22, "internal error", 14);
    *(_BYTE *)(*a3 + 14) = 0;
  }
  v20 = 0;
LABEL_12:
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v10);
  return v20;
}


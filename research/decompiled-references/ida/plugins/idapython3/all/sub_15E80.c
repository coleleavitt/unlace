__int64 __fastcall sub_15E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 **v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // r15
  __int64 *v19; // rbx
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ebx
  struct _Unwind_Exception *v32; // rbx
  char v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  char v35; // [rsp+1Fh] [rbp-49h] BYREF
  __int64 *v36[9]; // [rsp+20h] [rbp-48h] BYREF

  v36[1] = (__int64 *)__readfsqword(0x28u);
  v12 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v13 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 560))("__main__");
  v14 = qword_24798;
  if ( !v13 )
    goto LABEL_16;
  v15 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v13);
  v36[0] = nullptr;
  if ( !v15 )
  {
    v14 = qword_24798;
LABEL_16:
    v30 = 0;
    goto LABEL_12;
  }
  v34 = v15;
  setup_new_execution(&v35, 1);
  LODWORD(v16) = 258;
  v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a1 + 824))(
                     a4,
                     258,
                     v34,
                     v34,
                     0);
  v18 = v36[0];
  v19 = v17;
  v36[0] = v17;
  if ( v17 )
  {
    v20 = v17;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v17);
    if ( v18 )
    {
      v20 = v18;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
    }
    if ( *v19 <= 0 )
      goto LABEL_18;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v19);
  }
  else if ( v18 )
  {
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
  }
  setup_new_execution(&v35, 0);
  v16 = v36;
  LOBYTE(v25) = sub_15D90(a2, v36, a5);
  v20 = v36[0];
  v30 = v25;
  if ( v36[0] )
  {
    if ( *v36[0] > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_11;
    }
    sub_6C20((__int64)v36[0], (int)v36, v26, v27, v28, v29, v33);
LABEL_18:
    v32 = (struct _Unwind_Exception *)sub_6C20((__int64)v20, (int)v16, v21, v22, v23, v24, v33);
    setup_new_execution(&v35, 0);
    sub_6DF0(v36[0], 0, v5, v6, v7, v8);
    (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v12);
    _Unwind_Resume(v32);
  }
LABEL_11:
  v14 = qword_24798;
LABEL_12:
  (*(void (__fastcall **)(_QWORD))(v14 + 552))(v12);
  return v30;
}


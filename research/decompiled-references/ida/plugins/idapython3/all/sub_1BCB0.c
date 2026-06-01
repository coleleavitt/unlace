__int64 __fastcall sub_1BCB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // ebp
  __int64 plugin_instance; // rax
  __int64 *v15; // rdi
  const char *v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r15d
  unsigned int v24; // eax
  struct _Unwind_Exception *v25; // rbx
  __int64 v26; // [rsp+0h] [rbp-68h]
  __int64 *v28; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v29[9]; // [rsp+20h] [rbp-48h] BYREF

  v26 = a2;
  v29[1] = __readfsqword(0x28u);
  v11 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v12 = qword_24778;
  v13 = v11;
  if ( !qword_24778 || (PyW_TryGetAttrString(&v28, qword_24778, "IDAPython_Completion"), !v28) )
  {
    v22 = 0;
    goto LABEL_10;
  }
  plugin_instance = get_plugin_instance(&v28, v12);
  v15 = v28;
  v16 = "si";
  v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *, __int64, _QWORD))(plugin_instance + 720))(
                     v28,
                     "si",
                     a7,
                     a8);
  v22 = 0;
  if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
    goto LABEL_4;
  v29[0] = v17;
  if ( v17 )
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v17);
  LODWORD(v16) = a3;
  v24 = idapython_convert_cli_completions(v26, a3, a4, a5, a6, v29);
  v15 = (__int64 *)v29[0];
  v22 = v24;
  if ( !v29[0] )
  {
LABEL_4:
    if ( !v17 )
      goto LABEL_7;
  }
  else
  {
    if ( *(__int64 *)v29[0] <= 0 )
      goto LABEL_20;
    (*(void (**)(void))(qword_24798 + 984))();
    if ( !v17 )
      goto LABEL_7;
  }
  if ( *v17 <= 0 )
  {
LABEL_19:
    sub_6C20((__int64)v15, (int)v16, v18, v19, v20, v21, v26);
LABEL_20:
    v25 = (struct _Unwind_Exception *)sub_6C20((__int64)v15, (int)v16, v18, v19, v20, v21, v26);
    (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v13);
    _Unwind_Resume(v25);
  }
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v17);
LABEL_7:
  v15 = v28;
  if ( v28 )
  {
    if ( *v28 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_10;
    }
    sub_6C20((__int64)v28, (int)v16, v18, v19, v20, v21, v26);
    goto LABEL_19;
  }
LABEL_10:
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v13);
  return v22;
}


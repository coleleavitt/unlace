__int64 __fastcall sub_188E0(__int64 a1, char *a2, __int64 *a3)
{
  unsigned int v4; // r12d
  const char *v5; // rdx
  __int64 *v6; // rax
  unsigned int v7; // ebx
  char v9; // [rsp+Fh] [rbp-51h] BYREF
  const char *v10; // [rsp+10h] [rbp-50h]
  __int128 v11; // [rsp+18h] [rbp-48h]
  unsigned __int64 v12; // [rsp+28h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v4 = (*(__int64 (**)(void))(qword_24798 + 536))();
  setup_new_execution(&v9, 1);
  v10 = nullptr;
  v11 = 0;
  make_script_ns();
  v5 = src;
  if ( (_QWORD)v11 )
    v5 = v10;
  v6 = (__int64 *)sub_12E70(a1, a2, v5);
  v7 = sub_17D00(a1, (__int64 *)a2, v6, a3, (__int64 *)"IDAPython_UnLoadProcMod", 0, 0);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  setup_new_execution(&v9, 0);
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v4);
  return v7;
}


__int64 __fastcall sub_18660(__int64 a1, char *a2, const char *a3, __int64 *a4)
{
  unsigned int v6; // r12d
  __int64 *v7; // rax
  unsigned int v8; // ebx
  char v10; // [rsp+17h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v6 = (*(__int64 (**)(void))(qword_24798 + 536))();
  setup_new_execution(&v10, 1);
  v7 = (__int64 *)sub_12E70(a1, a2, a3);
  v8 = sub_17D00(a1, (__int64 *)a2, v7, a4, (__int64 *)"IDAPython_ExecScript", 0, 0);
  setup_new_execution(&v10, 0);
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v6);
  return v8;
}


void __fastcall sub_F6E80(
        __int64 *a1,
        _DWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        _QWORD *a8)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // rax
  char *v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // r9

  v10 = sub_D9DB0(a4, 1u, a7, (__int64)a3, a4, a5, (int)a6);
  v14 = sub_D9DB0(a5, 1u, a7, v11, v12, a5, v13);
  v15 = " ";
  if ( !*a3 )
    v15 = "";
  v16 = (_QWORD *)sub_E8280(*a6, "error in %s %s%s%s: %s", v10, v14, v15, a3, *a8);
  *a2 = 1;
  v17 = v16;
  sub_F11D0(*a1, v16, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v18);
  if ( v17 )
    sub_C9250(*a6, v17);
}

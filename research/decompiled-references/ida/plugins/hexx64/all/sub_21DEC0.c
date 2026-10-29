__int64 __fastcall sub_21DEC0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4, double a5)
{
  __int64 v5; // r8
  unsigned int v7; // r12d
  unsigned int tinfo_size; // r13d
  _DWORD v10[4]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v5 = a1[5];
  v12 = __readfsqword(0x28u);
  v7 = sub_FAF50(a1, a2, a3, a4, v5, 1);
  if ( (_BYTE)v7 && a3 )
  {
    tinfo_size = get_tinfo_size();
    sub_1C7740(v10, (__int64)a1, a3, tinfo_size, a5);
    sub_1C6010((__int64)v11, (__int64)a1, (__int64)v10, tinfo_size, a5);
    copy_argloc();
    cleanup_argloc();
    cleanup_argloc();
  }
  return v7;
}


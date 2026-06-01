__int64 __fastcall sub_2192C0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r8
  unsigned int v6; // r12d
  signed int tinfo_size; // r13d
  _DWORD v9[4]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v10[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v4 = a1[5];
  v11 = __readfsqword(0x28u);
  v6 = sub_F6A90(a1, a2, a3, a4, v4, 1);
  if ( (_BYTE)v6 && a3 )
  {
    tinfo_size = get_tinfo_size();
    sub_1C30C0(v9, (__int64)a1, a3, tinfo_size);
    sub_1C1990((__int64)v10, (__int64)a1, (__int64)v9, tinfo_size);
    copy_argloc();
    cleanup_argloc();
    cleanup_argloc();
  }
  return v6;
}


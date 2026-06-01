unsigned __int64 __fastcall sub_26FC0(__int64 *a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  _QWORD v8[5]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a3 != 1 )
    return sub_16380((__int64)a1, a2, a3, a4);
  v5 = *a4;
  v8[4] = a1;
  v8[1] = 3;
  v8[2] = v5;
  v8[0] = &off_3C860;
  v6 = *a1;
  v8[3] = -1;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 32);
  if ( v7 == sub_255B0 )
  {
    if ( !(unsigned int)sub_25490((__int64)a1, (__int64)v8, a2, a1[70], 1) )
      sub_25490((__int64)a1, (__int64)v8, a2, a1[71], 0);
  }
  else
  {
    v7((__int64)a1, (__int64)v8, a2);
  }
  return v9 - __readfsqword(0x28u);
}

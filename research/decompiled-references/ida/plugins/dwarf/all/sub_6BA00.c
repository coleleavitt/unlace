_BOOL8 __fastcall sub_6BA00(_QWORD *a1, __int64 a2, __int64 a3)
{
  const char *v4; // rax
  const char *v5; // rax
  const char *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v11[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD *))(a2 + 352))(a3, &v8, v11) )
  {
    v4 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(a2 + 464))(v11[0]);
    sub_1D740((__int64)"ERROR: %s\n", v4);
  }
  if ( a1[3] != v8 )
    return 0;
  v11[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD *))(a2 + 360))(a3, &v9, v11) )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(a2 + 464))(v11[0]);
    sub_1D740((__int64)"ERROR: %s\n", v5);
  }
  if ( a1[2] != v9 )
    return 0;
  if ( !a1[4] )
    return 1;
  v11[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, _QWORD *))(a2 + 384))(a3, &v10, v11) )
  {
    v7 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(a2 + 464))(v11[0]);
    sub_1D740((__int64)"ERROR: %s\n", v7);
  }
  return !v10 || v10 >= a1[4];
}


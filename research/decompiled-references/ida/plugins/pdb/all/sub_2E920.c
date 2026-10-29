bool __fastcall sub_2E920(__int64 a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 (__fastcall *v4)(__int64, int *); // rax
  int *v5; // rax
  __int64 **v6; // rdi
  __int64 (__fastcall *v7)(__int64, int *); // rax
  int *v8; // rax
  int v9; // eax
  int v10; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( !a2 || !*(_QWORD *)(a2 + 24) || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
    return 0;
  v3 = *(__int64 ***)(a1 + 24);
  v4 = (__int64 (__fastcall *)(__int64, int *))(*v3)[22];
  if ( v4 == sub_2DEA0 )
  {
    v5 = (int *)sub_2CEC0(v3[2], 0x80000, 0x400u, 0x4000000);
    if ( !v5 )
      return 0;
    v10 = *v5;
  }
  else if ( (unsigned int)v4((__int64)v3, &v10) )
  {
    return 0;
  }
  v6 = *(__int64 ***)(a2 + 24);
  v7 = (__int64 (__fastcall *)(__int64, int *))(*v6)[22];
  if ( v7 != sub_2DEA0 )
  {
    if ( !(unsigned int)v7((__int64)v6, &v11) )
    {
      v9 = v11;
      return v10 == v9;
    }
    return 0;
  }
  v8 = (int *)sub_2CEC0(v6[2], 0x80000, 0x400u, 0x4000000);
  if ( !v8 )
    return 0;
  v9 = *v8;
  return v10 == v9;
}


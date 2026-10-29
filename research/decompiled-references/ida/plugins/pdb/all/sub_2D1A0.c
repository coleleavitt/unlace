__int64 __fastcall sub_2D1A0(__int64 a1)
{
  __int64 **v1; // rdi
  __int64 (__fastcall *v2)(__int64, _QWORD *); // rax
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // edx
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(__int64 ***)(a1 + 24);
  v6[1] = __readfsqword(0x28u);
  v6[0] = -1;
  v2 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v1)[27];
  if ( v2 == sub_2D160 )
  {
    v3 = sub_2CEC0(v1[2], 0x40000000, 0x40000000u, 0x40000000);
    if ( v3 )
      return *(_QWORD *)v3;
    return v6[0];
  }
  v5 = v2((__int64)v1, v6);
  result = -1;
  if ( v5 >= 0 )
    return v6[0];
  return result;
}


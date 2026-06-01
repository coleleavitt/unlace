__int64 __fastcall sub_1D5E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, unsigned __int8, __int64); // rax
  __int64 v4; // rax
  unsigned int v5; // r12d
  _QWORD v7[9]; // [rsp+10h] [rbp-48h] BYREF

  v7[3] = __readfsqword(0x28u);
  sub_24D10(v7, 48);
  v2 = a1 + 864;
  v3 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)v2 + 16LL);
  if ( v3 == sub_9440 )
    v4 = sub_216D0(v2, 48, v7, 0);
  else
    v4 = v3(v2, 48u, (__int64)v7);
  if ( v4 )
  {
    v5 = unpack_dd();
    if ( v5 == 1 )
      sub_1D580(a1);
    qfree();
  }
  else
  {
    v5 = -2;
  }
  if ( v7[0] )
  {
    v7[1] = 0;
    qfree();
  }
  return v5;
}


bool __fastcall sub_13360(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v4[7])(_QWORD, unsigned __int64 *, _QWORD); // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4[3] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))__readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 2216) )
  {
    sub_EC40();
    v2 = *(_QWORD *)(a1 + 8);
  }
  v4[0] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&off_3C1D0;
  v4[1] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))v2;
  return (unsigned int)sub_12B20(a1, v4, a2) == 1;
}

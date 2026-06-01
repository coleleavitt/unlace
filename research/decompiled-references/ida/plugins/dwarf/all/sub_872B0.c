__int64 __fastcall sub_872B0(__int64 a1, _QWORD *a2)
{
  const char *v2; // rax
  unsigned __int16 v4; // [rsp+Eh] [rbp-1Ah] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int16 *, _QWORD *))(*(_QWORD *)(a1 + 256) + 200LL))(
         *a2,
         &v4,
         v5) )
  {
    v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 256) + 464LL))(v5[0]);
    sub_1D740((__int64)"ERROR: %s\n", v2);
  }
  return v4;
}


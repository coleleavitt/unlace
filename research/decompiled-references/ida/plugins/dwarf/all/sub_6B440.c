__int64 __fastcall sub_6B440(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD *))(a1 + 376))(a2, &v6, v7) )
    return v6 + *(_QWORD *)(*(_QWORD *)(a3 + 72) + 176LL) - *(_QWORD *)(*(_QWORD *)(a3 + 72) + 184LL);
  v5 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(a1 + 464))(v7[0]);
  sub_1D740((__int64)"ERROR: %s\n", v5);
  return -1;
}


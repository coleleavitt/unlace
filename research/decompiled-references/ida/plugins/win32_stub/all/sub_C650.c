__int64 __fastcall sub_C650(_BYTE *a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  __int64 v2; // rbx

  if ( !a1[208] )
    return 0xFFFFFFFFLL;
  a1[208] = 0;
  sub_FF70();
  sub_C470((__int64)&off_388A0, 2u, 0);
  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v1 == sub_A830 )
    v2 = (__int64)(a1 + 224);
  else
    v2 = v1((__int64)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
}


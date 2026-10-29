__int64 __fastcall sub_139C0(_BYTE *a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  __int64 v2; // rbx

  if ( !a1[208] )
    return 0xFFFFFFFFLL;
  a1[208] = 0;
  if ( (unsigned __int8)sub_13830((__int64)&off_7D340, 5u, 0) )
    sub_54FE0(0);
  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v1 == sub_F0E0 )
    v2 = (__int64)(a1 + 224);
  else
    v2 = v1((__int64)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
}


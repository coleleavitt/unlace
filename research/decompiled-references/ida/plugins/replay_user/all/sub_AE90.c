__int64 __fastcall sub_AE90(_BYTE *a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  __int64 v2; // rbx
  __int64 (*v3)(); // rax

  if ( !a1[208] )
    return 0xFFFFFFFFLL;
  a1[208] = 0;
  setup_lowcnd_regfuncs();
  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v1 == sub_9510 )
    v2 = (__int64)(a1 + 224);
  else
    v2 = ((__int64 (__fastcall *)(_BYTE *, _QWORD))v1)(a1, 0);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 112LL))(v2, 0);
  v3 = *(__int64 (**)())(*(_QWORD *)v2 + 88LL);
  if ( v3 == sub_9430 )
    return 1;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (*)(), __int64))v3)(v2, 0, sub_9430, 1);
}


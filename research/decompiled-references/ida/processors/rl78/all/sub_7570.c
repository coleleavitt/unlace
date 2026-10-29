__int64 __fastcall sub_7570(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  void (__fastcall *v5)(__int64, __int64); // rcx

  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, 91);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(
    a2,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * *(unsigned __int16 *)(a3 + 6)),
    33);
  if ( (*(_BYTE *)(a3 + 32) & 1) != 0 )
  {
    v4 = sub_7520(a2 + 224, a3);
    v5(a2, 43);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, a3, v4);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, 93);
}


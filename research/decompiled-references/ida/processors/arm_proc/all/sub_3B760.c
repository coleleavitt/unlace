__int64 __fastcall sub_3B760(__int64 a1, __int64 a2)
{
  const char *v2; // rdx

  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 368LL))(a2, 1, 0, 0);
  v2 = &s1;
  if ( *(_QWORD *)(a1 + 248) )
    v2 = *(const char **)(a1 + 240);
  sub_39BE0(a2, (__int64)"ARM architecture: %s", v2);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 368LL))(a2, 14, 0, 0);
}


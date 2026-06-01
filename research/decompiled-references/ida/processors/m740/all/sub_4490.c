__int64 __fastcall sub_4490(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx

  v2 = &qword_7630;
  if ( *(_QWORD *)(a1 + 144) )
    v2 = *(__int64 **)(a1 + 136);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 368LL))(a2, 11, 0, v2);
}


__int64 __fastcall sub_12880(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rdi

  v5 = *(_QWORD *)(a1 + 1072);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 128LL))(v5, a3, a4, a5);
  else
    return 0;
}


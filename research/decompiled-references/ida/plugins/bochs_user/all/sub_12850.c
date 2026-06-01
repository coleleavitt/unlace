__int64 __fastcall sub_12850(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 1072);
  if ( !v4 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) )
    return a4;
  return 0;
}


__int64 __fastcall sub_12990(__int64 a1, int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 1072);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
  else
    return 2 * (unsigned int)(a2 != 4);
}


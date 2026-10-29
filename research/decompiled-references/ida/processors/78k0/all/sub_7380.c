__int64 __fastcall sub_7380(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdx

  v2 = &qword_A918;
  if ( a1[24] )
    v2 = (__int64 *)a1[23];
  v3 = &qword_A918;
  if ( a1[18] )
    v3 = (__int64 *)a1[17];
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 368LL))(a2, 11, v3, v2);
}


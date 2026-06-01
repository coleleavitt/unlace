__int64 __fastcall sub_7840(_QWORD *a1, __int64 a2)
{
  char *v2; // rcx
  char *v3; // rdx

  v2 = byte_CF28;
  if ( a1[24] )
    v2 = (char *)a1[23];
  v3 = byte_CF28;
  if ( a1[18] )
    v3 = (char *)a1[17];
  return (*(__int64 (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)a2 + 368LL))(a2, 15, v3, v2);
}


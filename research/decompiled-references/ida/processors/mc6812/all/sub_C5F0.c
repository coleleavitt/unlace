__int64 __fastcall sub_C5F0(_QWORD *a1, __int64 a2)
{
  char *v2; // rcx
  char *v3; // rdx

  v2 = byte_11DF8;
  if ( a1[24] )
    v2 = (char *)a1[23];
  v3 = byte_11DF8;
  if ( a1[18] )
    v3 = (char *)a1[17];
  (*(void (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)a2 + 368LL))(a2, 3, v3, v2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
}


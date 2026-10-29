__int64 __fastcall sub_EDD0(char *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(char *, __int64, _QWORD); // rcx

  v1 = a1[257];
  v2 = *(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)a1 + 280LL);
  if ( (unsigned __int8)(v1 - 1) > 0x15u )
    return v2(a1, 16, 0);
  else
    return v2(a1, 16, *(&off_23040 + v1));
}


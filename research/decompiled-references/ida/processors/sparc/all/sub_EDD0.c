__int64 __fastcall sub_EDD0(_QWORD *a1, __int64 a2)
{
  char **v3; // rax
  const char *v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v3 = &off_17AC0;
  v4 = "#ASI_NUCLEUS";
  if ( (*(_BYTE *)(a1[77] + 160LL) & 8) != 0 )
  {
    v4 = "#ASI_IUSER";
    v3 = &off_17DC0;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v6 = *((unsigned __int8 *)v3 + 8);
    if ( v5 < v6 )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 17);
    if ( v6 == v5 )
      break;
    v4 = v3[2];
    v3 += 2;
    if ( !v4 )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 17);
  }
  return (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v4, 32);
}


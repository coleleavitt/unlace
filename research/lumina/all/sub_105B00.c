__int64 __fastcall sub_105B00(__int64 a1, const char *a2, const char *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 *v10; // rax

  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 32LL * a4);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 197LL) )
  {
    return 0;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, const char *, const char *, __int64, _QWORD))(v4 + 496))(
           *(_QWORD *)(v4 + 504),
           20,
           a2,
           a3,
           v5,
           *(_QWORD *)(a1 + 360));
    v8 = v7;
    if ( v7 == 1 )
    {
      v10 = sub_105970("%s.%s", a2, a3);
      if ( *(int *)(v4 + 40) > 2 || a4 )
        v10 = sub_105970("%s.%z", v5, v10);
      sub_DBD10(a1, "access to %z is prohibited", v10);
      *(_DWORD *)(a1 + 24) = 23;
    }
    else if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      sub_DBD10(a1, "authorizer malfunction");
      *(_DWORD *)(a1 + 24) = 1;
    }
  }
  return v8;
}

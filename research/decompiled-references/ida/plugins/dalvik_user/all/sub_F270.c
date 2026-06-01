__int64 __fastcall sub_F270(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  void (__fastcall *v4)(__int64, const char *, const char *); // rax
  const char *v5; // rdx
  const char *v6; // rsi

  v3 = sub_1E460();
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(__int64, const char *, const char *))(v3 + 48);
    v5 = nptr;
    if ( a1[6] )
    {
      v5 = (const char *)a1[5];
      v6 = nptr;
      if ( !a1[2] )
        goto LABEL_4;
    }
    else
    {
      v6 = nptr;
      if ( !a1[2] )
      {
LABEL_4:
        v4(a2, v6, v5);
        return 0;
      }
    }
    v6 = (const char *)a1[1];
    goto LABEL_4;
  }
  return 0;
}


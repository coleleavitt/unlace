__int64 __fastcall dirtree_chdir(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  char v3; // dl
  __int64 (__fastcall *v4)(); // rax

  v1 = sub_7759C0();
  result = 3;
  if ( v3 )
  {
    if ( v1 == -1 )
    {
      return 2;
    }
    else
    {
      v4 = *(__int64 (__fastcall **)())(*a1 + 104LL);
      if ( v4 != nullsub_236 )
        ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v4)(a1, a1[12], v1);
      a1[12] = v1;
      return 0;
    }
  }
  return result;
}

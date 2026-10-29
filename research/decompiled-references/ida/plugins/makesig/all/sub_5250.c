__int64 __fastcall sub_5250(int a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax

  if ( a1 == -2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    sub_5190((__int64 *)(v4 + 8200), v4);
    return 1;
  }
  else
  {
    if ( a1 == 1 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1, v3, 4096);
      sub_5190((__int64 *)(v3 + 8200), v3);
    }
    return 1;
  }
}


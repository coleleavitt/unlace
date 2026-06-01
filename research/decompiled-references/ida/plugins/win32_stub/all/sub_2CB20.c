__int64 __fastcall sub_2CB20(__int64 a1, const char *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp

  v2 = strlen(a2);
  v3 = (*(__int64 (__fastcall **)(const char *, _QWORD))(qword_3BC20 + 32))(a2, v2);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(qword_3BC20 + 88))(v3, 0, 0, 0);
  (*(void (__fastcall **)(__int64))(qword_3BC20 + 16))(v4);
  return v5;
}


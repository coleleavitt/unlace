__int64 __fastcall sub_1EB4F0(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  const char *v6; // rcx
  __int64 result; // rax

  v6 = s1;
  if ( *(_QWORD *)(a1 + 504) )
    v6 = *(const char **)(a1 + 496);
  result = sub_32B650(a1, a2, a3, (_DWORD)v6, a5, a6);
  *(_QWORD *)(a1 + 504) = 0;
  return result;
}


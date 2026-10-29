__int64 __fastcall sub_12250(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  char v3; // dl
  __int64 result; // rax

  v2 = s1;
  if ( *(_QWORD *)(a2 + 32) )
    v2 = *(const char **)(a2 + 24);
  sub_11D90(*(_QWORD *)(a1 + 33312), (__int64)"%s", v2);
  v3 = sub_121C0();
  result = 0;
  if ( v3 )
    return (unsigned int)(*(_DWORD *)(a1 + 160) - 1);
  return result;
}

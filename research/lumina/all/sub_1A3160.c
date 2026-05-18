__int64 __fastcall sub_1A3160(__int64 a1, __int64 a2)
{
  int v4; // esi
  const char *v5; // rdi
  void *v6; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( !unk_2439A0 )
      sub_198E10(3062);
    BUG();
  }
  v4 = *(_DWORD *)(a1 + 40);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v5 = *(const char **)(a1 + 16);
  v6 = dlopen(v5, v4);
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 || (result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2), !(_BYTE)result) )
  {
    if ( a2 && *(_QWORD *)(a2 + 8) <= 1u )
    {
      dlerror();
      sub_299F0((char **)a2);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

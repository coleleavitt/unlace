__int64 __fastcall sub_C35A0(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 80);
  v3 = *v2;
  if ( !*(_BYTE *)(a1 + 11) )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 40))(v2, 2);
    if ( (_DWORD)result )
      return result;
    v2 = *(__int64 **)(a1 + 80);
    v3 = *v2;
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 48))(v2, a1 + 104);
}

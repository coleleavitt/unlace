__int64 __fastcall sub_CA1F0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD); // rax
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 128);
  if ( v3 )
    result = v3(v2, 0, 0);
  else
    result = 0;
  *((_DWORD *)a1 + 23) = result;
  return result;
}

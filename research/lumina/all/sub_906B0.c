__int64 __fastcall sub_906B0(__int64 a1, size_t *a2, const void *a3)
{
  __int64 result; // rax

  result = sub_90530(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), a3, *a2);
  if ( (_DWORD)result )
    *a2 = 0;
  return result;
}

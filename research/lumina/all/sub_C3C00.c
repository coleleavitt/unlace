__int64 __fastcall sub_C3C00(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v3)(_QWORD); // rdx

  v1 = *(_QWORD *)(a1 + 8);
  result = 0;
  v3 = *(__int64 (__fastcall **)(_QWORD))(v1 + 632);
  if ( v3 && *(int *)(v1 + 648) >= 0 )
  {
    result = v3(*(_QWORD *)(v1 + 640));
    if ( (_DWORD)result )
      ++*(_DWORD *)(v1 + 648);
    else
      *(_DWORD *)(v1 + 648) = -1;
  }
  return result;
}

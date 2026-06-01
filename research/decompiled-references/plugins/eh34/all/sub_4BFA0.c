__int64 __fastcall sub_4BFA0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  result = *a2;
  *(_QWORD *)a1 = *a2;
  return result;
}

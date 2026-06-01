unsigned __int64 __fastcall sub_6FF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 result; // rax

  v3 = *(unsigned int *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = v3;
  result = *(unsigned int *)(a3 + 4) | (unsigned __int64)(v3 << 32);
  *(_QWORD *)(a2 + 8) = result;
  return result;
}

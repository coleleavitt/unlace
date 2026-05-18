__int64 __fastcall sub_165BC0(const char *a1, __int64 a2)
{
  __int64 result; // rax

  result = strtol(a1, nullptr, 10);
  *(_WORD *)(a2 + 104) = result;
  return result;
}

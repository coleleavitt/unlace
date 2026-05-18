time_t __fastcall sub_4C810(__int64 a1)
{
  time_t v1; // rax
  time_t result; // rax

  v1 = time(nullptr);
  *(_BYTE *)(a1 + 504) = 0;
  result = v1 + *(int *)(a1 + 500);
  *(_QWORD *)(a1 + 488) = result;
  return result;
}

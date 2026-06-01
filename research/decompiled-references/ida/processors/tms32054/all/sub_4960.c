__int64 __fastcall sub_4960(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 1) = 7;
  *(_BYTE *)(a2 + 5) = 0;
  result = get_wide_byte();
  *(_QWORD *)(a2 + 16) = result;
  ++*(_WORD *)(a1 + 26);
  return result;
}


__int64 __fastcall sub_EC50(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 1;
  result = *((unsigned __int16 *)qword_18DC0 + a2);
  *(_BYTE *)(a3 + 5) = 2;
  *(_WORD *)(a3 + 6) = result;
  return result;
}


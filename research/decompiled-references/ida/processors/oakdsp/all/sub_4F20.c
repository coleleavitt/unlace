__int64 __fastcall sub_4F20(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = 0;
  if ( (a3 & 7u) <= 5 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (a3 >> 3) & 3;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  return result;
}


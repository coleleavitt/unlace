__int64 __fastcall sub_D680(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int16 v4; // dx

  result = 0;
  if ( a3 > 3 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    if ( a3 <= 15 )
      v4 = *((unsigned __int8 *)&qword_17908 + a3 - 4);
    else
      v4 = (a3 & 7) + 8 * (a3 > 23) + 18;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  return result;
}


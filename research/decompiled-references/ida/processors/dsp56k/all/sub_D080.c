__int64 __fastcall sub_D080(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int16 v4; // dx

  result = 0;
  if ( a3 > 1 )
  {
    v4 = *((char *)&qword_178F0 + a3);
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  return result;
}


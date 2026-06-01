__int64 __fastcall sub_53CC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  const char *v7; // rdx
  __int16 v8; // cx
  __int64 v9; // rdx

  result = sub_15D50(a1, a2, a3, a4, a5, a6);
  v7 = src;
  if ( a1[130] )
    v7 = (const char *)a1[129];
  *(_QWORD *)(result + 24) = v7;
  v8 = *(_WORD *)(result + 82);
  *(_QWORD *)(result + 72) = a1[61];
  *(_BYTE *)(result + 80) = a1[62];
  v9 = *(_QWORD *)(result + 32);
  if ( (__int64)a1[116] <= 0 )
  {
    *(_WORD *)(result + 82) = v8 & 0xFFFE;
    *(_QWORD *)(result + 32) = v9 & 0xFFFFFF7FFFFFFFFFLL;
  }
  else
  {
    *(_WORD *)(result + 82) = v8 | 1;
    *(_QWORD *)(result + 32) = v9 | 0x8000000000LL;
  }
  return result;
}


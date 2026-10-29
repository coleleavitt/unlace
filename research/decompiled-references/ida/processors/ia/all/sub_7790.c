__int64 __fastcall sub_7790(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi

  v3 = 0;
  v4 = ((unsigned int)(a2 >> *(_DWORD *)(a1 + 28)) & 3) - 1;
  if ( (unsigned int)v4 <= 2 )
    v3 = dword_CD88[v4];
  *a3 = v3;
  return 0;
}


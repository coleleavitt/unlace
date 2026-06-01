__int64 __fastcall sub_48E0(__int64 a1, int a2, char a3)
{
  __int16 v3; // dx
  __int64 result; // rax

  v3 = (a3 & 1) + 1;
  if ( a2 == 4 )
  {
    *(_BYTE *)(a1 + 28) = 1;
    *(_BYTE *)(a1 + 29) = v3;
  }
  else
  {
    result = a1 + 40LL * (a2 - 1);
    *(_BYTE *)(result + 41) = 1;
    *(_BYTE *)(result + 45) = 0;
    *(_WORD *)(result + 46) = v3;
  }
  return result;
}


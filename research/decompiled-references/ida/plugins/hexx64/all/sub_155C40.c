__int64 __fastcall sub_155C40(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, double a5)
{
  char v7; // dl
  __int64 result; // rax

  v7 = *(_BYTE *)a4;
  if ( a2 )
  {
    if ( v7 == 4 && (unsigned __int8)sub_1205A0(*(_BYTE **)(a4 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), 0) )
      return sub_155AA0(a2, a3, a4, 0, a5);
    else
      return 1;
  }
  else
  {
    result = 1;
    if ( v7 == 4 )
      return (unsigned int)sub_1205A0(*(_BYTE **)(a4 + 8), a1, 0) ^ 1;
  }
  return result;
}


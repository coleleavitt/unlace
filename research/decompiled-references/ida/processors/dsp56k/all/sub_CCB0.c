__int64 __fastcall sub_CCB0(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 4;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 2;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
  v3 = (unsigned __int8)a3;
  if ( a3 < 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
    v3 = (unsigned __int8)~a3 + 1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v3;
  return 1;
}


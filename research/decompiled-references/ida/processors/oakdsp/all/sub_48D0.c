__int64 __fastcall sub_48D0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rax

  if ( a4 < 0 )
    a4 = a3 + (unsigned __int8)a4;
  if ( a4 )
    a3 = a4;
  if ( a3 > 0x2B )
    return 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3;
  v4 = *(_QWORD *)(a1 + 248);
  if ( *(_WORD *)(v4 + 6) == 255 )
    return 0;
  *(_QWORD *)(a1 + 248) = v4 + 40;
  return 1;
}


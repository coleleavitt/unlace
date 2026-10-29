__int64 __fastcall sub_E390(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v4; // eax

  v3 = *(_QWORD *)(a1 + 248);
  v4 = a3 >> 13;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(v3 + 1) = 5;
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = (unsigned __int16)v4;
  }
  else
  {
    *(_BYTE *)(v3 + 33) |= 0x10u;
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = (unsigned __int16)v4;
    sub_E190(a1, a2);
  }
  return 1;
}


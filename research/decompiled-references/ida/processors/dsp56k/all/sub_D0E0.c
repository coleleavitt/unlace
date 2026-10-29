__int64 __fastcall sub_D0E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 248);
  if ( a3 == 1 )
    *(_BYTE *)(v3 + 33) |= 0x20u;
  else
    *(_BYTE *)(v3 + 33) |= 0x10u;
  return 1;
}


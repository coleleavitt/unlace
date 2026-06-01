__int64 __fastcall sub_1B3D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 792) && (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"Bochs module loaded\n");
  *(_BYTE *)(a1 + 1080) = 0;
  sub_1B030(a1);
  v1 = sub_F250();
  v2 = *(_QWORD *)(v1 + 32);
  v3 = v2;
  BYTE1(v3) = BYTE1(v2) & 0x7F;
  if ( *(_DWORD *)(a1 + 9316) == 1 )
  {
    BYTE1(v2) |= 0x80u;
    v3 = v2;
  }
  *(_QWORD *)(v1 + 32) = v3 | 0x100000000LL;
  sub_15790((__int64 *)a1);
  return 1;
}


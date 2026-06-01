void __fastcall sub_19890(__int64 a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v4; // rdi

  *(_DWORD *)(a1 + 16) = 0;
  v2 = a1 + 24;
  *(_QWORD *)(v2 - 16) = 0xFFFFFFFF00000000LL;
  sub_26150(v2, 0xFFFFFFFFLL);
  *(_BYTE *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_WORD *)(a1 + 81) = 0;
  *(_BYTE *)(a1 + 83) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  set_debug_event_code();
  v3 = *(_QWORD *)(a1 + 1240) == 0;
  *(_DWORD *)(a1 + 1224) = 0;
  if ( !v3 )
    *(_QWORD *)(a1 + 1240) = 0;
  v4 = *(_QWORD *)(a1 + 1264);
  *(_BYTE *)(a1 + 1256) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1272) = 0;
    qfree();
    *(_QWORD *)(a1 + 1264) = 0;
    *(_QWORD *)(a1 + 1280) = 0;
  }
  *(_WORD *)(a1 + 1288) = 0;
  sub_19810(a1);
  *(_BYTE *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 1292) = 0;
}


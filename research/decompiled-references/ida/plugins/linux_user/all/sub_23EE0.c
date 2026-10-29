void __fastcall sub_23EE0(__int64 a1, int a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[3]; // [rsp+140h] [rbp-1098h] BYREF
  char *v8[2]; // [rsp+158h] [rbp-1080h]
  __int128 v9; // [rsp+168h] [rbp-1070h]
  __int128 v10; // [rsp+178h] [rbp-1060h]
  unsigned __int64 v11; // [rsp+1198h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 656) = a2;
  if ( *(_QWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1264) = 0;
    qfree();
    a2 = *(_DWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 1256) = 0;
    *(_QWORD *)(a1 + 1272) = 0;
  }
  *(_DWORD *)(a1 + 1340) = a2;
  *(_BYTE *)(a1 + 1348) = 0;
  *(_DWORD *)(a1 + 1408) = 0;
  sub_1A040((_QWORD *)a1, a2);
  qwait_timed();
  sub_32190(a1, (unsigned int)"process pid/tid: %d\n", *(_DWORD *)(a1 + 656), v2, v3, v4);
  *(_BYTE *)(a1 + 1412) = 0;
  *(_OWORD *)v8 = 0;
  v7[0] = 0xFFFFFFFFLL;
  v7[1] = -1;
  v7[2] = 0;
  v9 = 0;
  v10 = 0;
  set_debug_event_code();
  sub_10240(v7, 1, 2306, v5, v6);
}


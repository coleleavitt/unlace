__int64 sub_2720()
{
  __int64 v0; // rbx
  _QWORD v2[5]; // [rsp+0h] [rbp-28h] BYREF

  v2[1] = __readfsqword(0x28u);
  netnode_check(v2, "$ PE header", 0, 0);
  if ( v2[0] == -1 )
    return 0;
  v0 = qalloc_or_throw(168);
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_QWORD *)v0 = off_9CE0;
  *(_QWORD *)(v0 + 104) = off_9D10;
  *(_QWORD *)(v0 + 96) = 0;
  *(_QWORD *)(v0 + 112) = 0;
  *(_QWORD *)(v0 + 136) = 0;
  *(_QWORD *)(v0 + 144) = 0;
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  *(_OWORD *)(v0 + 120) = 0;
  netnode_check(v0 + 152, "$ PE header", 0, 0);
  *(_BYTE *)(v0 + 164) = 0;
  *(_DWORD *)(v0 + 160) = 0;
  hook_event_listener(0, v0 + 104, v0, 0);
  return v0;
}

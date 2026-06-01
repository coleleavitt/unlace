__int64 sub_5D50()
{
  __int64 v0; // rbx
  _BYTE *v1; // rax

  v0 = qalloc_or_throw(200);
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_QWORD *)(v0 + 120) = v0;
  *(_QWORD *)v0 = off_12BE8;
  *(_QWORD *)(v0 + 104) = off_12BC0;
  *(_QWORD *)(v0 + 96) = 0;
  *(_QWORD *)(v0 + 112) = 0;
  *(_QWORD *)(v0 + 128) = off_12B98;
  *(_QWORD *)(v0 + 136) = v0;
  *(_QWORD *)(v0 + 144) = 0;
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  *(_OWORD *)(v0 + 152) = 0;
  v1 = (_BYTE *)qvector_reserve(v0 + 144, 0, 1, 1);
  *(_QWORD *)(v0 + 144) = v1;
  *(_QWORD *)(v0 + 152) = 1;
  *v1 = 0;
  *(_DWORD *)(v0 + 168) = 0;
  *(_BYTE *)(v0 + 172) = 0;
  *(_QWORD *)(v0 + 176) = 0;
  *(_OWORD *)(v0 + 184) = 0;
  sub_3DF0(v0);
  hook_event_listener(0, v0 + 104, v0, 0);
  return v0;
}

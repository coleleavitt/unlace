__int64 sub_CA90()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  bool v6; // zf

  v0 = operator new(0x88u);
  v1 = operator new(0x18u);
  *(_BYTE *)(v1 + 20) = 1;
  v2 = v1;
  *(_QWORD *)v1 = &off_1BBC0;
  *(_QWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  v3 = qfopen();
  *(_QWORD *)(v2 + 8) = v3;
  if ( v3 )
  {
    qfseek();
    *(_DWORD *)(v2 + 16) = qftell();
    qfseek();
  }
  *(_QWORD *)(v0 + 8) = 0;
  *(_QWORD *)v0 = &off_1BBF0;
  *(_QWORD *)(v0 + 16) = 0;
  *(_QWORD *)(v0 + 24) = 0;
  *(_QWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 56) = 0x100000001LL;
  *(_OWORD *)(v0 + 32) = 0;
  v4 = (_BYTE *)operator new[](1u);
  *(_QWORD *)(v0 + 48) = v4;
  *v4 = 0;
  *(_QWORD *)(v0 + 64) = 0;
  *(_QWORD *)(v0 + 72) = 0x100000001LL;
  v5 = (_BYTE *)operator new[](1u);
  *(_QWORD *)(v0 + 64) = v5;
  *v5 = 0;
  *(_QWORD *)(v0 + 88) = 0;
  *(_QWORD *)(v0 + 96) = 0;
  *(_WORD *)(v0 + 104) = 257;
  *(_QWORD *)(v0 + 112) = 0;
  *(_QWORD *)(v0 + 120) = 0;
  *(_WORD *)(v0 + 128) = 257;
  if ( v2 )
  {
    *(_DWORD *)(v0 + 44) = 1;
    sub_B580(v0, (int *)v2);
    v6 = *(_BYTE *)(v2 + 20) == 0;
    *(_QWORD *)v2 = &off_1BBC0;
    if ( !v6 && *(_QWORD *)(v2 + 8) )
      qfclose();
    operator delete((void *)v2, 0x18u);
    sub_C820(v0);
    *(_QWORD *)(v0 + 16) = *(_QWORD *)(v0 + 24);
  }
  return v0;
}


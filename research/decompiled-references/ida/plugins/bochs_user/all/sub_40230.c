__int64 __fastcall sub_40230(_QWORD *a1)
{
  __int64 v1; // rdx

  *a1 = off_71D98;
  v1 = operator new(0x1068u);
  *(_QWORD *)v1 = &off_71D78;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 4128) = 0;
  memset(
    (void *)((v1 + 48) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 48) & 0xFFFFFFF8) + 4136) >> 3));
  *(_QWORD *)(v1 + 4160) = v1 + 4144;
  *(_DWORD *)(v1 + 4144) = 0;
  *(_QWORD *)(v1 + 4152) = 0;
  *(_QWORD *)(v1 + 4168) = v1 + 4144;
  *(_QWORD *)(v1 + 4176) = 0;
  *(_QWORD *)(v1 + 4184) = 0;
  *(_QWORD *)(v1 + 4192) = 0x700000000LL;
  a1[1] = v1;
  return 0x700000000LL;
}


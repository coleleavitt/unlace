__int64 __fastcall sub_3E5F0(_QWORD *a1)
{
  __int64 v1; // rdx

  *a1 = off_71CF0;
  v1 = operator new(0x1098u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 24) = v1 + 8;
  *(_QWORD *)(v1 + 32) = v1 + 8;
  *(_QWORD *)(v1 + 4216) = v1 + 4200;
  *(_QWORD *)(v1 + 4224) = v1 + 4200;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 4168) = 0;
  *(_OWORD *)(v1 + 4232) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 4176) = 0;
  *(_QWORD *)(v1 + 4184) = 0;
  *(_DWORD *)(v1 + 4200) = 0;
  *(_QWORD *)(v1 + 4208) = 0;
  *(_BYTE *)(v1 + 4240) = 1;
  *(_OWORD *)(v1 + 40) = 0;
  memset(
    (void *)((v1 + 88) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 88) & 0xFFFFFFF8) + 4176) >> 3));
  a1[1] = v1;
  return 0;
}


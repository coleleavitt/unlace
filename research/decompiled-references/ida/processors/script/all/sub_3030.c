__int64 __fastcall sub_3030(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // r14
  bool v5; // zf

  if ( *(_BYTE *)(a1 + 904) )
  {
    v1 = a1 + 120;
    sub_4230(&off_76C0, a1 + 288);
    v5 = *(_BYTE *)(a1 + 905) == 0;
    *(_BYTE *)(a1 + 904) = 0;
    if ( v5 )
      goto LABEL_3;
  }
  else
  {
    v1 = a1 + 120;
    if ( !*(_BYTE *)(a1 + 905) )
      goto LABEL_3;
  }
  sub_4230(&off_7460, v1);
  *(_BYTE *)(a1 + 905) = 0;
LABEL_3:
  if ( *(_QWORD *)(a1 + 208) )
  {
    sub_4540(a1 + 720);
    *(_QWORD *)(a1 + 208) = 0;
  }
  if ( *(_QWORD *)(a1 + 216) )
  {
    sub_4540(a1 + 744);
    *(_QWORD *)(a1 + 216) = 0;
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    v2 = *(_QWORD *)(a1 + 264);
    v3 = v2 + 16LL * *(_QWORD *)(a1 + 272);
    while ( v3 != v2 )
    {
      v2 += 16;
      qfree();
    }
    *(_QWORD *)(a1 + 232) = 0;
  }
  free_idcv();
  *(_QWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 856) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  memset(
    (void *)((a1 + 128) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)a1 + 128) & 0xFFFFFFF8) + 144) >> 3));
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  memset(
    (void *)((a1 + 296) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 288 - (((_DWORD)a1 + 296) & 0xFFFFFFF8) + 416) >> 3));
  return 0;
}


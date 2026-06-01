unsigned __int64 *__fastcall sub_336BF0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 *result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  while ( v1 )
  {
    v3 = v1;
    v1 = *(_QWORD *)(v1 + 8);
    sub_11C7E0(v3 + 64);
    sub_11C7E0(v3 + 48);
    sub_11C7E0(v3 + 32);
    qfree();
  }
  v4 = *(_QWORD *)(a1 + 392);
  *(_DWORD *)(a1 + 24) = 512;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = -1;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree();
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v5 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 88) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree();
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v6 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 128) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree();
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v7 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 168) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree();
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  v8 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  v9 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = 0;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree();
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  v10 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 288) = 0;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree();
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree();
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  if ( *(_QWORD *)(a1 + 344) )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree();
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  sub_13F6F0((unsigned __int64 **)(a1 + 424));
  *(_BYTE *)(a1 + 440) = 1;
  result = sub_13F6F0((unsigned __int64 **)(a1 + 456));
  *(_BYTE *)(a1 + 472) = 1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  return result;
}


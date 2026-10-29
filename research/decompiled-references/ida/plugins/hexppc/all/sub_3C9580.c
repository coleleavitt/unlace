__int64 __fastcall sub_3C9580(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  size_t v4; // r13
  int v5; // eax
  __int64 result; // rax
  void *v7; // rax
  const void *v8; // rsi

  *(_QWORD *)a1 = &off_4CE030;
  v3 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v3;
  *(_OWORD *)(a1 + 24) = 0;
  v4 = a2[2];
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 32) = v4;
    v8 = (const void *)a2[1];
    *(_QWORD *)(a1 + 16) = v7;
    memcpy(v7, v8, v4);
    *(_QWORD *)(a1 + 24) = v4;
  }
  *(_QWORD *)(a1 + 40) = a2[4];
  v5 = *((_DWORD *)a2 + 10);
  *(_QWORD *)(a1 + 120) = -1;
  *(_DWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 128) = -1;
  *(_QWORD *)(a1 + 136) = -1;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  merge_handler_ctr();
  *(_DWORD *)(a1 + 48) |= 0x40000000u;
  *(_QWORD *)a1 = &off_4CE080;
  result = (unsigned int)dword_4DC8D8;
  *(_DWORD *)(a1 + 144) = dword_4DC8D8;
  return result;
}


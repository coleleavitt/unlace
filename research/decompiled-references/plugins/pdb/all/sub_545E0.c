__int64 __fastcall sub_545E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  size_t v4; // r13
  size_t v5; // r13
  __m128i v6; // xmm0
  __int64 v7; // rax
  size_t v8; // r13
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ebp
  int v14; // eax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  int v18; // [rsp+4h] [rbp-44h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v20[1] = __readfsqword(0x28u);
  v1 = operator new(0xE8u);
  *(_QWORD *)v1 = 0;
  v2 = v1;
  *(_QWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 8) = 0;
  *(_OWORD *)(v1 + 32) = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v17 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 8));
    *(_QWORD *)(v2 + 24) = v17;
    *(_QWORD *)(v2 + 40) = v4;
    memcpy(v17, *(const void **)v3, v4);
    *(_QWORD *)(v2 + 32) = v4;
  }
  *(_QWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  v5 = *(_QWORD *)(v3 + 32);
  if ( v5 )
  {
    v16 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 32));
    *(_QWORD *)(v2 + 48) = v16;
    *(_QWORD *)(v2 + 64) = v5;
    memcpy(v16, *(const void **)(v3 + 24), v5);
    *(_QWORD *)(v2 + 56) = v5;
  }
  v6 = _mm_loadu_si128((const __m128i *)(v3 + 48));
  v7 = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v2 + 96) = 0;
  *(__m128i *)(v2 + 72) = v6;
  *(_QWORD *)(v2 + 88) = v7;
  *(_OWORD *)(v2 + 104) = 0;
  v8 = *(_QWORD *)(v3 + 80);
  if ( v8 )
  {
    v15 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 80));
    *(_QWORD *)(v2 + 96) = v15;
    *(_QWORD *)(v2 + 112) = v8;
    memcpy(v15, *(const void **)(v3 + 72), v8);
    *(_QWORD *)(v2 + 104) = v8;
  }
  *(_QWORD *)(v2 + 120) = *(_QWORD *)(v3 + 96);
  *(_QWORD *)(v2 + 128) = *(_QWORD *)(v3 + 104);
  v9 = *(_DWORD *)(v3 + 112);
  *(_QWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 136) = v9;
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 200) = 0;
  *(_BYTE *)(v2 + 224) = 0;
  *(_OWORD *)(v2 + 144) = 0;
  *(_OWORD *)(v2 + 160) = 0;
  *(_OWORD *)(v2 + 184) = 0;
  *(_OWORD *)(v2 + 208) = 0;
  if ( (*(_BYTE *)(v10 + 112) & 8) != 0 )
  {
    v19 = v2;
    v11 = sub_544F0(a1, &v19);
  }
  else
  {
    v19 = v2;
    v11 = sub_54430((_QWORD *)a1, (const char *)&v19);
  }
  v12 = v11;
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(v2 + 224);
  if ( v11 )
  {
    if ( *(_QWORD *)(v2 + 160) > 1u )
      sub_244A0();
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL);
    *(_DWORD *)(a1 + 16) = sub_79790(v2);
    *(_DWORD *)(a1 + 20) = 1400;
    if ( (unsigned int)sub_79FC0(v2, v20) )
    {
      sub_244A0();
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v20[0] + 176LL))(v20[0], &v18);
      if ( !v12 )
      {
        v14 = v18;
        *(_QWORD *)(a1 + 40) = v2;
        *(_DWORD *)(a1 + 32) = v14;
        return v12;
      }
      sub_244A0();
    }
    v12 = -2147467259;
  }
  if ( v2 )
  {
    sub_7DB00(v2);
    operator delete((void *)v2, 0xE8u);
  }
  return v12;
}

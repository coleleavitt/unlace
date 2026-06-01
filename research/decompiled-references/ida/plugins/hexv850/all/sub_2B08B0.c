unsigned __int64 __fastcall sub_2B08B0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __m128i v4; // xmm0
  int v5; // eax
  __m128i v6; // xmm0
  int v7; // eax
  char v8; // al
  int v9; // edx
  int v10; // eax
  __m128i v12; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-98h]
  _BYTE v14[8]; // [rsp+18h] [rbp-90h] BYREF
  __int128 v15; // [rsp+20h] [rbp-88h]
  _QWORD v16[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-50h] BYREF
  int v19; // [rsp+68h] [rbp-40h]
  int v20; // [rsp+70h] [rbp-38h]
  unsigned __int64 v21; // [rsp+78h] [rbp-30h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 24);
  v21 = __readfsqword(0x28u);
  v16[1] = 0;
  v13 = v3;
  v12 = v2;
  v16[0] = 0xFFFFFFFF00000000LL;
  v17[0] = 0xFFFFFFFF00000000LL;
  v17[1] = 0;
  v18[0] = 0xFFFFFFFF00000000LL;
  v18[1] = 0;
  v15 = 0;
  sub_1207E0((__int64)v14, a1 + 32);
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v19 = *(_DWORD *)(a1 + 112);
  v5 = *(_DWORD *)(a1 + 120);
  *(__m128i *)(a1 + 8) = v4;
  v20 = v5;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  sub_1207E0(a1 + 32, a2 + 32);
  v6 = _mm_load_si128(&v12);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  v7 = v13;
  *(__m128i *)(a2 + 8) = v6;
  *(_DWORD *)(a2 + 24) = v7;
  sub_1207E0(a2 + 32, (__int64)v14);
  *(_DWORD *)(a2 + 112) = v19;
  *(_DWORD *)(a2 + 120) = v20;
  sub_1181E0((__int64)v18);
  sub_1181E0((__int64)v17);
  sub_1181E0((__int64)v16);
  v8 = *(_BYTE *)(a1 + 128);
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(a2 + 128);
  v9 = *(_DWORD *)(a2 + 256);
  *(_BYTE *)(a2 + 128) = v8;
  v10 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 256) = v9;
  *(_DWORD *)(a2 + 256) = v10;
  return v21 - __readfsqword(0x28u);
}


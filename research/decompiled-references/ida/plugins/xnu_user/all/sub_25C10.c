__int64 __fastcall sub_25C10(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v4; // rbx
  _BYTE *src; // [rsp+0h] [rbp-D8h]
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-B0h]
  int v8; // [rsp+38h] [rbp-A0h]
  __int64 v9; // [rsp+40h] [rbp-98h]
  __int64 v10; // [rsp+48h] [rbp-90h]
  __int64 v11; // [rsp+58h] [rbp-80h]
  __int64 v12; // [rsp+60h] [rbp-78h]
  __int64 v13; // [rsp+68h] [rbp-70h]
  __int128 v14; // [rsp+70h] [rbp-68h]
  __int64 v15; // [rsp+80h] [rbp-58h]
  __int64 v16; // [rsp+88h] [rbp-50h]
  __int128 v17; // [rsp+90h] [rbp-48h]
  int v18; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 64);
  v19 = __readfsqword(0x28u);
  if ( v2 == 11 )
  {
    src = (_BYTE *)qvector_reserve();
    *src = 0;
    v9 = *(_QWORD *)a2;
    v10 = 0;
    v12 = 1;
    v4 = (void *)qalloc_or_throw();
    memcpy(v4, src, 1u);
    v11 = 1;
    v14 = 0;
    v17 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v18 = 0;
    v8 = 0;
    v6 = off_973B8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_82380);
    sub_245C0(a1, (__int64)&v6, v9);
    if ( v4 )
      qfree();
    if ( src )
      qfree();
    return v19 - __readfsqword(0x28u);
  }
  if ( v2 != 25 )
    return v19 - __readfsqword(0x28u);
  return sub_2B480(a1, a2);
}


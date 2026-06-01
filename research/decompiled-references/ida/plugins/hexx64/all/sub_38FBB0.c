__int64 __fastcall sub_38FBB0(__int64 a1, double a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  const char *v6; // rax
  void *v7; // r12
  size_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // r8
  const char *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __m128i v16; // xmm0
  int v17; // eax
  void *v18; // rax
  size_t v19; // [rsp+8h] [rbp-B0h]
  int v20; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+18h] [rbp-A0h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int128 v23; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall **v24)(); // [rsp+50h] [rbp-68h] BYREF
  int v25; // [rsp+58h] [rbp-60h]
  int v26; // [rsp+5Ch] [rbp-5Ch]
  __m128i v27; // [rsp+60h] [rbp-58h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v20 = 0;
  LOBYTE(v3) = sub_38B840(a1, (__int64)&v20);
  v4 = v3;
  if ( !(_BYTE)v3 )
    return v4;
  v6 = sub_257AF0(*(_QWORD *)(a1 + 32), (unsigned __int64 *)&v21, 1, a2);
  src = nullptr;
  v7 = (void *)v6;
  v23 = 0;
  if ( !v6 )
  {
    v10 = 2;
    v11 = 0;
    goto LABEL_12;
  }
  v8 = strlen(v6);
  src = (void *)qvector_reserve((__int64)&src, 0, v8 + 1, 1);
  *(_QWORD *)&v23 = v8 + 1;
  memmove(src, v7, v8);
  *((_BYTE *)src + v8) = 0;
  v9 = v23;
  v7 = src;
  if ( !(_QWORD)v23 )
  {
    if ( *((_QWORD *)&v23 + 1) > 1u )
    {
      *(_QWORD *)&v23 = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_7;
    }
    v11 = 0;
    v10 = 2;
LABEL_12:
    v19 = v11;
    v18 = (void *)qvector_reserve((__int64)&src, (__int64)v7, v10, 1);
    v11 = v19;
    src = v18;
    *(_QWORD *)&v23 = v10;
    *((_BYTE *)v18 + v19 + 1) = 0;
    if ( !v19 )
      goto LABEL_7;
LABEL_13:
    memmove((char *)src + 1, src, v11);
    goto LABEL_7;
  }
  v10 = v23 + 1;
  v11 = v23 - 1;
  if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(v23 + 1) )
    goto LABEL_12;
  *(_QWORD *)&v23 = v23 + 1;
  *((_BYTE *)src + v9) = 0;
  if ( v9 != 1 )
    goto LABEL_13;
LABEL_7:
  v12 = s1;
  *(_BYTE *)src = 10;
  v13 = *(_QWORD *)(a1 + 32);
  if ( (_QWORD)v23 )
    v12 = (const char *)src;
  sub_25C730(v13, &v21, v12);
  sub_2B6650(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL));
  sub_38F620(a1, 1);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(_DWORD *)(a1 + 44) + 1;
  v16 = _mm_loadl_epi64((const __m128i *)*(_QWORD *)(a1 + 32));
  v25 = 0;
  v26 = v15;
  v24 = off_4E6538;
  v17 = *(_DWORD *)(a1 + 52);
  v27 = _mm_unpacklo_epi64(v16, v16);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    69,
    v14,
    &v24,
    0,
    (unsigned int)(v17 + 1),
    &callui);
  if ( src )
  {
    *(_QWORD *)&v23 = 0;
    qfree((__int64)src);
  }
  return v4;
}


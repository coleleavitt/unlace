__int64 __fastcall sub_38ACB0(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  const char *v5; // rax
  const char *v6; // r12
  size_t v7; // r13
  __int64 v8; // rcx
  size_t v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r13
  const char *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  __m128i v18; // xmm0
  int v19; // eax
  void *v20; // rax
  size_t v21; // [rsp+8h] [rbp-B0h]
  int v22; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+18h] [rbp-A0h] BYREF
  void *src; // [rsp+30h] [rbp-88h]
  __int128 v25; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall **v26)(); // [rsp+50h] [rbp-68h] BYREF
  int v27; // [rsp+58h] [rbp-60h]
  int v28; // [rsp+5Ch] [rbp-5Ch]
  __m128i v29; // [rsp+60h] [rbp-58h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v22 = 0;
  LOBYTE(v2) = sub_386940(a1, (__int64)&v22);
  v3 = v2;
  if ( !(_BYTE)v2 )
    return v3;
  v5 = sub_253270(*(_QWORD *)(a1 + 32), (unsigned __int64 *)&v23, 1);
  src = nullptr;
  v6 = v5;
  v25 = 0;
  if ( !v5 )
  {
    v12 = 2;
    v9 = 0;
    goto LABEL_12;
  }
  v7 = strlen(v5);
  src = (void *)qvector_reserve();
  *(_QWORD *)&v25 = v7 + 1;
  memmove(src, v6, v7);
  *((_BYTE *)src + v7) = 0;
  v11 = v25;
  if ( !(_QWORD)v25 )
  {
    if ( *((_QWORD *)&v25 + 1) > 1u )
    {
      *(_QWORD *)&v25 = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_7;
    }
    v9 = 0;
    v12 = 2;
LABEL_12:
    v21 = v9;
    v20 = (void *)qvector_reserve();
    v9 = v21;
    src = v20;
    *(_QWORD *)&v25 = v12;
    *((_BYTE *)v20 + v21 + 1) = 0;
    if ( !v21 )
      goto LABEL_7;
LABEL_13:
    memmove((char *)src + 1, src, v9);
    goto LABEL_7;
  }
  v12 = v25 + 1;
  v9 = v25 - 1;
  if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
    goto LABEL_12;
  *(_QWORD *)&v25 = v25 + 1;
  *((_BYTE *)src + v11) = 0;
  if ( v11 != 1 )
    goto LABEL_13;
LABEL_7:
  v13 = s1;
  *(_BYTE *)src = 10;
  v14 = *(_QWORD *)(a1 + 32);
  if ( (_QWORD)v25 )
    v13 = (const char *)src;
  sub_257EB0(v14, &v23, v13, v8, v9, v10);
  sub_2B1DD0(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL));
  sub_38A720(a1, 1u, v15);
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_DWORD *)(a1 + 44) + 1;
  v18 = _mm_loadl_epi64((const __m128i *)*(_QWORD *)(a1 + 32));
  v27 = 0;
  v28 = v17;
  v26 = off_4C6C58;
  v19 = *(_DWORD *)(a1 + 52);
  v29 = _mm_unpacklo_epi64(v18, v18);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    69,
    v16,
    &v26,
    0,
    (unsigned int)(v19 + 1),
    &callui);
  if ( src )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v3;
}


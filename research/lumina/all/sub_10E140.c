__int64 __fastcall sub_10E140(__int64 a1, _QWORD *a2, unsigned int *a3, int a4, int a5)
{
  unsigned __int8 *v8; // r13
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned int v11; // r11d
  unsigned __int32 v12; // ebx
  __int64 v13; // r9
  _BOOL4 v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int32 v23; // esi
  int v24; // edx
  int i; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // edx
  __int64 v29; // rax
  unsigned int v31; // [rsp+8h] [rbp-70h]
  unsigned int v32; // [rsp+8h] [rbp-70h]
  unsigned int v33; // [rsp+8h] [rbp-70h]
  unsigned int v34; // [rsp+10h] [rbp-68h]
  unsigned int v36; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+1Ch] [rbp-5Ch]
  __int64 v38; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v8 = *(unsigned __int8 **)(a1 + 280);
  v40 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 88);
  if ( a4 )
    v9 = *(_QWORD *)(a1 + 80);
  v10 = v9;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, &v39, 4, *a2);
  if ( v11 )
    return v11;
  v12 = _byteswap_ulong(v39);
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD, __int64))(*(_QWORD *)v10 + 16LL))(
          v10,
          v8,
          *(unsigned int *)(a1 + 200),
          *a2 + 4LL);
  if ( v11 )
    return v11;
  v13 = *a2 + *(_QWORD *)(a1 + 200) + 4 * a4;
  *a2 = v13 + 4;
  if ( !v12 || *(_DWORD *)(a1 + 192) == v12 )
    return 101;
  if ( *(_DWORD *)(a1 + 32) < v12 )
    return v11;
  if ( a3 )
  {
    v36 = v11;
    v14 = sub_CBAC0(a3, v12);
    v11 = v36;
    if ( v14 )
      return v11;
    if ( !a4 )
      goto LABEL_11;
  }
  else if ( !a4 )
  {
    goto LABEL_12;
  }
  v37 = v11;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, __int64))(*(_QWORD *)v10 + 16LL))(
          v10,
          &v39,
          4,
          v13);
  if ( v15 )
    return v15;
  v11 = v37;
  v23 = _byteswap_ulong(v39);
  if ( !a5 )
  {
    v24 = *(_DWORD *)(a1 + 56);
    for ( i = *(_DWORD *)(a1 + 200) - 200; i > 0; v24 += v8[v26] )
    {
      v26 = i;
      i -= 200;
    }
    if ( v23 != v24 )
      return 101;
  }
  if ( !a3 )
    goto LABEL_12;
LABEL_11:
  v34 = v11;
  v15 = sub_D6EC0(a3, v12);
  v11 = v34;
  if ( v15 )
    return v15;
LABEL_12:
  if ( v12 == 1 )
  {
    v28 = v8[20];
    if ( *(__int16 *)(a1 + 178) != v28 )
      *(_WORD *)(a1 + 178) = v28;
  }
  if ( *(_QWORD *)(a1 + 296) )
  {
    v38 = 0;
    if ( a4 )
      goto LABEL_15;
    goto LABEL_43;
  }
  v33 = v11;
  v29 = sub_CC270((__int64 *)(a1 + 288), v12);
  v38 = v29;
  v11 = v33;
  if ( a4 )
  {
LABEL_15:
    if ( !*(_BYTE *)(a1 + 11) )
    {
      v16 = *a2 <= *(_QWORD *)(a1 + 104);
      goto LABEL_17;
    }
    goto LABEL_43;
  }
  if ( !v29 )
  {
LABEL_43:
    v16 = 1;
    goto LABEL_17;
  }
  v16 = ((unsigned __int8)(*(_WORD *)(v29 + 52) >> 3) ^ 1) & 1;
LABEL_17:
  v17 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)v17 && (unsigned __int8)(*(_BYTE *)(a1 + 21) - 1) > 2u && v16 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(
            v17,
            v8,
            *(_QWORD *)(a1 + 200),
            *(_QWORD *)(a1 + 200) * (v12 - 1));
    v11 = v18;
    if ( *(_DWORD *)(a1 + 40) < v12 )
      *(_DWORD *)(a1 + 40) = v12;
    v19 = *(unsigned int **)(a1 + 112);
    if ( v19 )
    {
      v31 = v18;
      sub_10D4F0(v19, v12, (__int64)v8);
      v20 = v38;
      v11 = v31;
    }
    else
    {
      v20 = v38;
    }
  }
  else
  {
    v20 = v38;
    if ( (a4 & 1) == 0 && !v38 )
    {
      *(_BYTE *)(a1 + 25) |= 2u;
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(a1 + 272))(a1, v12, &v38, 1);
      *(_BYTE *)(a1 + 25) &= ~2u;
      v11 = v27;
      if ( v27 )
        return v11;
      sub_C31A0(v38);
      v20 = v38;
      v11 = 0;
    }
  }
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 8);
    v32 = v11;
    memcpy((void *)v21, v8, *(_QWORD *)(a1 + 200));
    (*(void (__fastcall **)(__int64))(a1 + 264))(v38);
    if ( v12 == 1 )
      *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)(v21 + 24));
    sub_C3110(v38);
    return v32;
  }
  return v11;
}

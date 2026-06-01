__int64 __fastcall sub_2CC70(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 *v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  unsigned __int64 v17; // r15
  _QWORD *v18; // r13
  __m128i si128; // xmm1
  __int64 v20; // [rsp+0h] [rbp-108h] BYREF
  __int128 v21; // [rsp+8h] [rbp-100h]
  __int64 v22; // [rsp+18h] [rbp-F0h]
  __int128 v23; // [rsp+20h] [rbp-E8h]
  _BYTE v24[40]; // [rsp+30h] [rbp-D8h] BYREF
  int v25; // [rsp+58h] [rbp-B0h]
  __int16 v26; // [rsp+5Ch] [rbp-ACh]
  char v27; // [rsp+5Eh] [rbp-AAh]
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-88h]
  __m128i v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int128 v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+B8h] [rbp-50h]
  __int16 v36; // [rsp+BCh] [rbp-4Ch]
  char v37; // [rsp+BEh] [rbp-4Ah]
  unsigned __int64 v38; // [rsp+C8h] [rbp-40h]

  v7 = *(unsigned int *)(a1 + 72);
  v38 = __readfsqword(0x28u);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 76) )
    goto LABEL_2;
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 24) - v10;
  if ( !v11 )
    return 0;
  v12 = *(_QWORD *)(a1 + 48);
  if ( v11 != v12 )
  {
    a3 = 0;
    v20 = 0;
    v22 = 0;
    memset(v24, 0, sizeof(v24));
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v21 = 0;
    v23 = 0;
    if ( v11 < v12 )
    {
      v17 = v11;
      do
      {
        v18 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 96 * v17);
        if ( v18[3] )
        {
          v18[4] = 0;
          qfree();
        }
        if ( *v18 )
        {
          v18[1] = 0;
          qfree();
        }
        ++v17;
      }
      while ( v17 < v12 );
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 40);
      a3 = *(_QWORD *)(a1 + 56);
      v14 = (__int64 *)(a1 + 40);
      if ( (unsigned __int64)&v20 >= v13 && (unsigned __int64)&v20 < v13 + 96 * a3 )
      {
        v29 = 0;
        si128 = _mm_load_si128((const __m128i *)v24);
        v28 = 0;
        v33 = *(_QWORD *)&v24[16];
        v30 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v31 = 0;
        v32 = si128;
        v34 = 0;
        sub_2CA60(v14, v11, (__int64)&v28);
        goto LABEL_13;
      }
      if ( a3 < v11 )
      {
        *(_QWORD *)(a1 + 40) = qvector_reserve();
        v12 = *(_QWORD *)(a1 + 48);
      }
      while ( v12 < v11 )
        sub_266A0(*(_QWORD *)(a1 + 40) + 96 * v12++, (__int64)&v20);
    }
    *(_QWORD *)(a1 + 48) = v11;
LABEL_13:
    v10 = *(_QWORD *)(a1 + 64);
  }
  *(_DWORD *)(a1 + 72) = 0;
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 600LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 600LL),
      *(_QWORD *)(a1 + 8),
      a3,
      a4,
      a5,
      a6,
      v20,
      v21,
      *((_QWORD *)&v21 + 1),
      v22,
      v23,
      *((_QWORD *)&v23 + 1),
      *(_QWORD *)v24,
      *(_QWORD *)&v24[8]);
    v10 = *(_QWORD *)(a1 + 64);
  }
  v15 = *(_QWORD *)(a1 + 32);
  if ( v15 && (v10 && !is_mul_ok(v15, v10) || !is_mul_ok(v11, v15)) )
    goto LABEL_28;
  qlseek();
  if ( qlseek() == -1 )
  {
    qlseek();
LABEL_28:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  v16 = 0;
  while ( (unsigned __int8)sub_29730(a1, *(_QWORD *)(a1 + 40) + 96 * v16) )
  {
    if ( v11 == ++v16 )
      goto LABEL_24;
  }
  LODWORD(v11) = v16;
LABEL_24:
  qlseek();
  *(_DWORD *)(a1 + 76) = v11;
  if ( !(_DWORD)v11 )
    return 0;
  *(_QWORD *)(a1 + 64) += (unsigned int)v11;
  v7 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v7 < (unsigned int)v11 )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 96 * v7;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}


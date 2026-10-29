__int64 __fastcall sub_3EF80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char *a8)
{
  char *v8; // rax
  char *v11; // rdi
  unsigned __int64 v12; // rbx
  __int16 v13; // ax
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  __int64 v16; // r10
  _QWORD *v17; // r11
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  __int64 *v20; // r14
  __int64 *v21; // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // r13
  __int64 *v24; // r12
  __int64 result; // rax
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // r13
  char v36; // [rsp+0h] [rbp-98h]
  _QWORD *v37; // [rsp+8h] [rbp-90h]
  __int64 *v38; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v39; // [rsp+10h] [rbp-88h]
  char v40; // [rsp+10h] [rbp-88h]
  bool v41; // [rsp+18h] [rbp-80h]
  _QWORD *v42; // [rsp+18h] [rbp-80h]
  __int16 v43; // [rsp+26h] [rbp-72h]
  _QWORD *v45; // [rsp+28h] [rbp-70h]
  _QWORD *v46; // [rsp+30h] [rbp-68h]
  _QWORD *v47; // [rsp+38h] [rbp-60h]
  unsigned __int64 v48; // [rsp+48h] [rbp-50h] BYREF
  __m128i v49[4]; // [rsp+50h] [rbp-48h] BYREF

  v8 = (char *)(a1 + 4240);
  v49[0].m128i_i64[1] = __readfsqword(0x28u);
  v11 = a8;
  if ( !a8 )
    v11 = v8;
  v12 = a2 & 0xFFFFFFFFFFFFF000LL;
  v13 = sub_3E290(v11);
  v18 = 0;
  v43 = v13;
  v19 = (((a2 + v16 + 4095) & 0xFFFFFFFFFFFFF000LL) - (a2 & 0xFFFFFFFFFFFFF000LL)) >> 12;
  if ( v14 )
    v18 = *v14 & 0xFFFFFFFFFFFFF000LL;
  v48 = v18;
  if ( ((a2 + v16 + 4095) & 0xFFFFFFFFFFFFF000LL) - (a2 & 0xFFFFFFFFFFFFF000LL) > 0x1FFF )
  {
    v42 = v15;
    v45 = v14;
    v33 = (__int64)v17;
    v38 = a4;
    v34 = a2 & 0xFFFFFFFFFFFFF000LL;
    v40 = a5;
    v35 = 0;
    while ( 1 )
    {
      result = sub_3E8C0(v33, nullptr, v34);
      if ( (_DWORD)result )
        break;
      ++v35;
      v34 += 4096LL;
      if ( v35 >= v19 )
      {
        v17 = (_QWORD *)v33;
        a4 = v38;
        v12 = a2 & 0xFFFFFFFFFFFFF000LL;
        a5 = v40;
        v15 = v42;
        v14 = v45;
        goto LABEL_7;
      }
    }
  }
  else if ( v19 )
  {
LABEL_7:
    v20 = (__int64 *)&v48;
    v37 = v17;
    if ( !v14 )
      v20 = nullptr;
    v41 = v15 != nullptr;
    v36 = a5;
    v21 = a4;
    v22 = 0;
    v46 = v15;
    v23 = v12 + (v19 << 12);
    v24 = v21;
    v47 = v14;
    v39 = (unsigned __int64 *)v11;
    for ( result = sub_3EBA0(v17, v12, (unsigned __int64 *)v49, v20, v36, (unsigned __int64 *)v11);
          !(_DWORD)result;
          result = sub_3EBA0(v37, v12, (unsigned __int64 *)v49, v20, v36, v39) )
    {
      if ( v24 )
      {
        v29 = v24[1];
        v30 = *v24;
        v31 = v29 + 1;
        if ( v24[2] < (unsigned __int64)(v29 + 1) )
        {
          v32 = qvector_reserve();
          v29 = v24[1];
          *v24 = v32;
          v30 = v32;
          v31 = v29 + 1;
        }
        v24[1] = v31;
        v26 = (__m128i *)(v30 + 24 * v29);
        v27 = _mm_loadl_epi64(v49);
        v26[1].m128i_i16[0] = v43;
        *v26 = _mm_unpacklo_epi64(v27, (__m128i)v12);
      }
      if ( !v22 && v41 )
      {
        v28 = a2 - v12;
        if ( !v47 )
          v28 = 0;
        *v46 = v49[0].m128i_i64[0] + v28;
      }
      v12 += 4096LL;
      ++v22;
      v48 += 4096LL;
      if ( v23 == v12 )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return result;
}


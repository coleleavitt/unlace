__int64 __fastcall sub_27CB0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4, __m128i *a5)
{
  __int64 v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  unsigned int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 8);
  v19 = __readfsqword(0x28u);
  v8 = sub_239A0(v6, &v16, a2, a3, a4);
  if ( !(_BYTE)v8 )
    return 0;
  v11 = *(_QWORD *)(a1 + 8);
  v9 = v8;
  v17 = 0;
  v12 = sub_24290(v11, v16, (int *)&v17, 3u);
  v18 = 0;
  v13 = sub_240C0(v11, 3u, v12, &v18);
  if ( !v13 )
  {
    v14 = 0;
    goto LABEL_6;
  }
  v14 = v13 + v17;
  if ( v18 >= v17 )
  {
LABEL_6:
    v15 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
    a5[1].m128i_i64[0] = v14;
    *a5 = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)v13);
    return v9;
  }
  return 0;
}


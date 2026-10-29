__int64 __fastcall sub_191940(__int64 a1, __int64 a2, _OWORD *a3, char a4)
{
  unsigned int v6; // r12d
  int v7; // esi
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int8 *v11; // rax
  __int16 *v12; // rdx
  int v13; // r12d
  int v14; // ecx
  unsigned __int16 *v15; // rdi
  __m128i *v16; // rdx
  int v17; // eax
  int v18; // r8d
  unsigned int v19; // eax
  char v20; // dl
  unsigned int v21; // edi
  unsigned __int16 *v22; // rcx
  __m128i *v23; // rdx
  int v24; // eax
  int v25; // r8d
  unsigned int v26; // eax
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // [rsp+0h] [rbp-88h] BYREF
  int v30; // [rsp+10h] [rbp-78h]
  _WORD v31[6]; // [rsp+14h] [rbp-74h] BYREF
  __m128i v32; // [rsp+20h] [rbp-68h] BYREF
  int v33; // [rsp+30h] [rbp-58h]
  __int16 v34; // [rsp+34h] [rbp-54h] BYREF
  char v35; // [rsp+36h] [rbp-52h] BYREF
  __m128i v36; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+50h] [rbp-38h]
  __int16 v38; // [rsp+54h] [rbp-34h]
  unsigned __int64 v39; // [rsp+58h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  sub_1911A0(a1, &v29);
  sub_1911A0(a2, &v32);
  if ( a4 )
    v32.m128i_i16[0] = ~v32.m128i_i16[0];
  v6 = v32.m128i_u16[1];
  v7 = v29.m128i_u16[1] - v32.m128i_u16[1];
  if ( v7 > 0 )
  {
    v8 = _mm_load_si128(&v32);
    v9 = _mm_load_si128(&v29);
    v37 = v33;
    v7 = v32.m128i_u16[1] - v29.m128i_u16[1];
    v6 = v29.m128i_u16[1];
    v38 = 0;
    v33 = v30;
    v34 = 0;
    v30 = v37;
    v31[0] = 0;
    v36 = v8;
    v32 = v9;
    v29 = v8;
  }
  if ( v7 )
  {
    if ( v7 >= -113 )
    {
      LOBYTE(v7) = (unsigned int)sub_190F60((__int64)&v29, v7) != 1;
LABEL_17:
      if ( v29.m128i_i16[0] == v32.m128i_i16[0] )
      {
        v21 = 0;
        v22 = (unsigned __int16 *)&v34;
        v23 = (__m128i *)v31;
        do
        {
          v24 = v23->m128i_u16[0];
          v25 = *v22;
          v23 = (__m128i *)((char *)v23 - 2);
          --v22;
          v26 = v21 + v25 + v24;
          v22[1] = v26;
          v21 = HIWORD(v26);
        }
        while ( v23 != (__m128i *)&v29.m128i_i16[1] );
        v20 = 0;
      }
      else
      {
        v14 = 0;
        v15 = v31;
        v16 = (__m128i *)&v34;
        do
        {
          v17 = v16->m128i_u16[0];
          v18 = *v15;
          v16 = (__m128i *)((char *)v16 - 2);
          --v15;
          v19 = v17 - v18 - v14;
          v16->m128i_i16[1] = v19;
          v14 = HIWORD(v19) & 1;
        }
        while ( v16 != (__m128i *)&v32.m128i_i16[1] );
        v20 = 1;
      }
      if ( !sub_191200((__int64)&v32, v7, v20, v6, 112) )
      {
LABEL_22:
        *a3 = 0;
        return 2;
      }
    }
  }
  else
  {
    v11 = &v32.m128i_i8[4];
    v12 = &v29.m128i_i16[2];
    do
    {
      if ( *v12 != *(_WORD *)v11 )
      {
        if ( *(_WORD *)v11 < (unsigned __int16)*v12 )
        {
          v27 = _mm_load_si128(&v32);
          v28 = _mm_load_si128(&v29);
          v38 = 0;
          v37 = v33;
          v34 = 0;
          v33 = v30;
          v30 = v37;
          v31[0] = 0;
          v36 = v27;
          v32 = v28;
          v29 = v27;
        }
        goto LABEL_17;
      }
      v11 += 2;
      ++v12;
    }
    while ( v11 != &v35 );
    if ( v29.m128i_i16[0] != v32.m128i_i16[0] || !v32.m128i_i16[1] )
    {
      *a3 = 0;
      return 1;
    }
    v13 = v6 + 1;
    if ( v13 > 32766 )
      goto LABEL_22;
    v32.m128i_i16[1] = v13;
  }
  sub_191160(&v32, (__int64)a3);
  return 1;
}

unsigned __int64 __fastcall sub_24510(_DWORD *a1, int a2, unsigned int a3, int *a4)
{
  int v5; // ebp
  unsigned int v7; // edx
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // edx
  int v17; // eax
  unsigned int v18; // r14d
  __m128i v19; // xmm0
  char v20; // al
  int v21; // eax
  unsigned int v22; // r14d
  __m128i v23; // xmm0
  char v24; // al
  char v25; // [rsp+0h] [rbp-108h]
  unsigned int v26; // [rsp+Ch] [rbp-FCh]
  int v27; // [rsp+Ch] [rbp-FCh]
  int v28; // [rsp+Ch] [rbp-FCh]
  _BYTE v29[16]; // [rsp+10h] [rbp-F8h] BYREF
  int v30; // [rsp+20h] [rbp-E8h]
  int v31; // [rsp+24h] [rbp-E4h]
  _BYTE v32[16]; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+50h] [rbp-B8h]
  int v34; // [rsp+54h] [rbp-B4h]
  __m128i v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  _BYTE v38[4]; // [rsp+A0h] [rbp-68h] BYREF
  int v39; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v5 = a2;
  v40 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = a2 & 0xFFFFFF;
    v7 = (a2 & 0xFFFFFF) - 1;
    v26 = v7;
  }
  else
  {
    v26 = 0;
    v7 = 0;
  }
  v8 = a1[39];
  if ( !(unsigned __int8)sub_227B0((__int64)a1, (__int64)(a1 + 38), v7, (__int64)v29) )
    return v40 - __readfsqword(0x28u);
  v12 = v26 + 1;
  if ( (int)v12 < v8 )
  {
    if ( !(unsigned __int8)sub_227B0((__int64)a1, (__int64)(a1 + 38), v12, (__int64)v32) )
      return v40 - __readfsqword(0x28u);
    if ( !a3 )
    {
      v13 = v30;
      v14 = a1[59];
      *a4 = v30 | 0x4000000;
      v15 = v33 | 0x4000000;
      goto LABEL_9;
    }
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
LABEL_20:
        v17 = a1[229];
        v18 = 0;
        v37 = 0;
        v35 = 0;
        v36 = 0;
        v19.m128i_i64[0] = 0;
        v27 = v17;
        if ( v17 > 0 )
        {
          while ( 1 )
          {
            v35.m128i_i64[0] = v19.m128i_i64[0];
            v20 = sub_227B0((__int64)a1, (__int64)(a1 + 228), v18, (__int64)&v35);
            v19 = _mm_loadl_epi64(&v35);
            if ( v20 )
            {
              if ( v5 == _mm_cvtsi128_si32(v19) )
                break;
            }
            if ( v27 == ++v18 )
              return v40 - __readfsqword(0x28u);
          }
          *a4 = v35.m128i_i32[1] | 0x17000000;
          if ( (int)(v18 + 1) < v27 )
          {
            if ( (unsigned __int8)sub_227B0((__int64)a1, (__int64)(a1 + 228), v18 + 1, (__int64)v38) )
              a4[1] = v39 | 0x17000000;
          }
          else
          {
            a4[1] = (a1[249] + 1) | 0x17000000;
          }
        }
        return v40 - __readfsqword(0x28u);
      }
      if ( a3 == 1 )
      {
        v13 = v31;
        v14 = a1[79];
        *a4 = v31 | 0x6000000;
        v15 = v34 | 0x6000000;
        goto LABEL_9;
      }
LABEL_40:
      sub_DA00((__int64)"Invalid typedef component %d", a3, v12, v9, v10, v11, v25);
    }
  }
  else if ( a3 != 2 )
  {
    if ( a3 <= 2 )
    {
      if ( a3 )
      {
        v13 = v31;
        v14 = a1[79];
        *a4 = v31 | 0x6000000;
        v15 = (v14 + 1) | 0x6000000;
      }
      else
      {
        v13 = v30;
        v14 = a1[59];
        *a4 = v30 | 0x4000000;
        v15 = (v14 + 1) | 0x4000000;
      }
LABEL_9:
      a4[1] = v15;
      if ( v13 - 1 >= v14 )
        *(_QWORD *)a4 = 0;
      return v40 - __readfsqword(0x28u);
    }
    if ( a3 == 3 )
      goto LABEL_20;
    goto LABEL_40;
  }
  v21 = a1[199];
  v22 = 0;
  v37 = 0;
  v35 = 0;
  v36 = 0;
  v23.m128i_i64[0] = 0;
  v28 = v21;
  if ( v21 > 0 )
  {
    while ( 1 )
    {
      v35.m128i_i64[0] = v23.m128i_i64[0];
      v24 = sub_227B0((__int64)a1, (__int64)(a1 + 198), v22, (__int64)&v35);
      v23 = _mm_loadl_epi64(&v35);
      if ( v24 )
      {
        if ( v5 == _mm_cvtsi128_si32(v23) )
          break;
      }
      if ( v28 == ++v22 )
        return v40 - __readfsqword(0x28u);
    }
    *a4 = v35.m128i_i32[1] | 0x14000000;
    if ( (int)(v22 + 1) < v28 )
    {
      if ( (unsigned __int8)sub_227B0((__int64)a1, (__int64)(a1 + 198), v22 + 1, (__int64)v38) )
        a4[1] = v39 | 0x14000000;
    }
    else
    {
      a4[1] = (a1[219] + 1) | 0x14000000;
    }
  }
  return v40 - __readfsqword(0x28u);
}

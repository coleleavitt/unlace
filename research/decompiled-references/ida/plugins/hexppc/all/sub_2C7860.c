unsigned __int64 __fastcall sub_2C7860(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r15
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  int v9; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // r14
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r15
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  int v21; // edx
  unsigned __int64 v22; // [rsp+8h] [rbp-280h]
  __int64 (__fastcall **v23)(); // [rsp+30h] [rbp-258h] BYREF
  __m128i v24; // [rsp+38h] [rbp-250h] BYREF
  __int64 v25; // [rsp+48h] [rbp-240h]
  _BYTE v26[32]; // [rsp+50h] [rbp-238h] BYREF
  char v27[16]; // [rsp+70h] [rbp-218h] BYREF
  char v28[16]; // [rsp+80h] [rbp-208h] BYREF
  char v29[16]; // [rsp+90h] [rbp-1F8h] BYREF
  int v30; // [rsp+A0h] [rbp-1E8h]
  int v31; // [rsp+A8h] [rbp-1E0h]
  char v32; // [rsp+B0h] [rbp-1D8h]
  __m128i v33; // [rsp+B8h] [rbp-1D0h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-1C0h]
  _BYTE v35[32]; // [rsp+D0h] [rbp-1B8h] BYREF
  char v36[16]; // [rsp+F0h] [rbp-198h] BYREF
  char v37[16]; // [rsp+100h] [rbp-188h] BYREF
  char v38[16]; // [rsp+110h] [rbp-178h] BYREF
  int v39; // [rsp+120h] [rbp-168h]
  int v40; // [rsp+128h] [rbp-160h]
  int v41; // [rsp+130h] [rbp-158h]
  __int64 (__fastcall **v42)(); // [rsp+140h] [rbp-148h] BYREF
  __m128i v43; // [rsp+148h] [rbp-140h] BYREF
  __int64 v44; // [rsp+158h] [rbp-130h]
  _BYTE v45[80]; // [rsp+160h] [rbp-128h] BYREF
  int v46; // [rsp+1B0h] [rbp-D8h]
  int v47; // [rsp+1B8h] [rbp-D0h]
  char v48; // [rsp+1C0h] [rbp-C8h]
  __m128i v49; // [rsp+1C8h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+1D8h] [rbp-B0h]
  _BYTE v51[80]; // [rsp+1E0h] [rbp-A8h] BYREF
  int v52; // [rsp+230h] [rbp-58h]
  int v53; // [rsp+238h] [rbp-50h]
  int v54; // [rsp+240h] [rbp-48h]
  unsigned __int64 v55; // [rsp+248h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( a1[1] != a2 )
  {
    sub_2B5470((__int64)&v23);
    v2 = a1[1];
    if ( a2 < v2 )
    {
      v11 = a2;
      v12 = 264 * a2;
      do
      {
        v22 = v11;
        v13 = (_QWORD *)(v12 + *a1);
        v12 += 264;
        *v13 = off_4CE580;
        sub_119360((__int64)(v13 + 28));
        sub_119360((__int64)(v13 + 26));
        sub_119360((__int64)(v13 + 24));
        sub_119360((__int64)(v13 + 12));
        sub_119360((__int64)(v13 + 10));
        sub_119360((__int64)(v13 + 8));
        v11 = v22 + 1;
      }
      while ( v2 != v22 + 1 );
    }
    else
    {
      if ( v2 >= a2 )
      {
LABEL_10:
        v23 = off_4CE580;
        sub_119360((__int64)v38);
        sub_119360((__int64)v37);
        sub_119360((__int64)v36);
        sub_119360((__int64)v29);
        sub_119360((__int64)v28);
        sub_119360((__int64)v27);
        return v55 - __readfsqword(0x28u);
      }
      v3 = *a1;
      v4 = a1[2];
      if ( (unsigned __int64)&v23 >= *a1 && (unsigned __int64)&v23 < v3 + 264 * v4 )
      {
        v14 = _mm_loadu_si128(&v24);
        v42 = off_4CE580;
        v44 = v25;
        v43 = v14;
        sub_2B1F70((__int64)v45, (__int64)v26);
        v15 = _mm_loadu_si128(&v33);
        v46 = v30;
        v49 = v15;
        v47 = v31;
        v48 = v32;
        v50 = v34;
        sub_2B1F70((__int64)v51, (__int64)v35);
        v52 = v39;
        v53 = v40;
        v54 = v41;
        v42 = off_4CE5A8;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v16 = a1[1];
        if ( v16 < a2 )
        {
          v17 = 264 * v16;
          do
          {
            v18 = v17 + *a1;
            *(_QWORD *)v18 = off_4CE580;
            v19 = _mm_loadu_si128(&v43);
            *(_QWORD *)(v18 + 24) = v44;
            *(__m128i *)(v18 + 8) = v19;
            sub_2B1F70(v18 + 32, (__int64)v45);
            *(_DWORD *)(v18 + 112) = v46;
            *(_DWORD *)(v18 + 120) = v47;
            *(_BYTE *)(v18 + 128) = v48;
            v20 = _mm_loadu_si128(&v49);
            *(_QWORD *)(v18 + 152) = v50;
            *(__m128i *)(v18 + 136) = v20;
            sub_2B1F70(v18 + 160, (__int64)v51);
            ++v16;
            v17 += 264;
            *(_DWORD *)(v18 + 240) = v52;
            *(_DWORD *)(v18 + 248) = v53;
            v21 = v54;
            *(_QWORD *)v18 = off_4CE5A8;
            *(_DWORD *)(v18 + 256) = v21;
          }
          while ( a2 != v16 );
        }
        a1[1] = a2;
        v42 = off_4CE5A8;
        sub_2B4F50((__int64)&v42);
        goto LABEL_10;
      }
      if ( v4 >= a2 || (v3 = qvector_reserve(), v2 = a1[1], *a1 = v3, v2 < a2) )
      {
        v5 = 264 * v2;
        while ( 1 )
        {
          v6 = v3 + v5;
          *(_QWORD *)v6 = off_4CE580;
          v7 = _mm_loadu_si128(&v24);
          *(_QWORD *)(v6 + 24) = v25;
          *(__m128i *)(v6 + 8) = v7;
          sub_2B1F70(v3 + v5 + 32, (__int64)v26);
          *(_DWORD *)(v6 + 112) = v30;
          *(_DWORD *)(v6 + 120) = v31;
          *(_BYTE *)(v6 + 128) = v32;
          v8 = _mm_loadu_si128(&v33);
          *(_QWORD *)(v6 + 152) = v34;
          *(__m128i *)(v6 + 136) = v8;
          sub_2B1F70(v6 + 160, (__int64)v35);
          ++v2;
          v5 += 264;
          *(_DWORD *)(v6 + 240) = v39;
          *(_DWORD *)(v6 + 248) = v40;
          v9 = v41;
          *(_QWORD *)v6 = off_4CE5A8;
          *(_DWORD *)(v6 + 256) = v9;
          if ( v2 >= a2 )
            break;
          v3 = *a1;
        }
      }
    }
    a1[1] = a2;
    goto LABEL_10;
  }
  return v55 - __readfsqword(0x28u);
}


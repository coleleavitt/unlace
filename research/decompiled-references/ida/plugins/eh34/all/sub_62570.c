__int64 __fastcall sub_62570(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        const char *a9)
{
  __int64 v11; // rdx
  __m128 v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rdi
  __int64 v18; // [rsp+18h] [rbp-238h] BYREF
  __int64 v19; // [rsp+20h] [rbp-230h] BYREF
  __m128i v20; // [rsp+28h] [rbp-228h] BYREF
  char v21; // [rsp+38h] [rbp-218h]
  _QWORD v22[2]; // [rsp+40h] [rbp-210h] BYREF
  __int128 v23; // [rsp+50h] [rbp-200h]
  char v24; // [rsp+60h] [rbp-1F0h]
  unsigned __int64 v25; // [rsp+64h] [rbp-1ECh]
  __int64 v26; // [rsp+70h] [rbp-1E0h]
  __int128 v27; // [rsp+78h] [rbp-1D8h]
  __int64 v28; // [rsp+88h] [rbp-1C8h]
  __int128 v29; // [rsp+90h] [rbp-1C0h]
  __int64 v30; // [rsp+A0h] [rbp-1B0h]
  __int128 v31; // [rsp+A8h] [rbp-1A8h]
  __int64 v32; // [rsp+B8h] [rbp-198h]
  __int128 v33; // [rsp+C0h] [rbp-190h]
  int v34; // [rsp+D0h] [rbp-180h]
  __int64 v35; // [rsp+D8h] [rbp-178h]
  __int128 v36; // [rsp+E0h] [rbp-170h]
  __m128 v37; // [rsp+F0h] [rbp-160h]
  __int64 v38; // [rsp+100h] [rbp-150h]
  __int128 v39; // [rsp+108h] [rbp-148h]
  __int64 v40; // [rsp+118h] [rbp-138h]
  __int64 v41; // [rsp+120h] [rbp-130h]
  __int64 v42; // [rsp+128h] [rbp-128h]
  __int64 v43; // [rsp+130h] [rbp-120h]
  __int64 v44; // [rsp+138h] [rbp-118h]
  __int64 v45; // [rsp+140h] [rbp-110h]
  char v46; // [rsp+14Ch] [rbp-104h]
  int v47; // [rsp+150h] [rbp-100h]
  __int64 v48; // [rsp+158h] [rbp-F8h]
  __int128 v49; // [rsp+160h] [rbp-F0h]
  int v50; // [rsp+178h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+180h] [rbp-D0h]
  int *v52; // [rsp+188h] [rbp-C8h]
  int *v53; // [rsp+190h] [rbp-C0h]
  __int64 v54; // [rsp+198h] [rbp-B8h]
  int v55; // [rsp+1A8h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+1B0h] [rbp-A0h]
  int *v57; // [rsp+1B8h] [rbp-98h]
  int *v58; // [rsp+1C0h] [rbp-90h]
  __int64 v59; // [rsp+1C8h] [rbp-88h]
  int v60; // [rsp+1D8h] [rbp-78h] BYREF
  __int64 v61; // [rsp+1E0h] [rbp-70h]
  int *v62; // [rsp+1E8h] [rbp-68h]
  int *v63; // [rsp+1F0h] [rbp-60h]
  __int64 v64; // [rsp+1F8h] [rbp-58h]
  __int64 v65; // [rsp+200h] [rbp-50h]
  __int64 v66; // [rsp+208h] [rbp-48h]
  int v67; // [rsp+210h] [rbp-40h]
  unsigned __int64 v68; // [rsp+218h] [rbp-38h]

  v18 = a6;
  v68 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a2 + 32);
  v24 = 0;
  v22[1] = 0;
  v25 = 0xFFFFFFFF00000000LL;
  v26 = 0;
  v28 = 0;
  v23 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v31 = 0;
  v33 = 0;
  v36 = 0;
  v12 = _mm_loadh_ps((const double *)(v11 + 16));
  v22[0] = off_8B798;
  v37 = v12;
  v38 = a7;
  v52 = &v50;
  v53 = &v50;
  v57 = &v55;
  v58 = &v55;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = -1;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v59 = 0;
  v39 = -1;
  v49 = 0;
  v60 = 0;
  v62 = &v60;
  v63 = &v60;
  v61 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  sub_2BCC0((__int64)&v19, (__int64)v22, a3, a4, a5, a5 - 1, (__m128)0LL, (__int64)&v18, 0);
  if ( v21 )
  {
    v13 = v19;
    v14 = _mm_loadu_si128(&v20);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v13;
    *(__m128i *)(a1 + 8) = v14;
  }
  else
  {
    sub_29140(&v19, v22, a3, *(_DWORD *)(a2 + 56));
    sub_620D0(0.0, NAN, a2, a3, &v19, a8, a9);
    v16 = v19;
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)a1 = a5;
    if ( v16 )
    {
      v20.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  sub_D680(v22);
  return a1;
}


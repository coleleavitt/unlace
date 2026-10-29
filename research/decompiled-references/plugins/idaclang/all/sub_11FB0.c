__int64 __fastcall sub_11FB0(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __int128 a9,
        __int128 a10)
{
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  void *v21; // r13
  unsigned int v22; // r14d
  __int64 v24; // rax
  unsigned int v25; // eax
  size_t v26; // r12
  void *src; // [rsp+20h] [rbp-200h] BYREF
  size_t n; // [rsp+28h] [rbp-1F8h]
  __int64 v29; // [rsp+30h] [rbp-1F0h]
  _QWORD v30[2]; // [rsp+40h] [rbp-1E0h] BYREF
  char v31; // [rsp+50h] [rbp-1D0h]
  const char *v32; // [rsp+60h] [rbp-1C0h] BYREF
  void *v33; // [rsp+68h] [rbp-1B8h]
  __int128 v34; // [rsp+70h] [rbp-1B0h]
  __int64 v35; // [rsp+80h] [rbp-1A0h]
  __int128 v36; // [rsp+88h] [rbp-198h]
  __int128 v37; // [rsp+98h] [rbp-188h]
  __int64 v38; // [rsp+A8h] [rbp-178h]
  int v39; // [rsp+B0h] [rbp-170h]
  __int64 v40; // [rsp+B8h] [rbp-168h]
  __int128 v41; // [rsp+C0h] [rbp-160h]
  __int64 v42; // [rsp+D0h] [rbp-150h]
  __int128 v43; // [rsp+D8h] [rbp-148h]
  __int128 v44; // [rsp+E8h] [rbp-138h]
  __int64 v45; // [rsp+F8h] [rbp-128h]
  int v46; // [rsp+100h] [rbp-120h]
  int v47; // [rsp+110h] [rbp-110h] BYREF
  __int64 v48; // [rsp+118h] [rbp-108h]
  int *v49; // [rsp+120h] [rbp-100h]
  int *v50; // [rsp+128h] [rbp-F8h]
  __int64 v51; // [rsp+130h] [rbp-F0h]
  __int64 v52; // [rsp+138h] [rbp-E8h]
  __int128 v53; // [rsp+140h] [rbp-E0h]
  __int128 v54; // [rsp+150h] [rbp-D0h]
  __int64 v55; // [rsp+160h] [rbp-C0h]
  int v56; // [rsp+168h] [rbp-B8h]
  int v57; // [rsp+178h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+180h] [rbp-A0h]
  int *v59; // [rsp+188h] [rbp-98h]
  int *v60; // [rsp+190h] [rbp-90h]
  __int64 v61; // [rsp+198h] [rbp-88h]
  __int64 v62; // [rsp+1A0h] [rbp-80h]
  __int64 v63; // [rsp+1A8h] [rbp-78h]
  __m128i v64; // [rsp+1B0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+1C0h] [rbp-60h]
  __int128 v66; // [rsp+1D0h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+1F8h] [rbp-28h]

  v67 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 108) & 2) != 0 )
  {
    sub_10160(
      (__int64)&v32,
      a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a9),
      (__int128)_mm_loadu_si128((const __m128i *)&a10));
    v10 = s1;
    if ( v33 )
      v10 = v32;
    sub_7470((__int64)"%-12s %s\n", "category", v10);
    if ( v32 )
    {
      v33 = nullptr;
      qfree(v32);
    }
  }
  v11 = sub_BB20();
  sub_ABC0((__int64)&v66, v11, v12, v13);
  v29 = 0;
  v14 = sub_BB20();
  sub_A290((__int64)&v64, v14, v15, v16);
  v17 = (__int128)_mm_load_si128(&v64);
  src = nullptr;
  n = 0;
  v20 = sub_FFD0((__int64)&src, a1, 13, (__int64 *)a2, v18, v19, *(double *)&v17, a8, v17, v65);
  v21 = src;
  v22 = v20;
  if ( (_BYTE)v20 )
  {
    v32 = a1;
    v33 = nullptr;
    v34 = 0;
    if ( n )
    {
      v26 = n;
      v33 = (void *)qalloc_or_throw(n);
      *((_QWORD *)&v34 + 1) = v26;
      memcpy(v33, v21, v26);
      *(_QWORD *)&v34 = v26;
    }
    v35 = 0;
    v49 = &v47;
    v50 = &v47;
    v38 = 0;
    v39 = 1;
    v40 = 0;
    v42 = 0;
    v45 = 0;
    v46 = 1;
    v47 = 0;
    v48 = 0;
    v51 = 0;
    v52 = 0;
    v55 = 0;
    v56 = 1;
    v57 = 0;
    v58 = 0;
    v59 = &v57;
    v60 = &v57;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v30[0] = a2;
    v30[1] = &v32;
    v31 = 1;
    v36 = 0;
    v37 = 0;
    v41 = 0;
    v43 = 0;
    v44 = 0;
    v53 = 0;
    v54 = 0;
    v24 = sub_BB20();
    v25 = sub_A020(v24, (__int64)sub_1A160, (__int64)v30);
    LOBYTE(v25) = v25 == 0;
    v22 = v25;
    sub_DA20(&v32);
  }
  if ( v21 )
    qfree(v21);
  return v22;
}

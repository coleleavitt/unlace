__int64 __fastcall sub_19EC0(__m128i *a1, _BYTE *a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // [rsp+Fh] [rbp-299h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-299h]
  __int64 v17; // [rsp+10h] [rbp-298h] BYREF
  __int128 v18; // [rsp+18h] [rbp-290h]
  __m128i v19; // [rsp+30h] [rbp-278h] BYREF
  __m128i v20; // [rsp+40h] [rbp-268h] BYREF
  __int64 v21; // [rsp+50h] [rbp-258h]
  int v22; // [rsp+58h] [rbp-250h]
  char v23; // [rsp+5Ch] [rbp-24Ch]
  __int64 v24; // [rsp+60h] [rbp-248h]
  char v25; // [rsp+68h] [rbp-240h]
  __int64 v26; // [rsp+78h] [rbp-230h]
  __int128 v27; // [rsp+80h] [rbp-228h]
  __m128i si128; // [rsp+90h] [rbp-218h]
  char v29; // [rsp+A0h] [rbp-208h]
  __m128i v30; // [rsp+A8h] [rbp-200h]
  __int64 v31; // [rsp+B8h] [rbp-1F0h]
  __int128 v32; // [rsp+C0h] [rbp-1E8h]
  __int16 v33; // [rsp+D0h] [rbp-1D8h]
  __int64 v34; // [rsp+F8h] [rbp-1B0h]
  __int128 v35; // [rsp+100h] [rbp-1A8h]
  __int64 v36; // [rsp+110h] [rbp-198h]
  __int128 v37; // [rsp+118h] [rbp-190h]
  __int64 v38; // [rsp+128h] [rbp-180h]
  __int128 v39; // [rsp+130h] [rbp-178h]
  __int64 v40; // [rsp+140h] [rbp-168h]
  __int128 v41; // [rsp+148h] [rbp-160h]
  __int64 v42; // [rsp+158h] [rbp-150h]
  __int128 v43; // [rsp+160h] [rbp-148h]
  __int64 v44; // [rsp+170h] [rbp-138h]
  __int128 v45; // [rsp+178h] [rbp-130h]
  __int64 v46; // [rsp+188h] [rbp-120h]
  __int128 v47; // [rsp+190h] [rbp-118h]
  __int64 v48; // [rsp+1A0h] [rbp-108h]
  __int128 v49; // [rsp+1A8h] [rbp-100h]
  __int64 v50; // [rsp+1B8h] [rbp-F0h]
  __int128 v51; // [rsp+1C0h] [rbp-E8h]
  __int64 v52; // [rsp+1D0h] [rbp-D8h]
  __int128 v53; // [rsp+1D8h] [rbp-D0h]
  __int16 v54; // [rsp+1E8h] [rbp-C0h]
  char v55; // [rsp+1EAh] [rbp-BEh]
  int v56; // [rsp+1ECh] [rbp-BCh]
  __int128 v57; // [rsp+1F0h] [rbp-B8h]
  __int64 v58; // [rsp+200h] [rbp-A8h]
  __int64 v59; // [rsp+208h] [rbp-A0h]
  int v60; // [rsp+210h] [rbp-98h]
  __int64 v61; // [rsp+218h] [rbp-90h]
  __int128 v62; // [rsp+220h] [rbp-88h]
  __int64 v63; // [rsp+230h] [rbp-78h]
  int v64; // [rsp+240h] [rbp-68h]
  int v65; // [rsp+244h] [rbp-64h]
  __int128 v66; // [rsp+248h] [rbp-60h]
  int v67; // [rsp+258h] [rbp-50h]
  unsigned __int64 v68; // [rsp+268h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v8 = open_linput(a3, 0);
  if ( !v8 )
    return 0;
  v9 = v8;
  v23 = 1;
  v21 = -1;
  v22 = 8;
  v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&v20);
  si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
  v20 = _mm_load_si128((const __m128i *)&xmmword_AB140);
  v30 = _mm_load_si128((const __m128i *)&xmmword_AB160);
  v24 = v8;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v27 = 0;
  v32 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v63 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v57 = -1;
  v62 = 0;
  v10 = sub_8D550(&v19);
  if ( v10 )
  {
    v17 = 0;
    v18 = 0;
    v10 = sub_19D40(&v17, (__int64)&v19);
    v12 = v17;
    if ( v10 && (v67 = 0, v64 = a4, v65 = a5, v66 = 0, (_QWORD)v18) )
    {
      v13 = v17;
      v14 = 0;
      while ( a4 != *(_DWORD *)v13 )
      {
        ++v14;
        v13 += 28;
        if ( v14 == (_QWORD)v18 )
          goto LABEL_5;
      }
      *a1 = _mm_loadu_si128((const __m128i *)(v13 + 8));
      if ( a2 )
      {
        *a2 = *(_DWORD *)(v13 + 24);
        *a2 &= 1u;
      }
    }
    else
    {
LABEL_5:
      v10 = 0;
    }
    if ( v12 )
    {
      v16 = v10;
      *(_QWORD *)&v18 = 0;
      qfree(v12);
      v10 = v16;
    }
  }
  v15 = v10;
  sub_14770((__int64)&v19);
  close_linput(v9);
  return v15;
}


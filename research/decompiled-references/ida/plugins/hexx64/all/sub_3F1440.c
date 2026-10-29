__int64 __fastcall sub_3F1440(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _BYTE *a6,
        double a7,
        __m128 a8)
{
  unsigned int v10; // r14d
  __int64 v12; // rdi
  int v15; // esi
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  char v21; // al
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // eax
  unsigned __int64 *v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdi
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 *v49; // [rsp+10h] [rbp-258h]
  char v50; // [rsp+10h] [rbp-258h]
  char v51; // [rsp+1Eh] [rbp-24Ah]
  char v52; // [rsp+1Eh] [rbp-24Ah]
  char v53; // [rsp+1Eh] [rbp-24Ah]
  char v54; // [rsp+1Fh] [rbp-249h]
  char v55; // [rsp+1Fh] [rbp-249h]
  __int64 v56; // [rsp+20h] [rbp-248h] BYREF
  int *v57; // [rsp+28h] [rbp-240h] BYREF
  __int64 v58[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v59; // [rsp+40h] [rbp-228h]
  __int64 v60; // [rsp+48h] [rbp-220h]
  __int64 v61; // [rsp+60h] [rbp-208h] BYREF
  __int64 v62; // [rsp+68h] [rbp-200h]
  __int64 v63; // [rsp+70h] [rbp-1F8h] BYREF
  __m128i v64; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v65; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v66; // [rsp+98h] [rbp-1D0h]
  __int64 v67; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-1C0h]
  __int128 v69; // [rsp+C0h] [rbp-1A8h]
  __int64 v70; // [rsp+D0h] [rbp-198h]
  __int64 v71; // [rsp+D8h] [rbp-190h]
  __int64 v72; // [rsp+E0h] [rbp-188h]
  _BYTE v73[6]; // [rsp+E8h] [rbp-180h] BYREF
  __int16 v74; // [rsp+EEh] [rbp-17Ah]
  unsigned __int64 v75; // [rsp+228h] [rbp-40h] BYREF

  v75 = __readfsqword(0x28u);
  if ( a4 )
  {
    if ( *(_DWORD *)a4 == 4 && *(_BYTE *)(a4 + 32) == 1 && a1[111] == *(_DWORD *)(a4 + 40) )
    {
      if ( !(unsigned __int8)sub_64880(a5) || a5[3] )
        *a6 = 1;
      v12 = a5[2];
      a5[1] = 0;
      if ( v12 )
      {
        a5[3] = 0;
        qfree(v12);
        a5[2] = 0;
        a5[4] = 0;
      }
      return 1;
    }
    return 0;
  }
  v15 = a1[130];
  v16 = a1[112];
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, v15, v16, a7);
  v67 = 0;
  v68 = 0;
  v51 = sub_64640(a5, &v65, v17, v18, v19, v20);
  v49 = a5 + 2;
  v54 = sub_317C60(a5 + 2, (__int64)&v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  qfree(v65);
  v21 = v54 | *a6 | v51;
  v65 = 0;
  *a6 = v21;
  v22 = a1[140];
  v66 = 0;
  sub_63E80(&v65, v22, 16, 0.0);
  v67 = 0;
  v68 = 0;
  v52 = sub_64640(a5, &v65, v23, v24, v25, v26);
  v55 = sub_317C60(v49, (__int64)&v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  qfree(v65);
  *a6 |= v55 | v52;
  if ( a1[21] == 8 )
  {
    v39 = a1[156];
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v39, 32, 0.0);
    v67 = 0;
    v68 = 0;
    v53 = sub_64640(a5, &v65, v40, v41, v42, v43);
    v50 = sub_317C60(v49, (__int64)&v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
    qfree(v65);
    *a6 |= v50 | v53;
  }
  if ( a3 || !(unsigned __int8)sub_3398A0(&v56, &v57, a2) )
    return 0;
  sub_339670((__int64)v58, a2, v56, (__int64)v57, v27, v28, 0.0, a8);
  LOBYTE(v29) = sub_64930(v58, a1[140]);
  v10 = v29;
  if ( !(_BYTE)v29 )
  {
    if ( v59 )
    {
      v60 = 0;
      qfree(v59);
    }
    qfree(v58[0]);
    return 0;
  }
  if ( a1[21] == 8 )
    goto LABEL_25;
  v70 = -1;
  v30 = (unsigned __int64 *)v73;
  v71 = 0;
  v72 = 0;
  v69 = -1;
  do
  {
    *(_WORD *)v30 = 0;
    v30 += 5;
    *((_WORD *)v30 - 19) = 0;
    *((_WORD *)v30 - 18) = 0;
    *((_DWORD *)v30 - 2) = 0;
    *((_WORD *)v30 - 17) = 0;
    *((_OWORD *)v30 - 2) = 0;
    *(v30 - 2) = 0;
  }
  while ( &v75 != v30 );
  decode_insn();
  if ( v73[1] == 1 && v74 == 81 )
  {
    v10 = 0;
  }
  else
  {
LABEL_25:
    v31 = *v57;
    if ( (unsigned int)(*v57 - 8) <= 1 || (v31 == 4 || v31 == 67 && v57[9] == v57[17]) && *((_BYTE *)v57 + 64) != 15 )
    {
      v33 = v57[9];
    }
    else
    {
      v32 = sub_64BA0(v58, a1[140]);
      v33 = 16;
      if ( v32 <= 16 )
        v33 = v32;
    }
    v34 = a1[140];
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v65 = 0;
    v66 = 0;
    v64 = 0;
    sub_63E80(&v65, v34, v33, 0.0);
    v67 = 0;
    v68 = 0;
    sub_64280(&v61, &v65, 0.0);
    sub_316CB0(&v63, (const void **)&v67, v35, v36);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
    qfree(v65);
    v37 = sub_122C30((__int64)&v61, (__int64)a5);
    v38 = v63;
    if ( v37 )
    {
      v44 = *a5;
      v45 = _mm_loadu_si128(&v64);
      *a5 = v61;
      v61 = v44;
      v46 = a5[1];
      a5[1] = v62;
      v47 = a5[4];
      v62 = v46;
      v48 = a5[2];
      *(__m128i *)(a5 + 3) = v45;
      a5[2] = v38;
      v38 = v48;
      v63 = v48;
      v64.m128i_i64[1] = v47;
      *a6 = 1;
    }
    if ( v38 )
    {
      v64.m128i_i64[0] = 0;
      qfree(v38);
    }
    qfree(v61);
  }
  if ( v59 )
  {
    v60 = 0;
    qfree(v59);
  }
  qfree(v58[0]);
  return v10;
}


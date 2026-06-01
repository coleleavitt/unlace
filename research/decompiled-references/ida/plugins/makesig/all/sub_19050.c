__int64 __fastcall sub_19050(const char *a1)
{
  unsigned int v1; // r12d
  __int8 v3; // r13
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  const char *v6; // rax
  const char *v7; // rax
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rdx
  int v19; // [rsp+0h] [rbp-4224h]
  __int64 v20; // [rsp+14h] [rbp-4210h] BYREF
  __int128 v21; // [rsp+1Ch] [rbp-4208h] BYREF
  __int128 v22; // [rsp+2Ch] [rbp-41F8h]
  __m128i v23; // [rsp+3Ch] [rbp-41E8h] BYREF
  __m128i v24; // [rsp+4Ch] [rbp-41D8h] BYREF
  unsigned __int8 v25; // [rsp+5Eh] [rbp-41C6h]
  __m128i v26; // [rsp+6Ch] [rbp-41B8h] BYREF
  __m128i v27[2]; // [rsp+7Ch] [rbp-41A8h]
  char src[4096]; // [rsp+9Ch] [rbp-4188h] BYREF
  char v29[4096]; // [rsp+109Ch] [rbp-3188h] BYREF
  __int128 v30; // [rsp+209Ch] [rbp-2188h]
  char v31; // [rsp+20ACh] [rbp-2178h]
  _BYTE dest[8192]; // [rsp+20BCh] [rbp-2168h] BYREF
  __int64 v33; // [rsp+40BCh] [rbp-168h]
  _BYTE v34[264]; // [rsp+40DCh] [rbp-148h] BYREF
  unsigned __int64 v35; // [rsp+41E4h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v31 = 0;
  src[0] = 0;
  v29[0] = 0;
  v30 = 0;
  if ( get_file_ext(a1) )
    qstrncpy(src, a1, 4096);
  else
    set_file_ext(src, 4096, a1, "sig");
  *(_QWORD *)&v30 = fopenRB(src);
  if ( !(_QWORD)v30 )
  {
    v7 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_17060((__int64)src, (__int64)"%s: %s", src, v7);
    return 1;
  }
  if ( qfread(v30, &v23, 45) != 45 )
  {
    sub_17060((__int64)src, (__int64)"%s: can't read signature header!", src);
    goto LABEL_7;
  }
  if ( v23.m128i_i32[0] != 1396786249 || v23.m128i_i16[2] != 20039 )
  {
    sub_17060((__int64)src, (__int64)"%s: not a signature file", src);
LABEL_7:
    qfclose(v30);
    return 1;
  }
  v19 = 0;
  sub_17BA0((__int64)&v23, v30);
  v3 = v23.m128i_i8[6];
  if ( v23.m128i_i8[6] > 0xAu )
  {
    sub_17060((__int64)src, (__int64)"%s: unexpected signature version number", src);
    goto LABEL_7;
  }
  if ( v31 )
  {
    if ( (v24.m128i_i8[0] & 0x10) == 0 )
    {
      sub_17060((__int64)src, (__int64)"%s: signature is not compressed!", src);
      goto LABEL_7;
    }
  }
  else if ( (v24.m128i_i8[0] & 0x10) != 0 )
  {
    sub_17060((__int64)src, (__int64)"%s: signature is already compressed!", src);
    goto LABEL_7;
  }
  v26 = _mm_load_si128(&v23);
  v4 = _mm_load_si128(&v24);
  v26.m128i_i8[6] = 10;
  v27[0] = v4;
  v5 = _mm_loadu_si128((const __m128i *)((char *)&v24.m128i_u64[1] + 5));
  v27[0].m128i_i16[0] = v24.m128i_i16[0] | 0x10;
  *(__m128i *)((char *)v27 + 13) = v5;
  set_file_ext(v29, 4096, a1, "$$$");
  *((_QWORD *)&v30 + 1) = fopenWB(v29);
  if ( !*((_QWORD *)&v30 + 1) )
  {
    v16 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_17060((__int64)src, (__int64)"%s: %s", v29, v16);
    goto LABEL_7;
  }
  if ( qfwrite(*((_QWORD *)&v30 + 1), &v26, 45) != 45 )
  {
    v6 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_17060((__int64)src, (__int64)"%s: can't write (%s)", v29, v6);
LABEL_19:
    qfclose(*((_QWORD *)&v30 + 1));
    goto LABEL_7;
  }
  v8 = v25;
  if ( qfread(v30, v34, v25) != v8 )
  {
    v15 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_17060((__int64)src, (__int64)"%s: %s", src, v15);
    goto LABEL_19;
  }
  if ( v8 != qfwrite(*((_QWORD *)&v30 + 1), v34, v8) )
  {
    v17 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_17060((__int64)src, (__int64)"%s: %s", v29, v17);
    goto LABEL_19;
  }
  if ( (unsigned __int8)v3 > 7u )
  {
    sub_16FC0((__int64)src);
    qfclose(*((_QWORD *)&v30 + 1));
    qfclose(v30);
  }
  else
  {
    v9 = open_linput(src, 0);
    v22 = (unsigned __int64)v9;
    v21 = 0;
    v10 = sub_17C60((__int64)&v21);
    v11 = (_QWORD *)v10;
    if ( v10 )
    {
      sub_17F00((unsigned __int8 *)&v21, *(_QWORD *)(v10 + 80), *(_WORD *)(v10 + 41), v10, 0);
      if ( v31 )
      {
        v20 = *((_QWORD *)&v30 + 1);
        sub_F340(&v20, (__int64)v11, 0, v11[10]);
      }
      else
      {
        v12 = qtmpfile();
        v13 = v12;
        if ( v12 )
        {
          v20 = v12;
          sub_F340(&v20, (__int64)v11, 0, v11[10]);
          qfseek(v13, 0, 0);
          memcpy(dest, src, 0x2018u);
          v33 = v13;
          qstrncpy(dest, "<temporary file>", 4096);
          sub_16FC0((__int64)dest);
          qfclose(v13);
        }
        else
        {
          sub_17060((__int64)src, (__int64)"Can't create temporary file!");
          v19 = 1;
        }
      }
      sub_17950(v11);
    }
    else
    {
      sub_17060((__int64)src, (__int64)"%s: cannot read signature", src);
      v19 = 1;
    }
    if ( BYTE8(v22) )
      close_linput(v22);
    close_linput(v9);
    qfclose(*((_QWORD *)&v30 + 1));
    qfclose(v30);
    if ( v19 )
      return 1;
  }
  if ( (unsigned int)qunlink(src) || (v1 = qrename(v29, src)) != 0 )
  {
    v18 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_5C90((__int64)"%s: %s", src, v18);
  }
  v14 = qword_21900;
  if ( qword_21908 >= (unsigned __int64)qword_21900 )
    v14 = qword_21908;
  if ( !v14 )
    LODWORD(v14) = 1;
  sub_4C20(
    (__int64)"%-14s: input %8zu output %8zu saved %4d%% OK\n",
    a1,
    qword_21908,
    qword_21900,
    100 * ((int)qword_21908 - (int)qword_21900) / (int)v14);
  return v1;
}


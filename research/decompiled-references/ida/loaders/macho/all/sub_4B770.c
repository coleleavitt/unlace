unsigned __int64 __fastcall sub_4B770(const __m128i *a1, __int64 a2, _QWORD *a3, int a4)
{
  __m128i v7; // xmm0
  __int64 v10; // rsi
  bool v11; // zf
  const char *v12; // rsi
  __int64 (*v13)(); // rcx
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD v19[2]; // [rsp+0h] [rbp-1B8h] BYREF
  __m128i v20; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-198h]
  __int64 v22; // [rsp+28h] [rbp-190h]
  _QWORD *v23; // [rsp+30h] [rbp-188h]
  __m128i v24[5]; // [rsp+38h] [rbp-180h] BYREF
  __int128 v25; // [rsp+88h] [rbp-130h]
  __int128 v26; // [rsp+98h] [rbp-120h]
  __int64 v27; // [rsp+A8h] [rbp-110h]
  __int128 v28; // [rsp+B0h] [rbp-108h]
  __int64 v29; // [rsp+C0h] [rbp-F8h]
  __int128 v30; // [rsp+C8h] [rbp-F0h]
  __int64 v31; // [rsp+D8h] [rbp-E0h]
  int v32; // [rsp+E0h] [rbp-D8h]
  __int64 v33; // [rsp+E8h] [rbp-D0h]
  __int64 v34; // [rsp+F0h] [rbp-C8h]
  int v35; // [rsp+F8h] [rbp-C0h]
  __int128 v36; // [rsp+100h] [rbp-B8h]
  __int64 v37; // [rsp+110h] [rbp-A8h]
  __int128 v38; // [rsp+118h] [rbp-A0h]
  __int64 v39; // [rsp+128h] [rbp-90h]
  __int128 v40; // [rsp+130h] [rbp-88h]
  __int64 v41; // [rsp+140h] [rbp-78h]
  __int128 v42; // [rsp+148h] [rbp-70h]
  __int128 v43; // [rsp+158h] [rbp-60h]
  __int128 v44; // [rsp+168h] [rbp-50h]
  __int64 v45; // [rsp+178h] [rbp-40h]
  unsigned __int64 v46; // [rsp+188h] [rbp-30h]

  v7 = _mm_loadu_si128(a1);
  v46 = __readfsqword(0x28u);
  v36 = -1;
  v20 = v7;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v21 = 0;
  v22 = 0;
  v23 = nullptr;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v32 = -1;
  v33 = 0;
  v34 = -1;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v10 = a3[4];
  v40 = 0;
  v42 = 0;
  v39 = 0;
  v41 = 0;
  v45 = 0;
  memset(v24, 0, sizeof(v24));
  v43 = 0;
  v44 = 0;
  v21 = sub_29210(a2, v10);
  v22 = qlsize();
  v11 = *(_DWORD *)(a2 + 176) == 12;
  v23 = a3;
  HIDWORD(v45) = a4 | 0x20;
  if ( v11 && !*(_BYTE *)(a2 + 442) )
    sub_4B6C0(a2);
  v11 = *(_BYTE *)(a2 + 440) == 0;
  v35 = *(_DWORD *)(a2 + 444);
  if ( v11 )
    sub_28840(a2);
  v11 = a3[6] == 0;
  v12 = s1;
  v34 = *(_QWORD *)(a2 + 456);
  if ( !v11 )
    v12 = (const char *)a3[5];
  sub_1CC90(&v20, v12);
  sub_290B0(a2, "__PRELINK_DATA", "__data", v24);
  sub_44BA0((__int64)a1, (__int64)&v20);
  close_linput();
  if ( (a4 & 0x40) == 0 )
  {
    v19[1] = a1;
    v19[0] = &off_64660;
    sub_30290(a2, (__int64)v19);
    sub_32090((__int64)a1, (__int64)&v20, (__int64 (*)())a2, v13);
  }
  v14 = v41;
  if ( v41 )
  {
    v15 = v42;
    if ( (_QWORD)v42 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + 24 * v16);
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
          v14 = v41;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v25 + 1) )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v46 - __readfsqword(0x28u);
}


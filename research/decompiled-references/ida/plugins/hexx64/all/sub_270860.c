__int64 __fastcall sub_270860(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // r15d
  bool v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128 v9; // xmm1
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 (__fastcall **v19)(); // [rsp+18h] [rbp-1B8h] BYREF
  int v20; // [rsp+20h] [rbp-1B0h]
  __int64 v21; // [rsp+28h] [rbp-1A8h]
  __int128 v22; // [rsp+30h] [rbp-1A0h]
  __int64 v23; // [rsp+40h] [rbp-190h]
  __int128 v24; // [rsp+48h] [rbp-188h]
  __int64 v25; // [rsp+58h] [rbp-178h]
  __int64 v26; // [rsp+60h] [rbp-170h] BYREF
  __int128 v27; // [rsp+68h] [rbp-168h]
  __int64 v28[2]; // [rsp+78h] [rbp-158h] BYREF
  __int64 (__fastcall **v29)(); // [rsp+88h] [rbp-148h] BYREF
  int v30; // [rsp+90h] [rbp-140h]
  __int64 v31; // [rsp+98h] [rbp-138h]
  __int128 v32; // [rsp+A0h] [rbp-130h]
  __int64 v33; // [rsp+B0h] [rbp-120h]
  __int128 v34; // [rsp+B8h] [rbp-118h]
  __m128 v35; // [rsp+C8h] [rbp-108h]
  __int64 v36; // [rsp+D8h] [rbp-F8h]
  __int128 v37; // [rsp+E0h] [rbp-F0h]
  unsigned __int8 v38; // [rsp+F0h] [rbp-E0h]
  __int64 (__fastcall **v39)(); // [rsp+F8h] [rbp-D8h] BYREF
  int v40; // [rsp+100h] [rbp-D0h]
  __int64 v41; // [rsp+108h] [rbp-C8h]
  __int128 v42; // [rsp+110h] [rbp-C0h]
  __int64 v43; // [rsp+120h] [rbp-B0h]
  __int128 v44; // [rsp+128h] [rbp-A8h]
  __int64 v45; // [rsp+138h] [rbp-98h]
  unsigned __int64 v46; // [rsp+140h] [rbp-90h]
  __int64 v47; // [rsp+148h] [rbp-88h]
  __int128 v48; // [rsp+150h] [rbp-80h]
  __int64 v49; // [rsp+160h] [rbp-70h]
  __int128 v50; // [rsp+168h] [rbp-68h]
  int v51; // [rsp+178h] [rbp-58h]
  int v52; // [rsp+17Ch] [rbp-54h]
  char v53; // [rsp+180h] [rbp-50h]
  unsigned __int64 v54; // [rsp+190h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v19 = off_4E07D0;
  v1 = *(_QWORD *)(a1 + 8);
  v20 = 0;
  v2 = *(_QWORD *)(v1 + 440);
  v25 = a1;
  v21 = 0;
  v23 = 0;
  v26 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v22 = 0;
  v24 = 0;
  v27 = 0;
  if ( v2 )
  {
    v26 = qvector_reserve((__int64)&v26, 0, v2, 8);
    memset((void *)(v26 + 8 * v27), 0, 8 * (v2 - v27));
    *(_QWORD *)&v27 = v2;
  }
  sub_255A80((__int64 *)&v19, a1 + 16, 0, 0.0);
  v3 = *(_QWORD *)(v25 + 8);
  if ( (_QWORD)v27 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = sub_64930(v28, v5);
      v7 = 1;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v26 + 8 * v4);
        if ( !v7 )
          v7 = 1;
      }
      ++v5;
      v8 = 13 * v4;
      v4 = v5;
      *(_QWORD *)(*(_QWORD *)(v3 + 432) + 8 * v8 + 96) = v7;
    }
    while ( v5 < (unsigned __int64)v27 );
  }
  v29 = off_4E0790;
  v9 = _mm_loadh_ps((const double *)(a1 + 216));
  v30 = 6;
  v31 = 0;
  v33 = 0;
  v36 = 0;
  v38 = 0;
  v32 = 0;
  v34 = 0;
  v35 = v9;
  v37 = 0;
  v10 = sub_256390((__int64)&v29, a1 + 16, 0);
  if ( v10 )
  {
    if ( !under_debugger )
      sub_383060(0xC422u, 0.0);
    BUG();
  }
  v11 = 0;
  if ( (_QWORD)v37 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(int *)(v36 + 4 * v11);
      v14 = *(_QWORD *)(v12 + 432);
      v15 = v14 + 104 * v13;
      if ( *(_QWORD *)(v15 + 96) != 1 && !(unsigned __int8)sub_1C27D0(v14 + 104 * v13, v12, *(_DWORD *)(v15 + 88), 0.0) )
      {
        v16 = *(_QWORD *)(v15 + 96);
        v40 = 2;
        v41 = 0;
        v43 = 0;
        v45 = a1;
        v39 = off_4E0810;
        v46 = v16;
        v47 = 0;
        v49 = 0;
        v51 = v13;
        v52 = 0;
        v53 = 0;
        v42 = 0;
        v44 = 0;
        v48 = 0;
        v50 = 0;
        if ( !(unsigned int)sub_255A80((__int64 *)&v39, a1 + 16, 0, 0.0) && v52 < (unsigned __int64)v48 )
        {
          v53 = 1;
          sub_256390((__int64)&v39, a1 + 16, 0);
          *(_QWORD *)(v15 + 96) /= v46;
        }
        v39 = off_4E0810;
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v49);
        }
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(v47);
        }
        v39 = off_4DBCF8;
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree(v43);
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
      }
      v11 = ++v10;
    }
    while ( v10 < (unsigned __int64)v37 );
  }
  sub_27DE80(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 808LL));
  sub_23FD50(a1, 5u);
  sub_3252D0(a1, 0, 0);
  v29 = off_4E0790;
  v17 = v38 ^ 1;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  v29 = off_4DBCF8;
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  v19 = off_4E07D0;
  qfree(v28[0]);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  v19 = off_4DBCF8;
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v17;
}


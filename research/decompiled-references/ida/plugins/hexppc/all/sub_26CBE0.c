__int64 __fastcall sub_26CBE0(__int64 a1)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // ebx
  __int64 (__fastcall **v23)(); // [rsp+18h] [rbp-1B8h] BYREF
  int v24; // [rsp+20h] [rbp-1B0h]
  __int64 v25; // [rsp+28h] [rbp-1A8h]
  __int128 v26; // [rsp+30h] [rbp-1A0h]
  __int64 v27; // [rsp+40h] [rbp-190h]
  __int128 v28; // [rsp+48h] [rbp-188h]
  __int64 v29; // [rsp+58h] [rbp-178h]
  __int64 v30; // [rsp+60h] [rbp-170h]
  __int128 v31; // [rsp+68h] [rbp-168h]
  _QWORD v32[2]; // [rsp+78h] [rbp-158h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+88h] [rbp-148h] BYREF
  int v34; // [rsp+90h] [rbp-140h]
  __int64 v35; // [rsp+98h] [rbp-138h]
  __int128 v36; // [rsp+A0h] [rbp-130h]
  __int64 v37; // [rsp+B0h] [rbp-120h]
  __int128 v38; // [rsp+B8h] [rbp-118h]
  __m128 v39; // [rsp+C8h] [rbp-108h]
  __int64 v40; // [rsp+D8h] [rbp-F8h]
  __int128 v41; // [rsp+E0h] [rbp-F0h]
  unsigned __int8 v42; // [rsp+F0h] [rbp-E0h]
  __int64 (__fastcall **v43)(); // [rsp+F8h] [rbp-D8h] BYREF
  int v44; // [rsp+100h] [rbp-D0h]
  __int64 v45; // [rsp+108h] [rbp-C8h]
  __int128 v46; // [rsp+110h] [rbp-C0h]
  __int64 v47; // [rsp+120h] [rbp-B0h]
  __int128 v48; // [rsp+128h] [rbp-A8h]
  __int64 v49; // [rsp+138h] [rbp-98h]
  unsigned __int64 v50; // [rsp+140h] [rbp-90h]
  __int64 v51; // [rsp+148h] [rbp-88h]
  __int128 v52; // [rsp+150h] [rbp-80h]
  __int64 v53; // [rsp+160h] [rbp-70h]
  __int128 v54; // [rsp+168h] [rbp-68h]
  int v55; // [rsp+178h] [rbp-58h]
  int v56; // [rsp+17Ch] [rbp-54h]
  char v57; // [rsp+180h] [rbp-50h]
  unsigned __int64 v58; // [rsp+190h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v23 = off_4CD8F0;
  v1 = *(_QWORD *)(a1 + 8);
  v24 = 0;
  v2 = *(_QWORD *)(v1 + 440);
  v29 = a1;
  v25 = 0;
  v27 = 0;
  v30 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v26 = 0;
  v28 = 0;
  v31 = 0;
  if ( v2 )
  {
    v30 = qvector_reserve();
    memset((void *)(v30 + 8 * v31), 0, 8 * (v2 - v31));
    *(_QWORD *)&v31 = v2;
  }
  sub_251E00((__int64 *)&v23, a1 + 16, 0);
  v3 = *(_QWORD *)(v29 + 8);
  if ( (_QWORD)v31 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = sub_60EF0(v32, v5);
      v7 = 1;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v30 + 8 * v4);
        if ( !v7 )
          v7 = 1;
      }
      ++v5;
      v8 = 13 * v4;
      v4 = v5;
      *(_QWORD *)(*(_QWORD *)(v3 + 432) + 8 * v8 + 96) = v7;
    }
    while ( v5 < (unsigned __int64)v31 );
  }
  v33 = off_4CD8B0;
  v9 = _mm_loadh_ps((const double *)(a1 + 216));
  v34 = 6;
  v35 = 0;
  v37 = 0;
  v40 = 0;
  v42 = 0;
  v36 = 0;
  v38 = 0;
  v39 = v9;
  v41 = 0;
  v10 = sub_252710((__int64)&v33, a1 + 16, 0);
  if ( v10 )
  {
    if ( !under_debugger )
      sub_37EEE0(50210);
    BUG();
  }
  v11 = 0;
  if ( (_QWORD)v41 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(int *)(v40 + 4 * v11);
      v14 = *(_QWORD *)(v12 + 432);
      v15 = v14 + 104 * v13;
      if ( *(_QWORD *)(v15 + 96) != 1 && !(unsigned __int8)sub_1BED90(v14 + 104 * v13, v12, *(unsigned int *)(v15 + 88)) )
      {
        v16 = *(_QWORD *)(v15 + 96);
        v44 = 2;
        v45 = 0;
        v47 = 0;
        v49 = a1;
        v43 = off_4CD930;
        v50 = v16;
        v51 = 0;
        v53 = 0;
        v55 = v13;
        v56 = 0;
        v57 = 0;
        v46 = 0;
        v48 = 0;
        v52 = 0;
        v54 = 0;
        if ( !(unsigned int)sub_251E00((__int64 *)&v43, a1 + 16, 0) && v56 < (unsigned __int64)v52 )
        {
          v57 = 1;
          sub_252710((__int64)&v43, a1 + 16, 0);
          *(_QWORD *)(v15 + 96) /= v50;
        }
        v43 = off_4CD930;
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree();
        }
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree();
        }
        v43 = off_4C8E58;
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree();
        }
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree();
        }
      }
      v11 = ++v10;
    }
    while ( v10 < (unsigned __int64)v41 );
  }
  sub_27A200(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 808LL));
  sub_23C0D0(a1, 5, v17, v18, v19, v20);
  sub_321150(a1, 0, 0);
  v33 = off_4CD8B0;
  v21 = v42 ^ 1;
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  v33 = off_4C8E58;
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  v23 = off_4CD8F0;
  qfree();
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  v23 = off_4C8E58;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v21;
}


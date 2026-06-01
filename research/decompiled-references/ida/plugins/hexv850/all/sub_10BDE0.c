unsigned __int64 __fastcall sub_10BDE0(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r13d
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64); // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 (__fastcall *v26)(__int64); // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rbx
  unsigned __int64 *v33; // [rsp+0h] [rbp-288h]
  unsigned int v34; // [rsp+0h] [rbp-288h]
  unsigned __int64 *v35; // [rsp+8h] [rbp-280h]
  unsigned __int64 **v36; // [rsp+10h] [rbp-278h]
  __int64 (__fastcall **v37)(); // [rsp+20h] [rbp-268h] BYREF
  __int64 v38; // [rsp+28h] [rbp-260h] BYREF
  __int128 v39; // [rsp+30h] [rbp-258h]
  _QWORD v40[2]; // [rsp+40h] [rbp-248h] BYREF
  int v41; // [rsp+50h] [rbp-238h]
  __int64 v42; // [rsp+58h] [rbp-230h]
  __int64 v43; // [rsp+60h] [rbp-228h]
  int v44; // [rsp+68h] [rbp-220h]
  int v45; // [rsp+70h] [rbp-218h]
  __int64 *v46; // [rsp+78h] [rbp-210h]
  __int64 (__fastcall **v47)(); // [rsp+80h] [rbp-208h] BYREF
  __int64 v48; // [rsp+88h] [rbp-200h] BYREF
  __int128 v49; // [rsp+90h] [rbp-1F8h]
  _QWORD v50[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  int v51; // [rsp+B0h] [rbp-1D8h]
  __int64 v52; // [rsp+B8h] [rbp-1D0h]
  __int64 v53; // [rsp+C0h] [rbp-1C8h]
  int v54; // [rsp+C8h] [rbp-1C0h]
  int v55; // [rsp+D0h] [rbp-1B8h]
  __int64 *v56; // [rsp+D8h] [rbp-1B0h]
  __int64 v57; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-198h]
  __int64 v59; // [rsp+108h] [rbp-180h]
  __int64 v60; // [rsp+130h] [rbp-158h]
  __int64 v61; // [rsp+138h] [rbp-150h]
  __int64 v62; // [rsp+160h] [rbp-128h]
  __int64 v63; // [rsp+168h] [rbp-120h]
  __int64 v64; // [rsp+170h] [rbp-118h]
  __int64 v65; // [rsp+178h] [rbp-110h]
  __int64 v66; // [rsp+180h] [rbp-108h]
  __int64 v67; // [rsp+188h] [rbp-100h]
  __int64 v68; // [rsp+1E0h] [rbp-A8h]
  __int64 v69; // [rsp+1E8h] [rbp-A0h]
  __int64 v70; // [rsp+1F0h] [rbp-98h]
  __int64 v71; // [rsp+1F8h] [rbp-90h]
  int v72; // [rsp+218h] [rbp-70h]
  unsigned __int64 v73; // [rsp+248h] [rbp-40h]

  v6 = a4 & 0x60;
  v35 = a2;
  v7 = a1[5];
  v33 = a3;
  v36 = (unsigned __int64 **)a5;
  v73 = __readfsqword(0x28u);
  sub_10A0B0((__int64)&v57, v7, (unsigned int)a6, v6 | 4, a5, a6);
  v11 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v11 == sub_FCEE0 )
    v12 = *(int *)(a1[5] + 64LL);
  else
    v12 = ((int (__fastcall *)(_QWORD *, __int64, __int64, __int64 (__fastcall *)(__int64), __int64, __int64, unsigned __int64 *, unsigned __int64 *, unsigned __int64 **))v11)(
            a1,
            v7,
            v8,
            sub_FCEE0,
            v9,
            v10,
            v33,
            v35,
            v36);
  v38 = 0;
  v40[0] = 0;
  v40[1] = 0;
  v41 = v63;
  v42 = 0;
  v43 = 0;
  v44 = v63;
  v45 = 1;
  v39 = 0;
  sub_100810(&v38, v12, (unsigned __int64)v40);
  v46 = &v57;
  v37 = &off_4B0C78;
  sub_30BEA0(a1, &v37);
  sub_10AB30((__int64)&v57, &v38, v33, v36);
  v17 = 0;
  v34 = v6 | 5;
  v18 = v58;
  if ( v58 )
  {
    do
    {
      ++v17;
      qfree();
    }
    while ( v18 != v17 );
  }
  v19 = v59;
  v20 = 0;
  v58 = 0;
  if ( v59 )
  {
    do
    {
      ++v20;
      qfree();
    }
    while ( v19 != v20 );
  }
  v21 = v61;
  v22 = 0;
  v59 = 0;
  if ( v61 )
  {
    do
    {
      v13 = v60;
      v23 = (_QWORD *)(v60 + 24 * v22);
      if ( *v23 )
      {
        v23[1] = 0;
        qfree();
      }
      ++v22;
    }
    while ( v21 != v22 );
  }
  v61 = 0;
  if ( v62 )
  {
    v63 = 0;
    qfree();
    v62 = 0;
    v64 = 0;
  }
  if ( v65 )
  {
    v24 = v66;
    if ( v66 )
    {
      v25 = 0;
      do
      {
        ++v25;
        qfree();
      }
      while ( v24 != v25 );
    }
    v66 = 0;
    qfree();
    v65 = 0;
    v67 = 0;
  }
  v68 = 0;
  if ( v69 )
  {
    v70 = 0;
    qfree();
    v69 = 0;
    v71 = 0;
  }
  v72 = -1;
  sub_109D10((__int64)&v57, v34, v13, v14, v15, v16);
  v26 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v26 == sub_FCEE0 )
    v27 = *(int *)(a1[5] + 64LL);
  else
    v27 = (int)v26((__int64)a1);
  v47 = (__int64 (__fastcall **)())&unk_4BECE0;
  v48 = 0;
  v50[0] = 0;
  v50[1] = 0;
  v51 = v63;
  v52 = 0;
  v53 = 0;
  v54 = v63;
  v55 = 1;
  v49 = 0;
  sub_100810(&v48, v27, (unsigned __int64)v50);
  v47 = &off_4B0C78;
  v56 = &v57;
  sub_30C260(a1, &v47);
  sub_10AB30((__int64)&v57, &v48, v35, nullptr);
  v47 = (__int64 (__fastcall **)())&unk_4BECE0;
  qfree();
  qfree();
  if ( v48 )
  {
    v28 = v49;
    if ( (_QWORD)v49 )
    {
      v29 = 0;
      do
      {
        ++v29;
        qfree();
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  v37 = (__int64 (__fastcall **)())&unk_4BECE0;
  qfree();
  qfree();
  if ( v38 )
  {
    v30 = v39;
    if ( (_QWORD)v39 )
    {
      v31 = 0;
      do
      {
        ++v31;
        qfree();
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  sub_FE630(&v57);
  return v73 - __readfsqword(0x28u);
}


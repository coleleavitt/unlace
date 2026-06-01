unsigned __int64 __fastcall sub_2CE00(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rbx
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 (*v21)(); // rcx
  _QWORD *v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rbp
  unsigned int i; // r15d
  const char *v28; // rsi
  const char *v29; // rdi
  unsigned int v30; // ebp
  _QWORD *v31; // r14
  __int64 v32; // rbp
  _QWORD *v33; // rbx
  __int64 v35; // [rsp+0h] [rbp-2A8h]
  _QWORD *v36; // [rsp+8h] [rbp-2A0h]
  _QWORD *v37; // [rsp+10h] [rbp-298h]
  __int64 v38; // [rsp+18h] [rbp-290h]
  _QWORD *v39; // [rsp+20h] [rbp-288h]
  __int64 v40; // [rsp+28h] [rbp-280h]
  __int64 v41; // [rsp+30h] [rbp-278h]
  _QWORD *v42; // [rsp+40h] [rbp-268h] BYREF
  __int64 v43; // [rsp+48h] [rbp-260h]
  _QWORD v44[2]; // [rsp+60h] [rbp-248h] BYREF
  __m128i v45; // [rsp+70h] [rbp-238h]
  __int64 v46; // [rsp+80h] [rbp-228h]
  int v47; // [rsp+88h] [rbp-220h]
  char v48; // [rsp+8Ch] [rbp-21Ch]
  __int64 v49; // [rsp+90h] [rbp-218h]
  char v50; // [rsp+98h] [rbp-210h]
  __int64 v51; // [rsp+A8h] [rbp-200h]
  __int128 v52; // [rsp+B0h] [rbp-1F8h]
  __m128i si128; // [rsp+C0h] [rbp-1E8h]
  char v54; // [rsp+D0h] [rbp-1D8h]
  __m128i v55; // [rsp+D8h] [rbp-1D0h]
  __int64 v56; // [rsp+E8h] [rbp-1C0h]
  __int128 v57; // [rsp+F0h] [rbp-1B8h]
  __int16 v58; // [rsp+100h] [rbp-1A8h]
  __int64 v59; // [rsp+128h] [rbp-180h]
  __int128 v60; // [rsp+130h] [rbp-178h]
  __int64 v61; // [rsp+140h] [rbp-168h]
  __int128 v62; // [rsp+148h] [rbp-160h]
  __int64 v63; // [rsp+158h] [rbp-150h]
  __int128 v64; // [rsp+160h] [rbp-148h]
  __int64 v65; // [rsp+170h] [rbp-138h]
  __int128 v66; // [rsp+178h] [rbp-130h]
  __int64 v67; // [rsp+188h] [rbp-120h]
  __int128 v68; // [rsp+190h] [rbp-118h]
  __int64 v69; // [rsp+1A0h] [rbp-108h]
  __int128 v70; // [rsp+1A8h] [rbp-100h]
  __int64 v71; // [rsp+1B8h] [rbp-F0h]
  __int128 v72; // [rsp+1C0h] [rbp-E8h]
  __int64 v73; // [rsp+1D0h] [rbp-D8h]
  __int128 v74; // [rsp+1D8h] [rbp-D0h]
  __int64 v75; // [rsp+1E8h] [rbp-C0h]
  __int128 v76; // [rsp+1F0h] [rbp-B8h]
  __int64 v77; // [rsp+200h] [rbp-A8h]
  __int128 v78; // [rsp+208h] [rbp-A0h]
  __int16 v79; // [rsp+218h] [rbp-90h]
  char v80; // [rsp+21Ah] [rbp-8Eh]
  int v81; // [rsp+21Ch] [rbp-8Ch]
  __int128 v82; // [rsp+220h] [rbp-88h]
  __int64 v83; // [rsp+230h] [rbp-78h]
  __int64 v84; // [rsp+238h] [rbp-70h]
  int v85; // [rsp+240h] [rbp-68h]
  __int64 v86; // [rsp+248h] [rbp-60h]
  __int128 v87; // [rsp+250h] [rbp-58h]
  __int64 v88; // [rsp+260h] [rbp-48h]
  unsigned __int64 v89; // [rsp+268h] [rbp-40h]

  v5 = a1[70];
  v89 = __readfsqword(0x28u);
  if ( a3 < 0 || a2 == 0 || a3 >= (int)v5 )
    return v89 - __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = a1;
  v9 = a2;
  v10 = v5;
  v11 = a2 + 8;
  if ( v7 )
  {
    v12 = a2 + 8;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v7 + 16);
        v14 = *(_QWORD *)(v7 + 24);
        if ( *(_DWORD *)(v7 + 32) >= a3 )
          break;
        v7 = *(_QWORD *)(v7 + 24);
        if ( !v14 )
          goto LABEL_8;
      }
      v12 = v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v13 );
LABEL_8:
    if ( v11 != v12 && *(_DWORD *)(v12 + 32) <= a3 )
      return v89 - __readfsqword(0x28u);
  }
  sub_11E60(v9, a3);
  if ( v15 )
  {
    *(_DWORD *)(operator new(0x28u) + 32) = a3;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v9 + 40);
  }
  if ( !a4 )
    return v89 - __readfsqword(0x28u);
  v16 = sub_1C580((__int64)a1, a3);
  v17 = *a1;
  v18 = v16;
  v19 = a1[87];
  si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  v44[0] = &off_62AA0;
  v44[1] = v17;
  v45 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v55 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v46 = -1;
  v47 = 8;
  v48 = 1;
  v49 = v18;
  v50 = 0;
  v51 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v52 = 0;
  v57 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v83 = 0;
  v84 = v19;
  v85 = 2;
  v86 = 0;
  v88 = 0;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v82 = -1;
  v87 = 0;
  if ( !sub_25BB0((__int64)v44) )
    goto LABEL_36;
  v20 = qlsize();
  if ( !sub_25EF0((__int64)v44, 0, v20, 1) )
    goto LABEL_36;
  sub_2B040((__int64)&v42, v44, nullptr, v21);
  close_linput();
  v22 = v42;
  v41 = v43;
  v39 = v42;
  v36 = &v42[3 * v43];
  if ( v36 == v42 )
    goto LABEL_30;
  v23 = -1;
  if ( a4 != -1 )
    v23 = a4 - 1;
  v40 = v23;
  while ( v10 <= 0 )
  {
    v22 += 3;
    if ( v36 == v22 )
      goto LABEL_30;
  }
LABEL_20:
  v37 = v8;
  v38 = v9;
  v24 = v22;
  v35 = v8[75];
  while ( 2 )
  {
    v25 = v35;
    v26 = v24[1];
    for ( i = 0; i != v10; ++i )
    {
      if ( *(_QWORD *)(v25 + 8) )
      {
        v28 = *(const char **)v25;
        v29 = s1;
        if ( !v26 )
          goto LABEL_23;
      }
      else
      {
        if ( !v26 )
        {
LABEL_29:
          v30 = i;
          v31 = v24;
          v8 = v37;
          v9 = v38;
          sub_2CE00(v37, v38, v30, v40);
          v22 = v31 + 3;
          if ( v36 != v22 )
            goto LABEL_20;
          goto LABEL_30;
        }
        v28 = s1;
      }
      v29 = (const char *)*v24;
LABEL_23:
      if ( !strcmp(v29, v28) )
        goto LABEL_29;
      v25 += 24;
    }
    v24 += 3;
    if ( v36 != v24 )
      continue;
    break;
  }
LABEL_30:
  if ( v39 )
  {
    v32 = 0;
    v33 = v39;
    if ( v41 )
    {
      do
      {
        if ( *v33 )
        {
          v33[1] = 0;
          qfree();
        }
        ++v32;
        v33 += 3;
      }
      while ( v41 != v32 );
    }
    qfree();
  }
LABEL_36:
  sub_162E0((__int64)v44);
  return v89 - __readfsqword(0x28u);
}


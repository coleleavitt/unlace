unsigned __int64 __fastcall sub_2CE00(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r15
  const char *v9; // rbx
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rsi
  _QWORD *v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rbx
  const char **v27; // r14
  __int64 v28; // rbp
  unsigned int i; // r15d
  const char *v30; // rdi
  unsigned int v31; // ebp
  _QWORD *v32; // r14
  __int64 v33; // rbp
  __int64 *v34; // rbx
  __int64 v35; // rdi
  __int64 v37; // [rsp+0h] [rbp-2A8h]
  const char **v38; // [rsp+0h] [rbp-2A8h]
  _BOOL4 v39; // [rsp+8h] [rbp-2A0h]
  _QWORD *v40; // [rsp+8h] [rbp-2A0h]
  _QWORD *v41; // [rsp+10h] [rbp-298h]
  const char *v42; // [rsp+18h] [rbp-290h]
  __int64 *v43; // [rsp+20h] [rbp-288h]
  __int64 v44; // [rsp+28h] [rbp-280h]
  __int64 v45; // [rsp+30h] [rbp-278h]
  _QWORD *v46; // [rsp+40h] [rbp-268h] BYREF
  __int64 v47; // [rsp+48h] [rbp-260h]
  _QWORD v48[2]; // [rsp+60h] [rbp-248h] BYREF
  __m128i v49; // [rsp+70h] [rbp-238h]
  __int64 v50; // [rsp+80h] [rbp-228h]
  int v51; // [rsp+88h] [rbp-220h]
  char v52; // [rsp+8Ch] [rbp-21Ch]
  __int64 v53; // [rsp+90h] [rbp-218h]
  char v54; // [rsp+98h] [rbp-210h]
  __int64 v55; // [rsp+A8h] [rbp-200h]
  __int128 v56; // [rsp+B0h] [rbp-1F8h]
  __m128i si128; // [rsp+C0h] [rbp-1E8h]
  char v58; // [rsp+D0h] [rbp-1D8h]
  __m128i v59; // [rsp+D8h] [rbp-1D0h]
  __int64 v60; // [rsp+E8h] [rbp-1C0h]
  __int128 v61; // [rsp+F0h] [rbp-1B8h]
  __int16 v62; // [rsp+100h] [rbp-1A8h]
  __int64 v63; // [rsp+128h] [rbp-180h]
  __int128 v64; // [rsp+130h] [rbp-178h]
  __int64 v65; // [rsp+140h] [rbp-168h]
  __int128 v66; // [rsp+148h] [rbp-160h]
  __int64 v67; // [rsp+158h] [rbp-150h]
  __int128 v68; // [rsp+160h] [rbp-148h]
  __int64 v69; // [rsp+170h] [rbp-138h]
  __int128 v70; // [rsp+178h] [rbp-130h]
  __int64 v71; // [rsp+188h] [rbp-120h]
  __int128 v72; // [rsp+190h] [rbp-118h]
  __int64 v73; // [rsp+1A0h] [rbp-108h]
  __int128 v74; // [rsp+1A8h] [rbp-100h]
  __int64 v75; // [rsp+1B8h] [rbp-F0h]
  __int128 v76; // [rsp+1C0h] [rbp-E8h]
  __int64 v77; // [rsp+1D0h] [rbp-D8h]
  __int128 v78; // [rsp+1D8h] [rbp-D0h]
  __int64 v79; // [rsp+1E8h] [rbp-C0h]
  __int128 v80; // [rsp+1F0h] [rbp-B8h]
  __int64 v81; // [rsp+200h] [rbp-A8h]
  __int128 v82; // [rsp+208h] [rbp-A0h]
  __int16 v83; // [rsp+218h] [rbp-90h]
  char v84; // [rsp+21Ah] [rbp-8Eh]
  int v85; // [rsp+21Ch] [rbp-8Ch]
  __int128 v86; // [rsp+220h] [rbp-88h]
  __int64 v87; // [rsp+230h] [rbp-78h]
  __int64 v88; // [rsp+238h] [rbp-70h]
  int v89; // [rsp+240h] [rbp-68h]
  __int64 v90; // [rsp+248h] [rbp-60h]
  __int128 v91; // [rsp+250h] [rbp-58h]
  __int64 v92; // [rsp+260h] [rbp-48h]
  unsigned __int64 v93; // [rsp+268h] [rbp-40h]

  v5 = a1[70];
  v93 = __readfsqword(0x28u);
  if ( a3 < 0 || a2 == 0 || a3 >= (int)v5 )
    return v93 - __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = a1;
  v9 = (const char *)a2;
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
      return v93 - __readfsqword(0x28u);
  }
  v15 = sub_11E60(v9, (unsigned int)a3);
  if ( v16 )
  {
    v39 = v15 || v11 == v16 || *(_DWORD *)(v16 + 32) > a3;
    v37 = v16;
    v17 = operator new(0x28u);
    *(_DWORD *)(v17 + 32) = a3;
    std::_Rb_tree_insert_and_rebalance(v39, v17, v37, v11);
    ++*((_QWORD *)v9 + 5);
  }
  if ( !a4 )
    return v93 - __readfsqword(0x28u);
  v18 = sub_1C580(a1, a3);
  v19 = *a1;
  v20 = v18;
  v21 = a1[87];
  si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  v48[0] = &off_62AA0;
  v48[1] = v19;
  v49 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v59 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v50 = -1;
  v51 = 8;
  v52 = 1;
  v53 = v20;
  v54 = 0;
  v55 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v56 = 0;
  v61 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v87 = 0;
  v88 = v21;
  v89 = 2;
  v90 = 0;
  v92 = 0;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v82 = 0;
  v86 = -1;
  v91 = 0;
  if ( !(unsigned __int8)sub_25BB0(v48) )
    goto LABEL_39;
  v22 = qlsize(v20);
  if ( !(unsigned __int8)sub_25EF0(v48, 0, v22, 1) )
    goto LABEL_39;
  v23 = (const char *)v48;
  sub_2B040(&v46, v48, 0);
  close_linput(v20);
  v24 = v46;
  v45 = v47;
  v43 = v46;
  v40 = &v46[3 * v47];
  if ( v40 == v46 )
    goto LABEL_33;
  v25 = -1;
  if ( a4 != -1 )
    v25 = a4 - 1;
  v44 = v25;
  while ( v10 <= 0 )
  {
    v24 += 3;
    if ( v40 == v24 )
      goto LABEL_33;
  }
LABEL_23:
  v41 = v8;
  v42 = v9;
  v26 = v24;
  v38 = (const char **)v8[75];
  while ( 2 )
  {
    v27 = v38;
    v28 = v26[1];
    for ( i = 0; i != v10; ++i )
    {
      if ( v27[1] )
      {
        v23 = *v27;
        v30 = s1;
        if ( !v28 )
          goto LABEL_26;
      }
      else
      {
        if ( !v28 )
        {
LABEL_32:
          v31 = i;
          v32 = v26;
          v8 = v41;
          v9 = v42;
          v23 = v42;
          sub_2CE00(v41, v42, v31, v44);
          v24 = v32 + 3;
          if ( v40 != v24 )
            goto LABEL_23;
          goto LABEL_33;
        }
        v23 = s1;
      }
      v30 = (const char *)*v26;
LABEL_26:
      if ( !strcmp(v30, v23) )
        goto LABEL_32;
      v27 += 3;
    }
    v26 += 3;
    if ( v40 != v26 )
      continue;
    break;
  }
LABEL_33:
  if ( v43 )
  {
    v33 = 0;
    v34 = v43;
    if ( v45 )
    {
      do
      {
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          qfree(v35, v23);
        }
        ++v33;
        v34 += 3;
      }
      while ( v45 != v33 );
    }
    qfree(v43, v23);
  }
LABEL_39:
  sub_162E0(v48);
  return v93 - __readfsqword(0x28u);
}

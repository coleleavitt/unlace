__int64 __fastcall sub_1573C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rdi
  int flags; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // r14
  int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r12
  __int64 v37; // rdx
  int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // [rsp+10h] [rbp-148h]
  unsigned __int64 v45; // [rsp+18h] [rbp-140h]
  _QWORD *v46; // [rsp+18h] [rbp-140h]
  int j; // [rsp+20h] [rbp-138h]
  int i; // [rsp+28h] [rbp-130h]
  int v49; // [rsp+28h] [rbp-130h]
  int v50; // [rsp+28h] [rbp-130h]
  unsigned __int8 v51; // [rsp+2Fh] [rbp-129h]
  __int64 v52; // [rsp+38h] [rbp-120h]
  unsigned __int8 *v53; // [rsp+50h] [rbp-108h] BYREF
  __int64 **v54; // [rsp+58h] [rbp-100h] BYREF
  __int64 *v55; // [rsp+60h] [rbp-F8h] BYREF
  int **v56; // [rsp+68h] [rbp-F0h] BYREF
  __m128i v57; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v59; // [rsp+88h] [rbp-D0h]
  __int64 v60; // [rsp+A0h] [rbp-B8h]
  __m128i si128; // [rsp+A8h] [rbp-B0h]
  __int128 v62; // [rsp+B8h] [rbp-A0h]
  __int64 v63; // [rsp+C8h] [rbp-90h]
  __int64 v64; // [rsp+D0h] [rbp-88h]
  __int64 v65; // [rsp+D8h] [rbp-80h]
  __int64 v66; // [rsp+E0h] [rbp-78h]
  __int64 v67; // [rsp+E8h] [rbp-70h]
  __int64 v68; // [rsp+F0h] [rbp-68h]
  __int64 v69; // [rsp+F8h] [rbp-60h]
  __int64 v70; // [rsp+100h] [rbp-58h]
  __int128 v71; // [rsp+108h] [rbp-50h]
  unsigned __int64 v72; // [rsp+118h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = a2 + 32;
  v11 = a2 + 32;
  if ( *(_DWORD *)v7 == 9 )
  {
    v11 = v7 + 32;
    if ( *(_BYTE *)(v7 + 32) != 4 )
      return 0;
  }
  v12 = *(_QWORD *)(v11 + 8);
  if ( *(_DWORD *)v12 != 2 )
    return 0;
  if ( !v12 )
    return 0;
  if ( *(_BYTE *)(v12 + 48) != 4 )
    return 0;
  v13 = *(_QWORD *)(v12 + 56);
  LOBYTE(a5) = v13 == 0 || *(_DWORD *)v13 != 12;
  v5 = a5;
  if ( (_BYTE)a5 )
    return 0;
  if ( *(_BYTE *)(v13 + 32) == 10 )
  {
    v14 = *(_QWORD *)(v13 + 40);
    v15 = (unsigned __int8 *)(v13 + 48);
  }
  else
  {
    if ( *(_BYTE *)(v13 + 48) != 10 )
      return 0;
    v14 = *(_QWORD *)(v13 + 56);
    v15 = (unsigned __int8 *)(v13 + 32);
  }
  v53 = v15;
  if ( *(_BYTE *)v14 != 6 )
    return 0;
  v16 = *(_QWORD *)(v14 + 8);
  v51 = is_loaded();
  if ( !v51 )
    return 0;
  v44 = *(_DWORD *)(v12 + 68);
  if ( v44 != 1 )
  {
    if ( *v53 != 4 )
      return 0;
    v17 = *((_DWORD **)v53 + 1);
    if ( *v17 != 14 )
      return 0;
    if ( !v17 )
      return 0;
    v18 = sub_1186A0((__int64)v17, &v53);
    if ( !v18 || !sub_9E150(v18, v44, 1u) )
      return 0;
  }
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v67 = 0;
  v62 = -1;
  v60 = 0x800000;
  v68 = 2;
  v69 = -1;
  v70 = 0;
  v71 = 0;
  if ( !get_switch_info() || (v60 & 1) == 0 )
  {
    v52 = getseg();
    if ( v52 )
    {
      v19 = *(__int64 **)(a2 + 56);
      v57 = 0u;
      v45 = sub_11E120(v19);
      for ( i = 0; *(_QWORD *)(v52 + 8) >= (unsigned __int64)(v16 + v44); ++i )
      {
        flags = get_flags_ex();
        v21 = flags & 0x600;
        if ( v21 == 1536
          || v21 != 512 && ((flags & 0xF00000) == 0x500000 || v21 == 1024 && (flags & 0xF0000000) == 0xB0000000LL) )
        {
          break;
        }
        if ( !(unsigned __int8)get_data_value() || v45 < (unsigned __int64)v56 )
          break;
        LODWORD(v55) = (_DWORD)v56;
        v54 = &v55;
        v22 = sub_1570D0(&v57, (int *)&v55, (int **)&v54);
        v23 = i;
        v24 = (_QWORD *)(v22 + 24);
        v58 = i;
        v25 = *(_QWORD *)(v22 + 40);
        v26 = v24[1];
        if ( v24[3] < (unsigned __int64)(v25 + 1) )
        {
          v31 = qvector_reserve();
          v24[1] = v31;
          v26 = v31;
          v23 = i;
          v25 = v24[2];
        }
        *(_QWORD *)(v26 + 8 * v25) = v23;
        v16 += v44;
        ++v24[2];
      }
      if ( v45 < i && (unsigned int)sub_33E560(a1, v16) )
      {
        v49 = 0;
        v46 = *(_QWORD **)(a2 + 56);
        while ( (unsigned __int64)v49 < v46[1] )
        {
          v27 = (_QWORD *)(*v46 + 24LL * v49);
          if ( v27[1] )
          {
            v28 = 0;
            v29 = 0;
            while ( 1 )
            {
              v30 = *(_QWORD *)(*v27 + 8 * v29);
              v55 = &v58;
              LODWORD(v58) = v30;
              if ( *(_QWORD *)(sub_1570D0(&v57, (int *)&v58, (int **)&v55) + 40) )
                break;
              v29 = ++v28;
              if ( (unsigned __int64)v28 >= v27[1] )
                goto LABEL_47;
            }
          }
          ++v49;
        }
        for ( j = 0; (unsigned __int64)j < v46[1]; ++j )
        {
          v58 = 0;
          v59 = 0;
          v32 = (__int64 *)(*v46 + 24LL * j);
          if ( v32[1] )
          {
            v33 = 0;
            v50 = 0;
            do
            {
              v34 = *(_QWORD *)(*v32 + 8 * v33);
              v56 = (int **)&v55;
              LODWORD(v55) = v34;
              v35 = sub_1570D0(&v57, (int *)&v55, (int **)&v56);
              v36 = v35 + 24;
              if ( *(_QWORD *)(v35 + 40) )
              {
                v37 = v59;
                v38 = 0;
                v39 = 0;
                do
                {
                  v40 = v58;
                  v41 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8 * v39);
                  if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v37 + 1) )
                  {
                    v58 = qvector_reserve();
                    v37 = v59;
                    v40 = v58;
                  }
                  *(_QWORD *)(v40 + 8 * v37) = v41;
                  ++v38;
                  v37 = v59 + 1;
                  v39 = v38;
                  *(_QWORD *)&v59 = v59 + 1;
                }
                while ( (unsigned __int64)v38 < *(_QWORD *)(v36 + 16) );
              }
              v33 = ++v50;
            }
            while ( v50 < (unsigned __int64)v32[1] );
          }
          v42 = *v32;
          v43 = v32[2];
          *v32 = v58;
          *(_OWORD *)(v32 + 1) = v59;
          v58 = v42;
          *((_QWORD *)&v59 + 1) = v43;
          if ( v42 )
          {
            *(_QWORD *)&v59 = 0;
            qfree();
          }
        }
        sub_11F840((__int64)&v58, v53);
        sub_120F80(v8, (unsigned __int8 *)&v58);
        sub_118BA0((__int64)&v58);
        v5 = v51;
      }
LABEL_47:
      sub_156620(v57.m128i_i64);
    }
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  return v5;
}


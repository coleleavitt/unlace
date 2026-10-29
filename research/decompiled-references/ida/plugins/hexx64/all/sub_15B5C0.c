__int64 __fastcall sub_15B5C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rax
  unsigned __int8 *v8; // r13
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rax
  unsigned __int64 v16; // rbx
  _DWORD *v17; // rdi
  char *v18; // rdi
  __int64 *v19; // rdi
  int flags; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rbp
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // r14
  int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rdx
  int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // [rsp+10h] [rbp-148h]
  unsigned __int64 v48; // [rsp+18h] [rbp-140h]
  _QWORD *v49; // [rsp+18h] [rbp-140h]
  int j; // [rsp+20h] [rbp-138h]
  int i; // [rsp+28h] [rbp-130h]
  int v52; // [rsp+28h] [rbp-130h]
  int v53; // [rsp+28h] [rbp-130h]
  unsigned __int8 v54; // [rsp+2Fh] [rbp-129h]
  __int64 v55; // [rsp+38h] [rbp-120h]
  unsigned __int8 *v56; // [rsp+50h] [rbp-108h] BYREF
  __int64 **v57; // [rsp+58h] [rbp-100h] BYREF
  __int64 *v58; // [rsp+60h] [rbp-F8h] BYREF
  int **v59; // [rsp+68h] [rbp-F0h] BYREF
  __m128i v60; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v62; // [rsp+88h] [rbp-D0h]
  __int64 v63; // [rsp+A0h] [rbp-B8h]
  __m128i si128; // [rsp+A8h] [rbp-B0h]
  __int128 v65; // [rsp+B8h] [rbp-A0h]
  __int64 v66; // [rsp+C8h] [rbp-90h]
  __int64 v67; // [rsp+D0h] [rbp-88h]
  __int64 v68; // [rsp+D8h] [rbp-80h]
  __int64 v69; // [rsp+E0h] [rbp-78h]
  __int64 v70; // [rsp+E8h] [rbp-70h]
  __int64 v71; // [rsp+F0h] [rbp-68h]
  __int64 v72; // [rsp+F8h] [rbp-60h]
  __int64 v73; // [rsp+100h] [rbp-58h]
  __int128 v74; // [rsp+108h] [rbp-50h]
  unsigned __int64 v75; // [rsp+118h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = (unsigned __int8 *)(a2 + 32);
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
  v56 = v15;
  if ( *(_BYTE *)v14 != 6 )
    return 0;
  v16 = *(_QWORD *)(v14 + 8);
  v54 = is_loaded();
  if ( !v54 )
    return 0;
  v47 = *(_DWORD *)(v12 + 68);
  if ( v47 != 1 )
  {
    if ( *v56 != 4 )
      return 0;
    v17 = *((_DWORD **)v56 + 1);
    if ( *v17 != 14 )
      return 0;
    if ( !v17 )
      return 0;
    v18 = (char *)sub_11C8A0((__int64)v17, &v56);
    if ( !v18 || !sub_A2350(v18, v47, 1u) )
      return 0;
  }
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v70 = 0;
  v65 = -1;
  v63 = 0x800000;
  v71 = 2;
  v72 = -1;
  v73 = 0;
  v74 = 0;
  if ( !get_switch_info() || (v63 & 1) == 0 )
  {
    v55 = getseg();
    if ( v55 )
    {
      v19 = *(__int64 **)(a2 + 56);
      v60 = 0u;
      v48 = sub_122320(v19);
      for ( i = 0; *(_QWORD *)(v55 + 8) >= v16 + v47; ++i )
      {
        flags = get_flags_ex();
        v21 = flags & 0x600;
        if ( v21 == 1536
          || v21 != 512 && ((flags & 0xF00000) == 0x500000 || v21 == 1024 && (flags & 0xF0000000) == 0xB0000000LL) )
        {
          break;
        }
        if ( !(unsigned __int8)get_data_value() || v48 < (unsigned __int64)v59 )
          break;
        LODWORD(v58) = (_DWORD)v59;
        v57 = &v58;
        v22 = sub_15B2D0(&v60, (int *)&v58, (int **)&v57);
        v23 = i;
        v24 = (_QWORD *)(v22 + 24);
        v25 = v22 + 32;
        v61 = i;
        v26 = *(_QWORD *)(v22 + 40);
        v27 = v24[1];
        if ( v24[3] < (unsigned __int64)(v26 + 1) )
        {
          v34 = qvector_reserve(v25, v27, v26 + 1, 8);
          v24[1] = v34;
          v27 = v34;
          v23 = i;
          v26 = v24[2];
        }
        *(_QWORD *)(v27 + 8 * v26) = v23;
        v16 += v47;
        ++v24[2];
      }
      if ( v48 < i && (unsigned int)sub_343460(a1, v16, v47 * i) )
      {
        v52 = 0;
        v49 = *(_QWORD **)(a2 + 56);
        while ( (unsigned __int64)v52 < v49[1] )
        {
          v30 = (_QWORD *)(*v49 + 24LL * v52);
          if ( v30[1] )
          {
            v31 = 0;
            v32 = 0;
            while ( 1 )
            {
              v33 = *(_QWORD *)(*v30 + 8 * v32);
              v58 = &v61;
              LODWORD(v61) = v33;
              if ( *(_QWORD *)(sub_15B2D0(&v60, (int *)&v61, (int **)&v58) + 40) )
                break;
              v32 = ++v31;
              if ( (unsigned __int64)v31 >= v30[1] )
                goto LABEL_47;
            }
          }
          ++v52;
        }
        for ( j = 0; (unsigned __int64)j < v49[1]; ++j )
        {
          v61 = 0;
          v62 = 0;
          v35 = (__int64 *)(*v49 + 24LL * j);
          if ( v35[1] )
          {
            v36 = 0;
            v53 = 0;
            do
            {
              v37 = *(_QWORD *)(*v35 + 8 * v36);
              v59 = (int **)&v58;
              LODWORD(v58) = v37;
              v38 = sub_15B2D0(&v60, (int *)&v58, (int **)&v59);
              v39 = v38 + 24;
              if ( *(_QWORD *)(v38 + 40) )
              {
                v40 = v62;
                v41 = 0;
                v42 = 0;
                do
                {
                  v29 = *(_QWORD *)(v39 + 8);
                  v43 = v61;
                  v44 = *(_QWORD *)(v29 + 8 * v42);
                  if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v40 + 1) )
                  {
                    v61 = qvector_reserve((__int64)&v61, v61, v40 + 1, 8);
                    v40 = v62;
                    v43 = v61;
                  }
                  *(_QWORD *)(v43 + 8 * v40) = v44;
                  ++v41;
                  v40 = v62 + 1;
                  v42 = v41;
                  *(_QWORD *)&v62 = v62 + 1;
                }
                while ( (unsigned __int64)v41 < *(_QWORD *)(v39 + 16) );
              }
              v36 = ++v53;
            }
            while ( v53 < (unsigned __int64)v35[1] );
          }
          v45 = *v35;
          v46 = v35[2];
          *v35 = v61;
          v35[1] = v62;
          v28 = *((_QWORD *)&v62 + 1);
          v35[2] = *((_QWORD *)&v62 + 1);
          v61 = v45;
          *((_QWORD *)&v62 + 1) = v46;
          if ( v45 )
          {
            *(_QWORD *)&v62 = 0;
            qfree(v45);
          }
        }
        sub_123A40((__int64)&v61, v56, v28, v29);
        sub_125180(v8, (unsigned __int8 *)&v61);
        sub_11CDA0((__int64)&v61);
        v5 = v54;
      }
LABEL_47:
      sub_15A820(v60.m128i_i64);
    }
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  return v5;
}


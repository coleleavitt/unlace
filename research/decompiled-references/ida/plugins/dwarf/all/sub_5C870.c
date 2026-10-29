__int64 __fastcall sub_5C870(__m128i *a1, unsigned __int64 *a2, __m128i *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r9
  __int64 (__fastcall *v13)(); // rax
  char v14; // al
  char v15; // r13
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r13
  _QWORD *v21; // rbp
  __m128i *v22; // r15
  __m128i *v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rax
  char v27; // al
  _QWORD *v28; // r13
  char v29; // r8
  void (__fastcall *v31)(_QWORD *); // rdx
  void (__fastcall *v32)(_QWORD *); // rax
  _QWORD *v33; // rax
  __m128i *v34; // r12
  unsigned int v35; // ebp
  __int64 v36; // rbx
  void *v37; // rdi
  __int64 v38; // rbx
  char v39; // r15
  _QWORD *v40; // rbp
  __int64 v41; // rdi
  __int64 idati; // rdx
  int v43; // eax
  char v44; // dl
  char v45; // dl
  __int64 v46; // r15
  __m128i *v47; // r13
  __int16 v48; // [rsp+0h] [rbp-228h]
  __int16 v49; // [rsp+0h] [rbp-228h]
  char v50; // [rsp+0h] [rbp-228h]
  char v51; // [rsp+0h] [rbp-228h]
  unsigned __int8 v52; // [rsp+0h] [rbp-228h]
  char v53; // [rsp+0h] [rbp-228h]
  char v54; // [rsp+0h] [rbp-228h]
  char v55; // [rsp+0h] [rbp-228h]
  char v56; // [rsp+0h] [rbp-228h]
  char tinfo; // [rsp+8h] [rbp-220h]
  __int64 *v58; // [rsp+18h] [rbp-210h]
  _QWORD *v59; // [rsp+18h] [rbp-210h]
  __m128i *v60; // [rsp+18h] [rbp-210h]
  __int64 v61; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-1D8h] BYREF
  void *v63; // [rsp+58h] [rbp-1D0h] BYREF
  _BYTE v64[24]; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v65; // [rsp+78h] [rbp-1B0h]
  __int128 v66; // [rsp+80h] [rbp-1A8h]
  __int64 v67; // [rsp+90h] [rbp-198h]
  __int64 v68; // [rsp+98h] [rbp-190h]
  __int64 v69; // [rsp+A0h] [rbp-188h]
  __int128 v70; // [rsp+A8h] [rbp-180h]
  __int64 v71; // [rsp+B8h] [rbp-170h]
  __int128 v72; // [rsp+C0h] [rbp-168h]
  char v73; // [rsp+D0h] [rbp-158h]
  char v74; // [rsp+D8h] [rbp-150h]
  __m128i v75[14]; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v76[4]; // [rsp+1C0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v78; // [rsp+1E8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  sub_84A60((__int64)v75);
  LOBYTE(v5) = sub_98E20(a3->m128i_i64, v75[0].m128i_i64);
  v6 = v5;
  if ( !(_BYTE)v5 )
    goto LABEL_2;
  v9 = sub_97BF0((__int64)v75);
  switch ( v9 )
  {
    case 1LL:
      v62 = 0;
      if ( !(unsigned __int8)sub_62AC0(a1, &v62, v75) )
        goto LABEL_24;
      memset(v64, 0, sizeof(v64));
      v65 = -1;
      sub_A1200(v75, (__int64)v64);
      v26 = *(_DWORD **)(sub_87DA0(v75) + 216);
      v63 = v26;
      if ( v26 )
        ++v26[2];
      v27 = sub_88CF0(a2, (unsigned __int64)&v63, (__int64)&v62, (__int64)v64);
      v28 = v63;
      v29 = v27;
      if ( v63 )
      {
        if ( (*((_DWORD *)v63 + 2))-- == 1 )
        {
          v31 = *(void (__fastcall **)(_QWORD *))*v28;
          if ( v31 == sub_15E30 )
          {
            v32 = *(void (__fastcall **)(_QWORD *))(*v28 + 16LL);
            if ( v32 == sub_15D70 )
            {
              *v28 = &off_C71D8;
              v33 = (_QWORD *)v28[16];
              if ( v33 )
              {
                if ( v33[2] )
                {
                  v50 = v29;
                  v59 = (_QWORD *)v28[16];
                  v34 = a3;
                  v35 = v6;
                  v36 = v33[2];
                  do
                  {
                    sub_546C0(*(_QWORD **)(v36 + 24));
                    v37 = (void *)v36;
                    v36 = *(_QWORD *)(v36 + 16);
                    operator delete(v37, 0x30u);
                  }
                  while ( v36 );
                  v29 = v50;
                  v33 = v59;
                  v6 = v35;
                  a3 = v34;
                }
                v51 = v29;
                operator delete(v33, 0x30u);
                v29 = v51;
              }
              if ( v28[19] )
              {
                v60 = a3;
                v52 = v6;
                v38 = v28[19];
                v39 = v29;
                do
                {
                  v40 = (_QWORD *)v38;
                  sub_54400(*(_QWORD **)(v38 + 24));
                  v41 = *(_QWORD *)(v38 + 32);
                  v38 = *(_QWORD *)(v38 + 16);
                  if ( v41 )
                  {
                    v40[5] = 0;
                    qfree();
                  }
                  operator delete(v40, 0x48u);
                }
                while ( v38 );
                v6 = v52;
                a3 = v60;
                v29 = v39;
              }
              if ( v28[12] )
              {
                v28[13] = 0;
                v53 = v29;
                qfree();
                v29 = v53;
              }
              v54 = v29;
              operator delete(v28, 0xC0u);
              v29 = v54;
            }
            else
            {
              v56 = v29;
              v32(v28);
              v29 = v56;
            }
          }
          else
          {
            v55 = v27;
            v31(v28);
            v29 = v55;
          }
        }
      }
      if ( !v29 )
      {
        if ( *(_QWORD *)v64 )
        {
          *(_QWORD *)&v64[8] = 0;
          qfree();
        }
LABEL_24:
        clear_tinfo_t();
        goto LABEL_2;
      }
      v63 = nullptr;
      LODWORD(v61) = 0;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, void **))(v77 + 112))(
              *(_QWORD *)(v75[0].m128i_i64[0] + 24),
              8455,
              &v61,
              &v63)
        && (_DWORD)v61 )
      {
        v15 = sub_33970(a2);
        if ( *(_QWORD *)v64 )
        {
          *(_QWORD *)&v64[8] = 0;
          qfree();
        }
        clear_tinfo_t();
        goto LABEL_12;
      }
      if ( *(_QWORD *)v64 )
      {
        *(_QWORD *)&v64[8] = 0;
        qfree();
      }
      clear_tinfo_t();
      goto LABEL_5;
    case 15LL:
    case 16LL:
    case 31LL:
    case 66LL:
      v63 = nullptr;
      if ( !(unsigned __int8)sub_62AC0(a1, &v63, v75) )
      {
        clear_tinfo_t();
        goto LABEL_2;
      }
      *(_QWORD *)v64 = 0;
      LODWORD(v62) = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, _BYTE *))(v77 + 112))(
             *(_QWORD *)(v75[0].m128i_i64[0] + 24),
             11,
             &v62,
             v64)
        || !(_DWORD)v62
        || (v24 = sub_97AE0(v75[0].m128i_i64), v25 = v24 >> 3, v24 == -1) )
      {
        v25 = -1;
      }
      v15 = sub_55270(a2, (__int64)&v63, v25);
      clear_tinfo_t();
      goto LABEL_12;
    case 18LL:
      v58 = &a1->m128i_i64[1];
      if ( &a1[1] != (__m128i *)sub_5C180((__int64)&a1->m128i_i64[1], (__int64)a3) )
        goto LABEL_38;
      v46 = sub_97AE0(v75[0].m128i_i64);
      v61 = 0;
      if ( (v76[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v76[0] == -1 )
      {
        if ( under_debugger )
          BUG();
        v16 = interr();
        goto LABEL_95;
      }
      sub_5C500(a1, (__int64)&v61, (__int64)v76);
      if ( v46 == -1
        || (*(_DWORD *)&v64[8] = 0,
            *(_QWORD *)v64 = 0,
            *(_DWORD *)&v64[12] = (unsigned __int64)(v46 + 7) >> 3,
            copy_tinfo_t(),
            tinfo = create_tinfo(),
            clear_tinfo_t(),
            !tinfo) )
      {
        v62 = 0;
        v63 = nullptr;
        *(_OWORD *)v64 = 0;
        copy_tinfo_t();
        *(_QWORD *)&v64[16] = 0;
        copy_tinfo_t();
        LODWORD(v65) = 0;
        WORD2(v65) = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      sub_5C320(v58, a3);
      copy_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
LABEL_38:
      v22 = (__m128i *)a1[1].m128i_i64[1];
      v23 = a1 + 1;
      if ( !v22 )
        goto LABEL_76;
      do
      {
        if ( (sub_849A0((unsigned __int64 *)&v22[2], (unsigned __int64 *)a3) & 0x80000000) == 0LL )
        {
          v23 = v22;
          v22 = (__m128i *)v22[1].m128i_i64[0];
        }
        else
        {
          v22 = (__m128i *)v22[1].m128i_i64[1];
        }
      }
      while ( v22 );
      if ( v23 == &a1[1] || (sub_849A0((unsigned __int64 *)a3, (unsigned __int64 *)&v23[2]) & 0x80000000) != 0LL )
      {
LABEL_76:
        *(_QWORD *)v64 = a3;
        sub_5C230(v58, v23, (const __m128i **)v64);
      }
      copy_tinfo_t();
      goto LABEL_5;
    case 21LL:
      *(_QWORD *)&v64[8] = a1;
      *(_QWORD *)&v64[16] = a1;
      *(_QWORD *)v64 = &off_C8668;
      v65 = 0;
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v71 = 0;
      v73 = 16;
      v74 = 0;
      v66 = 0;
      v70 = 0;
      v72 = 0;
      LOBYTE(v17) = sub_527A0(v64, (__int64)v75);
      v6 = v17;
      if ( (_BYTE)v17 )
      {
        LODWORD(v67) = 0;
        v43 = sub_309E0(v64);
        v44 = v73 & 0xF;
        if ( (v43 & 0xFFFFFF0F) != 0 || v43 == 192 )
        {
          v45 = v44 | 0xC0;
        }
        else
        {
          v45 = v43 | v44;
          v43 = 0;
        }
        v73 = v45;
        HIDWORD(v67) = v43;
        v6 = create_tinfo();
      }
      *(_QWORD *)v64 = &off_C8668;
      if ( v71 )
      {
        *(_QWORD *)&v72 = 0;
        qfree();
      }
      cleanup_argloc();
      clear_tinfo_t();
      v18 = v65;
      if ( v65 )
      {
        v19 = v66;
        if ( (_QWORD)v66 )
        {
          v20 = 0;
          do
          {
            v21 = (_QWORD *)(v18 + 80 * v20);
            clear_tinfo_t();
            if ( v21[5] )
            {
              v21[6] = 0;
              qfree();
            }
            if ( v21[2] )
            {
              v21[3] = 0;
              qfree();
            }
            ++v20;
            cleanup_argloc();
            v18 = v65;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v66 = 0;
        qfree();
      }
      goto LABEL_5;
    case 38LL:
    case 53LL:
      v49 = v9;
      *(_QWORD *)v64 = 0;
      if ( (unsigned __int8)sub_62AC0(a1, v64, v75) )
      {
        v16 = *(_QWORD *)v64;
        if ( v49 == 38 )
        {
LABEL_95:
          if ( (_BYTE)v16 )
          {
            *(_QWORD *)v64 = v16 | 0x40;
            copy_tinfo_t();
            goto LABEL_20;
          }
        }
        else if ( v64[0] )
        {
          LOBYTE(v16) = v64[0] | 0x80;
          *(_QWORD *)v64 = v16;
          copy_tinfo_t();
LABEL_20:
          clear_tinfo_t();
          goto LABEL_5;
        }
        copy_tinfo_t();
        goto LABEL_20;
      }
      copy_tinfo_t();
      clear_tinfo_t();
LABEL_2:
      if ( (debug & 0x400000) != 0 )
      {
        v8 = sub_81860(a3->m128i_i64, nullptr, 0);
        sub_88B80((__int64)"Couldn't collect type for DIE @ %s\n", v8);
      }
      v6 = 0;
LABEL_5:
      sub_1B750((__int64)v75);
      return v6;
    case 55LL:
      v14 = sub_62AC0(a1, a2, v75);
      goto LABEL_11;
    case 59LL:
      sub_5C3E0(a1, (__int64)a2, (__int64)a3);
      goto LABEL_5;
    default:
      v48 = v9;
      v10 = a1[5].m128i_i64[0];
      v11 = (unsigned int)sub_58480(v10, a3->m128i_i64);
      if ( v11 )
      {
        idati = *(_QWORD *)(v12 + 8);
        *(_WORD *)&v64[16] = 1;
        *(_QWORD *)&v64[8] = v11;
        if ( !idati )
          idati = get_idati(v10, a3->m128i_i8);
        *(_QWORD *)v64 = idati;
        create_tinfo();
        goto LABEL_5;
      }
      if ( v48 == 36 )
      {
        v47 = sub_5C320(&a1->m128i_i64[1], a3);
        if ( !(unsigned __int8)sub_31860((__int64)v47, (char *)&v63, v75) || !(_BYTE)v63 )
        {
          *(_QWORD *)v64 = 7;
          copy_tinfo_t();
          clear_tinfo_t();
        }
        copy_tinfo_t();
        if ( *(_BYTE *)a2 )
          goto LABEL_5;
      }
      else
      {
        v13 = *(__int64 (__fastcall **)())(a1->m128i_i64[0] + 16);
        if ( v13 != sub_12FA0 )
        {
          v14 = ((__int64 (__fastcall *)(__m128i *, unsigned __int64 *, __m128i *))v13)(a1, a2, a3);
LABEL_11:
          v15 = v14;
LABEL_12:
          if ( v15 )
            goto LABEL_5;
        }
      }
      goto LABEL_2;
  }
}


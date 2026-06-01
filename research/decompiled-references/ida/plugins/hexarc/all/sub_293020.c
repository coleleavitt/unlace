__int64 __fastcall sub_293020(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int tinfo_details; // ebp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  _QWORD *v17; // rbx
  int tinfo_property; // r15d
  int v19; // r15d
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // edx
  __int64 v25; // r12
  __int64 v26; // r13
  char v27; // r15
  __int64 v28; // rax
  char v29; // r15
  char v30; // r15
  char v31; // r15
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned __int64 v35; // [rsp+28h] [rbp-170h]
  unsigned __int64 v36; // [rsp+30h] [rbp-168h]
  __int64 v37; // [rsp+38h] [rbp-160h]
  int v38; // [rsp+60h] [rbp-138h]
  int v39; // [rsp+64h] [rbp-134h]
  __int64 v40; // [rsp+70h] [rbp-128h] BYREF
  __int64 v41; // [rsp+78h] [rbp-120h] BYREF
  __int64 v42; // [rsp+80h] [rbp-118h]
  __int64 v43; // [rsp+88h] [rbp-110h]
  __int64 v44; // [rsp+90h] [rbp-108h]
  __int128 v45; // [rsp+98h] [rbp-100h]
  __int64 v46; // [rsp+A8h] [rbp-F0h]
  __int64 v47; // [rsp+B0h] [rbp-E8h]
  __int64 v48; // [rsp+B8h] [rbp-E0h]
  __int128 v49; // [rsp+C0h] [rbp-D8h]
  __int64 v50; // [rsp+D0h] [rbp-C8h]
  __int128 v51; // [rsp+D8h] [rbp-C0h]
  char v52; // [rsp+E8h] [rbp-B0h]
  __int64 v53; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+F8h] [rbp-A0h]
  __int64 v55; // [rsp+108h] [rbp-90h]
  __int64 v56; // [rsp+110h] [rbp-88h]
  __int64 v57; // [rsp+118h] [rbp-80h]
  __int128 v58; // [rsp+120h] [rbp-78h]
  __int64 v59; // [rsp+130h] [rbp-68h]
  __int128 v60; // [rsp+138h] [rbp-60h]
  char v61; // [rsp+148h] [rbp-50h]
  unsigned __int64 v62; // [rsp+158h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v53 = 0;
  copy_tinfo_t();
  sub_2920F0(&v40, &v53);
  clear_tinfo_t();
  tinfo_details = sub_325640(&v40, a1, -1);
  if ( (_BYTE)tinfo_details )
  {
    v53 = 0;
    copy_tinfo_t();
    sub_2920F0(&v41, &v53);
    clear_tinfo_t();
    if ( a4 )
    {
      if ( (get_tinfo_property() & 0xF) != 0xC
        || (get_tinfo_property() & 0xF) != 0xC
        || (tinfo_property = get_tinfo_property(), tinfo_property != (unsigned int)get_tinfo_property())
        || (v19 = get_tinfo_property(), v19 != (unsigned int)get_tinfo_property()) )
      {
        tinfo_details = 0;
LABEL_32:
        clear_tinfo_t();
        goto LABEL_2;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xC && (v9 = 2, (get_tinfo_property() & 0xF) == 0xC) )
    {
      if ( !a4 )
      {
        v9 = v41;
        if ( !(unsigned __int8)compare_tinfo() )
          goto LABEL_32;
      }
      v39 = sub_326E00(a2, v9);
      v38 = sub_326E00(a3, v9);
      v44 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v50 = 0;
      v52 = 16;
      v53 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v59 = 0;
      v61 = 16;
      v45 = 0;
      v49 = 0;
      v51 = 0;
      v54 = 0;
      v58 = 0;
      v60 = 0;
      tinfo_details = get_tinfo_details();
      if ( !(_BYTE)tinfo_details )
      {
LABEL_8:
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v10 = v53;
        if ( v53 )
        {
          v11 = v54;
          if ( (_QWORD)v54 )
          {
            v12 = 0;
            do
            {
              v13 = (_QWORD *)(v10 + 80 * v12);
              clear_tinfo_t();
              if ( v13[5] )
              {
                v13[6] = 0;
                qfree();
              }
              if ( v13[2] )
              {
                v13[3] = 0;
                qfree();
              }
              ++v12;
              cleanup_argloc();
              v10 = v53;
            }
            while ( v11 != v12 );
          }
          *(_QWORD *)&v54 = 0;
          qfree();
        }
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v14 = v44;
        if ( v44 )
        {
          v15 = v45;
          if ( (_QWORD)v45 )
          {
            v16 = 0;
            do
            {
              v17 = (_QWORD *)(v14 + 80 * v16);
              clear_tinfo_t();
              if ( v17[5] )
              {
                v17[6] = 0;
                qfree();
              }
              if ( v17[2] )
              {
                v17[3] = 0;
                qfree();
              }
              ++v16;
              cleanup_argloc();
              v14 = v44;
            }
            while ( v15 != v16 );
          }
          *(_QWORD *)&v45 = 0;
          qfree();
        }
        goto LABEL_32;
      }
      tinfo_details = get_tinfo_details();
      if ( (_BYTE)tinfo_details )
      {
        v36 = (unsigned int)score_tinfo();
        v20 = (unsigned int)score_tinfo();
        v35 = v20;
        if ( (unsigned __int8)compare_tinfo() && ((v56 & 0x3F) == 61) != ((v47 & 0x3F) == 61) )
        {
          v21 = v20 + 1;
          if ( (v56 & 0x3F) != 0x3D )
            v21 = v20 - 1;
          v35 = v21;
        }
        v22 = (int)v45;
        if ( (unsigned __int64)v54 >= (int)v45 )
          goto LABEL_46;
        v32 = v61 & 0xF0;
        if ( (v61 & 0xF0) == 0xC0 )
          v32 = HIDWORD(v55);
        if ( v32 <= 0x10 )
          v32 = getinf();
        v33 = v32 & 0xFFFFFFF0;
        if ( v33 == 64 || v33 == 208 )
        {
          ++v35;
          v22 = (int)v54;
LABEL_46:
          if ( (int)v22 <= 0 )
          {
LABEL_63:
            if ( v39 <= v38 )
            {
              LOBYTE(tinfo_details) = v39 == v38;
              LOBYTE(v22) = v36 < v35;
              tinfo_details &= v22;
            }
            goto LABEL_8;
          }
          v23 = 0;
          v37 = 80 * v22;
          while ( 1 )
          {
            v25 = v23 + v44;
            v26 = v23 + v53;
            if ( !a4 )
              break;
            if ( (*(_BYTE *)(v25 + 64) & 0xF) == 0xA )
              goto LABEL_59;
LABEL_49:
            if ( (*(_BYTE *)(v26 + 64) & 0xF) == 0xA )
            {
              v43 = 0;
              v43 = get_tinfo_property();
              v30 = get_tinfo_property() & 0x3F;
              clear_tinfo_t();
              if ( v30 != 1 )
              {
                v43 = 0;
                v43 = get_tinfo_property();
                v31 = v43 & 0x3F;
                clear_tinfo_t();
                v38 -= v31 != 48;
              }
            }
            v36 += (unsigned int)score_tinfo();
            v35 += (unsigned int)score_tinfo();
            LODWORD(v22) = compare_tinfo();
            if ( (_BYTE)v22 )
            {
              v22 = *(_QWORD *)(v26 + 64) & 0x3FLL;
              if ( ((_BYTE)v22 == 61) != ((*(_BYTE *)(v25 + 64) & 0x3F) == 61) )
              {
                v24 = v38 - 1;
                if ( (_BYTE)v22 != 61 )
                  v24 = v38 + 1;
                v38 = v24;
              }
            }
            v23 += 80;
            if ( v37 == v23 )
              goto LABEL_63;
          }
          if ( !(unsigned __int8)compare_tinfo() )
            goto LABEL_8;
          if ( (*(_BYTE *)(v25 + 64) & 0xF) != 0xA )
            goto LABEL_49;
LABEL_59:
          v43 = 0;
          v43 = get_tinfo_property();
          v27 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v27 != 1 )
          {
            v42 = 0;
            v28 = get_tinfo_property();
            v29 = v28;
            v42 = v28;
            clear_tinfo_t();
            v39 -= (v29 & 0x3F) != 48;
          }
          goto LABEL_49;
        }
        if ( !under_debugger )
          sub_37B760(52458);
      }
      else if ( !under_debugger )
      {
        sub_37B760(51273);
      }
    }
    else if ( !under_debugger )
    {
      sub_37B760(51272);
    }
    BUG();
  }
LABEL_2:
  clear_tinfo_t();
  return tinfo_details;
}


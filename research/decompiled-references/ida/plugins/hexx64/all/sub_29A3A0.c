__int64 __fastcall sub_29A3A0(__int64 a1, __int64 *a2, __int64 *a3, char a4, double a5)
{
  unsigned int v7; // eax
  unsigned int tinfo_details; // ebp
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  int tinfo_property; // r15d
  int v23; // r15d
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // edx
  __int64 v29; // r12
  __int64 v30; // r13
  char v31; // r15
  __int64 v32; // rax
  char v33; // r15
  char v34; // r15
  char v35; // r15
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned __int64 v39; // [rsp+28h] [rbp-170h]
  unsigned __int64 v40; // [rsp+30h] [rbp-168h]
  __int64 v41; // [rsp+38h] [rbp-160h]
  int v42; // [rsp+60h] [rbp-138h]
  int v43; // [rsp+64h] [rbp-134h]
  __int64 v44; // [rsp+70h] [rbp-128h] BYREF
  __int64 v45; // [rsp+78h] [rbp-120h] BYREF
  __int64 v46; // [rsp+80h] [rbp-118h]
  __int64 v47; // [rsp+88h] [rbp-110h]
  __int64 v48; // [rsp+90h] [rbp-108h]
  __int128 v49; // [rsp+98h] [rbp-100h]
  __int64 v50; // [rsp+A8h] [rbp-F0h]
  __int64 v51; // [rsp+B0h] [rbp-E8h]
  __int64 v52; // [rsp+B8h] [rbp-E0h]
  __int128 v53; // [rsp+C0h] [rbp-D8h]
  __int64 v54; // [rsp+D0h] [rbp-C8h]
  __int128 v55; // [rsp+D8h] [rbp-C0h]
  char v56; // [rsp+E8h] [rbp-B0h]
  __int64 v57; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+F8h] [rbp-A0h]
  __int64 v59; // [rsp+108h] [rbp-90h]
  __int64 v60; // [rsp+110h] [rbp-88h]
  __int64 v61; // [rsp+118h] [rbp-80h]
  __int128 v62; // [rsp+120h] [rbp-78h]
  __int64 v63; // [rsp+130h] [rbp-68h]
  __int128 v64; // [rsp+138h] [rbp-60h]
  char v65; // [rsp+148h] [rbp-50h]
  unsigned __int64 v66; // [rsp+158h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v57 = 0;
  copy_tinfo_t();
  sub_299470(&v44, &v57);
  clear_tinfo_t();
  LOBYTE(v7) = sub_32CB80(&v44, a1);
  tinfo_details = v7;
  if ( (_BYTE)v7 )
  {
    v57 = 0;
    copy_tinfo_t();
    sub_299470(&v45, &v57);
    clear_tinfo_t();
    if ( a4 )
    {
      if ( (get_tinfo_property() & 0xF) != 0xC
        || (get_tinfo_property() & 0xF) != 0xC
        || (tinfo_property = get_tinfo_property(), tinfo_property != (unsigned int)get_tinfo_property())
        || (v23 = get_tinfo_property(), v23 != (unsigned int)get_tinfo_property()) )
      {
        tinfo_details = 0;
LABEL_32:
        clear_tinfo_t();
        goto LABEL_2;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xC && (get_tinfo_property() & 0xF) == 0xC )
    {
      if ( !a4 && !(unsigned __int8)compare_tinfo() )
        goto LABEL_32;
      v43 = sub_32E340(a2);
      v42 = sub_32E340(a3);
      v48 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v54 = 0;
      v56 = 16;
      v57 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v63 = 0;
      v65 = 16;
      v49 = 0;
      v53 = 0;
      v55 = 0;
      v58 = 0;
      v62 = 0;
      v64 = 0;
      tinfo_details = get_tinfo_details();
      if ( !(_BYTE)tinfo_details )
      {
LABEL_8:
        if ( v63 )
        {
          *(_QWORD *)&v64 = 0;
          qfree(v63);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v10 = v57;
        if ( v57 )
        {
          v11 = v58;
          if ( (_QWORD)v58 )
          {
            v12 = 0;
            do
            {
              v13 = (_QWORD *)(v10 + 80 * v12);
              clear_tinfo_t();
              v14 = v13[5];
              if ( v14 )
              {
                v13[6] = 0;
                qfree(v14);
              }
              v15 = v13[2];
              if ( v15 )
              {
                v13[3] = 0;
                qfree(v15);
              }
              ++v12;
              cleanup_argloc();
              v10 = v57;
            }
            while ( v11 != v12 );
          }
          *(_QWORD *)&v58 = 0;
          qfree(v10);
        }
        if ( v54 )
        {
          *(_QWORD *)&v55 = 0;
          qfree(v54);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v16 = v48;
        if ( v48 )
        {
          v17 = v49;
          if ( (_QWORD)v49 )
          {
            v18 = 0;
            do
            {
              v19 = (_QWORD *)(v16 + 80 * v18);
              clear_tinfo_t();
              v20 = v19[5];
              if ( v20 )
              {
                v19[6] = 0;
                qfree(v20);
              }
              v21 = v19[2];
              if ( v21 )
              {
                v19[3] = 0;
                qfree(v21);
              }
              ++v18;
              cleanup_argloc();
              v16 = v48;
            }
            while ( v17 != v18 );
          }
          *(_QWORD *)&v49 = 0;
          qfree(v16);
        }
        goto LABEL_32;
      }
      tinfo_details = get_tinfo_details();
      if ( (_BYTE)tinfo_details )
      {
        v40 = (unsigned int)score_tinfo();
        v24 = (unsigned int)score_tinfo();
        v39 = v24;
        if ( (unsigned __int8)compare_tinfo() && ((v60 & 0x3F) == 61) != ((v51 & 0x3F) == 61) )
        {
          v25 = v24 + 1;
          if ( (v60 & 0x3F) != 0x3D )
            v25 = v24 - 1;
          v39 = v25;
        }
        v26 = (int)v49;
        if ( (unsigned __int64)v58 >= (int)v49 )
          goto LABEL_46;
        v36 = v65 & 0xF0;
        if ( (v65 & 0xF0) == 0xC0 )
          v36 = HIDWORD(v59);
        if ( v36 <= 0x10 )
          v36 = getinf();
        v37 = v36 & 0xFFFFFFF0;
        if ( v37 == 64 || v37 == 208 )
        {
          ++v39;
          v26 = (int)v58;
LABEL_46:
          if ( (int)v26 <= 0 )
          {
LABEL_63:
            if ( v43 <= v42 )
            {
              LOBYTE(tinfo_details) = v43 == v42;
              LOBYTE(v26) = v40 < v39;
              tinfo_details &= v26;
            }
            goto LABEL_8;
          }
          v27 = 0;
          v41 = 80 * v26;
          while ( 1 )
          {
            v29 = v27 + v48;
            v30 = v27 + v57;
            if ( !a4 )
              break;
            if ( (*(_BYTE *)(v29 + 64) & 0xF) == 0xA )
              goto LABEL_59;
LABEL_49:
            if ( (*(_BYTE *)(v30 + 64) & 0xF) == 0xA )
            {
              v47 = 0;
              v47 = get_tinfo_property();
              v34 = get_tinfo_property() & 0x3F;
              clear_tinfo_t();
              if ( v34 != 1 )
              {
                v47 = 0;
                v47 = get_tinfo_property();
                v35 = v47 & 0x3F;
                clear_tinfo_t();
                v42 -= v35 != 48;
              }
            }
            v40 += (unsigned int)score_tinfo();
            v39 += (unsigned int)score_tinfo();
            LODWORD(v26) = compare_tinfo();
            if ( (_BYTE)v26 )
            {
              v26 = *(_QWORD *)(v30 + 64) & 0x3FLL;
              if ( ((_BYTE)v26 == 61) != ((*(_BYTE *)(v29 + 64) & 0x3F) == 61) )
              {
                v28 = v42 - 1;
                if ( (_BYTE)v26 != 61 )
                  v28 = v42 + 1;
                v42 = v28;
              }
            }
            v27 += 80;
            if ( v41 == v27 )
              goto LABEL_63;
          }
          if ( !(unsigned __int8)compare_tinfo() )
            goto LABEL_8;
          if ( (*(_BYTE *)(v29 + 64) & 0xF) != 0xA )
            goto LABEL_49;
LABEL_59:
          v47 = 0;
          v47 = get_tinfo_property();
          v31 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v31 != 1 )
          {
            v46 = 0;
            v32 = get_tinfo_property();
            v33 = v32;
            v46 = v32;
            clear_tinfo_t();
            v43 -= (v33 & 0x3F) != 48;
          }
          goto LABEL_49;
        }
        if ( !under_debugger )
          sub_383060(0xCCEAu, 0.0);
      }
      else if ( !under_debugger )
      {
        sub_383060(0xC849u, 0.0);
      }
    }
    else if ( !under_debugger )
    {
      sub_383060(0xC848u, a5);
    }
    BUG();
  }
LABEL_2:
  clear_tinfo_t();
  return tinfo_details;
}


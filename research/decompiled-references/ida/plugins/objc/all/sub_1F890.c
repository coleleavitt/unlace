__int64 __fastcall sub_1F890(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, unsigned __int64 *a5)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rax
  char v9; // r13
  unsigned int stock_tinfo; // r15d
  __int64 *v12; // r11
  __int64 *v13; // r11
  const char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rax
  __int64 idati; // rax
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r12
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r12
  const char *v26; // r14
  int v27; // [rsp+4h] [rbp-18Ch]
  __int64 *v28; // [rsp+20h] [rbp-170h]
  __int64 *v29; // [rsp+20h] [rbp-170h]
  unsigned __int8 tinfo; // [rsp+28h] [rbp-168h]
  __int64 *v32; // [rsp+30h] [rbp-160h]
  __int64 v35; // [rsp+38h] [rbp-158h]
  unsigned __int64 v36; // [rsp+40h] [rbp-150h] BYREF
  __int64 v37; // [rsp+48h] [rbp-148h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-140h] BYREF
  const char *v39; // [rsp+60h] [rbp-130h] BYREF
  __int128 v40; // [rsp+68h] [rbp-128h]
  const char *v41; // [rsp+80h] [rbp-110h] BYREF
  __int128 v42; // [rsp+88h] [rbp-108h]
  __int128 v43; // [rsp+98h] [rbp-F8h]
  __int64 v44; // [rsp+A8h] [rbp-E8h]
  __int16 v45; // [rsp+B0h] [rbp-E0h]
  char v46; // [rsp+B2h] [rbp-DEh]
  bool v47; // [rsp+B3h] [rbp-DDh]
  _BYTE v48[24]; // [rsp+C0h] [rbp-D0h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-B8h]
  __int64 v50; // [rsp+E8h] [rbp-A8h]
  __int128 v51; // [rsp+F0h] [rbp-A0h]
  __int128 v52[3]; // [rsp+100h] [rbp-90h] BYREF
  __int64 v53; // [rsp+130h] [rbp-60h]
  int v54; // [rsp+138h] [rbp-58h]
  __int64 v55; // [rsp+140h] [rbp-50h]
  char v56; // [rsp+148h] [rbp-48h]
  unsigned __int64 v57; // [rsp+158h] [rbp-38h]

  v6 = 0;
  v35 = a2;
  v57 = __readfsqword(0x28u);
  if ( a5 )
    v6 = *a5;
  v8 = a4[1];
  if ( v8 && v6 < v8 - 1 )
  {
    v36 = v6 + 1;
    v9 = *(_BYTE *)(*a4 + v6);
    switch ( v9 )
    {
      case '#':
        *(_WORD *)&v48[16] = 256;
        *(_QWORD *)&v48[8] = "Class";
        if ( a2 )
          goto LABEL_31;
        goto LABEL_33;
      case '(':
      case '{':
        v39 = 0;
        v38[1] = 4;
        v38[0] = off_3C700;
        v40 = 0;
        stock_tinfo = sub_16C40((__int64 *)&v39, a4, (__int64)v38, (__int64 *)&v36);
        if ( !(_BYTE)stock_tinfo )
          goto LABEL_81;
        v12 = a4;
        if ( a4[1] | v36 && *(_BYTE *)(*a4 + v36) == 61 )
          ++v36;
        if ( (_QWORD)v40 && *v39 == 63 && !v39[1] )
          *(_QWORD *)&v40 = 0;
        v41 = 0;
        v44 = 0;
        v45 = 1;
        v46 = 0;
        v27 = 0;
        v42 = 0;
        v43 = 0;
        v47 = v9 == 40;
        while ( 1 )
        {
          v56 = 0;
          v53 = 1;
          v54 = -1;
          v50 = 0;
          v55 = 0;
          v28 = v12;
          memset(v48, 0, sizeof(v48));
          v49 = 0;
          v51 = 0;
          v52[0] = 0;
          sub_16F00((__int64)&v48[16], v12, (__int64 *)&v36);
          stock_tinfo = sub_1F890(a1, a2, v52, v28, &v36);
          if ( !(_BYTE)stock_tinfo )
            break;
          v13 = v28;
          if ( (unsigned __int64)v49 <= 1 )
          {
            sub_D6A0((__int64 *)&v48[16]);
            ++v27;
            v13 = v28;
          }
          v29 = v13;
          sub_195B0((__int64 *)&v41, (__int64)v48);
          clear_tinfo_t();
          v12 = v29;
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            qfree();
            v12 = v29;
          }
          if ( *(_QWORD *)&v48[16] )
          {
            v32 = v12;
            *(_QWORD *)&v49 = 0;
            qfree();
            v12 = v32;
          }
        }
        clear_tinfo_t();
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
        if ( *(_QWORD *)&v48[16] )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        ++v36;
        v17 = src;
        v37 = 0;
        if ( (_QWORD)v40 )
          v17 = v39;
        if ( v17 )
        {
          *(_QWORD *)&v48[8] = v17;
          *(_WORD *)&v48[16] = 256;
          idati = a2;
          if ( !a2 )
            idati = get_idati();
          *(_QWORD *)v48 = idati;
          tinfo = create_tinfo();
          if ( tinfo )
          {
            if ( !(unsigned __int8)sub_1E230(&v37, 61) || !(_QWORD)v42 )
            {
              v23 = *a3;
              stock_tinfo = tinfo;
              *a3 = v37;
              v37 = v23;
              goto LABEL_73;
            }
          }
        }
        create_tinfo();
        if ( *(_BYTE *)(a1 + 2216) )
        {
          memset(v48, 0, sizeof(v48));
          print_tinfo();
          sub_EC40();
          if ( *(_QWORD *)v48 )
          {
            *(_QWORD *)&v48[8] = 0;
            qfree();
          }
        }
        if ( (unsigned __int64)v40 <= 1 && !(unsigned __int8)tinfo_t__build_anon_type_name() )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        if ( (unsigned int)save_tinfo() )
        {
          if ( *(_BYTE *)(a1 + 2216) )
            sub_EC40();
LABEL_73:
          clear_tinfo_t();
          v19 = (__int64)v41;
          if ( v41 )
          {
            v20 = v42;
            v21 = 0;
            if ( (_QWORD)v42 )
            {
              do
              {
                v22 = (_QWORD *)(v19 + 144 * v21);
                clear_tinfo_t();
                if ( v22[5] )
                {
                  v22[6] = 0;
                  qfree();
                }
                if ( v22[2] )
                {
                  v22[3] = 0;
                  qfree();
                }
                ++v21;
                v19 = (__int64)v41;
              }
              while ( v20 != v21 );
            }
            *(_QWORD *)&v42 = 0;
            qfree();
          }
LABEL_81:
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
          goto LABEL_10;
        }
        clear_tinfo_t();
        if ( v41 )
        {
          v24 = v42;
          v25 = 0;
          if ( (_QWORD)v42 )
          {
            do
            {
              v26 = &v41[144 * v25];
              clear_tinfo_t();
              if ( *((_QWORD *)v26 + 5) )
              {
                *((_QWORD *)v26 + 6) = 0;
                qfree();
              }
              if ( *((_QWORD *)v26 + 2) )
              {
                *((_QWORD *)v26 + 3) = 0;
                qfree();
              }
              ++v25;
            }
            while ( v24 != v25 );
          }
          *(_QWORD *)&v42 = 0;
          qfree();
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree();
        }
LABEL_50:
        stock_tinfo = 1;
        goto LABEL_10;
      case '*':
        stock_tinfo = get_stock_tinfo();
        goto LABEL_10;
      case ':':
        *(_WORD *)&v48[16] = 256;
        *(_QWORD *)&v48[8] = "SEL";
        if ( !a2 )
LABEL_33:
          v35 = get_idati();
LABEL_31:
        *(_QWORD *)v48 = v35;
        stock_tinfo = create_tinfo();
        goto LABEL_10;
      case '?':
      case 'B':
      case 'C':
      case 'I':
      case 'Q':
      case 'S':
      case 'c':
      case 'd':
      case 'f':
      case 'i':
      case 'q':
      case 's':
      case 'v':
        goto LABEL_47;
      case '@':
        v41 = 0;
        v42 = 0;
        if ( (unsigned __int8)sub_16F00((__int64)&v41, a4, (__int64 *)&v36) )
        {
          if ( (_QWORD)v42 )
          {
            v14 = v41;
            if ( v41 )
            {
LABEL_37:
              *(_QWORD *)&v48[8] = v14;
              *(_WORD *)&v48[16] = 256;
              v15 = a2;
              if ( !a2 )
                v15 = get_idati();
              *(_QWORD *)v48 = v15;
              if ( (unsigned __int8)create_tinfo() )
                goto LABEL_43;
            }
          }
          else
          {
            v14 = src;
            if ( src )
              goto LABEL_37;
          }
          *(_WORD *)&v48[16] = 0;
          *(_QWORD *)&v48[8] = "";
          v16 = a2;
          if ( !a2 )
            v16 = get_idati();
          *(_QWORD *)v48 = v16;
          create_tinfo();
          save_tinfo();
LABEL_43:
          v39 = 0;
          v38[0] = 0;
          *(_OWORD *)v48 = 0;
          copy_tinfo_t();
          *(_QWORD *)&v48[16] = 0;
          copy_tinfo_t();
          LODWORD(v49) = 0;
          WORD2(v49) = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          stock_tinfo = create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          goto LABEL_44;
        }
        if ( a4[1] | v36 && *(_BYTE *)(*a4 + v36) == 63 )
          ++v36;
        *(_WORD *)&v48[16] = 256;
        *(_QWORD *)&v48[8] = "id";
        if ( !a2 )
          v35 = get_idati();
        *(_QWORD *)v48 = v35;
        stock_tinfo = create_tinfo();
        if ( !(_BYTE)stock_tinfo )
          stock_tinfo = get_stock_tinfo();
LABEL_44:
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree();
        }
LABEL_10:
        if ( a5 )
          *a5 = v36;
        break;
      case 'A':
      case 'N':
      case 'O':
      case 'R':
      case 'V':
      case 'n':
      case 'o':
        stock_tinfo = sub_1F890(a1, a2, a3, a4, &v36);
        goto LABEL_10;
      case 'L':
      case 'l':
        getinf_flag();
LABEL_47:
        stock_tinfo = create_tinfo();
        goto LABEL_10;
      case '[':
        *(_OWORD *)v48 = 0u;
        sub_17060(&v48[12], a4, (__int64 *)&v36);
        stock_tinfo = sub_1F890(a1, a2, v48, a4, &v36);
        if ( (_BYTE)stock_tinfo )
          stock_tinfo = create_tinfo();
        ++v36;
        clear_tinfo_t();
        goto LABEL_10;
      case '^':
        if ( !(unsigned __int8)sub_1F890(a1, a2, a3, a4, &v36) )
          goto LABEL_9;
        v41 = 0;
        v39 = 0;
        *(_OWORD *)v48 = 0;
        copy_tinfo_t();
        *(_QWORD *)&v48[16] = 0;
        copy_tinfo_t();
        LODWORD(v49) = 0;
        WORD2(v49) = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        stock_tinfo = create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_10;
      case 'b':
        *(_DWORD *)v48 = 0;
        stock_tinfo = sub_17060(v48, a4, (__int64 *)&v36);
        if ( (_BYTE)stock_tinfo )
        {
          LOBYTE(v41) = 4;
          *(_WORD *)((char *)&v41 + 1) = v48[0];
          stock_tinfo = create_tinfo();
        }
        goto LABEL_10;
      case 'r':
        if ( !(unsigned __int8)sub_1F890(a1, a2, a3, a4, &v36) )
          goto LABEL_9;
        sub_126A0(a3);
        goto LABEL_50;
      default:
        v36 = v6;
LABEL_9:
        stock_tinfo = 0;
        goto LABEL_10;
    }
  }
  else
  {
    return 0;
  }
  return stock_tinfo;
}

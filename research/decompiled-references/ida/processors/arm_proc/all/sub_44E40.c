__int64 __fastcall sub_44E40(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v7; // eax
  unsigned __int64 **v8; // rcx
  unsigned int v9; // eax
  int *v10; // rcx
  __int64 v11; // r12
  int flags; // eax
  __int64 v13; // r12
  char v14; // dl
  __int64 v15; // rax
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // ecx
  __int64 *v19; // rax
  char **v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // rax
  char *v23; // rdi
  unsigned int v24; // eax
  __int64 *v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r8
  _QWORD *v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rsi
  int *v34; // rax
  __int64 v35; // rbp
  _QWORD *v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  __int64 v40; // rsi
  _DWORD *v41; // rax
  char v42; // r12
  __int64 *v43; // rdx
  __int64 v44; // rbx
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdi
  int v49; // r8d
  __int64 v50; // rsi
  __int64 v51; // rdi
  _QWORD *v52; // rax
  __int64 v53; // r13
  __int64 v54; // rax
  _QWORD *v55; // rdx
  __int16 v56; // cx
  unsigned __int64 *v57; // rax
  unsigned __int64 *v58; // rcx
  unsigned __int64 *v59; // rax
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 name_ea; // rdi
  __int64 dword; // rbp
  __int64 v66; // rcx
  _DWORD *v67; // rax
  __int64 *v68; // rcx
  __int64 v70; // [rsp+10h] [rbp-1C8h]
  __int64 v71; // [rsp+18h] [rbp-1C0h]
  __int128 v72; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v73; // [rsp+40h] [rbp-198h]
  __int64 v74; // [rsp+48h] [rbp-190h]
  __int64 v75; // [rsp+50h] [rbp-188h]
  _BYTE v76[320]; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v77[8]; // [rsp+198h] [rbp-40h] BYREF

  v77[0] = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      netnode_supset();
      sub_55330(*(_QWORD *)(a1 + 16) + 192LL);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 516LL) = 0;
      sub_7D060(*(_QWORD *)(a1 + 16));
      return 0;
    case 2LL:
      v9 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v10 = *((int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v10 + 2;
      }
      else
      {
        v10 = (int *)(*((_QWORD *)a3 + 2) + v9);
        *a3 = v9 + 8;
      }
      if ( *v10 <= 699 && (unsigned __int16)getinf() > 0x2BBu )
      {
        netnode_supdel_all();
        netnode_supdel_all();
        sub_44D70(*(_QWORD *)(a1 + 16), 66);
      }
      return 0;
    case 3LL:
      if ( netnode_supfirst() != -1 )
      {
        do
        {
          v11 = node2ea();
          flags = get_flags_ex();
          if ( (flags & 0xF00000) != 0
            || (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000
            || netnode_altval() == 2
            || !(unsigned __int8)sub_36530(*(_QWORD *)(a1 + 16), v11) )
          {
            netnode_supdel();
          }
          else
          {
            netnode_supset();
          }
        }
        while ( netnode_supnext() != -1 );
      }
      if ( netnode_supfirst() != -1 )
      {
        do
        {
          node2ea();
          v53 = (unsigned __int8)netnode_charval();
          v54 = get_flags_ex();
          v55 = v76;
          v73 = -1;
          v74 = 0;
          v75 = 0;
          v72 = -1;
          do
          {
            *(_WORD *)v55 = 0;
            v55 += 5;
            *((_WORD *)v55 - 19) = 0;
            *((_WORD *)v55 - 18) = 0;
            *((_DWORD *)v55 - 2) = 0;
            *((_WORD *)v55 - 17) = 0;
            *((_OWORD *)v55 - 2) = 0;
            *(v55 - 2) = 0;
          }
          while ( v55 != v77 );
          if ( (~BYTE1(v54) & 6) == 0
            && (unsigned __int8)(v53 - 1) <= 6u
            && (int)decode_insn() > 0
            && (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 184LL) & 2) == 0
            && v76[40 * (unsigned __int8)v53 + 1] == 2 )
          {
            HIBYTE(v56) = BYTE1(v74);
            if ( (_WORD)v74 == 480
              || (unsigned __int16)(v74 - 113) <= 1u
              || (unsigned __int16)(v74 - 30) <= 1u
              || (LOBYTE(v56) = v74 & 0x7F, v56 == 344) )
            {
              v70 = *(_QWORD *)&v76[40 * (unsigned __int8)v53 + 16];
              v71 = v72;
              netnode_supset();
              sub_34AC0(*(_QWORD *)(a1 + 16), (__int64)&v72, (_BYTE *)&v72 + 40 * v53 + 40, v70 + 16 * v71, 0);
            }
          }
          netnode_supdel();
        }
        while ( netnode_supnext() != -1 );
      }
      return 0;
    case 9LL:
      invalidate_regfinder_cache();
      v13 = *(_QWORD *)(a1 + 16);
      netnode_check();
      v14 = netnode_exist();
      v15 = -1;
      if ( v14 )
      {
        netnode_altval();
        v15 = node2ea();
      }
      *(_QWORD *)(v13 + 504) = v15;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL) == -1 )
      {
        name_ea = get_name_ea();
        dword = name_ea;
        if ( (unsigned __int8)segtype() == 10 )
        {
          dword = (unsigned int)get_dword();
        }
        else if ( name_ea == -1 )
        {
          dword = sub_43CA0(-1, "_GLOBAL_OFFSET_TABLE_");
          if ( dword == -1 )
            return 0;
        }
        sub_43C00(*(_QWORD *)(a1 + 16), dword);
        return 0;
      }
      if ( (get_flags_ex() & 0x4000) == 0 )
        set_name();
      return 0;
    case 11LL:
      v16 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v17 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v17 + 2;
      }
      else
      {
        v17 = (_DWORD *)(*((_QWORD *)a3 + 2) + v16);
        *a3 = v16 + 8;
      }
      sub_445D0(*(_QWORD *)(a1 + 16), *v17 != 0);
      invalidate_regfinder_cache();
      return 0;
    case 17LL:
      v31 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v34 = (int *)(*((_QWORD *)a3 + 1) + 8LL);
        *((_QWORD *)a3 + 1) = v34;
      }
      else
      {
        v32 = *((_QWORD *)a3 + 2);
        v33 = v31 + 8;
        *a3 = v33;
        if ( (unsigned int)v33 <= 0x2F )
        {
          v34 = (int *)(v33 + v32);
          *a3 = v31 + 16;
          goto LABEL_47;
        }
        v34 = *((int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v34 + 2;
LABEL_47:
      v35 = *v34;
      if ( (unsigned int)v35 <= 7 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
      {
        v73 = -1;
        v36 = v76;
        v74 = 0;
        v75 = 0;
        v72 = -1;
        do
        {
          *(_WORD *)v36 = 0;
          v36 += 5;
          *((_WORD *)v36 - 19) = 0;
          *((_WORD *)v36 - 18) = 0;
          *((_DWORD *)v36 - 2) = 0;
          *((_WORD *)v36 - 17) = 0;
          *((_OWORD *)v36 - 2) = 0;
          *(v36 - 2) = 0;
        }
        while ( v36 != v77 );
        decode_insn();
        if ( v76[40 * v35 + 1] == 2 )
          sub_34AC0(
            *(_QWORD *)(a1 + 16),
            (__int64)&v72,
            (_BYTE *)&v72 + 40 * v35 + 40,
            *(_QWORD *)&v76[40 * v35 + 16] + 16 * v72,
            1);
      }
      return 0;
    case 30LL:
      v37 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v57 = *((unsigned __int64 **)a3 + 1);
        v58 = v57 + 1;
        *((_QWORD *)a3 + 1) = v57 + 1;
        v39 = *v57;
      }
      else
      {
        v38 = *((_QWORD *)a3 + 2);
        *a3 = v37 + 8;
        v39 = *(_QWORD *)(v38 + v37);
        if ( v37 + 8 <= 0x2F )
        {
          *a3 = v37 + 16;
          if ( v37 + 16 <= 0x2F )
          {
            v40 = v37 + 24;
            *a3 = v40;
            if ( (unsigned int)v40 <= 0x2F )
            {
              v41 = (_DWORD *)(v40 + v38);
              *a3 = v37 + 32;
              goto LABEL_58;
            }
            while ( 1 )
            {
              v41 = *((_DWORD **)a3 + 1);
LABEL_91:
              *((_QWORD *)a3 + 1) = v41 + 2;
LABEL_58:
              v42 = *v41 != 0;
              v43 = (__int64 *)getseg();
              if ( v43 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            sub_33480(*(_QWORD *)(a1 + 16), v39, v43, v42);
            return 0;
          }
          v59 = *((unsigned __int64 **)a3 + 1);
LABEL_90:
          v41 = v59 + 1;
          goto LABEL_91;
        }
        v58 = *((unsigned __int64 **)a3 + 1);
      }
      v59 = v58 + 1;
      *((_QWORD *)a3 + 1) = v58 + 1;
      goto LABEL_90;
    case 34LL:
    case 36LL:
    case 37LL:
      v7 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v8 = *((unsigned __int64 ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v8 + 1;
      }
      else
      {
        v8 = (unsigned __int64 **)(*((_QWORD *)a3 + 2) + v7);
        *a3 = v7 + 8;
      }
      v4 = a2 - 32;
      sub_43D00(*(_QWORD *)(a1 + 16), *v8);
      netnode_delblob();
      goto LABEL_3;
    case 48LL:
      if ( (unsigned __int8)getinf_flag() )
        return 0;
      v45 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v66 = *((_QWORD *)a3 + 1) + 8LL;
        *((_QWORD *)a3 + 1) = v66;
      }
      else
      {
        v46 = *((_QWORD *)a3 + 2);
        *a3 = v45 + 8;
        if ( v45 + 8 <= 0x2F )
        {
          v47 = v45 + 16;
          *a3 = v47;
          if ( (unsigned int)v47 <= 0x2F )
          {
            v48 = v45 + 24;
            *a3 = v48;
            v49 = *(_DWORD *)(v46 + v47);
            if ( (unsigned int)v48 <= 0x2F )
            {
              v50 = v45 + 32;
              *a3 = v50;
              v51 = *(_QWORD *)(v46 + v48);
              if ( (unsigned int)v50 <= 0x2F )
              {
                v52 = (_QWORD *)(v50 + v46);
                *a3 = v45 + 40;
                goto LABEL_68;
              }
              v52 = *((_QWORD **)a3 + 1);
LABEL_108:
              *((_QWORD *)a3 + 1) = v52 + 1;
LABEL_68:
              if ( *v52 != v51 && v49 == 20 )
              {
                revert_ida_decisions();
                auto_mark_range();
              }
              return 0;
            }
            v68 = *((__int64 **)a3 + 1);
LABEL_107:
            v52 = v68 + 1;
            *((_QWORD *)a3 + 1) = v68 + 1;
            v51 = *v68;
            goto LABEL_108;
          }
          v67 = *((_DWORD **)a3 + 1);
LABEL_106:
          v68 = (__int64 *)(v67 + 2);
          *((_QWORD *)a3 + 1) = v67 + 2;
          v49 = *v67;
          goto LABEL_107;
        }
        v66 = *((_QWORD *)a3 + 1);
      }
      v67 = (_DWORD *)(v66 + 8);
      *((_QWORD *)a3 + 1) = v66 + 8;
      goto LABEL_106;
    case 49LL:
      v24 = *a3;
      if ( (unsigned int)*a3 <= 0x2F )
      {
        v25 = (__int64 *)(*((_QWORD *)a3 + 2) + v24);
        *a3 = v24 + 8;
      }
      else
      {
        v25 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v25 + 1;
      }
      sub_21740(*(_QWORD *)(a1 + 16), *v25);
      return 0;
    case 51LL:
      v26 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v60 = *((__int64 **)a3 + 1);
        v30 = v60 + 1;
        *((_QWORD *)a3 + 1) = v60 + 1;
        v29 = *v60;
      }
      else
      {
        v27 = *((_QWORD *)a3 + 2);
        v28 = v26 + 8;
        *a3 = v28;
        v29 = *(_QWORD *)(v27 + v26);
        if ( (unsigned int)v28 <= 0x2F )
        {
          v30 = (_QWORD *)(v28 + v27);
          *a3 = v26 + 16;
          goto LABEL_43;
        }
        v30 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v30 + 1;
LABEL_43:
      sub_33880(*(_QWORD *)(a1 + 16), v29, *v30);
      return 0;
    case 52LL:
      v18 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v19 = *((__int64 **)a3 + 1);
        v20 = (char **)(v19 + 1);
        *((_QWORD *)a3 + 1) = v19 + 1;
        v21 = *v19;
LABEL_34:
        v22 = v20 + 1;
        *((_QWORD *)a3 + 1) = v20 + 1;
        v23 = *v20;
LABEL_35:
        *((_QWORD *)a3 + 1) = v22 + 2;
        goto LABEL_36;
      }
      v61 = *((_QWORD *)a3 + 2);
      v62 = v18 + 8;
      *a3 = v62;
      v21 = *(_QWORD *)(v61 + v18);
      if ( (unsigned int)v62 > 0x2F )
      {
        v20 = *((char ***)a3 + 1);
        goto LABEL_34;
      }
      v63 = v18 + 16;
      *a3 = v63;
      v23 = *(char **)(v61 + v62);
      if ( (unsigned int)v63 > 0x2F )
      {
        v22 = *((_DWORD **)a3 + 1);
        goto LABEL_35;
      }
      v22 = (_DWORD *)(v63 + v61);
      *a3 = v18 + 24;
LABEL_36:
      sub_25180(v21, v23, *v22 != 0, nullptr);
      return 0;
    case 53LL:
      v44 = *(_QWORD *)(a1 + 16);
      sub_42ED0(*(_QWORD **)(v44 + 584));
      *(_QWORD *)(v44 + 584) = 0;
      *(_QWORD *)(v44 + 592) = v44 + 576;
      *(_QWORD *)(v44 + 600) = v44 + 576;
      *(_QWORD *)(v44 + 608) = 0;
      return 0;
    default:
      v4 = a2 - 32;
      if ( (unsigned __int64)(a2 - 32) <= 0x20 )
      {
LABEL_3:
        v5 = 0x1000006ADLL;
        if ( _bittest64(&v5, v4) )
          invalidate_regfinder_cache();
      }
      return 0;
  }
}


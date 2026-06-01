__int64 __fastcall sub_1ED80(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int16 v4; // ax
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // r12
  unsigned __int16 v7; // bx
  __int64 v8; // r13
  __int64 v9; // rsi
  int v11; // eax
  __int16 v12; // ax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // r13
  __int64 v17; // r15
  int v18; // ebp
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  int v24; // r13d
  __int64 v25; // r15
  int v26; // ebp
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r10d
  __int64 v31; // rdx
  int v32; // r14d
  int v33; // eax
  unsigned int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // r13d
  unsigned int v37; // r10d
  __int16 *v38; // rbp
  __int16 v39; // ax
  unsigned int v40; // ebx
  int v41; // eax
  unsigned int v42; // [rsp+0h] [rbp-328h]
  int v43; // [rsp+0h] [rbp-328h]
  __int64 v44; // [rsp+8h] [rbp-320h]
  __int64 v46; // [rsp+10h] [rbp-318h]
  __int64 v47; // [rsp+18h] [rbp-310h]
  __int64 v48; // [rsp+18h] [rbp-310h]
  unsigned int v49; // [rsp+2Ch] [rbp-2FCh]
  __int64 v50; // [rsp+30h] [rbp-2F8h]
  unsigned __int16 v51; // [rsp+3Eh] [rbp-2EAh]
  __int64 v52; // [rsp+48h] [rbp-2E0h] BYREF
  _BYTE v53[12]; // [rsp+50h] [rbp-2D8h] BYREF
  _BYTE v54[6]; // [rsp+60h] [rbp-2C8h] BYREF
  unsigned __int16 v55; // [rsp+66h] [rbp-2C2h]
  unsigned __int8 v56; // [rsp+68h] [rbp-2C0h]
  char v57; // [rsp+69h] [rbp-2BFh] BYREF
  __int16 v58; // [rsp+6Ah] [rbp-2BEh]
  unsigned int v59; // [rsp+6Ch] [rbp-2BCh] BYREF
  _BYTE v60[20]; // [rsp+70h] [rbp-2B8h]
  __int64 v61; // [rsp+84h] [rbp-2A4h]
  __int64 v62; // [rsp+8Ch] [rbp-29Ch]
  __int128 v63; // [rsp+94h] [rbp-294h]
  __int128 v64; // [rsp+A4h] [rbp-284h]
  __int128 v65; // [rsp+B4h] [rbp-274h]
  __int128 v66; // [rsp+C4h] [rbp-264h]
  __int64 v67; // [rsp+D4h] [rbp-254h]
  _BYTE v68[520]; // [rsp+E0h] [rbp-248h] BYREF
  unsigned __int64 v69; // [rsp+2E8h] [rbp-40h]

  v3 = a1;
  v69 = __readfsqword(0x28u);
  if ( (int)sub_12CD0(
              1u,
              (__int64)"AUTOHIDE REGISTRY\n"
                       "HIDECANCEL\n"
                       "The database has an old java data format.\n"
                       "Do you want to upgrade it?") > 0 )
  {
    if ( a2 != 19 )
      sub_E6C0(0);
    v4 = *(_WORD *)(a1 + 33019);
    if ( (unsigned __int16)v4 > 0x8000u )
      return 0;
    *(_WORD *)(a1 + 33085) = 45;
    if ( v4 < 0 )
    {
      *(_BYTE *)(a1 + 33088) = 2;
      *(_WORD *)(a1 + 33085) = 46;
    }
    else if ( (unsigned __int16)v4 > 2u )
    {
      ++*(_BYTE *)(a1 + 33088);
    }
    v11 = *(unsigned __int16 *)(a1 + 33023) | (*(_DWORD *)(a1 + 33021) << 16);
    *(_DWORD *)(a1 + 33021) = v11;
    if ( !(_WORD)v11 )
      return 0;
    v12 = *(_WORD *)(a1 + 33025);
    if ( v12 )
    {
      if ( v12 != -1 )
      {
        v13 = *(_QWORD *)(a1 + 33045);
        *(_DWORD *)(v3 + 33025) = *(unsigned __int16 *)(v3 + 33027) | (*(_DWORD *)(v3 + 33025) << 16);
        if ( !v13 )
        {
LABEL_21:
          if ( *(_DWORD *)(v3 + 33061) )
          {
            *(_BYTE *)(v3 + 33087) |= 0x40u;
            *(_DWORD *)(v3 + 33061) = 0;
          }
          v14 = getseg(*(_QWORD *)(v3 + 33053));
          if ( v14 )
          {
            *(_WORD *)(v14 + 44) |= 0x20u;
            update_segm(v14);
            if ( !*(_WORD *)(v3 + 33081) )
            {
LABEL_25:
              v15 = *(unsigned __int16 *)(v3 + 33041);
              *(_BYTE *)(v3 + 33087) |= 0x80u;
              v44 = 49;
              v16 = -v15;
              do
              {
                if ( (_DWORD)v16 )
                {
                  if ( netnode_supval(*(_QWORD *)(v3 + 33320), v16, v54, 125, 83) != v44 )
                    return 0;
                  __memmove_chk(&v59, &v57, v44 - 9, 113);
                  v57 = 0;
                  v58 = 0;
                  if ( v56 > 7u )
                    return 0;
                  v56 &= 3u;
                  if ( (int)v16 > 0 )
                  {
                    v20 = *(_QWORD *)(v3 + 33320);
                    *(_OWORD *)&v60[4] = 0;
                    v61 = 0;
                    netnode_supset(v20, v16, v54, 44, 83);
                  }
                  else
                  {
                    v63 = 0;
                    v67 = 0;
                    v64 = 0;
                    v65 = 0;
                    v66 = 0;
                    if ( v62 && !netnode_altval(v62, 0, 65) )
                    {
                      *(_QWORD *)v53 = v62;
                      netnode_kill(v53);
                      v62 = 0;
                    }
                    if ( *(_WORD *)&v60[16] )
                    {
                      v21 = getseg(*(_QWORD *)&v60[8]);
                      if ( !v21 )
                        return 0;
                      *(_WORD *)(v21 + 44) |= 0x20u;
                      *(_BYTE *)(v21 + 184) = 9;
                      update_segm(v21);
                    }
                    v17 = v61;
                    if ( v61 )
                    {
                      v5 = netnode_altval(v61, 0, 65);
                      if ( !v5 )
                        return 0;
                      v47 = v16;
                      v6 = v5;
                      v7 = 1;
                      v8 = v59 + *(_QWORD *)v60;
                      do
                      {
                        if ( netnode_supval(v17, v7, v53, 10, 83) != 10
                          || (*(_WORD *)&v53[6] == 0) != (*(_WORD *)&v53[8] == 0) )
                        {
                          return 0;
                        }
                        *(_DWORD *)&v53[6] = *(unsigned __int16 *)&v53[8] | (*(_DWORD *)&v53[6] << 16);
                        if ( *(_WORD *)&v53[6] == 0xFFFF )
                          *(_WORD *)&v53[6] = 0;
                        v9 = v7++;
                        netnode_supset(v17, v9, v53, 10, 83);
                        sub_1EC90((__int64)v54, (unsigned __int16 *)v53, v8);
                      }
                      while ( v6 >= v7 );
                      v16 = v47;
                    }
                    netnode_supset(*(_QWORD *)(v3 + 33320), v16, v54, 124, 83);
                    if ( *(_WORD *)&v60[16] )
                    {
                      v18 = *(unsigned __int16 *)&v60[16];
                      v19 = *(_QWORD *)&v60[8] + *(unsigned __int16 *)&v60[16];
                      do
                      {
                        while ( 1 )
                        {
                          --v18;
                          --v19;
                          qsnprintf(v68, 512, "met%03u_slot%03d", v55, v18);
                          if ( !(unsigned __int8)set_name(v19, v68, 6144) )
                            break;
                          make_name_auto(v19);
                          if ( !v18 )
                            goto LABEL_40;
                        }
                        hide_name(v19);
                      }
                      while ( v18 );
LABEL_40:
                      sub_E800(v3, (__int64)v54);
                    }
                  }
                }
                else
                {
                  v44 -= 32;
                }
                ++v16;
              }
              while ( *(unsigned __int16 *)(v3 + 33031) >= (int)v16 );
              if ( *(_WORD *)(v3 + 33017) )
              {
                v48 = v3;
                v23 = a3;
                v24 = 1;
                do
                {
                  v25 = (unsigned __int16)v24;
                  if ( netnode_supval(v23, (unsigned __int16)v24, v53, 12, 83) != 12 )
                    return 0;
                  if ( v53[0] == 1 )
                  {
                    v26 = v24 << 16;
                    v27 = (unsigned int)(v24 << 16);
                    v28 = netnode_altval(v23, v27, 65);
                    if ( v28 < 0 )
                      return 0;
                    v30 = v28 & 0xFC0FFFF;
                    if ( (v28 & 0xFC0FFFF) == 0 )
                      return 0;
                    v31 = v30 | 0x80000000;
                    if ( (v28 & 0x70000000) != 0 )
                      v30 |= 0x80000000;
                    v32 = (unsigned __int16)v30;
                    if ( (_WORD)v30 )
                    {
                      v43 = v30;
                      v50 = (unsigned __int16)v24;
                      v46 = sub_19850(v48, v30, v31, v29);
                      v33 = 2 * v32;
                      v34 = 0;
                      v49 = v33;
                      v35 = v33;
                      v51 = v24;
                      do
                      {
                        v27 = (unsigned int)(v26 + 1);
                        v36 = v35 - v34;
                        ++v26;
                        if ( v35 - v34 > 0x400 )
                          v36 = 1024;
                        if ( v36 != netnode_supval(v23, v27, v46 + v34, v36, 83) )
                          return 0;
                        v34 += v36;
                        netnode_supdel(v23, v27, 83);
                      }
                      while ( v34 < v35 );
                      v25 = v50;
                      v24 = v51;
                      netnode_setblob(v23, v46, v49, (unsigned int)v27 & 0xFFFF0000, 106);
                      v37 = v43;
                      if ( v43 >= 0 )
                      {
                        v38 = (__int16 *)(v34 + v46);
                        do
                        {
                          v39 = *v38;
                          if ( (unsigned __int16)*v38 <= 0x7Eu )
                          {
                            if ( (unsigned __int8)v39 <= 0x20u )
                              goto LABEL_78;
                          }
                          else if ( !(unsigned __int8)sub_1C200(v39, nullptr) )
                          {
LABEL_78:
                            v37 = v43 | 0x80000000;
                            goto LABEL_72;
                          }
                          --v38;
                        }
                        while ( (_DWORD)v38 != (_DWORD)v46 );
                        v37 = v43;
                      }
LABEL_72:
                      v30 = sub_1E200(v48, v37);
                    }
                    v42 = v30;
                    v52 = v30;
                    netnode_supset(v23, v27, &v52, 8, 65);
                    *(_DWORD *)&v53[8] = v42;
                    netnode_supset(v23, v25, v53, 12, 83);
                  }
                  else if ( v53[0] == 2 )
                  {
                    sub_E450((__int64)"Base contain CONSTANT_Unicode, but it is removed from the standard in 1996 year an"
                                      "d never normal loaded in IDA");
                  }
                  ++v24;
                }
                while ( *(_WORD *)(v48 + 33017) >= (unsigned __int16)v24 );
                v3 = v48;
              }
              v40 = 1;
              if ( *(_WORD *)(v3 + 33081) )
              {
                while ( 1 )
                {
                  v41 = netnode_altval(*(_QWORD *)(v3 + 33328), v40, 65);
                  if ( !v41 || !sub_13D40(v3, -1, v41, 0, v53) )
                    return 0;
                  if ( v53[0] == 9 )
                    break;
                  if ( v53[0] <= 9u )
                  {
                    if ( v53[0] != 7 )
                      return 0;
                    if ( (v53[1] & 0x10) == 0 )
                      goto LABEL_88;
LABEL_87:
                    sub_1EA60(v3, *(unsigned __int16 *)&v53[4], *(unsigned __int16 *)&v53[10], v53[0] != 7, v40);
                    goto LABEL_88;
                  }
                  if ( (unsigned __int8)(v53[0] - 10) > 1u )
                    return 0;
                  if ( (~v53[1] & 0xB0) == 0 )
                    goto LABEL_87;
LABEL_88:
                  if ( *(_WORD *)(v3 + 33081) < (unsigned __int16)++v40 )
                    goto LABEL_89;
                }
                if ( (~v53[1] & 0x70) != 0 )
                  goto LABEL_88;
                goto LABEL_87;
              }
LABEL_89:
              if ( !*(_WORD *)(v3 + 33023) )
                return 161;
              goto LABEL_99;
            }
            v22 = getseg(*(_QWORD *)(v3 + 33065));
            if ( v22 )
            {
              *(_WORD *)(v22 + 44) |= 0x20u;
              update_segm(v22);
              goto LABEL_25;
            }
          }
          return 0;
        }
LABEL_42:
        if ( !netnode_altval(v13, 0, 65) )
          return 0;
        goto LABEL_21;
      }
      *(_WORD *)(a1 + 33025) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 33025) = 0;
    }
    v13 = *(_QWORD *)(a1 + 33045);
    if ( !v13 )
      goto LABEL_21;
    goto LABEL_42;
  }
  qexit(1);
LABEL_99:
  sub_1EA60(v3, *(_WORD *)(v3 + 33021), 0, 255, *(_DWORD *)(v3 + 33053));
  return 161;
}

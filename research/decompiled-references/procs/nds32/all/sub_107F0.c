__int64 __fastcall sub_107F0(__int64 a1, _WORD *a2, const __m128i *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int16 v8; // dx
  __int64 v9; // r13
  char v10; // r12
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rbp
  void (__fastcall *v22)(_WORD *, __int64); // rax
  __int64 v23; // rdx
  char *v24; // rsi
  unsigned __int64 v25; // rax
  void (__fastcall *v26)(_WORD *, const char *, __int64); // rcx
  char v27; // dl
  char v28; // al
  char v29; // si
  char *v30; // rsi
  __int64 v31; // rax
  __int8 v32; // al
  __int64 v33; // rax
  __int64 v34; // rsi
  bool v35; // dl
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]
  unsigned __int64 v44; // [rsp+28h] [rbp-30h]

  v44 = __readfsqword(0x28u);
  switch ( a3->m128i_i8[1] )
  {
    case 1:
      if ( a3->m128i_i8[0] || !a3[2].m128i_i8[0] )
      {
        sub_106F0((__int64)a2, a3->m128i_u16[3]);
        if ( a3[2].m128i_i8[0] )
        {
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 60);
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 60);
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
          (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(a2, a3[2].m128i_i8[1], 16);
        }
      }
      else
      {
        (*(void (__fastcall **)(_WORD *, const char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, "cp", 32);
        (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(a2, a3[2].m128i_i8[0], 10);
      }
      return 1;
    case 2:
      v8 = a2[124];
      v9 = a3[1].m128i_i64[0];
      v10 = 0;
      if ( (unsigned __int16)((v8 & 0xFFF7) - 5) <= 1u )
      {
        v10 = 1;
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 91);
        v8 = a2[124];
      }
      if ( v8 == 93 && (unsigned __int8)is_numop(*((_QWORD *)a2 + 90), a3->m128i_u8[0]) )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
        (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(*(_QWORD *)a2 + 24LL))(a2, a3, 200);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_WORD *, const __m128i *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(
                   a2,
                   a3,
                   v9,
                   a3[1].m128i_i64[0]) )
      {
        (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(*(_QWORD *)a2 + 24LL))(a2, a3, 192);
        remember_problem(2, *((_QWORD *)a2 + 30), 0);
      }
      if ( v10 )
        goto LABEL_16;
      return 1;
    case 3:
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 91);
      sub_106F0((__int64)a2, a3->m128i_u16[3]);
      if ( a3[2].m128i_i8[0] )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 43);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 40);
        sub_106F0((__int64)a2, a3->m128i_i32[2]);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 60);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 60);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
        (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(a2, a3[2].m128i_i8[1], 10);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 41);
      }
      else if ( (unsigned __int8)is_stkvar(*((_QWORD *)a2 + 90), a3->m128i_u8[0]) )
      {
        (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(*(_QWORD *)a2 + 24LL))(a2, a3, 198);
      }
      goto LABEL_16;
    case 4:
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 91);
      sub_106F0((__int64)a2, a3->m128i_u16[3]);
      if ( a3[1].m128i_i64[0] || (unsigned __int8)is_stkvar(*((_QWORD *)a2 + 90), a3->m128i_u8[0]) )
      {
        v11 = is_stkvar(*((_QWORD *)a2 + 90), a3->m128i_u8[0]);
        v12 = *(_QWORD *)a2;
        if ( v11 )
        {
          (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(v12 + 24))(a2, a3, 198);
        }
        else
        {
          v21 = a3[1].m128i_i64[0];
          v22 = *(void (__fastcall **)(_WORD *, __int64))(v12 + 32);
          if ( (int)v21 < 0 )
          {
            LODWORD(v21) = -(int)v21;
            v22(a2, 45);
          }
          else
          {
            v22(a2, 43);
          }
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
          (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(a2, (int)v21, 16);
        }
      }
LABEL_16:
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 93);
      return 1;
    case 5:
      if ( (unsigned __int8)is_stkvar(*((_QWORD *)a2 + 90), a3->m128i_u8[0]) )
      {
        v13 = a3[2].m128i_i64[0];
        v14 = *((_BYTE *)a2 + 305) == 1;
        v40 = _mm_loadu_si128(a3);
        v43 = v13;
        v15 = a3->m128i_i64[1];
        v42 = _mm_loadu_si128(a3 + 1).m128i_i64[1];
        v40.m128i_i8[1] = 4;
        v41 = v15;
        v16 = 31;
        if ( v14 )
          v16 = a2[155];
        v40.m128i_i16[3] = v16;
        (*(void (__fastcall **)(_WORD *, __m128i *, __int64))(*(_QWORD *)a2 + 24LL))(a2, &v40, 196);
        return 1;
      }
      v17 = a2[124];
      if ( v17 != 199 )
        goto LABEL_31;
      if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), a3->m128i_u8[0]) )
      {
        v25 = a3->m128i_u64[1];
        v26 = *(void (__fastcall **)(_WORD *, const char *, __int64))(*(_QWORD *)a2 + 56LL);
        if ( v25 <= 1 )
          v26(a2, (const char *)*(&off_29030 + v25), 32);
        else
          v26(a2, "???", 32);
        return 1;
      }
      v17 = a2[124];
LABEL_31:
      if ( v17 != 204 )
        goto LABEL_32;
      if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), a3->m128i_u8[0]) )
      {
        v27 = *((_BYTE *)a2 + 265);
        v28 = *((_BYTE *)a2 + 305);
        v29 = *((_BYTE *)a2 + 345);
        if ( v28 == 1 && v27 == 1 )
        {
          if ( v29 == 5 && a3->m128i_i8[0] == 2 )
          {
            switch ( (unsigned __int8)a3->m128i_i64[1] )
            {
              case 3u:
                v30 = "l1d_ix_rtag";
                goto LABEL_87;
              case 4u:
                v30 = "l1d_ix_rwd";
                goto LABEL_87;
              case 5u:
                v30 = "l1d_ix_wtag";
                goto LABEL_87;
              case 6u:
                v30 = "l1d_ix_wwd";
                goto LABEL_87;
              case 0x13u:
                v30 = "l1i_ix_rtag";
                goto LABEL_87;
              case 0x14u:
                v30 = "l1i_ix_rwd";
                goto LABEL_87;
              case 0x15u:
                v30 = "l1i_ix_wtag";
                goto LABEL_87;
              case 0x16u:
                v30 = "l1i_ix_wwd";
                goto LABEL_87;
              default:
                return 1;
            }
          }
          return 1;
        }
        if ( v27 == 1 && v28 == 5 )
        {
          v32 = a3->m128i_i8[0];
          if ( v29 != 5 )
          {
            if ( v32 == 1 )
            {
              switch ( (unsigned __int8)a3->m128i_i64[1] )
              {
                case 0u:
                  v30 = "l1d_ix_inval";
                  goto LABEL_87;
                case 1u:
                  v30 = "l1d_ix_wb";
                  goto LABEL_87;
                case 2u:
                  v30 = "l1d_ix_wbinval";
                  goto LABEL_87;
                case 0xBu:
                  v30 = "l1d_va_fillck";
                  goto LABEL_87;
                case 0xCu:
                  v30 = "l1d_va_ulck";
                  goto LABEL_87;
                case 0x10u:
                  v30 = "l1i_ix_inval";
                  goto LABEL_87;
                case 0x1Bu:
                  v30 = "l1i_va_fillck";
                  goto LABEL_87;
                case 0x1Cu:
                  v30 = "l1i_va_ulck";
                  goto LABEL_87;
                default:
                  return 1;
              }
            }
            return 1;
          }
          if ( v32 == 1 )
          {
            v39 = a3->m128i_i64[1];
            if ( (_BYTE)v39 == 10 )
            {
              v30 = "l1d_va_wbinval";
            }
            else if ( (unsigned __int8)v39 > 0xAu )
            {
              v30 = "l1i_va_inval";
              if ( (_BYTE)v39 != 24 )
                return 1;
            }
            else if ( (_BYTE)v39 == 8 )
            {
              v30 = "l1d_va_inval";
            }
            else
            {
              v30 = "l1d_va_wb";
              if ( (_BYTE)v39 != 9 )
                return 1;
            }
            goto LABEL_87;
          }
          if ( v32 != 2 )
            return 1;
        }
        else
        {
          v35 = v27 == 5;
          if ( v28 != 5 )
          {
            if ( !v35 || a3->m128i_i8[0] || a3->m128i_i8[8] != 7 )
              return 1;
            v30 = "l1d_invalall";
            goto LABEL_87;
          }
          if ( !v35 )
            return 1;
          if ( !a3->m128i_i8[0] )
          {
            if ( a3->m128i_i8[8] != 15 )
              return 1;
            v30 = "l1d_wball";
            goto LABEL_87;
          }
          if ( a3->m128i_i8[0] != 1 )
            return 1;
        }
        v36 = a3->m128i_i64[1];
        if ( (_BYTE)v36 )
        {
          if ( (_BYTE)v36 != 1 )
            return 1;
          v30 = "alevel";
        }
        else
        {
          v30 = "1level";
        }
        goto LABEL_87;
      }
      v17 = a2[124];
LABEL_32:
      v18 = a3->m128i_u8[0];
      if ( (unsigned __int16)(v17 - 70) > 1u )
        goto LABEL_33;
      if ( (_BYTE)v18 == 1 )
      {
        if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), 1) )
        {
          v33 = a3->m128i_i64[1];
          if ( (_WORD)v33 == 161 )
          {
            v24 = "dma_isaddr";
          }
          else if ( (unsigned __int16)v33 > 0xA1u )
          {
            if ( (_WORD)v33 == 800 )
            {
              v24 = "lb";
            }
            else if ( (unsigned __int16)v33 > 0x320u )
            {
              if ( (_WORD)v33 == 896 )
              {
                v24 = "itb";
              }
              else if ( (unsigned __int16)v33 > 0x380u )
              {
                if ( (_WORD)v33 == 928 )
                {
                  v24 = "ifc_lp";
                }
                else
                {
                  v24 = "pc";
                  if ( (_WORD)v33 != 992 )
                    goto LABEL_75;
                }
              }
              else if ( (_WORD)v33 == 832 )
              {
                v24 = "le";
              }
              else if ( (_WORD)v33 == 864 )
              {
                v24 = "lc";
              }
              else
              {
                v24 = "dma_2dsctl";
                if ( (_WORD)v33 != 801 )
                  goto LABEL_75;
              }
            }
            else if ( (_WORD)v33 == 289 )
            {
              v24 = "dma_2dset";
            }
            else if ( (unsigned __int16)v33 > 0x121u )
            {
              if ( (_WORD)v33 == 737 )
              {
                v24 = "dma_rcnt";
              }
              else
              {
                v24 = "dma_hstatus";
                if ( (_WORD)v33 != 769 )
                  goto LABEL_75;
              }
            }
            else if ( (_WORD)v33 == 225 )
            {
              v24 = "dma_tcnt";
            }
            else if ( (_WORD)v33 == 257 )
            {
              v24 = "dma_status";
            }
            else
            {
              v24 = "dma_esaddr";
              if ( (_WORD)v33 != 193 )
                goto LABEL_75;
            }
          }
          else
          {
            if ( (unsigned __int16)v33 <= 0x61u )
            {
              if ( (unsigned __int16)v33 <= 0x3Fu )
              {
                switch ( a3->m128i_i64[1] )
                {
                  case 0LL:
                    v24 = "d0.lo";
                    goto LABEL_132;
                  case 1LL:
                    v24 = "dma_cfg";
                    goto LABEL_132;
                  case 2LL:
                    v24 = "pfmc0";
                    goto LABEL_132;
                  case 0x20LL:
                    v24 = "d0.hi";
                    goto LABEL_132;
                  case 0x21LL:
                    v24 = "dma_gcsw";
                    goto LABEL_132;
                  case 0x22LL:
                    v24 = "pfmc1";
                    goto LABEL_132;
                  default:
                    goto LABEL_75;
                }
              }
              switch ( (int)v33 )
              {
                case '@':
                  v24 = "d1.lo";
                  goto LABEL_132;
                case 'A':
                  v24 = "dma_chnsel";
                  goto LABEL_132;
                case 'B':
                  v24 = "pfmc2";
                  goto LABEL_132;
                case '`':
                  v24 = "d1.hi";
                  goto LABEL_132;
                case 'a':
                  v24 = "dma_act";
                  goto LABEL_132;
                default:
                  goto LABEL_75;
              }
            }
            if ( (_WORD)v33 == 129 )
            {
              v24 = "dma_setup";
            }
            else
            {
              v24 = "pfm_ctl";
              if ( (_WORD)v33 != 130 )
                goto LABEL_75;
            }
          }
LABEL_132:
          (*(void (__fastcall **)(_WORD *, char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v24, 33);
          return 1;
        }
        v17 = a2[124];
        v18 = a3->m128i_u8[0];
LABEL_33:
        if ( (unsigned __int16)(v17 - 205) <= 1u )
        {
          if ( (_BYTE)v18 != 1 )
            goto LABEL_35;
          if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), 1) )
          {
            v34 = a3->m128i_i64[1];
            switch ( (__int16)v34 )
            {
              case 0:
                v24 = "cpu_ver";
                goto LABEL_132;
              case 1:
                v24 = "core_id";
                goto LABEL_132;
              case 8:
                v24 = "icm_cfg";
                goto LABEL_132;
              case 16:
                v24 = "dcm_cfg";
                goto LABEL_132;
              case 24:
                v24 = "mmu_cfg";
                goto LABEL_132;
              case 32:
                v24 = "msc_cfg";
                goto LABEL_132;
              case 33:
                v24 = "msc_cfg2";
                goto LABEL_132;
              case 40:
                v24 = "fucop_exist";
                goto LABEL_132;
              case 128:
                v24 = "psw";
                goto LABEL_132;
              case 129:
                v24 = "ipsw";
                goto LABEL_132;
              case 130:
                v24 = "p_ipsw";
                goto LABEL_132;
              case 137:
                v24 = "ivb";
                goto LABEL_132;
              case 138:
                v24 = "int_ctrl";
                goto LABEL_132;
              case 139:
                v24 = "int_gpr_push_dis";
                goto LABEL_132;
              case 145:
                v24 = "eva";
                goto LABEL_132;
              case 146:
                v24 = "p_eva";
                goto LABEL_132;
              case 153:
                v24 = "itype";
                goto LABEL_132;
              case 154:
                v24 = "p_itype";
                goto LABEL_132;
              case 161:
                v24 = "merr";
                goto LABEL_132;
              case 169:
                v24 = "ipc";
                goto LABEL_132;
              case 170:
                v24 = "p_ipc";
                goto LABEL_132;
              case 171:
                v24 = "oipc";
                goto LABEL_132;
              case 178:
                v24 = "p_p0";
                goto LABEL_132;
              case 186:
                v24 = "p_p1";
                goto LABEL_132;
              case 192:
                v24 = "int_mask";
                goto LABEL_132;
              case 193:
                v24 = "int_mask2";
                goto LABEL_132;
              case 194:
                v24 = "int_mask3";
                goto LABEL_132;
              case 200:
                v24 = "int_pend";
                goto LABEL_132;
              case 201:
                v24 = "int_pend2";
                goto LABEL_132;
              case 202:
                v24 = "int_pend3";
                goto LABEL_132;
              case 204:
                v24 = "int_trigger";
                goto LABEL_132;
              case 205:
                v24 = "int_trigger2";
                goto LABEL_132;
              case 208:
                v24 = "sp_usr";
                goto LABEL_132;
              case 209:
                v24 = "sp_priv";
                goto LABEL_132;
              case 210:
                v24 = "sp_usr1";
                goto LABEL_132;
              case 211:
                v24 = "sp_priv1";
                goto LABEL_132;
              case 212:
                v24 = "sp_usr2";
                goto LABEL_132;
              case 213:
                v24 = "sp_priv2";
                goto LABEL_132;
              case 214:
                v24 = "sp_usr3";
                goto LABEL_132;
              case 215:
                v24 = "sp_priv3";
                goto LABEL_132;
              case 216:
                v24 = "int_pri";
                goto LABEL_132;
              case 217:
                v24 = "int_pri2";
                goto LABEL_132;
              case 218:
                v24 = "int_pri3";
                goto LABEL_132;
              case 219:
                v24 = "int_pri4";
                goto LABEL_132;
              case 256:
                v24 = "mmu_ctl";
                goto LABEL_132;
              case 257:
                v24 = "bg_region";
                goto LABEL_132;
              case 264:
                v24 = "l1_pptb";
                goto LABEL_132;
              case 272:
                v24 = "tlb_vpn";
                goto LABEL_132;
              case 280:
                v24 = "tlb_data";
                goto LABEL_132;
              case 288:
                v24 = "tlb_misc";
                goto LABEL_132;
              case 296:
                v24 = "vlpt_idx";
                goto LABEL_132;
              case 304:
                v24 = "ilmb";
                goto LABEL_132;
              case 312:
                v24 = "dlmb";
                goto LABEL_132;
              case 320:
                v24 = "cache_ctl";
                goto LABEL_132;
              case 328:
                v24 = "hsmp_saddr";
                goto LABEL_132;
              case 329:
                v24 = "hsmp_eaddr";
                goto LABEL_132;
              case 376:
                v24 = "sdz_ctl";
                goto LABEL_132;
              case 377:
                v24 = "misc_ctl";
                goto LABEL_132;
              case 378:
                v24 = "ecc_misc";
                goto LABEL_132;
              case 384:
                v24 = "bpc0";
                goto LABEL_132;
              case 385:
                v24 = "bpc1";
                goto LABEL_132;
              case 386:
                v24 = "bpc2";
                goto LABEL_132;
              case 387:
                v24 = "bpc3";
                goto LABEL_132;
              case 388:
                v24 = "bpc4";
                goto LABEL_132;
              case 389:
                v24 = "bpc5";
                goto LABEL_132;
              case 390:
                v24 = "bpc6";
                goto LABEL_132;
              case 391:
                v24 = "bpc7";
                goto LABEL_132;
              case 392:
                v24 = "bpa0";
                goto LABEL_132;
              case 393:
                v24 = "bpa1";
                goto LABEL_132;
              case 394:
                v24 = "bpa2";
                goto LABEL_132;
              case 395:
                v24 = "bpa3";
                goto LABEL_132;
              case 396:
                v24 = "bpa4";
                goto LABEL_132;
              case 397:
                v24 = "bpa5";
                goto LABEL_132;
              case 398:
                v24 = "bpa6";
                goto LABEL_132;
              case 399:
                v24 = "bpa7";
                goto LABEL_132;
              case 400:
                v24 = "bpam0";
                goto LABEL_132;
              case 401:
                v24 = "bpam1";
                goto LABEL_132;
              case 402:
                v24 = "bpam2";
                goto LABEL_132;
              case 403:
                v24 = "bpam3";
                goto LABEL_132;
              case 404:
                v24 = "bpam4";
                goto LABEL_132;
              case 405:
                v24 = "bpam5";
                goto LABEL_132;
              case 406:
                v24 = "bpam6";
                goto LABEL_132;
              case 407:
                v24 = "bpam7";
                goto LABEL_132;
              case 408:
                v24 = "bpv0";
                goto LABEL_132;
              case 409:
                v24 = "bpv1";
                goto LABEL_132;
              case 410:
                v24 = "bpv2";
                goto LABEL_132;
              case 411:
                v24 = "bpv3";
                goto LABEL_132;
              case 412:
                v24 = "bpv4";
                goto LABEL_132;
              case 413:
                v24 = "bpv5";
                goto LABEL_132;
              case 414:
                v24 = "bpv6";
                goto LABEL_132;
              case 415:
                v24 = "bpv7";
                goto LABEL_132;
              case 416:
                v24 = "bpcid0";
                goto LABEL_132;
              case 417:
                v24 = "bpcid1";
                goto LABEL_132;
              case 418:
                v24 = "bpcid2";
                goto LABEL_132;
              case 419:
                v24 = "bpcid3";
                goto LABEL_132;
              case 420:
                v24 = "bpcid4";
                goto LABEL_132;
              case 421:
                v24 = "bpcid5";
                goto LABEL_132;
              case 422:
                v24 = "bpcid6";
                goto LABEL_132;
              case 423:
                v24 = "bpcid7";
                goto LABEL_132;
              case 424:
                v24 = "edm_cfg";
                goto LABEL_132;
              case 432:
                v24 = "edmsw";
                goto LABEL_132;
              case 440:
                v24 = "edm_ctl";
                goto LABEL_132;
              case 448:
                v24 = "edm_dtr";
                goto LABEL_132;
              case 456:
                v24 = "bpmtc";
                goto LABEL_132;
              case 464:
                v24 = "dimbr";
                goto LABEL_132;
              case 496:
                v24 = "tecr0";
                goto LABEL_132;
              case 497:
                v24 = "tecr1";
                goto LABEL_132;
              case 512:
                v24 = "pfmc0";
                goto LABEL_132;
              case 513:
                v24 = "pfmc1";
                goto LABEL_132;
              case 514:
                v24 = "pfmc2";
                goto LABEL_132;
              case 520:
                v24 = "pfm_ctl";
                goto LABEL_132;
              case 528:
                v24 = "pft_ctl";
                goto LABEL_132;
              case 544:
                v24 = "prusr_acc_ctl";
                goto LABEL_132;
              case 552:
                v24 = "fucpr";
                goto LABEL_132;
              case 560:
                v24 = "hsp_ctl";
                goto LABEL_132;
              case 561:
                v24 = "sp_bound";
                goto LABEL_132;
              case 562:
                v24 = "sp_bound_priv";
                goto LABEL_132;
              case 563:
                v24 = "sp_base";
                goto LABEL_132;
              case 564:
                v24 = "sp_base_priv";
                goto LABEL_132;
              case 640:
                v24 = "dma_cfg";
                goto LABEL_132;
              case 648:
                v24 = "dma_gcsw";
                goto LABEL_132;
              case 656:
                v24 = "dma_chnsel";
                goto LABEL_132;
              case 664:
                v24 = "dma_act";
                goto LABEL_132;
              case 672:
                v24 = "dma_setup";
                goto LABEL_132;
              case 680:
                v24 = "dma_isaddr";
                goto LABEL_132;
              case 688:
                v24 = "dma_esaddr";
                goto LABEL_132;
              case 696:
                v24 = "dma_tcnt";
                goto LABEL_132;
              case 697:
                v24 = "dma_rcnt";
                goto LABEL_132;
              case 704:
                v24 = "dma_status";
                goto LABEL_132;
              case 705:
                v24 = "dma_hstatus";
                goto LABEL_132;
              case 712:
                v24 = "dma_2dset";
                goto LABEL_132;
              case 713:
                v24 = "dma_2dsctl";
                goto LABEL_132;
              case 768:
                v24 = "secur0";
                goto LABEL_132;
              case 776:
                v24 = "secur1";
                goto LABEL_132;
              case 777:
                v24 = "secur2";
                goto LABEL_132;
              case 778:
                v24 = "secur3";
                goto LABEL_132;
              default:
                (*(void (__fastcall **)(_WORD *, __int64, __int64))(*(_QWORD *)a2 + 112LL))(a2, v34, 10);
                break;
            }
            return 1;
          }
          v17 = a2[124];
          v18 = a3->m128i_u8[0];
        }
        if ( v17 == 21 )
        {
          if ( (_BYTE)v18 )
            goto LABEL_35;
          if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), 0) )
          {
            switch ( a3->m128i_i8[8] & 7 )
            {
              case 0:
                v30 = "srd";
                goto LABEL_87;
              case 1:
                v30 = "mrd";
                goto LABEL_87;
              case 2:
                v30 = "swr";
                goto LABEL_87;
              case 3:
                v30 = "mwr";
                goto LABEL_87;
              case 4:
                v30 = "pte";
                goto LABEL_87;
              case 5:
                v30 = "clwr";
                goto LABEL_87;
              default:
                goto LABEL_75;
            }
          }
          v17 = a2[124];
          v18 = a3->m128i_u8[0];
        }
        if ( v17 == 203 )
        {
          if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), v18) )
          {
            switch ( (unsigned __int8)a3->m128i_i64[1] )
            {
              case 0u:
                v30 = "targetread";
                goto LABEL_87;
              case 1u:
                v30 = "targetwrite";
                goto LABEL_87;
              case 2u:
                v30 = "rwrite";
                goto LABEL_87;
              case 3u:
                v30 = "rwritelock";
                goto LABEL_87;
              case 4u:
                v30 = "unlock";
                goto LABEL_87;
              case 6u:
                v30 = "invalidate";
                goto LABEL_87;
              case 7u:
                v30 = "flua";
                goto LABEL_87;
              default:
                goto LABEL_75;
            }
          }
          v17 = a2[124];
          v18 = a3->m128i_u8[0];
        }
      }
      if ( v17 != 202 )
        goto LABEL_44;
      if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), v18) )
      {
        v31 = a3->m128i_i64[1];
        if ( (_BYTE)v31 == 1 )
        {
          v30 = "wake_grant";
        }
        else if ( (_BYTE)v31 == 2 )
        {
          v30 = "wait_done";
        }
        else
        {
          if ( (_BYTE)v31 )
            goto LABEL_75;
          v30 = "no_wake_grant";
        }
LABEL_87:
        (*(void (__fastcall **)(_WORD *, char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v30, 32);
        return 1;
      }
      v17 = a2[124];
      v18 = a3->m128i_u8[0];
LABEL_44:
      if ( v17 != 114 )
      {
LABEL_49:
        if ( v17 != 93 )
          goto LABEL_35;
        if ( !(unsigned __int8)is_numop(*((_QWORD *)a2 + 90), v18) )
        {
          v18 = a3->m128i_u8[0];
          goto LABEL_35;
        }
LABEL_75:
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
        (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(*(_QWORD *)a2 + 24LL))(a2, a3, 72);
        return 1;
      }
      if ( *((_BYTE *)a2 + 257) == 3 && (*((_DWORD *)a2 + 63) & 0x1FF) == 0xA )
      {
        if ( !(unsigned __int8)is_defarg(*((_QWORD *)a2 + 90), v18) )
        {
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
          v37 = a3->m128i_i64[1];
          v38 = *(_QWORD *)a2;
          if ( (v37 & 0x8000u) != 0LL )
          {
            (*(void (__fastcall **)(_WORD *, __int64))(v38 + 64))(a2, 12);
            (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 45);
            (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(a2, -(__int16)v37, 16);
            (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 12);
          }
          else
          {
            (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(v38 + 24))(a2, a3, 9);
          }
          return 1;
        }
        v17 = a2[124];
        v18 = a3->m128i_u8[0];
        goto LABEL_49;
      }
LABEL_35:
      v19 = is_off(*((_QWORD *)a2 + 90), v18);
      v20 = *(_QWORD *)a2;
      if ( !v19 || a2[124] == 94 )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(v20 + 32))(a2, 35);
        v23 = 72;
        if ( a2[124] != 94 )
          v23 = 64;
        (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(*(_QWORD *)a2 + 24LL))(a2, a3, v23);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_WORD *, const __m128i *, __int64, __int64))(v20 + 120))(
                   a2,
                   a3,
                   a3->m128i_i64[1],
                   a3->m128i_i64[1]) )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 35);
        v5 = *(_QWORD *)a2;
        v6 = 64;
LABEL_4:
        (*(void (__fastcall **)(_WORD *, const __m128i *, __int64))(v5 + 24))(a2, a3, v6);
        remember_problem(2, *((_QWORD *)a2 + 30), 0);
      }
      return 1;
    case 7:
      if ( (*(unsigned __int8 (__fastcall **)(_WORD *, const __m128i *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             a3[1].m128i_i64[0],
             a3[1].m128i_i64[0]) )
      {
        return 1;
      }
      v5 = *(_QWORD *)a2;
      v6 = 200;
      goto LABEL_4;
    default:
      return 0;
  }
}

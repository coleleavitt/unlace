unsigned __int64 __fastcall sub_10930(__int64 a1)
{
  int v1; // edx
  const char *v2; // rdx
  const char *v3; // rdx
  const char *v4; // rdx
  int v6; // eax
  _BYTE v7[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 252);
  v8 = __readfsqword(0x28u);
  if ( (v1 & 0x21) != 0 )
  {
    v2 = sub_105F0(a1, *(_BYTE *)(a1 + 257), (v1 & 0x20) != 0);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)a1 + 280LL))(a1, 10, v2);
    }
    else
    {
      qsnprintf();
      (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 10, v7);
    }
    v1 = *(_DWORD *)(a1 + 252);
  }
  if ( (v1 & 2) != 0 )
  {
    switch ( *(_BYTE *)(a1 + 257) )
    {
      case 0:
      case 0xE6:
        v3 = ".expstate";
        goto LABEL_8;
      case 1:
        v3 = ".sov";
        goto LABEL_8;
      case 2:
        v3 = ".sat";
        goto LABEL_8;
      case 3:
        v3 = ".sar0";
        goto LABEL_8;
      case 4:
        v3 = ".sar1";
        goto LABEL_8;
      case 5:
        v3 = ".sar2";
        goto LABEL_8;
      case 6:
        v3 = ".sar3";
        goto LABEL_8;
      case 7:
        v3 = ".hsar0";
        goto LABEL_8;
      case 8:
        v3 = ".hsar1";
        goto LABEL_8;
      case 9:
        v3 = ".hsar2";
        goto LABEL_8;
      case 0xA:
        v3 = ".hsar3";
        goto LABEL_8;
      case 0xB:
        v3 = ".max_reg_0";
        goto LABEL_8;
      case 0xC:
        v3 = ".max_reg_1";
        goto LABEL_8;
      case 0xD:
        v3 = ".max_reg_2";
        goto LABEL_8;
      case 0xE:
        v3 = ".max_reg_3";
        goto LABEL_8;
      case 0xF:
        v3 = ".arg_max_reg_0";
        goto LABEL_8;
      case 0x10:
        v3 = ".arg_max_reg_1";
        goto LABEL_8;
      case 0x11:
        v3 = ".arg_max_reg_2";
        goto LABEL_8;
      case 0x12:
        v3 = ".arg_max_reg_3";
        goto LABEL_8;
      case 0x13:
        v3 = ".nco_counter_0";
        goto LABEL_8;
      case 0x14:
        v3 = ".nco_counter_1";
        goto LABEL_8;
      case 0x15:
        v3 = ".nco_counter_2";
        goto LABEL_8;
      case 0x16:
        v3 = ".nco_counter_3";
        goto LABEL_8;
      case 0x17:
        v3 = ".interp_ext_n";
        goto LABEL_8;
      case 0x18:
        v3 = ".interp_ext_l";
        goto LABEL_8;
      case 0x19:
        v3 = ".llr_buf_0";
        goto LABEL_8;
      case 0x1A:
        v3 = ".llr_buf_1";
        goto LABEL_8;
      case 0x1B:
        v3 = ".llr_buf_2";
        goto LABEL_8;
      case 0x1C:
        v3 = ".llr_buf_3";
        goto LABEL_8;
      case 0x1D:
        v3 = ".llr_buf_4";
        goto LABEL_8;
      case 0x1E:
        v3 = ".llr_buf_5";
        goto LABEL_8;
      case 0x1F:
        v3 = ".llr_buf_6";
        goto LABEL_8;
      case 0x20:
        v3 = ".llr_buf_7";
        goto LABEL_8;
      case 0x21:
        v3 = ".llr_buf_8";
        goto LABEL_8;
      case 0x22:
        v3 = ".llr_buf_9";
        goto LABEL_8;
      case 0x23:
        v3 = ".llr_buf_10";
        goto LABEL_8;
      case 0x24:
        v3 = ".llr_buf_11";
        goto LABEL_8;
      case 0x25:
        v3 = ".llr_buf_12";
        goto LABEL_8;
      case 0x26:
        v3 = ".llr_buf_13";
        goto LABEL_8;
      case 0x27:
        v3 = ".llr_buf_14";
        goto LABEL_8;
      case 0x28:
        v3 = ".llr_buf_15";
        goto LABEL_8;
      case 0x29:
        v3 = ".llr_buf_16";
        goto LABEL_8;
      case 0x2A:
        v3 = ".llr_buf_17";
        goto LABEL_8;
      case 0x2B:
        v3 = ".llr_buf_18";
        goto LABEL_8;
      case 0x2C:
        v3 = ".llr_buf_19";
        goto LABEL_8;
      case 0x2D:
        v3 = ".llr_buf_20";
        goto LABEL_8;
      case 0x2E:
        v3 = ".llr_buf_21";
        goto LABEL_8;
      case 0x2F:
        v3 = ".llr_buf_22";
        goto LABEL_8;
      case 0x30:
        v3 = ".llr_buf_23";
        goto LABEL_8;
      case 0x31:
        v3 = ".smod_buf_0";
        goto LABEL_8;
      case 0x32:
        v3 = ".smod_buf_1";
        goto LABEL_8;
      case 0x33:
        v3 = ".smod_buf_2";
        goto LABEL_8;
      case 0x34:
        v3 = ".smod_buf_3";
        goto LABEL_8;
      case 0x35:
        v3 = ".smod_buf_4";
        goto LABEL_8;
      case 0x36:
        v3 = ".smod_buf_5";
        goto LABEL_8;
      case 0x37:
        v3 = ".smod_buf_6";
        goto LABEL_8;
      case 0x38:
        v3 = ".smod_buf_7";
        goto LABEL_8;
      case 0x39:
        v3 = ".weight_reg";
        goto LABEL_8;
      case 0x3A:
        v3 = ".scale_reg";
        goto LABEL_8;
      case 0x3B:
        v3 = ".llr_pos";
        goto LABEL_8;
      case 0x3C:
        v3 = ".smod_pos";
        goto LABEL_8;
      case 0x3D:
        v3 = ".perm_reg";
        goto LABEL_8;
      case 0x3E:
        v3 = ".smod_offset_table_0";
        goto LABEL_8;
      case 0x3F:
        v3 = ".smod_offset_table_1";
        goto LABEL_8;
      case 0x40:
        v3 = ".smod_offset_table_2";
        goto LABEL_8;
      case 0x41:
        v3 = ".smod_offset_table_3";
        goto LABEL_8;
      case 0x42:
        v3 = ".phasor_n";
        goto LABEL_8;
      case 0x43:
        v3 = ".phasor_offset";
        goto LABEL_8;
      case 0xE7:
        v3 = ".threadptr";
        goto LABEL_8;
      case 0xE8:
        v3 = ".fcr";
        goto LABEL_8;
      case 0xE9:
        v3 = ".fsr";
        goto LABEL_8;
      case 0xF0:
        v3 = ".ae_ovf_sar";
        goto LABEL_8;
      case 0xF1:
        v3 = ".ae_bithead";
        goto LABEL_8;
      case 0xF2:
        v3 = ".ae_ts_fts_bu_bp";
        goto LABEL_8;
      case 0xF3:
        v3 = ".ae_sd_no";
        goto LABEL_8;
      case 0xF6:
        v3 = ".ae_cbegin0";
        goto LABEL_8;
      case 0xF7:
        v3 = ".ae_cend0";
LABEL_8:
        (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)a1 + 280LL))(a1, 10, v3);
        v1 = *(_DWORD *)(a1 + 252);
        break;
      default:
        qsnprintf();
        (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 10, v7);
        v1 = *(_DWORD *)(a1 + 252);
        break;
    }
  }
  if ( (v1 & 0x40) != 0 )
  {
    switch ( *(_BYTE *)(a1 + 257) )
    {
      case 0:
        v4 = ".ae_overflow";
        goto LABEL_12;
      case 1:
        v4 = ".ae_sar";
        goto LABEL_12;
      case 2:
        v4 = ".ae_bitptr";
        goto LABEL_12;
      case 3:
        v4 = ".ae_bitsused";
        goto LABEL_12;
      case 4:
        v4 = ".ae_tablesize";
        goto LABEL_12;
      case 5:
        v4 = ".ae_first_ts";
        goto LABEL_12;
      case 6:
        v4 = ".ae_nextoffset";
        goto LABEL_12;
      case 7:
        v4 = ".ae_searchdone";
        goto LABEL_12;
      case 8:
        v4 = ".ae_cwrap";
LABEL_12:
        (*(void (__fastcall **)(__int64, __int64, const char *, _QWORD))(*(_QWORD *)a1 + 280LL))(
          a1,
          10,
          v4,
          *(unsigned __int8 *)(a1 + 257));
        v1 = *(_DWORD *)(a1 + 252);
        break;
      default:
        qsnprintf();
        (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 10, v7);
        v1 = *(_DWORD *)(a1 + 252);
        break;
    }
  }
  if ( (v1 & 4) != 0 )
  {
    qstrncpy();
    v6 = *(_DWORD *)(a1 + 252);
    if ( (v6 & 8) != 0 )
    {
      qstrncat();
      v6 = *(_DWORD *)(a1 + 252);
    }
    if ( (v6 & 0x10) != 0 )
      qstrncat();
    (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 10, v7);
  }
  return v8 - __readfsqword(0x28u);
}


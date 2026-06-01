unsigned __int64 __fastcall sub_1860(__int64 a1)
{
  __m128i v1; // xmm1
  __m128i v2; // xmm1
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // rsi
  unsigned __int8 v15; // al
  unsigned __int8 default_reftype; // al
  const char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  unsigned __int8 v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v27; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int16 v28; // [rsp+Ch] [rbp-3Ch]
  char v29; // [rsp+Eh] [rbp-3Ah]
  char v30; // [rsp+Fh] [rbp-39h]
  unsigned int v31; // [rsp+11h] [rbp-37h]
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  lread(a1, &v27, 13);
  v28 = __ROL2__(v28, 8);
  v1 = _mm_cvtsi32_si128(v27);
  v27 = _mm_cvtsi128_si32(_mm_or_si128(_mm_slli_epi16(v1, 8u), _mm_srli_epi16(v1, 8u)));
  v2 = _mm_cvtsi32_si128(v31);
  v31 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v2, 8u), _mm_slli_epi16(v2, 8u)));
  set_processor_type("6809", 1);
  set_target_assembler(5);
  v3 = qlsize(a1);
  v4 = qlseek(a1, 0, 1);
  v5 = 16 * getinf(12);
  v6 = v5 + 4096;
  v7 = v5 + 4096 + HIWORD(v27);
  if ( v5 + 4096 >= v7 || v3 < v4 )
    sub_16A0((__int64)"Corrupted input file");
  v8 = v5;
  file2base(a1, 0, v5 + 4096, v7, 1);
  v9 = HIWORD(v27);
  v10 = getinf(12);
  sub_1750(v10, v6, v6 + v9);
  create_filename_cmt();
  set_name(v6, "magic", 1024);
  create_data(v6, 0x10000000, 2, -1);
  v11 = num_flag();
  set_op_type(v6, v11, 0);
  set_name(v8 + 4098, "size", 1024);
  create_data(v8 + 4098, 0x10000000, 2, -1);
  v12 = num_flag();
  set_op_type(v8 + 4098, v12, 0);
  set_name(v8 + 4100, "name", 1024);
  create_data(v8 + 4100, 0x10000000, 2, -1);
  if ( v28 < HIWORD(v27) )
  {
    default_reftype = get_default_reftype(v8 + 4100);
    op_offset(v8 + 4100, 0, default_reftype, -1, v6, 0);
  }
  set_name(v8 + 4102, "type_lang", 1024);
  create_data(v8 + 4102, 0, 1, -1);
  v13 = num_flag();
  set_op_type(v8 + 4102, v13, 0);
  v14 = "Data module";
  v15 = v29 & 0xF0;
  if ( (v29 & 0xF0) != 0x40 )
  {
    if ( (v29 & 0xF0u) <= 0x40 )
    {
      v14 = "Subroutine module";
      if ( v15 != 32 )
      {
        if ( v15 > 0x20u )
        {
          v14 = "unknown";
          if ( v15 == 48 )
            v14 = "Multi-Module (for future use)";
        }
        else
        {
          v14 = "illegal";
          if ( v15 )
            v14 = "Program module";
        }
      }
    }
    else
    {
      v14 = "OS-9 Device Driver Module";
      if ( v15 != 0xE0 )
      {
        if ( v15 > 0xE0u )
        {
          v14 = "unknown";
          if ( v15 == 0xF0 )
            v14 = "OS-9 Device Descriptor Module";
        }
        else
        {
          v14 = "OS-9 System Module";
          if ( v15 != 0xC0 )
          {
            v14 = "unknown";
            if ( v15 == 0xD0 )
              v14 = "OS-9 File Manager Module";
          }
        }
      }
    }
  }
  append_cmt(v8 + 4102, v14, 0);
  switch ( v29 & 0xF )
  {
    case 0:
      v17 = "Data (not executable)";
      break;
    case 1:
      v17 = "6809 object code";
      break;
    case 2:
      v17 = "BASIC09 I-Code";
      break;
    case 3:
      v17 = "PASCAL P-Code";
      break;
    case 4:
      v17 = "C I-Code";
      break;
    case 5:
      v17 = "COBOL I-Code";
      break;
    case 6:
      v17 = "FORTRAN I-Code";
      break;
    default:
      v17 = "unknown";
      break;
  }
  append_cmt(v8 + 4102, v17, 0);
  set_name(v8 + 4103, "attrib", 1024);
  create_data(v8 + 4103, 0, 1, -1);
  v18 = num_flag();
  set_op_type(v8 + 4103, v18, 0);
  if ( v30 < 0 )
    append_cmt(v8 + 4103, "Shared module", 0);
  set_name(v8 + 4104, "parity", 1024);
  create_data(v8 + 4104, 0, 1, -1);
  v19 = num_flag();
  v20 = v8 + 4104;
  v21 = v8 + 4105;
  v22 = v8 + 4107;
  set_op_type(v20, v19, 0);
  set_name(v21, "start_ptr", 1024);
  create_data(v21, 0x10000000, 2, -1);
  v23 = get_default_reftype(v21);
  op_offset(v21, 0, v23, -1, v6, 0);
  set_name(v22, "storage", 1024);
  create_data(v22, 0x10000000, 2, -1);
  v24 = num_flag();
  set_op_type(v22, v24, 0);
  setinf(15, (unsigned __int16)v31 + 4096LL);
  v25 = getinf(12);
  setinf(14, v25);
  return v32 - __readfsqword(0x28u);
}


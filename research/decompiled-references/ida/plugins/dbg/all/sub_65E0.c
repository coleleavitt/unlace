__int64 __fastcall sub_65E0(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  unsigned __int32 v4; // ebp
  unsigned __int16 v5; // r14
  __int16 v6; // r15
  __int64 v8; // rdi
  char v9; // al
  unsigned __int8 v10; // r12
  size_t v11; // rax
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rdi
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 default_reftype; // al
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int8 v24; // al
  int v25; // [rsp+Ch] [rbp-4ACh]
  unsigned __int32 v26; // [rsp+10h] [rbp-4A8h]
  unsigned __int8 v27; // [rsp+17h] [rbp-4A1h]
  unsigned int v29; // [rsp+20h] [rbp-498h]
  __int64 v31; // [rsp+48h] [rbp-470h] BYREF
  __m128i v32; // [rsp+50h] [rbp-468h] BYREF
  __int16 v33; // [rsp+60h] [rbp-458h]
  char s[1024]; // [rsp+70h] [rbp-448h] BYREF
  _BYTE v35[8]; // [rsp+470h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+478h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v29 = -1;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    v32.m128i_i16[4] = v5;
    v32.m128i_i64[0] = __PAIR64__(v4, v25);
    v33 = v6;
    v32.m128i_i32[3] = v26;
    v9 = sub_6570(v8, a2, &v32, a4);
    v4 = v32.m128i_u32[1];
    v5 = v32.m128i_u16[4];
    v6 = v33;
    if ( !v9 )
      return v29;
    if ( *(_BYTE *)(a1 + 382) )
    {
      v25 = _byteswap_ulong(v32.m128i_u32[0]);
      v5 = __ROL2__(v32.m128i_i16[4], 8);
      v26 = _byteswap_ulong(v32.m128i_u32[3]);
      v6 = __ROL2__(v33, 8);
      v4 = _byteswap_ulong(v32.m128i_u32[1]);
    }
    else
    {
      v25 = v32.m128i_i32[0];
      v26 = v32.m128i_u32[3];
    }
    v10 = v32.m128i_u8[10];
    switch ( v32.m128i_i8[10] & 7 )
    {
      case 0:
        qsnprintf(s, 1024, "extref");
        goto LABEL_7;
      case 1:
        qsnprintf(s, 1024, "csect, len %08X", v25);
        goto LABEL_7;
      case 2:
        qsnprintf(s, 1024, "entry, symidx %d", v25);
        goto LABEL_7;
      case 3:
        qsnprintf(s, 1024, "common, len %08X", v25);
        v11 = strlen(s);
        v12 = &s[v11];
        if ( v4 )
          goto LABEL_12;
        goto LABEL_8;
      case 4:
        qsnprintf(s, 1024, "errmes");
        goto LABEL_7;
      case 5:
        qsnprintf(s, 1024, "reserved");
        goto LABEL_7;
      default:
        qsnprintf(s, 1024, "??unknown csect type %02X??", v32.m128i_u8[10]);
LABEL_7:
        v11 = strlen(s);
        v12 = &s[v11];
        if ( v4 )
LABEL_12:
          v12 += (int)qsnprintf(v12, 1024 - v11, " parm. type-check hash idx in the .typchk %u:%08X", v5, v4);
LABEL_8:
        v13 = qsnprintf(v12, v35 - v12, " log2align %d", v10 >> 3);
        v14 = *(_QWORD *)(a1 + 133);
        v15 = &v12[v13];
        if ( v14 == -1 )
        {
          netnode_check(a1 + 133, "$ toc", 0, 1);
          v14 = *(_QWORD *)(a1 + 133);
        }
        v29 = v32.m128i_u8[11];
        LOBYTE(v31) = v32.m128i_i8[11] + 1;
        v27 = v32.m128i_u8[11];
        netnode_supset(v14, a3, &v31, 1, 257);
        v18 = v27;
        switch ( v27 )
        {
          case 0u:
            qsnprintf(v15, v35 - v15, " RO code", v16, v17, v27);
            auto_mark_range(a3, a3 + 1, 20);
            auto_mark_range(a3, a3 + 1, 30);
            v29 = 0;
            continue;
          case 1u:
            qsnprintf(v15, v35 - v15, " RO constant", v16, v17, v27);
            goto LABEL_43;
          case 2u:
            qsnprintf(v15, v35 - v15, " RO debug dictionary table", v16, v17, v27);
            v29 = 2;
            continue;
          case 3u:
            qsnprintf(v15, v35 - v15, " RW general TOC entry", v16, v17, v27);
            if ( a3 != -1 )
            {
              create_data(a3, 0x20000000, v25, -1);
              default_reftype = get_default_reftype(a3);
              op_offset(a3, 0, default_reftype, -1, 0, 0);
            }
            goto LABEL_19;
          case 4u:
            qsnprintf(v15, v35 - v15, " RW unclassified", v16, v17, v27);
            v29 = 4;
            continue;
          case 5u:
            qsnprintf(v15, v35 - v15, " RW data", v16, v17, v27);
LABEL_43:
            if ( a3 != -1 )
            {
              switch ( v25 )
              {
                case 2:
                  create_data(a3, 0x10000000, 2, -1);
                  break;
                case 4:
                  create_data(a3, 0x20000000, 4, -1);
                  break;
                case 1:
                  create_data(a3, 0, 1, -1);
                  break;
              }
            }
            continue;
          case 6u:
            qsnprintf(v15, v35 - v15, " RO glue code", v16, v17, v27);
            auto_mark_range(a3, a3 + 1, 20);
            auto_mark_range(a3, a3 + 1, 30);
            v29 = 6;
            continue;
          case 7u:
            qsnprintf(v15, v35 - v15, " RO extended operation (pseudo-machine instruction)", v16, v17, v27);
            if ( a3 != -1 )
              set_cmt(a3, "pseudo-machine instruction", 0);
            v29 = 7;
            continue;
          case 8u:
            qsnprintf(v15, v35 - v15, " RO supervisor call", v16, v17, v27);
            if ( a3 != -1 )
              set_cmt(a3, "supervisor call", 0);
            v29 = 8;
            continue;
          case 9u:
            qsnprintf(v15, v35 - v15, " BSS class", v16, v17, v27);
            if ( a3 != -1 )
              create_data(a3, 0, v25, -1);
            v29 = 9;
            continue;
          case 0xAu:
            qsnprintf(v15, v35 - v15, " RW function descriptor", v16, v17, v27);
            if ( a3 != -1 )
            {
              create_data(a3, 0x20000000, 8, -1);
              v24 = get_default_reftype(a3);
              op_offset(a3, 0, v24, -1, 0, 0);
              if ( v25 > 8 )
                create_data(a3 + 8, 0x20000000, v25 - 8, -1);
            }
            v29 = 10;
            continue;
          case 0xBu:
            qsnprintf(v15, v35 - v15, " Unnamed fortran common", v16, v17, v27);
            v29 = 11;
            continue;
          case 0xCu:
            qsnprintf(v15, v35 - v15, " RO traceback index csect", v16, v17, v27);
            v29 = 12;
            continue;
          case 0xDu:
            qsnprintf(v15, v35 - v15, " RO traceback table csect", v16, v17, v27);
            v29 = 13;
            continue;
          case 0xFu:
            qsnprintf(v15, v35 - v15, " RW TOC anchor for (TOC addressability)", v16, v17, v27);
            v29 = 15;
            *(_QWORD *)(a1 + 48) = a3;
            continue;
          case 0x10u:
LABEL_19:
            v20 = netnode_altval(*(_QWORD *)(a1 + 133), -1, 65, v16, v17, v18);
            if ( node2ea(v20 - 1) >= a3 )
            {
              v21 = ea2node(a3);
              v22 = *(_QWORD *)(a1 + 133);
              v31 = v21 + 1;
              netnode_supset(v22, -1, &v31, 8, 65);
            }
            break;
          default:
            qsnprintf(v15, v35 - v15, " ??unknown csect st.class %02X", v29);
            break;
        }
        break;
    }
  }
}


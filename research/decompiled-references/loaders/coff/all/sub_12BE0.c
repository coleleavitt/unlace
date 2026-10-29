__int64 __fastcall sub_12BE0(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  size_t v6; // rax
  char *v7; // rbx
  int v8; // eax
  __int64 v9; // rdi
  char *v10; // rbx
  unsigned __int8 default_reftype; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int8 v16; // al
  const char *v17; // rdx
  _BYTE *v18; // rsi
  __int32 v19; // eax
  bool v20; // cc
  unsigned int v21; // [rsp+0h] [rbp-498h]
  __int64 v24; // [rsp+28h] [rbp-470h] BYREF
  __m128i v25; // [rsp+30h] [rbp-468h] BYREF
  char s[1024]; // [rsp+50h] [rbp-448h] BYREF
  _BYTE v27[8]; // [rsp+450h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+458h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v21 = -1;
  while ( (unsigned __int8)sub_9170(*(_QWORD *)(a1 + 40), a2, &v25, a4) )
  {
    if ( *(_BYTE *)(a1 + 382) )
    {
      v25.m128i_i16[4] = __ROL2__(v25.m128i_i16[4], 8);
      v25.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v25.m128i_u32[0], v25.m128i_u32[1]));
      v25.m128i_i32[3] = _byteswap_ulong(v25.m128i_u32[3]);
    }
    switch ( v25.m128i_i8[10] & 7 )
    {
      case 0:
        qsnprintf(s, 1024, "extref", v25.m128i_u8[10]);
        break;
      case 1:
        qsnprintf(s, 1024, "csect, len %08X", v25.m128i_i32[0]);
        break;
      case 2:
        qsnprintf(s, 1024, "entry, symidx %d", v25.m128i_i32[0]);
        break;
      case 3:
        qsnprintf(s, 1024, "common, len %08X", v25.m128i_i32[0]);
        break;
      case 4:
        qsnprintf(s, 1024, "errmes", v25.m128i_u8[10]);
        break;
      case 5:
        qsnprintf(s, 1024, "reserved", v25.m128i_u8[10]);
        break;
      default:
        qsnprintf(s, 1024, "??unknown csect type %02X??", v25.m128i_u8[10]);
        break;
    }
    v6 = strlen(s);
    v7 = &s[v6];
    if ( v25.m128i_i32[1] )
      v7 += (int)qsnprintf(
                   &s[v6],
                   1024 - v6,
                   " parm. type-check hash idx in the .typchk %u:%08X",
                   v25.m128i_u16[4],
                   v25.m128i_i32[1]);
    v8 = qsnprintf(v7, v27 - v7, " log2align %d", (unsigned __int8)v25.m128i_i8[10] >> 3);
    v9 = *(_QWORD *)(a1 + 133);
    v10 = &v7[v8];
    if ( v9 == -1 )
    {
      netnode_check(a1 + 133, "$ toc", 0, 1);
      v9 = *(_QWORD *)(a1 + 133);
    }
    v21 = v25.m128i_u8[11];
    LOBYTE(v24) = v25.m128i_i8[11] + 1;
    netnode_supset(v9, a3, &v24, 1, 257);
    switch ( v25.m128i_i8[11] )
    {
      case 0:
        v17 = " RO code";
        v18 = (_BYTE *)(v27 - v10);
        goto LABEL_34;
      case 1:
        qsnprintf(v10, v27 - v10, " RO constant");
        v19 = v25.m128i_i32[0];
        v20 = v25.m128i_i32[0] <= 4u;
        if ( v25.m128i_i32[0] == 4 )
          goto LABEL_44;
        goto LABEL_36;
      case 2:
        qsnprintf(v10, v27 - v10, " RO debug dictionary table");
        break;
      case 3:
        qsnprintf(v10, v27 - v10, " RW general TOC entry");
        create_data(a3, 805306368, v25.m128i_u32[0], -1);
        default_reftype = get_default_reftype(a3);
        op_offset(a3, 0, default_reftype, -1, 0, 0);
        goto LABEL_20;
      case 4:
        qsnprintf(v10, v27 - v10, " RW unclassified");
        break;
      case 5:
        qsnprintf(v10, v27 - v10, " RW data");
        v19 = v25.m128i_i32[0];
        v20 = v25.m128i_i32[0] <= 4u;
        if ( v25.m128i_i32[0] == 4 )
        {
LABEL_44:
          create_data(a3, 0x20000000, 4, -1);
        }
        else
        {
LABEL_36:
          if ( v20 )
          {
            if ( v19 == 1 )
            {
              create_data(a3, 0, 1, -1);
            }
            else if ( v19 == 2 )
            {
              create_data(a3, 0x10000000, 2, -1);
            }
          }
          else if ( v19 == 8 )
          {
            create_data(a3, 805306368, 8, -1);
          }
        }
        break;
      case 6:
        v17 = " RO glue code";
        v18 = (_BYTE *)(v27 - v10);
LABEL_34:
        qsnprintf(v10, v18, v17);
        auto_mark_range(a3, a3 + 1, 20);
        auto_mark_range(a3, a3 + 1, 30);
        break;
      case 7:
        qsnprintf(v10, v27 - v10, " RO extended operation (pseudo-machine instruction)");
        set_cmt(a3, "pseudo-machine instruction", 0);
        break;
      case 8:
      case 0x12:
        qsnprintf(v10, v27 - v10, " RO supervisor call");
        set_cmt(a3, "supervisor call", 0);
        break;
      case 9:
        qsnprintf(v10, v27 - v10, " BSS class");
        create_data(a3, 0, v25.m128i_u32[0], -1);
        break;
      case 0xA:
        qsnprintf(v10, v27 - v10, " RW function descriptor");
        create_data(a3, 805306368, 16, -1);
        v16 = get_default_reftype(a3);
        op_offset(a3, 0, v16, -1, 0, 0);
        if ( v25.m128i_i32[0] > 16 )
          create_data(a3 + 16, 805306368, (unsigned int)(v25.m128i_i32[0] - 16), -1);
        break;
      case 0xB:
        qsnprintf(v10, v27 - v10, " Unnamed fortran common");
        break;
      case 0xC:
        qsnprintf(v10, v27 - v10, " RO traceback index csect");
        break;
      case 0xD:
        qsnprintf(v10, v27 - v10, " RO traceback table csect");
        break;
      case 0xF:
        qsnprintf(v10, v27 - v10, " RW TOC anchor for (TOC addressability)");
        *(_QWORD *)(a1 + 48) = a3;
        break;
      case 0x10:
LABEL_20:
        v12 = netnode_altval(*(_QWORD *)(a1 + 133), -1, 65);
        if ( node2ea(v12 - 1) >= a3 )
        {
          v13 = ea2node(a3);
          v14 = *(_QWORD *)(a1 + 133);
          v24 = v13 + 1;
          netnode_supset(v14, -1, &v24, 8, 65);
        }
        break;
      case 0x11:
        qsnprintf(v10, v27 - v10, " RO supervisor call");
        set_cmt(a3, "supervisor call 64 bit", 0);
        break;
      default:
        qsnprintf(v10, v27 - v10, " ??unknown csect st.class %02X", v25.m128i_u8[11]);
        break;
    }
    sub_5740(a3, 1u, (__int64)"%s", s);
  }
  return v21;
}

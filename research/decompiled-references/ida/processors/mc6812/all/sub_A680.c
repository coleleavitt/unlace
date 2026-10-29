__int64 __fastcall sub_A680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed int a4,
        __int64 (__fastcall *a5)(char *, __int64, __int64, double),
        __int64 a6)
{
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  bool v13; // cl
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 dtype_size; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdx
  char *v28; // rdi
  char *v29; // rdi
  char *v30; // rdi
  char *v31; // rdi
  char *v32; // rdi
  __int128 v33; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-198h]
  __int64 v35; // [rsp+28h] [rbp-190h]
  __int64 v36; // [rsp+30h] [rbp-188h]
  _BYTE v37[320]; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v38; // [rsp+178h] [rbp-40h] BYREF

  v38 = __readfsqword(0x28u);
  if ( (unsigned int)a4 > 3 )
    return 0;
  v33 = -1;
  v34 = -1;
  v11 = (unsigned __int64 *)v37;
  v35 = 0;
  v36 = 0;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( v11 != &v38 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 104);
  if ( (unsigned __int16)v35 >= v14 && (unsigned __int16)v35 < *(int *)(v12 + 108) )
    v13 = (*((_DWORD *)qword_11DA0 + (unsigned int)a4)
         & *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * ((unsigned __int16)v35 - v14) + 8)) != 0;
  *(_BYTE *)a2 = v13;
  if ( v37[40 * a4 + 1] > 8u )
    return 0;
  switch ( v37[40 * a4 + 1] )
  {
    case 0:
    case 6:
    case 7:
      return 0;
    case 1:
      if ( *(_WORD *)&v37[40 * a4 + 6] > 0x25u )
      {
LABEL_39:
        v17 = -1;
      }
      else
      {
        switch ( *(_WORD *)&v37[40 * a4 + 6] )
        {
          case 0:
            v29 = "A";
            goto LABEL_55;
          case 1:
            v29 = "B";
            goto LABEL_55;
          case 2:
            v29 = "D";
            goto LABEL_55;
          case 3:
            v29 = "IX";
            goto LABEL_55;
          case 4:
            v29 = "IY";
            goto LABEL_55;
          case 5:
            v29 = "SP";
            goto LABEL_55;
          case 6:
            v29 = "PC";
            goto LABEL_55;
          case 7:
            v29 = "CCR";
            goto LABEL_55;
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x21:
          case 0x22:
            goto LABEL_39;
          case 0x20:
            JUMPOUT(0xABE7);
          case 0x23:
            v29 = "RPAGE";
            goto LABEL_55;
          case 0x24:
            v29 = "EPAGE";
            goto LABEL_55;
          case 0x25:
            v29 = "GPAGE";
LABEL_55:
            v17 = *(_QWORD *)(a5(v29, a6, 40LL * a4, 0.0) + 8);
            break;
        }
      }
      v16 = *(_QWORD *)(a2 + 8);
      break;
    case 2:
      v17 = 0;
      v23 = sub_9AA0(a1, (__int64)&v33, *(_QWORD *)&v37[40 * a4 + 16]);
      *(_QWORD *)(a2 + 8) = v23;
      v16 = v23;
      break;
    case 3:
      if ( v37[40 * a4 + 33] > 0x25u )
      {
LABEL_32:
        v24 = -1;
      }
      else
      {
        switch ( v37[40 * a4 + 33] )
        {
          case 0:
            v31 = "A";
            break;
          case 1:
            v31 = "B";
            break;
          case 2:
            v31 = "D";
            break;
          case 3:
            v31 = "IX";
            break;
          case 4:
            v31 = "IY";
            break;
          case 5:
            v31 = "SP";
            break;
          case 6:
            v31 = "PC";
            break;
          case 7:
            v31 = "CCR";
            break;
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x21:
          case 0x22:
            goto LABEL_32;
          case 0x20:
            v31 = "PPAGE";
            break;
          case 0x23:
            v31 = "RPAGE";
            break;
          case 0x24:
            v31 = "EPAGE";
            break;
          case 0x25:
            v31 = "GPAGE";
            break;
        }
        v24 = *(_QWORD *)(a5(v31, a6, 40LL * a4, 0.0) + 8);
      }
      *(_QWORD *)(a2 + 8) = v24;
      if ( *(_WORD *)&v37[40 * a4 + 6] > 0x25u )
      {
LABEL_35:
        v25 = -1;
      }
      else
      {
        switch ( *(_WORD *)&v37[40 * a4 + 6] )
        {
          case 0:
            v28 = "A";
            break;
          case 1:
            v28 = "B";
            break;
          case 2:
            v28 = "D";
            break;
          case 3:
            v28 = "IX";
            break;
          case 4:
            v28 = "IY";
            break;
          case 5:
            v28 = "SP";
            break;
          case 6:
            v28 = "PC";
            break;
          case 7:
            v28 = "CCR";
            break;
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x21:
          case 0x22:
            goto LABEL_35;
          case 0x20:
            v28 = "PPAGE";
            break;
          case 0x23:
            v28 = "RPAGE";
            break;
          case 0x24:
            v28 = "EPAGE";
            break;
          case 0x25:
            v28 = "GPAGE";
            break;
        }
        v25 = *(_QWORD *)(((__int64 (__fastcall *)(char *, __int64, _QWORD, __int64, double))a5)(
                            v28,
                            a6,
                            *(unsigned __int16 *)&v37[40 * a4 + 6],
                            40LL * a4,
                            0.0)
                        + 8);
        v24 = *(_QWORD *)(a2 + 8);
      }
      v16 = v24 + v25;
      v17 = 0;
      *(_QWORD *)(a2 + 8) = v16;
      break;
    case 4:
      v21 = sub_9AA0(a1, (__int64)&v33, *(_QWORD *)&v37[40 * a4 + 16]);
      *(_QWORD *)(a2 + 8) = v21;
      if ( (v37[40 * a4 + 32] & 1) != 0 )
      {
        if ( (v37[40 * a4 + 32] & 4) != 0 )
        {
          dtype_size = 2;
          if ( (_WORD)v35 == 45 )
            dtype_size = 3;
        }
        else
        {
          dtype_size = get_dtype_size();
          v21 = *(_QWORD *)(a2 + 8);
        }
        *(_QWORD *)(a2 + 8) = v21 - dtype_size;
      }
      if ( *(_WORD *)&v37[40 * a4 + 6] > 0x25u )
      {
LABEL_37:
        v26 = -1;
      }
      else
      {
        switch ( *(_WORD *)&v37[40 * a4 + 6] )
        {
          case 0:
            v30 = "A";
            break;
          case 1:
            v30 = "B";
            break;
          case 2:
            v30 = "D";
            break;
          case 3:
            v30 = "IX";
            break;
          case 4:
            v30 = "IY";
            break;
          case 5:
            v30 = "SP";
            break;
          case 6:
            v30 = "PC";
            break;
          case 7:
            v30 = "CCR";
            break;
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x21:
          case 0x22:
            goto LABEL_37;
          case 0x20:
            v30 = "PPAGE";
            break;
          case 0x23:
            v30 = "RPAGE";
            break;
          case 0x24:
            v30 = "EPAGE";
            break;
          case 0x25:
            v30 = "GPAGE";
            break;
        }
        v26 = *(_QWORD *)(a5(v30, a6, 40LL * a4, 0.0) + 8);
      }
      v16 = *(_QWORD *)(a2 + 8) + v26;
      v17 = 0;
      *(_QWORD *)(a2 + 8) = v16;
      break;
    case 5:
      v16 = *(_QWORD *)(a2 + 8);
      v17 = *(_QWORD *)&v37[40 * a4 + 8];
      break;
    case 8:
      v15 = sub_9AA0(a1, (__int64)&v33, *(_QWORD *)&v37[40 * a4 + 16]);
      *(_QWORD *)(a2 + 8) = v15;
      switch ( *(_WORD *)&v37[40 * a4 + 6] )
      {
        case 0:
          v32 = "A";
          goto LABEL_87;
        case 1:
          v32 = "B";
          goto LABEL_87;
        case 2:
          v32 = "D";
          goto LABEL_87;
        case 3:
          v32 = "IX";
          goto LABEL_87;
        case 4:
          v32 = "IY";
          goto LABEL_87;
        case 5:
          v32 = "SP";
          goto LABEL_87;
        case 6:
          v32 = "PC";
          goto LABEL_87;
        case 7:
          v32 = "CCR";
          goto LABEL_87;
        case 0x20:
          v32 = "PPAGE";
LABEL_87:
          v27 = *(_QWORD *)(((__int64 (__fastcall *)(char *, __int64))a5)(v32, a6) + 8);
          v15 = *(_QWORD *)(a2 + 8);
          break;
        default:
          v27 = -1;
          break;
      }
      v16 = v15 + v27;
      v17 = 0;
      *(_QWORD *)(a2 + 8) = v15 + v27;
      break;
  }
  if ( (v37[40 * a4 + 32] & 4) != 0 )
  {
    v18 = 2;
    if ( (_WORD)v35 == 45 )
      v18 = 3;
    v19 = sub_9A00(v16, v18);
    *(_QWORD *)(a2 + 8) = v19;
    v16 = v19;
  }
  if ( v16 != -1 )
  {
    v20 = get_dtype_size();
    v17 = sub_9A00(*(_QWORD *)(a2 + 8), v20);
  }
  *(_QWORD *)(a2 + 24) = v17;
  *(_DWORD *)(a2 + 52) = get_dtype_size();
  return 1;
}


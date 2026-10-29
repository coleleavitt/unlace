__int64 __fastcall sub_12AB50(unsigned int **a1, unsigned __int64 *a2, int a3, int a4, __m128i a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // rdx
  unsigned int *v18; // r12
  __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r15
  unsigned __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  __int16 v30; // dx
  __int16 v31; // cx
  int v32; // edx
  unsigned int *v33; // rdx
  unsigned int *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned int *v36; // r12
  int v37; // eax
  __int16 v38; // si
  __int16 v39; // cx
  int v40; // edx
  unsigned int *v41; // rax
  __int64 v42; // r12
  char v43; // r12
  char v44; // al
  __int64 v45; // [rsp+8h] [rbp-60h]
  int v46; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall **v47)(); // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 *v48; // [rsp+18h] [rbp-50h]
  int v49; // [rsp+20h] [rbp-48h]
  unsigned int v50; // [rsp+24h] [rbp-44h]
  unsigned __int64 v51; // [rsp+28h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v9 = a4 & 0x100;
  if ( !(_DWORD)v9 && ((*((_BYTE *)a1 + 1) & 4) != 0 || *(_BYTE *)a1 == 4 && sub_122600(a1[1])) && !sub_11CAD0(a3) )
    return 0;
  v10 = *((_DWORD *)a1 + 1);
  v11 = a4 & 0xFFFFFE7F;
  if ( (a4 & 0xFFFFFE7F) == 2 )
  {
    if ( a3 != v10 )
    {
      if ( !*(_BYTE *)a1 )
      {
LABEL_19:
        if ( v10 == -1 )
          return 1;
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_383060(0xC839u, *(double *)a5.m128i_i64);
LABEL_98:
      BUG();
    }
  }
  else if ( a3 == v10 )
  {
    return 1;
  }
  v12 = *(unsigned __int8 *)a1;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      if ( (a4 & 0x80) != 0 )
        goto LABEL_7;
      v17 = *((unsigned int *)a1 + 2);
      if ( (int)v17 >= *((_DWORD *)a2 + 17) )
        goto LABEL_7;
      if ( a3 > (*(int (__fastcall **)(unsigned __int64 *, _QWORD, __int64, __int64))(*a2 + 40))(a2, 0, v17, 0x7FFFFFFF) )
        return 0;
      goto LABEL_6;
    case 2:
      if ( (unsigned __int64)a3 > 8 )
        return 0;
      if ( (unsigned __int64)v10 <= 8 )
      {
        if ( a3 < v10 )
        {
          v18 = a1[1];
          *((_QWORD *)v18 + 2) = sub_32ABC0(*((_QWORD *)v18 + 2), a3, 0);
          v10 = *((_DWORD *)a1 + 1);
        }
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_383060(0xCD96u, *(double *)a5.m128i_i64);
      goto LABEL_98;
    case 4:
      v19 = (__int64)a1[1];
      switch ( *(_DWORD *)v19 )
      {
        case 2:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
          goto LABEL_56;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0x13:
        case 0x14:
        case 0x15:
          v48 = a2;
          v47 = &off_4DD8E0;
          v49 = a3;
          v50 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_121DB0(v19, (__int64)&v47, 273) )
            return 0;
          goto LABEL_55;
        case 8:
        case 9:
          if ( *(_DWORD *)(v19 + 36) > a3 )
          {
            *(_DWORD *)v19 = 10;
            a1[1][17] = a3;
            sub_15BC70(a1[1], a2, 0, 0, nullptr, nullptr, a5, 0);
            v19 = (__int64)a1[1];
            goto LABEL_56;
          }
          if ( *(_DWORD *)(v19 + 36) != a3 )
            goto LABEL_56;
LABEL_74:
          if ( a1 )
          {
            v48 = nullptr;
            sub_123A40((__int64)&v47, (unsigned __int8 *)(v19 + 32), v12, v9);
            v38 = *(_WORD *)a1;
            v39 = *((_WORD *)a1 + 1);
            v40 = *((_DWORD *)a1 + 1);
            *a1 = (unsigned int *)v47;
            v41 = a1[1];
            LOWORD(v47) = v38;
            a1[1] = (unsigned int *)v48;
            WORD1(v47) = v39;
            HIDWORD(v47) = v40;
            v48 = (unsigned __int64 *)v41;
            sub_11CDA0((__int64)&v47);
          }
          return 1;
        case 0xA:
          if ( *(_DWORD *)(v19 + 36) == a3 )
            goto LABEL_74;
          if ( *(_DWORD *)(v19 + 36) < a3 )
            return 0;
          goto LABEL_56;
        case 0x16:
          v48 = a2;
          v47 = &off_4DD8E0;
          v49 = a3;
          v50 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_121DB0(v19, (__int64)&v47, 257) )
            return 0;
LABEL_55:
          v19 = (__int64)a1[1];
LABEL_56:
          *(_DWORD *)(v19 + 68) = a3;
          break;
        default:
          return 0;
      }
      goto LABEL_6;
    case 5:
      v20 = (__int64 *)a1[1];
      v21 = *v20;
      v22 = v20[1];
      v23 = a3 - 1;
      v24 = *(_QWORD *)(v21 + 144);
      v25 = v22 + 1;
      if ( v24 >= v22 + 1 && a3 != 1 && v23 + v22 >= v24 )
        return 0;
      if ( *(_DWORD *)(v21 + 116) )
      {
        v35 = *(_QWORD *)(v21 + 136);
        if ( v35 >= v25 && a3 != 1 && v23 + v22 >= v35 )
          return 0;
      }
      if ( (unsigned __int8)sub_1EF9B0(v21, v22, 1) || v25 > *(_QWORD *)(v21 + 144) - *(int *)(v21 + 120) )
      {
        v26 = (unsigned __int64 *)a1[1];
        if ( (*(_BYTE *)(*v26 + 2) & 4) == 0 && !(unsigned int)sub_232200((_QWORD *)*v26, v26[1], a3, nullptr, v11 != 0) )
          return 0;
      }
      goto LABEL_6;
    case 6:
      if ( !(unsigned __int8)is_mapped() )
        goto LABEL_6;
      v36 = a1[1];
      if ( get_item_end() - (__int64)v36 >= (unsigned __int64)a3 )
        goto LABEL_6;
      v45 = a2[12];
      if ( (get_flags_ex() & 0x600) == 0x200 )
        prev_not_tail();
      if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 || next_that() < (unsigned __int64)a1[1] + a3 )
        return 0;
      v37 = *((_DWORD *)a1 + 1);
      if ( v37 >= a3 )
      {
        if ( !v11 )
          goto LABEL_9;
LABEL_68:
        del_items();
        get_flags_by_size();
        if ( !(unsigned __int8)can_define_item() )
          return 0;
        if ( !(unsigned __int8)create_data() )
        {
          if ( !under_debugger )
            sub_383060(0xC472u, *(double *)a5.m128i_i64);
          goto LABEL_98;
        }
LABEL_6:
        v10 = *((_DWORD *)a1 + 1);
LABEL_7:
        if ( a3 > v10 )
          *((_WORD *)a1 + 1) = 0;
LABEL_9:
        v13 = a2[12];
        if ( !*(_BYTE *)(v13 + 145)
          || !sub_11BB90((unsigned __int8 *)a1, v13, 0, *(double *)a5.m128i_i64)
          || (v15 = *((_DWORD *)a1 + 1), v15 <= a3) )
        {
          *((_DWORD *)a1 + 1) = a3;
          return 1;
        }
        if ( a3 )
          return sub_126F10((int *)a1, a2, v15 - a3, v14, *(double *)a5.m128i_i64);
        return 0;
      }
      v42 = v45;
      v46 = sub_343460(v45, (unsigned __int64)a1[1], v37);
      if ( ((unsigned int)sub_343460(v42, (unsigned __int64)a1[1] + *((int *)a1 + 1), a3 - *((_DWORD *)a1 + 1)) != 0) != (v46 != 0) )
        return 0;
      v43 = (unsigned __int8)segtype() == 1;
      v44 = (unsigned __int8)segtype() == 1;
      if ( !v43 && !v44 )
        goto LABEL_88;
      if ( v43 != v44 )
        return 0;
      if ( next_head() == -1 || (unsigned __int8)segtype() != 1 )
      {
LABEL_88:
        if ( !v11 )
          goto LABEL_6;
        goto LABEL_68;
      }
      return 0;
    case 7:
      return 1;
    case 9:
      if ( a3 < v10 )
        goto LABEL_9;
      if ( !under_debugger )
        sub_383060(0xC473u, *(double *)a5.m128i_i64);
      goto LABEL_98;
    case 0xE:
      if ( v11 == 2 )
        goto LABEL_7;
      v27 = (unsigned int)(2 * a3);
      if ( (int)v27 > v10 )
        return 0;
      sub_123A40((__int64)&v47, (unsigned __int8 *)a1[1], v27, v9);
      v28 = HIDWORD(v47);
      if ( SHIDWORD(v47) <= a3 )
        goto LABEL_50;
      if ( !(unsigned __int8)sub_12AB50((unsigned __int8 *)&v47, (__int64)a2, a3, v11) )
      {
        sub_11CDA0((__int64)&v47);
        return 0;
      }
      v28 = HIDWORD(v47);
LABEL_50:
      v29 = (__int16)v47;
      LOWORD(v47) = *(_WORD *)a1;
      v30 = *((_WORD *)a1 + 1);
      *(_WORD *)a1 = v29;
      v31 = WORD1(v47);
      WORD1(v47) = v30;
      v32 = *((_DWORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v31;
      HIDWORD(v47) = v32;
      v33 = (unsigned int *)v48;
      *((_DWORD *)a1 + 1) = v28;
      v34 = a1[1];
      a1[1] = v33;
      v48 = (unsigned __int64 *)v34;
      sub_11CDA0((__int64)&v47);
      v10 = *((_DWORD *)a1 + 1);
      goto LABEL_7;
    case 0xF:
      if ( v11 == 2 )
        goto LABEL_7;
      if ( a3 > v10 )
        return 0;
      return sub_1272B0((__int64)a1, a2, a3, 0, *(double *)a5.m128i_i64);
    default:
      return 0;
  }
}


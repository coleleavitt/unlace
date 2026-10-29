__int64 *__fastcall sub_2436E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _BYTE *a6,
        double a7,
        char a8)
{
  unsigned __int8 v11; // bp
  char v13; // al
  int v14; // edx
  unsigned __int8 v15; // al
  char tinfo_property; // al
  _BYTE *v17; // r9
  char v18; // al
  char v19; // al
  __int64 v20; // r9
  char v21; // al
  unsigned int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 tinfo_size; // rax
  __int64 v26; // rsi
  unsigned __int8 v27; // [rsp+8h] [rbp-A0h]
  _BYTE *v29; // [rsp+8h] [rbp-A0h]
  __int64 v30; // [rsp+8h] [rbp-A0h]
  _QWORD v31[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+38h] [rbp-70h]
  __int128 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+50h] [rbp-58h]
  int v36; // [rsp+58h] [rbp-50h]
  __int16 v37; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 0:
      goto LABEL_15;
    case 0x10:
      if ( !(unsigned __int8)*a5 || !*a6 || (get_tinfo_property() & 0x3F) == 1 || (get_tinfo_property() & 0x3F) == 1 )
      {
        *a1 = 1;
        return a1;
      }
      if ( !sub_23FA30(*(_QWORD *)(a3 + 32), 0)
        && !sub_23FA30(*(_QWORD *)(a3 + 40), 0)
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        tinfo_property = get_tinfo_property();
        v17 = a6;
        if ( (tinfo_property & 0xF) != 8 || (v18 = sub_29D090(*(_QWORD *)(a3 + 40), 2), v17 = a6, !v18) )
        {
          v29 = v17;
          v19 = get_tinfo_property();
          v20 = (__int64)v29;
          if ( (v19 & 0xF) != 8 || (v21 = sub_29D090(*(_QWORD *)(a3 + 32), 2), v20 = (__int64)v29, !v21) )
          {
            v30 = v20;
            if ( !(unsigned __int8)compare_tinfo() )
            {
              sub_242920(a1, a2, (__int64)a5, v30, 1);
              return a1;
            }
          }
        }
      }
      goto LABEL_3;
    case 0x11:
    case 0x12:
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
    case 0x31:
      *a1 = 8;
      return a1;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
      goto LABEL_10;
    case 0x20:
    case 0x21:
    case 0x22:
      v11 = *(_BYTE *)(a2 + 130);
      if ( get_tinfo_size() >= (unsigned __int64)v11 )
        goto LABEL_3;
      sub_32C270(&v34, *(_QWORD *)(a2 + 112), v11);
      sub_242920(a1, a2, a4, (__int64)&v34, 1);
      clear_tinfo_t();
      return a1;
    case 0x23:
    case 0x24:
      v27 = (get_tinfo_property() & 0xF) - 10;
      v13 = get_tinfo_property();
      v14 = *(_DWORD *)(a3 + 8);
      v15 = (v13 & 0xF) - 10;
      if ( v14 == 36 )
      {
        if ( v15 > 2u )
        {
          if ( v27 > 2u )
            goto LABEL_10;
          goto LABEL_3;
        }
        if ( v27 <= 2u )
        {
          tinfo_size = get_tinfo_size();
          v26 = *(_QWORD *)(a2 + 112);
          if ( *(_DWORD *)(v26 + 84) != tinfo_size )
          {
            sub_32C430(a1, v26, tinfo_size, 1);
            return a1;
          }
          goto LABEL_3;
        }
        if ( a8 )
        {
LABEL_15:
          *a1 = 0;
          return a1;
        }
        if ( !under_debugger )
          sub_383060(0xC9C5u, a7);
LABEL_77:
        BUG();
      }
      if ( v14 == 35 && v15 <= 2u )
      {
        if ( v27 <= 2u )
        {
          if ( !a8 )
          {
            if ( !under_debugger )
              sub_383060(0xC9C6u, a7);
            goto LABEL_77;
          }
          goto LABEL_15;
        }
      }
      else if ( v27 <= 2u )
      {
        goto LABEL_3;
      }
      if ( v15 > 2u )
      {
LABEL_10:
        sub_242920(a1, a2, a4, (__int64)a5, 1);
        return a1;
      }
LABEL_3:
      *a1 = 0;
      copy_tinfo_t();
      return a1;
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
      sub_242920((__int64 *)&v34, a2, a4, (__int64)a5, 1);
      if ( get_tinfo_size() == 4 )
      {
        *a1 = 25;
      }
      else
      {
        *a1 = 0;
        copy_tinfo_t();
      }
      clear_tinfo_t();
      return a1;
    case 0x2E:
      if ( get_tinfo_size() != 4 )
        goto LABEL_3;
      *a1 = 25;
      return a1;
    case 0x2F:
    case 0x32:
      *(_QWORD *)&v34 = 7;
      sub_242920(a1, a2, a4, (__int64)&v34, 1);
      clear_tinfo_t();
      return a1;
    case 0x33:
      *(_QWORD *)&v34 = get_tinfo_property();
      if ( (_BYTE)v34 )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB && *(int *)(a3 + 40) > 0 )
        {
          v23 = get_tinfo_size();
          v24 = *(int *)(a3 + 40);
          if ( v24 != v23 )
          {
LABEL_40:
            sub_32C270(a1, *(_QWORD *)(a2 + 112), v24);
LABEL_51:
            clear_tinfo_t();
            return a1;
          }
        }
      }
      else if ( !a8 )
      {
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
          if ( !under_debugger )
            sub_383060(0xC793u, a7);
          goto LABEL_77;
        }
        LODWORD(v24) = *(_DWORD *)(a3 + 40);
        goto LABEL_40;
      }
      *a1 = 0;
      copy_tinfo_t();
      goto LABEL_51;
    case 0x34:
      v31[0] = 0;
      copy_tinfo_t();
      v32 = 0;
      v33 = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v31[2] = 0;
        v34 = 0;
        v31[1] = 0;
        copy_tinfo_t();
        v35 = 0;
        copy_tinfo_t();
        v36 = 0;
        v37 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        *(_QWORD *)&v34 = v32;
        v32 = 0;
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        *a1 = 0;
        copy_tinfo_t();
      }
      else
      {
        clear_tinfo_t();
        sub_32C540(a1, *(_QWORD *)(a2 + 112), v31);
      }
      clear_tinfo_t();
      return a1;
    case 0x3A:
      if ( (unsigned __int8)get_tinfo_property() )
      {
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        return a1;
      }
      if ( !under_debugger )
        sub_383060(0xC4DDu, a7);
      goto LABEL_77;
    case 0x3B:
      sub_23E280(a1, a4, *(_DWORD *)(a3 + 32), a7);
      return a1;
    case 0x3C:
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        *(_QWORD *)&v34 = 0;
        v22 = *(_DWORD *)(a3 + 32);
        *(_QWORD *)&v34 = get_tinfo_property();
        sub_23E280(a1, (__int64)&v34, v22, a7);
        clear_tinfo_t();
        return a1;
      }
      if ( !under_debugger )
        sub_383060(0xC4DEu, a7);
      goto LABEL_77;
    default:
      goto LABEL_3;
  }
}


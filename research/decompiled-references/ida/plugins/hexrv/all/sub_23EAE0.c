__int64 *__fastcall sub_23EAE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _BYTE *a6, char a7)
{
  unsigned __int8 v10; // bp
  char v12; // al
  int v13; // edx
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  char tinfo_property; // al
  _BYTE *v22; // r9
  char v23; // al
  char v24; // al
  __int64 v25; // r9
  char v26; // al
  char v27; // r12
  unsigned int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 tinfo_size; // rax
  __int64 v32; // rsi
  unsigned __int8 v33; // [rsp+8h] [rbp-A0h]
  _BYTE *v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+8h] [rbp-A0h]
  _QWORD v37[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v38; // [rsp+30h] [rbp-78h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int128 v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+50h] [rbp-58h]
  int v42; // [rsp+58h] [rbp-50h]
  __int16 v43; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v44 = __readfsqword(0x28u);
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
      if ( !sub_23AE30(*(_QWORD *)(a3 + 32), 0, v15, v16, v17)
        && !sub_23AE30(*(_QWORD *)(a3 + 40), 0, v18, v19, v20)
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        tinfo_property = get_tinfo_property();
        v22 = a6;
        if ( (tinfo_property & 0xF) != 8 || (v23 = sub_298490(*(_QWORD *)(a3 + 40), 2), v22 = a6, !v23) )
        {
          v35 = v22;
          v24 = get_tinfo_property();
          v25 = (__int64)v35;
          if ( (v24 & 0xF) != 8 || (v26 = sub_298490(*(_QWORD *)(a3 + 32), 2), v25 = (__int64)v35, !v26) )
          {
            v36 = v25;
            if ( !(unsigned __int8)compare_tinfo() )
            {
              sub_23DD20(a1, a2, (__int64)a5, v36, 1);
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
      v10 = *(_BYTE *)(a2 + 130);
      if ( get_tinfo_size() >= (unsigned __int64)v10 )
        goto LABEL_3;
      sub_326FC0(&v40, *(_QWORD *)(a2 + 112), v10);
      sub_23DD20(a1, a2, a4, (__int64)&v40, 1);
      clear_tinfo_t();
      return a1;
    case 0x23:
    case 0x24:
      v33 = (get_tinfo_property() & 0xF) - 10;
      v12 = get_tinfo_property();
      v13 = *(_DWORD *)(a3 + 8);
      v14 = (v12 & 0xF) - 10;
      if ( v13 == 36 )
      {
        if ( v14 > 2u )
        {
          if ( v33 > 2u )
            goto LABEL_10;
          goto LABEL_3;
        }
        if ( v33 <= 2u )
        {
          tinfo_size = get_tinfo_size();
          v32 = *(_QWORD *)(a2 + 112);
          if ( *(_DWORD *)(v32 + 84) != tinfo_size )
          {
            sub_327180(a1, v32, (unsigned int)tinfo_size, 1);
            return a1;
          }
          goto LABEL_3;
        }
        if ( a7 )
        {
LABEL_15:
          *a1 = 0;
          return a1;
        }
        if ( !under_debugger )
          sub_37DDE0(51653);
LABEL_77:
        BUG();
      }
      if ( v13 == 35 && v14 <= 2u )
      {
        if ( v33 <= 2u )
        {
          if ( !a7 )
          {
            if ( !under_debugger )
              sub_37DDE0(51654);
            goto LABEL_77;
          }
          goto LABEL_15;
        }
      }
      else if ( v33 <= 2u )
      {
        goto LABEL_3;
      }
      if ( v14 > 2u )
      {
LABEL_10:
        sub_23DD20(a1, a2, a4, (__int64)a5, 1);
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
      sub_23DD20((__int64 *)&v40, a2, a4, (__int64)a5, 1);
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
      *(_QWORD *)&v40 = 7;
      sub_23DD20(a1, a2, a4, (__int64)&v40, 1);
      clear_tinfo_t();
      return a1;
    case 0x33:
      *(_QWORD *)&v40 = get_tinfo_property();
      if ( (_BYTE)v40 )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB && *(int *)(a3 + 40) > 0 )
        {
          v29 = get_tinfo_size();
          v30 = *(int *)(a3 + 40);
          if ( v30 != v29 )
          {
LABEL_40:
            sub_326FC0(a1, *(_QWORD *)(a2 + 112), v30);
LABEL_51:
            clear_tinfo_t();
            return a1;
          }
        }
      }
      else if ( !a7 )
      {
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
          if ( !under_debugger )
            sub_37DDE0(51091);
          goto LABEL_77;
        }
        v30 = *(unsigned int *)(a3 + 40);
        goto LABEL_40;
      }
      *a1 = 0;
      copy_tinfo_t();
      goto LABEL_51;
    case 0x34:
      v37[0] = 0;
      copy_tinfo_t();
      v38 = 0;
      v39 = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v37[2] = 0;
        v40 = 0;
        v37[1] = 0;
        copy_tinfo_t();
        v41 = 0;
        copy_tinfo_t();
        v42 = 0;
        v43 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        *(_QWORD *)&v40 = v38;
        v38 = 0;
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
        sub_327290(a1, *(_QWORD *)(a2 + 112), v37);
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
        sub_37DDE0(50397);
      goto LABEL_77;
    case 0x3B:
      sub_239680(a1, a4, *(_DWORD *)(a3 + 32), *(_BYTE *)(a3 + 57) & 1);
      return a1;
    case 0x3C:
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        v27 = *(_BYTE *)(a3 + 57);
        *(_QWORD *)&v40 = 0;
        v28 = *(_DWORD *)(a3 + 32);
        *(_QWORD *)&v40 = get_tinfo_property();
        sub_239680(a1, (__int64)&v40, v28, v27 & 1);
        clear_tinfo_t();
        return a1;
      }
      if ( !under_debugger )
        sub_37DDE0(50398);
      goto LABEL_77;
    default:
      goto LABEL_3;
  }
}


__int64 __fastcall sub_297740(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  char v7; // bp
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r15
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  int *v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // bp
  unsigned __int64 tinfo_property; // [rsp+8h] [rbp-70h] BYREF
  __int128 v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+28h] [rbp-50h]
  __int16 v24; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 1504);
  v25 = __readfsqword(0x28u);
  clear_tinfo_t();
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      copy_tinfo_t();
      goto LABEL_5;
    case 2:
      if ( !(unsigned __int8)sub_297740(*(_QWORD *)(a1 + 8), a2, a3) )
        return 0;
      tinfo_property = 0;
      v21 = 0;
      copy_tinfo_t();
      v22 = 0;
      copy_tinfo_t();
      v23 = 0;
      v24 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      return 1;
    case 3:
      return sub_2981A0(*(_QWORD *)(a1 + 8), a2, a3);
    case 4:
      if ( !(unsigned __int8)sub_297740(*(_QWORD *)(a1 + 8), a2, a3) )
        return 0;
      v21 = 0u;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      goto LABEL_5;
    case 6:
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_DWORD *)(v8 + 8);
      switch ( v9 )
      {
        case 'A':
          copy_tinfo_t();
LABEL_21:
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            tinfo_property = 0;
            tinfo_property = get_tinfo_property();
            sub_328210(&v21, v3, &tinfo_property);
            copy_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
          }
          else
          {
            *(_QWORD *)&v21 = 0;
            *(_QWORD *)&v21 = get_tinfo_property();
            v19 = v21 & 0x3F;
            clear_tinfo_t();
            if ( v19 == 48 )
            {
              *(_QWORD *)&v21 = 0;
              copy_tinfo_t();
              copy_tinfo_t();
              clear_tinfo_t();
            }
          }
          goto LABEL_5;
        case '4':
          v10 = *(_QWORD *)(v8 + 24);
          v11 = *(_DWORD *)(v10 + 8);
          if ( v11 == 65 )
          {
            copy_tinfo_t();
            if ( (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0xF) != 0xC )
            {
              sub_328210(
                &v21,
                v3,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL) + 432LL)
              + 104LL * *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 32LL)
              + 80);
              copy_tinfo_t();
              clear_tinfo_t();
            }
            goto LABEL_21;
          }
          break;
        case '=':
          if ( (unsigned __int8)sub_295760(*(_QWORD *)(v3 + 96), *(_QWORD *)(a1 + 8), &tinfo_property) )
          {
            v12 = tinfo_property;
            if ( tinfo_property > 0xFFF
              || (unsigned __int8)sub_25DBF0(v3, tinfo_property, nullptr, nullptr)
              || !(unsigned __int8)sub_326550(*(_QWORD *)(v3 + 96)) )
            {
LABEL_16:
              if ( (unsigned __int8)sub_25DE20(v3, v12, 1) )
              {
                if ( *(_DWORD *)(v8 + 8) == 61 )
                {
                  if ( !(unsigned __int8)sub_37CF20(*(_QWORD *)(v3 + 96), v12, a3, 3) )
                    copy_tinfo_t();
                  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
                  {
                    sub_328210(&v21, v3, a3);
                    copy_tinfo_t();
                    clear_tinfo_t();
                  }
                }
                else
                {
                  copy_tinfo_t();
                  if ( (get_tinfo_property() & 0xF) == 0xA )
                  {
                    sub_3283D0(v3, (_DWORD)a3, 1, v13, v14, v15);
                  }
                  else if ( (unsigned __int8)*a3 )
                  {
                    *a3 |= 0x40uLL;
                  }
                }
                goto LABEL_21;
              }
LABEL_31:
              copy_tinfo_t();
              goto LABEL_21;
            }
          }
          if ( *(_DWORD *)(v8 + 8) != 52 )
            goto LABEL_31;
          v10 = *(_QWORD *)(v8 + 24);
          v11 = *(_DWORD *)(v10 + 8);
          break;
        default:
          goto LABEL_31;
      }
      if ( v11 != 64 )
        goto LABEL_31;
      v12 = *(_QWORD *)(v10 + 24);
      tinfo_property = v12;
      goto LABEL_16;
    case 8:
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 1;
      *(_QWORD *)&v21 = 0;
      if ( v16 <= 0x100 )
        *(_QWORD *)&v21 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (unsigned __int8)*a3 )
        goto LABEL_5;
      v17 = *(int **)(a1 + 8);
      v18 = v17[2];
      if ( (v18 & 0x80000000) != 0LL )
      {
        if ( !under_debugger )
          sub_37EEE0(50470);
LABEL_57:
        BUG();
      }
      if ( v18 >= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 32LL) + 8LL) )
      {
        if ( !under_debugger )
          sub_37EEE0(50471);
        goto LABEL_57;
      }
      copy_tinfo_t();
LABEL_5:
      *(_QWORD *)&v21 = 0;
      v6 = get_tinfo_property();
      v7 = v6;
      *(_QWORD *)&v21 = v6;
      clear_tinfo_t();
      if ( (v7 & 0x3F) == 0x30 )
      {
        *(_QWORD *)&v21 = 0;
        copy_tinfo_t();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      return 1;
    default:
      return 0;
  }
}


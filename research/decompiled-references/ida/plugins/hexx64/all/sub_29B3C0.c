__int64 __fastcall sub_29B3C0(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  __int64 v4; // r13
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // r15
  unsigned int v14; // eax
  int *v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // bp
  unsigned __int64 tinfo_property; // [rsp+8h] [rbp-70h] BYREF
  __int128 v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-50h]
  __int16 v22; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1504);
  v23 = __readfsqword(0x28u);
  clear_tinfo_t();
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      copy_tinfo_t();
      goto LABEL_5;
    case 2:
      if ( !(unsigned __int8)sub_29B3C0(*(_QWORD *)(a1 + 8), a2, a3) )
        return 0;
      tinfo_property = 0;
      v19 = 0;
      copy_tinfo_t();
      v20 = 0;
      copy_tinfo_t();
      v21 = 0;
      v22 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      return 1;
    case 3:
      return sub_29BE20(*(_QWORD *)(a1 + 8), a2);
    case 4:
      if ( !(unsigned __int8)sub_29B3C0(*(_QWORD *)(a1 + 8), a2, a3) )
        return 0;
      v19 = 0u;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      goto LABEL_5;
    case 6:
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_DWORD *)(v9 + 8);
      switch ( v10 )
      {
        case 'A':
          copy_tinfo_t();
LABEL_21:
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            tinfo_property = 0;
            tinfo_property = get_tinfo_property();
            sub_32C540(&v19, v4, &tinfo_property);
            copy_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
          }
          else
          {
            *(_QWORD *)&v19 = 0;
            *(_QWORD *)&v19 = get_tinfo_property();
            v17 = v19 & 0x3F;
            clear_tinfo_t();
            if ( v17 == 48 )
            {
              *(_QWORD *)&v19 = 0;
              copy_tinfo_t();
              copy_tinfo_t();
              clear_tinfo_t();
            }
          }
          goto LABEL_5;
        case '4':
          v11 = *(_QWORD *)(v9 + 24);
          v12 = *(_DWORD *)(v11 + 8);
          if ( v12 == 65 )
          {
            copy_tinfo_t();
            if ( (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0xF) != 0xC )
            {
              sub_32C540(
                &v19,
                v4,
                (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL) + 432LL)
                         + 104LL * *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 32LL)
                         + 80));
              copy_tinfo_t();
              clear_tinfo_t();
            }
            goto LABEL_21;
          }
          break;
        case '=':
          if ( (unsigned __int8)sub_2993E0(*(_QWORD *)(v4 + 96), *(_QWORD *)(a1 + 8), &tinfo_property) )
          {
            v13 = tinfo_property;
            if ( tinfo_property > 0xFFF
              || (unsigned __int8)sub_261870(v4, tinfo_property, nullptr, nullptr)
              || !sub_32A760(*(_QWORD *)(v4 + 96)) )
            {
LABEL_16:
              if ( (unsigned __int8)sub_261AA0(v4, v13, 1) )
              {
                if ( *(_DWORD *)(v9 + 8) == 61 )
                {
                  if ( !(unsigned __int8)sub_3810A0(*(_QWORD *)(v4 + 96), v13, (__int64)a3, 3) )
                    copy_tinfo_t();
                  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
                  {
                    sub_32C540(&v19, v4, a3);
                    copy_tinfo_t();
                    clear_tinfo_t();
                  }
                }
                else
                {
                  copy_tinfo_t();
                  if ( (get_tinfo_property() & 0xF) == 0xA )
                  {
                    sub_32C700(v4, (_DWORD)a3, 1);
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
          if ( *(_DWORD *)(v9 + 8) != 52 )
            goto LABEL_31;
          v11 = *(_QWORD *)(v9 + 24);
          v12 = *(_DWORD *)(v11 + 8);
          break;
        default:
          goto LABEL_31;
      }
      if ( v12 != 64 )
        goto LABEL_31;
      v13 = *(_QWORD *)(v11 + 24);
      tinfo_property = v13;
      goto LABEL_16;
    case 8:
      v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 1;
      *(_QWORD *)&v19 = 0;
      if ( v14 <= 0x100 )
        *(_QWORD *)&v19 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (unsigned __int8)*a3 )
        goto LABEL_5;
      v15 = *(int **)(a1 + 8);
      v16 = v15[2];
      if ( (v16 & 0x80000000) != 0LL )
      {
        if ( !under_debugger )
          sub_383060(0xC526u, a4);
LABEL_57:
        BUG();
      }
      if ( v16 >= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 32LL) + 8LL) )
      {
        if ( !under_debugger )
          sub_383060(0xC527u, a4);
        goto LABEL_57;
      }
      copy_tinfo_t();
LABEL_5:
      *(_QWORD *)&v19 = 0;
      v7 = get_tinfo_property();
      v8 = v7;
      *(_QWORD *)&v19 = v7;
      clear_tinfo_t();
      if ( (v8 & 0x3F) == 0x30 )
      {
        *(_QWORD *)&v19 = 0;
        copy_tinfo_t();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      return 1;
    default:
      return 0;
  }
}


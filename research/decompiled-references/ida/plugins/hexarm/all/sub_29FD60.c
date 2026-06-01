__int64 __fastcall sub_29FD60(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 tinfo_size; // rbp
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  char v15; // r13
  __int64 v16; // rbx
  int v17; // eax
  char tinfo_property; // [rsp+10h] [rbp-98h]
  __int128 v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+30h] [rbp-78h]
  int v21; // [rsp+38h] [rbp-70h]
  __int16 v22; // [rsp+3Ch] [rbp-6Ch]
  _QWORD v23[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+58h] [rbp-50h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  v26 = __readfsqword(0x28u);
  v8 = a3;
  if ( (*(_BYTE *)(a3 + 56) & 4) == 0 && (unsigned int)sub_2553C0(v7) )
  {
LABEL_10:
    if ( (get_tinfo_property() & 0xF) != 9 && *(_DWORD *)(v8 + 8) == 59 )
    {
      do
      {
        if ( (get_tinfo_property() & 0x3F) != 0x1D )
          break;
        tinfo_size = get_tinfo_size();
        if ( get_tinfo_size() != tinfo_size )
          break;
        if ( get_tinfo_property() )
          break;
        v12 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
        if ( (unsigned int)(v12 - 59) > 1 )
          break;
        *(_QWORD *)&v19 = 0;
        if ( v12 == 60 )
          *(_QWORD *)&v19 = get_tinfo_property();
        else
          copy_tinfo_t();
        if ( (int)sub_263630(nullptr, (__int64)&v19, *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL), 0) <= 0 )
        {
          clear_tinfo_t();
          break;
        }
        clear_tinfo_t();
        v8 = *(_QWORD *)(v8 + 24);
      }
      while ( *(_DWORD *)(v8 + 8) == 59 );
    }
    v13 = *(_DWORD *)(a1 + 4);
    LODWORD(v24) = 1;
    HIDWORD(v24) = v13;
    v25 = 0;
    copy_tinfo_t();
    sub_29FB30(a1, (unsigned int *)&v24);
    sub_29EFF0((__int64)&v24);
    return 1;
  }
  if ( v7 > 0x32 )
  {
    switch ( v7 )
    {
      case '3':
        v9 = *(_QWORD *)(v8 + 24);
        v23[0] = 0;
        v23[1] = 0;
        if ( !(unsigned __int8)sub_29FD60((unsigned int)v23, a2, v9, a4, a5, a6) )
          goto LABEL_7;
        if ( (unsigned __int8)get_tinfo_property() )
        {
          v24 = 1;
          v25 = 0;
          copy_tinfo_t();
          sub_29FB30(a1, (unsigned int *)&v24);
          sub_29EFF0((__int64)&v24);
          clear_tinfo_t();
          sub_29EFF0((__int64)v23);
          return 1;
        }
        clear_tinfo_t();
LABEL_7:
        sub_29EFF0((__int64)v23);
        return 0;
      case '4':
        if ( !(unsigned __int8)sub_29FD60(a1, a2, *(_QWORD *)(v8 + 24), a4, a5, a6) )
          return 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          copy_tinfo_t();
          v20 = 0;
          copy_tinfo_t();
          v21 = 0;
          v22 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          *(_QWORD *)&v19 = 0;
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          sub_29A640();
        }
        return 1;
      case '9':
        v16 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v16 + 8) != 64 || !(unsigned __int8)sub_375220(a2, *(_QWORD *)(v16 + 24), 0) )
          return 0;
        tinfo_property = get_tinfo_property();
        *(_QWORD *)&v19 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        if ( !tinfo_property )
        {
          clear_tinfo_t();
          return 0;
        }
        v17 = *(_DWORD *)(a1 + 4);
        LODWORD(v24) = 1;
        v25 = 0;
        HIDWORD(v24) = v17;
        copy_tinfo_t();
        sub_29FB30(a1, (unsigned int *)&v24);
        sub_29EFF0((__int64)&v24);
        clear_tinfo_t();
        break;
      case ';':
      case '<':
        goto LABEL_27;
      case '@':
        if ( (unsigned __int8)sub_375220(a2, *(_QWORD *)(v8 + 24), 0) )
          goto LABEL_10;
        return 0;
      case 'A':
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32) + 24) & 2) != 0 )
          goto LABEL_10;
        return 0;
      default:
        return 0;
    }
    return 1;
  }
  if ( v7 <= 0x10 )
    return 0;
  if ( ((1LL << v7) & 0x20000FFC60000LL) == 0 )
  {
    if ( ((1LL << v7) & 0x4000000380000LL) != 0 )
    {
LABEL_27:
      v14 = *(_QWORD *)(v8 + 48);
      if ( (_BYTE)v14 && ((v14 & 0xE) != 0 || (v14 & 0x30) == 0) )
      {
        *(_QWORD *)&v19 = get_tinfo_property();
        v15 = get_tinfo_property() & 0x3F;
        clear_tinfo_t();
        if ( v15 != 48 )
          goto LABEL_10;
      }
    }
    return 0;
  }
  *(_QWORD *)&v19 = 8;
  v24 = 1;
  v25 = 0;
  copy_tinfo_t();
  sub_29FB30(a1, (unsigned int *)&v24);
  sub_29EFF0((__int64)&v24);
  clear_tinfo_t();
  return 1;
}


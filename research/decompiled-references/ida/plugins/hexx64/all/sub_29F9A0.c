__int64 __fastcall sub_29F9A0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 tinfo_size; // rbp
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  char v16; // r13
  __int64 v17; // rbx
  int v18; // eax
  char tinfo_property; // [rsp+10h] [rbp-98h]
  __int128 v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+30h] [rbp-78h]
  int v22; // [rsp+38h] [rbp-70h]
  __int16 v23; // [rsp+3Ch] [rbp-6Ch]
  _QWORD v24[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  __int64 v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v8 = *(_DWORD *)(a3 + 8);
  v27 = __readfsqword(0x28u);
  v9 = a3;
  if ( (*(_BYTE *)(a3 + 56) & 4) == 0 && (unsigned int)sub_255000(v8) )
  {
LABEL_10:
    if ( (get_tinfo_property() & 0xF) != 9 && *(_DWORD *)(v9 + 8) == 59 )
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
        v13 = *(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL);
        if ( (unsigned int)(v13 - 59) > 1 )
          break;
        *(_QWORD *)&v20 = 0;
        if ( v13 == 60 )
          *(_QWORD *)&v20 = get_tinfo_property();
        else
          copy_tinfo_t();
        if ( (int)sub_263270(nullptr, (__int64)&v20, *(unsigned int *)(*(_QWORD *)(v9 + 24) + 32LL), 0) <= 0 )
        {
          clear_tinfo_t();
          break;
        }
        clear_tinfo_t();
        v9 = *(_QWORD *)(v9 + 24);
      }
      while ( *(_DWORD *)(v9 + 8) == 59 );
    }
    v14 = *(_DWORD *)(a1 + 4);
    LODWORD(v25) = 1;
    HIDWORD(v25) = v14;
    v26 = 0;
    copy_tinfo_t();
    sub_29F770(a1, (unsigned int *)&v25, a7);
    sub_29EC30((__int64)&v25, a7);
    return 1;
  }
  if ( v8 > 0x32 )
  {
    switch ( v8 )
    {
      case '3':
        v10 = *(_QWORD *)(v9 + 24);
        v24[0] = 0;
        v24[1] = 0;
        if ( !(unsigned __int8)sub_29F9A0((__int64)v24, a2, v10, a4, a5, a6) )
          goto LABEL_7;
        if ( (unsigned __int8)get_tinfo_property() )
        {
          v25 = 1;
          v26 = 0;
          copy_tinfo_t();
          sub_29F770(a1, (unsigned int *)&v25, a7);
          sub_29EC30((__int64)&v25, a7);
          clear_tinfo_t();
          sub_29EC30((__int64)v24, a7);
          return 1;
        }
        clear_tinfo_t();
LABEL_7:
        sub_29EC30((__int64)v24, a7);
        return 0;
      case '4':
        if ( !(unsigned __int8)sub_29F9A0(a1, a2, *(_QWORD *)(v9 + 24), a4, a5, a6) )
          return 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          copy_tinfo_t();
          v21 = 0;
          copy_tinfo_t();
          v22 = 0;
          v23 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          *(_QWORD *)&v20 = 0;
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          sub_29A280();
        }
        return 1;
      case '9':
        v17 = *(_QWORD *)(v9 + 24);
        if ( *(_DWORD *)(v17 + 8) != 64 || !(unsigned __int8)sub_374CE0(a2, *(_QWORD *)(v17 + 24), 0) )
          return 0;
        tinfo_property = get_tinfo_property();
        *(_QWORD *)&v20 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        if ( !tinfo_property )
        {
          clear_tinfo_t();
          return 0;
        }
        v18 = *(_DWORD *)(a1 + 4);
        LODWORD(v25) = 1;
        v26 = 0;
        HIDWORD(v25) = v18;
        copy_tinfo_t();
        sub_29F770(a1, (unsigned int *)&v25, a7);
        sub_29EC30((__int64)&v25, a7);
        clear_tinfo_t();
        break;
      case ';':
      case '<':
        goto LABEL_27;
      case '@':
        if ( (unsigned __int8)sub_374CE0(a2, *(_QWORD *)(v9 + 24), 0) )
          goto LABEL_10;
        return 0;
      case 'A':
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 432LL) + 104LL * *(int *)(v9 + 32) + 24) & 2) != 0 )
          goto LABEL_10;
        return 0;
      default:
        return 0;
    }
    return 1;
  }
  if ( v8 <= 0x10 )
    return 0;
  if ( ((1LL << v8) & 0x20000FFC60000LL) == 0 )
  {
    if ( ((1LL << v8) & 0x4000000380000LL) != 0 )
    {
LABEL_27:
      v15 = *(_QWORD *)(v9 + 48);
      if ( (_BYTE)v15 && ((v15 & 0xE) != 0 || (v15 & 0x30) == 0) )
      {
        *(_QWORD *)&v20 = get_tinfo_property();
        v16 = get_tinfo_property() & 0x3F;
        clear_tinfo_t();
        if ( v16 != 48 )
          goto LABEL_10;
      }
    }
    return 0;
  }
  *(_QWORD *)&v20 = 8;
  v25 = 1;
  v26 = 0;
  copy_tinfo_t();
  sub_29F770(a1, (unsigned int *)&v25, a7);
  sub_29EC30((__int64)&v25, a7);
  clear_tinfo_t();
  return 1;
}


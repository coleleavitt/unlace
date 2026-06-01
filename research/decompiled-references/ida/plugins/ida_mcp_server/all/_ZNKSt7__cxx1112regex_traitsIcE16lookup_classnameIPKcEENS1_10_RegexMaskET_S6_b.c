__int64 __fastcall std::regex_traits<char>::lookup_classname<char const*>(__int64 a1, char *a2, char *a3, char a4)
{
  char *v5; // rbp
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, unsigned int); // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  char v11; // al
  char v12; // bl
  char **v15; // rax
  __int64 v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+30h] [rbp-58h]
  __int16 v19; // [rsp+34h] [rbp-54h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v5 = a2;
  v20 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v6 )
    std::__throw_bad_cast();
  LOBYTE(v18) = 0;
  v17 = 0;
  if ( a2 == a3 )
    return 0;
  do
  {
    v10 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, (unsigned int)*v5);
    v11 = *(_BYTE *)(v6 + v10 + 313);
    v12 = v10;
    if ( v11 )
    {
      v8 = v17;
      v12 = v11;
    }
    else
    {
      v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 64LL);
      if ( v7 != std::ctype<char>::do_narrow )
        v12 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v7)(v6, (unsigned int)(char)v10, 0);
      if ( v12 )
        *(_BYTE *)(v6 + v10 + 313) = v12;
      v8 = v17;
    }
    v9 = v8 + 1;
    if ( (unsigned __int64)(v8 + 1) > 0xF )
    {
      std::string::_M_mutate();
      v9 = v8 + 1;
    }
    *((_BYTE *)&v18 + v8) = v12;
    ++v5;
    v17 = v9;
    *((_BYTE *)&v18 + v9) = 0;
  }
  while ( a3 != v5 );
  switch ( v9 )
  {
    case 0LL:
      return 0;
    case 1LL:
      switch ( (unsigned __int8)v18 )
      {
        case 'd':
          v15 = (char **)&std::regex_traits<char>::lookup_classname<char const*>(char const*,char const*,bool)const::__classnames;
          break;
        case 'w':
          v15 = (char **)&off_443390;
          break;
        case 's':
          v15 = (char **)&off_4433A0;
          break;
        default:
          return 0;
      }
      break;
    case 5LL:
      if ( v18 == 1970170977 && (_BYTE)v19 == 109 )
      {
        v15 = &off_4433B0;
        break;
      }
      if ( v18 == 1752198241 && (_BYTE)v19 == 97 )
      {
        v15 = &off_4433C0;
        break;
      }
      if ( v18 == 1851878498 && (_BYTE)v19 == 107 )
      {
        v15 = &off_4433D0;
        break;
      }
      if ( v18 == 1920233059 && (_BYTE)v19 == 108 )
      {
        v15 = &off_4433E0;
        break;
      }
      if ( v18 == 1768384868 && (_BYTE)v19 == 116 )
      {
        v15 = (char **)&off_4433F0;
        break;
      }
      if ( v18 == 1885434471 && (_BYTE)v19 == 104 )
      {
        v15 = &off_443400;
        break;
      }
      if ( v18 == 1702326124 && (_BYTE)v19 == 114 )
      {
        v15 = &off_443410;
        break;
      }
      if ( v18 == 1852404336 && (_BYTE)v19 == 116 )
      {
        v15 = &off_443420;
        break;
      }
      if ( v18 == 1668183408 && (_BYTE)v19 == 116 )
      {
        v15 = &off_443430;
      }
      else if ( v18 == 1667330163 && (_BYTE)v19 == 101 )
      {
        v15 = (char **)&off_443440;
      }
      else
      {
        if ( v18 != 1701867637 || (_BYTE)v19 != 114 )
          return 0;
        v15 = &off_443450;
      }
      break;
    default:
      if ( v9 == 6 && v18 == 1734960248 && v19 == 29801 )
      {
        v15 = &off_443460;
        break;
      }
      return 0;
  }
  if ( a4 && (*((_BYTE *)v15 + 9) & 3) != 0 )
    return 1024;
  else
    return (unsigned int)*((_DWORD *)v15 + 2);
}


const char *__fastcall boost::asio::detail::config_from_concurrency_hint_service::get_value(
        boost::asio::detail::config_from_concurrency_hint_service *this,
        const char *a2,
        const char *a3,
        char *a4)
{
  int v6; // r9d
  int v7; // eax
  char *v8; // rbx
  char *v10; // rbx
  char *v11; // rbx
  char *v12; // rbx

  if ( strcmp(a2, "scheduler") )
  {
    v8 = nullptr;
    if ( !strcmp(a2, "reactor") )
    {
      if ( !strcmp(a3, "io_locking") )
      {
        v12 = "1";
        if ( (*((_DWORD *)this + 12) & 0xFFFF0004) == 0xA5100000 )
          return "0";
        return v12;
      }
      if ( !strcmp(a3, "registration_locking") )
      {
        v10 = "1";
        if ( (*((_DWORD *)this + 12) & 0xFFFF0002) == 0xA5100000 )
          return "0";
        return v10;
      }
    }
    return v8;
  }
  if ( strcmp(a3, "concurrency_hint") )
  {
    v8 = nullptr;
    if ( !strcmp(a3, "locking") )
    {
      v11 = "1";
      if ( (*((_DWORD *)this + 12) & 0xFFFF0001) == 0xA5100000 )
        return "0";
      return v11;
    }
    return v8;
  }
  v6 = *((_DWORD *)this + 12);
  HIWORD(v7) = HIWORD(v6);
  LOWORD(v7) = 0;
  if ( v7 == -1525678080 )
  {
    v8 = "1";
    if ( (v6 & 0xFFFF0001) != 0xA5100000 && (v6 & 0xFFFF0004) != 0xA5100000 )
      return "-1";
    return v8;
  }
  __snprintf_chk();
  return a4;
}


char *__fastcall boost::system::error_category::message(
        boost::system::error_category *this,
        unsigned int a2,
        char *a3,
        size_t a4)
{
  void *v7; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      *a3 = 0;
    }
    else
    {
      (*(void (__fastcall **)(void **, boost::system::error_category *, _QWORD))(*(_QWORD *)this + 32LL))(&v7, this, a2);
      snprintf(a3, a4, "%s", (const char *)v7);
      if ( v7 != v8 )
        operator delete(v7, v8[0] + 1LL);
    }
  }
  return a3;
}


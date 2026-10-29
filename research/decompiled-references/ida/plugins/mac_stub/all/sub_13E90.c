bool __fastcall sub_13E90(__int64 a1, __int64 a2, bool a3)
{
  __int64 v4; // rdx
  bool result; // al
  __int64 v6; // [rsp+0h] [rbp-28h]

  qlseek();
  v4 = qlread();
  result = 0;
  if ( v4 == 8 )
  {
    result = 1;
    if ( v6 != 0xA3E686372613C21LL && v6 != 0xA3E74756F623C21LL && v6 != 0xA3E5F666C653C21LL )
    {
      result = 0;
      if ( a3 )
      {
        result = a3;
        if ( v6 != 0xA3E66666169613CLL )
          return v6 == 0xA3E66616769623CLL;
      }
    }
  }
  return result;
}


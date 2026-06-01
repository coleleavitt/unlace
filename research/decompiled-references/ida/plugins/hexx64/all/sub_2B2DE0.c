unsigned __int64 __fastcall sub_2B2DE0(__int64 a1, const void **a2, unsigned __int64 a3)
{
  int v5; // eax
  size_t v6; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  char *v10; // rsi
  void *dest; // [rsp+8h] [rbp-48h] BYREF
  __int128 v12; // [rsp+10h] [rbp-40h]
  unsigned __int64 v13; // [rsp+20h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v12 = 0;
  dest = nullptr;
  v5 = unpack_dd();
  if ( v5 )
  {
    v6 = v5;
    if ( (unsigned __int64)*a2 + v5 < a3 )
    {
      v8 = v12;
      v9 = v5 + 1LL;
      if ( (unsigned __int64)v12 < v9 )
      {
        v10 = (char *)dest;
        if ( *((_QWORD *)&v12 + 1) < v9 )
        {
          dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v5 + 1LL, 1);
          v8 = v12;
          v10 = (char *)dest;
        }
        memset(&v10[v8], 0, v9 - v8);
        *(_QWORD *)&v12 = v6 + 1;
      }
      else if ( v9 != (_QWORD)v12 )
      {
        *(_QWORD *)&v12 = v5 + 1LL;
      }
      *((_BYTE *)dest + v6) = 0;
      memcpy(dest, *a2, v6);
      *a2 = (char *)*a2 + v6;
    }
  }
  if ( !(unsigned __int8)extract_argloc() )
  {
    if ( !under_debugger )
      sub_383060(0xC7F3u, 0.0);
    BUG();
  }
  if ( dest )
  {
    *(_QWORD *)&v12 = 0;
    qfree((__int64)dest);
  }
  return v13 - __readfsqword(0x28u);
}


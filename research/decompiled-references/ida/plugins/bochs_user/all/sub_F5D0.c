__int64 __fastcall sub_F5D0(__int64 a1, int a2)
{
  __m128i v2; // xmm0
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  const char *v5; // rax
  struct _Unwind_Exception *v7; // r14
  _QWORD *v8; // rbp

  *(_QWORD *)(a1 + 8) = 0x890FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v2 = _mm_loadl_epi64((const __m128i *)&off_70EB0);
  v3 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &unk_721D0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 3;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_70E90);
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( ((v4 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v7 = (struct _Unwind_Exception *)interr();
        *(_QWORD *)(a1 + 240) = &off_72250;
        remove_event_listener();
        if ( *(_QWORD *)(a1 + 208) )
        {
          *(_QWORD *)(a1 + 216) = 0;
          qfree();
        }
        if ( *(_QWORD *)(a1 + 184) )
        {
          *(_QWORD *)(a1 + 192) = 0;
          qfree();
        }
        *(_QWORD *)a1 = &unk_721D0;
        v8 = (_QWORD *)(a1 + 152);
        while ( 1 )
        {
          if ( *v8 )
          {
            v8[1] = 0;
            qfree();
          }
          v8 -= 3;
          if ( (_QWORD *)(a1 + 56) == v8 )
            _Unwind_Resume(v7);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v4 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v4 & 0xFE07FFFF;
  }
  *(_DWORD *)(a1 + 232) = a2;
  *(_QWORD *)a1 = off_70CA8;
  *(_QWORD *)(a1 + 240) = &off_70C80;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = a1;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  sub_F490((__int64 *)(a1 + 208));
  v5 = s1;
  if ( *(_QWORD *)(a1 + 216) )
    v5 = *(const char **)(a1 + 208);
  *(_QWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 72) = 144;
  return hook_event_listener();
}


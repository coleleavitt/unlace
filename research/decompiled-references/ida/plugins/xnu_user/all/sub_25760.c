__int64 __fastcall sub_25760(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // r15
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  char *v7; // rdi
  __int128 v9; // [rsp+0h] [rbp-488h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-478h] BYREF
  __m128i si128; // [rsp+18h] [rbp-470h]
  int v12; // [rsp+28h] [rbp-460h]
  __m128i v13; // [rsp+30h] [rbp-458h]
  _BYTE v14[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+448h] [rbp-40h]

  v2 = *a2;
  v15 = __readfsqword(0x28u);
  v9 = 0;
  v10 = off_972C0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_82370);
  v12 = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v9, (__m128i)(unsigned __int64)".data");
  if ( (unsigned int)sub_245C0((__int64)a1, (__int64)&v10, v2) == 1 )
  {
    v4 = v9;
    v5 = *((_QWORD *)&v9 + 1) - v9;
    if ( *((_QWORD *)&v9 + 1) != (_QWORD)v9 )
    {
      do
      {
        v6 = 1024;
        if ( v5 <= 0x400 )
          v6 = v5;
        if ( v6 != (*(__int64 (__fastcall **)(_QWORD *, __int64, _BYTE *, __int64, _QWORD))(*a1 + 288LL))(
                     a1,
                     v4,
                     v14,
                     v6,
                     0)
          || (v6 & 7) != 0 )
        {
          break;
        }
        if ( v14 < &v14[v6] )
        {
          v7 = v14;
          while ( *(_QWORD *)v7 != 0x56524553544F4F42LL )
          {
            v7 += 8;
            if ( v7 >= &v14[v6] )
              goto LABEL_12;
          }
          a1[255] = v4 + v7 - v14;
          set_debug_name();
          return 1;
        }
LABEL_12:
        v4 += v6;
        v5 -= v6;
      }
      while ( v5 );
    }
  }
  return 0;
}


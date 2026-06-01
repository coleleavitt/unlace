unsigned __int64 __fastcall sub_19100(__int64 a1, __int64 a2)
{
  int v2; // edi
  const char *v4; // rsi
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+18h] [rbp-500h]
  char v11; // [rsp+70h] [rbp-4A8h] BYREF
  int v12; // [rsp+78h] [rbp-4A0h] BYREF
  _QWORD *v13; // [rsp+80h] [rbp-498h]
  int *v14; // [rsp+88h] [rbp-490h]
  int *v15; // [rsp+90h] [rbp-488h]
  __int64 v16; // [rsp+98h] [rbp-480h]
  _UNKNOWN **v17; // [rsp+A0h] [rbp-478h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-470h]
  __int64 v19; // [rsp+B0h] [rbp-468h]
  __int64 v20; // [rsp+B8h] [rbp-460h]
  char *v21; // [rsp+C0h] [rbp-458h]
  char v22[1024]; // [rsp+C8h] [rbp-450h] BYREF
  __m128i si128; // [rsp+4C8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+4D8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 192);
  v24 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = 0;
    if ( !(unsigned __int8)qgetenv() )
    {
      if ( (word_349D0 & 0x2008) != 8
        || (v4 = "HIDECANCEL\nDo you want to process the export directory?",
            (unsigned int)sub_CFC0(1u, (__int64)"HIDECANCEL\nDo you want to process the export directory?")) )
      {
        sub_6F70((__int64)"Reading exports directory...\n", v4);
        v12 = 0;
        v13 = 0;
        v5 = *(_DWORD *)(a1 + 232);
        v14 = &v12;
        v6 = *(_QWORD *)(a1 + 616);
        v15 = &v12;
        v16 = 0;
        v8 = v6;
        if ( v5 && *(_DWORD *)(a1 + 236) )
        {
          netnode_qgetblob();
          v8 = *(_QWORD *)(a1 + 616);
        }
        v17 = &off_32548;
        v7 = *(_QWORD *)(a1 + 608);
        v22[0] = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2CFA0);
        v18 = v7;
        v19 = a1 + 72;
        v20 = v8;
        v21 = &v11;
        if ( (unsigned int)sub_18140(a1, a2, (__int64)&v17) != -2 )
        {
          v22[si128.m128i_i64[0]] = 0;
          if ( (word_349D0 & 4) != 0 && netnode_supnext() != -1 )
            sub_7440(v18, v19, v22, si128.m128i_i64[1], 1);
        }
        v17 = &off_32548;
        netnode_kill();
        sub_8A00(v13);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}

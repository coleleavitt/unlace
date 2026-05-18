__int64 __fastcall sub_BCCF0(__int64 a1)
{
  unsigned int v1; // ebp
  int v2; // eax
  __int64 v4; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rax

  v2 = mysql_server_init(0, 0, 0);
  LOBYTE(v1) = v2 == 0;
  if ( !v2 )
  {
    if ( qword_241DF8 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1586);
      BUG();
    }
    qword_241DF8 = (void *)sub_19A2A0();
    return v1;
  }
  if ( !a1 )
    return v1;
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) <= 0x16u )
  {
    v6 = sub_1987B0(a1, v4, 23, 1);
    *(_QWORD *)a1 = v6;
    v4 = v6;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B70A0);
  *(_QWORD *)(a1 + 8) = 23;
  *(__m128i *)v4 = si128;
  *(_QWORD *)(v4 + 14) = 0x7972617262696C20LL;
  *(_BYTE *)(*(_QWORD *)a1 + 22LL) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  return v1;
}

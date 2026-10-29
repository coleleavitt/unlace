unsigned __int64 __fastcall sub_3EE900(__int64 a1, __int64 a2)
{
  int v2; // eax
  __m128i si128; // xmm0
  int v4; // eax
  __int64 name_ea; // rax
  unsigned __int64 *v6; // rdx
  char v8; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+168h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 404);
  si128 = _mm_load_si128((const __m128i *)&xmmword_424B10);
  v9 = __readfsqword(0x28u);
  *(_DWORD *)a2 = v2;
  v4 = *(_DWORD *)(a1 + 620);
  *(_QWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 4) = v4;
  *(__m128i *)(a2 + 8) = si128;
  name_ea = get_name_ea();
  v6 = (unsigned __int64 *)&v8;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v9 != v6 );
  if ( name_ea != -1 )
    decode_insn();
  return v9 - __readfsqword(0x28u);
}


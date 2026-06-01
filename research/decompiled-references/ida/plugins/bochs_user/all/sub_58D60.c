__int64 __fastcall sub_58D60(__int64 a1)
{
  __m128i v1; // xmm0
  unsigned int v2; // ebx
  __m128i v4; // [rsp+0h] [rbp-478h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-468h] BYREF
  __m128i v6; // [rsp+20h] [rbp-458h]
  __int64 v7; // [rsp+30h] [rbp-448h]
  _QWORD *v8; // [rsp+38h] [rbp-440h]
  __int64 v9; // [rsp+40h] [rbp-438h]
  __int16 v10; // [rsp+48h] [rbp-430h]
  char v11; // [rsp+4Ah] [rbp-42Eh]
  _BYTE v12[1032]; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int64 v13; // [rsp+458h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)"win");
  qstrncpy();
  qsplitfile();
  qstrlwr();
  v1 = _mm_load_si128(&v4);
  v10 = 256;
  v5[0] = v12;
  v5[1] = a1;
  v7 = 0;
  v9 = 0;
  v11 = 0;
  v8 = v5;
  v6 = v1;
  v2 = (unsigned int)idt_open() != 0 ? 0x23 : 0;
  qfree();
  return v2;
}


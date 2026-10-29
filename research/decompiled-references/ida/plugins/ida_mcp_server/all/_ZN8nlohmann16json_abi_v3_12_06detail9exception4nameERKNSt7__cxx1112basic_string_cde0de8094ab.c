__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::exception::name(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ecx
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  unsigned int i; // r14d
  unsigned int v10; // eax
  unsigned __int64 v11; // r13
  char *v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  char v18; // cl
  __int64 v20; // [rsp+0h] [rbp-148h]
  _BYTE v21[16]; // [rsp+20h] [rbp-128h] BYREF
  _OWORD v22[11]; // [rsp+30h] [rbp-118h]
  __m128i v23[2]; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v24; // [rsp+108h] [rbp-40h]

  v4 = -a3;
  v24 = __readfsqword(0x28u);
  if ( a3 > 0 )
    v4 = a3;
  v20 = (unsigned int)a3 >> 31;
  v6 = (unsigned int)a3 >> 31;
  v7 = v4;
  if ( v4 <= 9 )
  {
    v11 = v6 + 1;
    v21[0] = 0;
    std::string::reserve();
    v21[0] = 45;
    v12 = &v21[v20];
LABEL_14:
    v18 = v7 + 48;
    goto LABEL_15;
  }
  v8 = v4;
  for ( i = 1; ; i += 4 )
  {
    if ( v8 <= 0x63 )
    {
      v10 = i + 1;
      goto LABEL_11;
    }
    if ( v8 <= 0x3E7 )
    {
      v10 = i + 2;
      ++i;
      goto LABEL_11;
    }
    if ( v8 <= 0x270F )
    {
      v10 = i + 3;
      i += 2;
      goto LABEL_11;
    }
    v10 = i + 4;
    if ( v8 <= 0x1869F )
      break;
    v8 /= 0x2710u;
  }
  i += 3;
LABEL_11:
  v11 = v10 + v6;
  v21[0] = 0;
  std::string::reserve();
  v22[0] = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  v21[0] = 45;
  v12 = &v21[v20];
  v22[1] = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v22[2] = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v22[3] = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v22[4] = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v22[5] = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v22[6] = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v22[7] = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v22[8] = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v22[9] = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v22[10] = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v23[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v23 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( v7 > 0x63 )
  {
    do
    {
      v13 = v7 % 0x64;
      v14 = v7;
      v7 /= 0x64u;
      v15 = 2 * v13;
      v16 = (unsigned int)(v15 + 1);
      LOBYTE(v15) = *((_BYTE *)v22 + v15);
      v12[i] = *((_BYTE *)v22 + v16);
      v17 = i - 1;
      i -= 2;
      v12[v17] = v15;
    }
    while ( v14 > 0x270F );
    if ( v14 <= 0x3E7 )
      goto LABEL_14;
  }
  v18 = *((_BYTE *)v22 + 2 * v7);
  v12[1] = *((_BYTE *)v22 + 2 * v7 + 1);
LABEL_15:
  *v12 = v18;
  v21[v11] = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  std::string::reserve();
  std::string::append();
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8)) < *(_QWORD *)(a2 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  std::string::push_back();
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < v11 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  std::string::append();
  return a1;
}


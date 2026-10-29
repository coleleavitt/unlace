__int64 __fastcall std::regex_traits<char>::value(__int64 a1, int a2)
{
  char *v2; // rbx
  char *v3; // r14
  __int64 v4; // rax
  __m128i si128; // xmm0
  void *v6; // r8
  size_t v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // rax
  _QWORD *v12; // rdi
  std::locale *v13[2]; // [rsp+0h] [rbp-228h] BYREF
  int v14; // [rsp+14h] [rbp-214h]
  size_t n; // [rsp+18h] [rbp-210h]
  void **v16; // [rsp+20h] [rbp-208h]
  void *src; // [rsp+28h] [rbp-200h]
  size_t v18; // [rsp+38h] [rbp-1F0h]
  void *v19; // [rsp+40h] [rbp-1E8h] BYREF
  size_t v20; // [rsp+48h] [rbp-1E0h]
  _QWORD v21[2]; // [rsp+50h] [rbp-1D8h] BYREF
  char *v22; // [rsp+60h] [rbp-1C8h]
  __int64 v23; // [rsp+68h] [rbp-1C0h]
  _OWORD v24[3]; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-188h]
  _BYTE v26[8]; // [rsp+A8h] [rbp-180h] BYREF
  int v27; // [rsp+B0h] [rbp-178h]
  void *v28; // [rsp+B8h] [rbp-170h]
  size_t v29; // [rsp+C0h] [rbp-168h]
  _QWORD v30[2]; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v31[4]; // [rsp+D8h] [rbp-150h] BYREF
  char v32; // [rsp+F8h] [rbp-130h]
  __int64 v33; // [rsp+1B0h] [rbp-78h]
  __int16 v34; // [rsp+1B8h] [rbp-70h]
  __int128 v35; // [rsp+1C0h] [rbp-68h]
  __int128 v36; // [rsp+1D0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+1E8h] [rbp-40h]

  v14 = a2;
  v37 = __readfsqword(0x28u);
  v19 = v21;
  v16 = &v19;
  *(_OWORD *)v13 = (unsigned __int64)&`vtable for'std::streambuf + 16;
  std::string::_M_construct();
  std::ios_base::ios_base((std::ios_base *)v31);
  v34 = 0;
  v35 = 0;
  v31[0] = (char *)&`vtable for'std::ios + 16;
  v36 = 0;
  v2 = (char *)`VTT for'std::istringstream[1];
  v3 = (char *)`VTT for'std::istringstream[2];
  v33 = 0;
  v4 = *((_QWORD *)v2 - 3);
  v22 = v2;
  *(char **)((char *)&v22 + v4) = v3;
  v23 = 0;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v13);
  v25 = 0;
  v24[0] = si128;
  v22 = (char *)&`vtable for'std::istringstream + 24;
  memset(&v24[1], 0, 32);
  v31[0] = (char *)&`vtable for'std::istringstream + 64;
  v13[0] = (std::locale *)v26;
  std::locale::locale((std::locale *)v26);
  v6 = v19;
  v7 = v20;
  v27 = 0;
  v28 = v30;
  *(_QWORD *)&v24[0] = (char *)&`vtable for'std::stringbuf + 16;
  if ( !v19 && v20 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v18 = v20;
  if ( v20 > 0xF )
  {
    src = v19;
    n = v20;
    v28 = (void *)std::string::_M_create();
    v12 = v28;
    v7 = n;
    v6 = src;
    v30[0] = v18;
  }
  else
  {
    if ( v20 == 1 )
    {
      LOBYTE(v30[0]) = *(_BYTE *)v19;
      v8 = v30;
      goto LABEL_6;
    }
    if ( !v20 )
    {
      v8 = v30;
      goto LABEL_6;
    }
    v12 = v30;
  }
  memcpy(v12, v6, v7);
  v7 = v18;
  v8 = v28;
LABEL_6:
  v29 = v7;
  *((_BYTE *)v8 + v7) = 0;
  n = (size_t)v24;
  v27 = 8;
  std::stringbuf::_M_sync();
  std::ios::init();
  if ( v19 != v21 )
    operator delete(v19, v21[0] + 1LL);
  if ( v14 == 8 )
  {
    *(_DWORD *)((char *)v24 + *((_QWORD *)v22 - 3) + 8) = *(_DWORD *)((_BYTE *)v24 + *((_QWORD *)v22 - 3) + 8)
                                                        & 0xFFFFFFB5
                                                        | 0x40;
  }
  else if ( v14 == 16 )
  {
    *(_DWORD *)((char *)v24 + *((_QWORD *)v22 - 3) + 8) = *(_DWORD *)((_BYTE *)v24 + *((_QWORD *)v22 - 3) + 8)
                                                        & 0xFFFFFFB5
                                                        | 8;
  }
  std::istream::_M_extract<long>();
  if ( (v32 & 5) != 0 )
    v9 = -1;
  else
    v9 = v18;
  v22 = (char *)&`vtable for'std::istringstream + 24;
  v31[0] = (char *)&`vtable for'std::istringstream + 64;
  if ( v28 != v30 )
    operator delete(v28, v30[0] + 1LL);
  *(_QWORD *)&v24[0] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v13[0]);
  v10 = *((_QWORD *)v2 - 3);
  v22 = v2;
  *(char **)((char *)&v22 + v10) = v3;
  v23 = 0;
  v31[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v31);
  return v9;
}


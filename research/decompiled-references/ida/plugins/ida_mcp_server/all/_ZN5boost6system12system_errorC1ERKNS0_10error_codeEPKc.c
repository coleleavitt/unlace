// Alternative name is '_ZN5boost6system12system_errorC2ERKNS0_10error_codeEPKc'
unsigned __int64 __fastcall boost::system::system_error::system_error(__m128i *a1, const __m128i *a2, const char *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rsi
  _DWORD *v20; // r9
  _DWORD *v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r8
  _DWORD *v25; // r8
  _DWORD *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r8
  int v33; // [rsp+0h] [rbp-D8h]
  int v34; // [rsp+8h] [rbp-D0h]
  void *v35; // [rsp+10h] [rbp-C8h]
  _QWORD *v36; // [rsp+10h] [rbp-C8h]
  _QWORD v37[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v38; // [rsp+30h] [rbp-A8h]
  __int64 v39; // [rsp+38h] [rbp-A0h]
  _QWORD v40[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v41[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v42; // [rsp+60h] [rbp-78h] BYREF
  void *v43; // [rsp+70h] [rbp-68h]
  unsigned __int64 v44; // [rsp+78h] [rbp-60h]
  _QWORD v45[3]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  boost::system::error_code::what[abi:cxx11]();
  std::string::basic_string<std::allocator<char>>((__int64 *)v41, a3, v6, v7, v8, v9, v33, v34, (__int64)v35);
  if ( (unsigned __int64)v41[1] - 0x7FFFFFFFFFFFFFFDLL <= 1 )
    std::__throw_length_error("basic_string::append");
  v10 = std::string::_M_append();
  v11 = v10 + 16;
  v38 = v40;
  if ( *(_QWORD *)v10 == v10 + 16 )
  {
    v25 = v40;
    v26 = (_DWORD *)(v10 + 16);
    v27 = *(_QWORD *)(v10 + 8) + 1LL;
    if ( (unsigned int)v27 >= 8 )
    {
      LODWORD(v30) = 0;
      do
      {
        v31 = (unsigned int)v30;
        v30 = (unsigned int)(v30 + 8);
        *(_QWORD *)((char *)v40 + v31) = *(_QWORD *)(v11 + v31);
      }
      while ( (unsigned int)v30 < ((unsigned int)v27 & 0xFFFFFFF8) );
      v25 = (_DWORD *)((char *)v40 + v30);
      v26 = (_DWORD *)(v11 + v30);
    }
    v28 = 0;
    if ( (v27 & 4) != 0 )
    {
      *v25 = *v26;
      v28 = 4;
    }
    if ( (v27 & 2) != 0 )
    {
      *(_WORD *)((char *)v25 + v28) = *(_WORD *)((char *)v26 + v28);
      v28 += 2;
    }
    if ( (v27 & 1) != 0 )
      *((_BYTE *)v25 + v28) = *((_BYTE *)v26 + v28);
  }
  else
  {
    v38 = *(void **)v10;
    v40[0] = *(_QWORD *)(v10 + 16);
  }
  *(_QWORD *)v10 = v11;
  v12 = *(_QWORD *)(v10 + 8);
  v13 = v38;
  *(_QWORD *)(v10 + 8) = 0;
  v14 = v44;
  *(_BYTE *)(v10 + 16) = 0;
  v39 = v12;
  v15 = v12 + v14;
  if ( v13 == v40 )
  {
    if ( v15 <= 0xF || v43 == v45 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( v40[0] < v15 && v43 != v45 )
  {
LABEL_7:
    if ( v45[0] >= v15 )
    {
      v16 = (_QWORD *)std::string::_M_replace();
      v17 = v16 + 2;
      v36 = v37;
      v18 = (_QWORD *)*v16;
      if ( (_QWORD *)*v16 != v16 + 2 )
        goto LABEL_10;
      v20 = v37;
      v21 = v16 + 2;
      v22 = v16[1] + 1;
      if ( v22 < 8 )
        goto LABEL_36;
      LODWORD(v23) = 0;
      do
      {
        v24 = (unsigned int)v23;
        v23 = (unsigned int)(v23 + 8);
        *(_QWORD *)((char *)v37 + v24) = *(_QWORD *)((char *)v17 + v24);
      }
      while ( (unsigned int)v23 < (v22 & 0xFFFFFFF8) );
LABEL_24:
      v20 = (_DWORD *)((char *)v37 + v23);
      v21 = (_DWORD *)((char *)v17 + v23);
      goto LABEL_36;
    }
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v12 < v14 )
    std::__throw_length_error("basic_string::append");
LABEL_9:
  v16 = (_QWORD *)std::string::_M_append();
  v17 = v16 + 2;
  v36 = v37;
  v18 = (_QWORD *)*v16;
  if ( (_QWORD *)*v16 != v16 + 2 )
  {
LABEL_10:
    v36 = v18;
    v37[0] = v16[2];
    goto LABEL_11;
  }
  v20 = v37;
  v21 = v16 + 2;
  v22 = v16[1] + 1;
  if ( v22 >= 8 )
  {
    LODWORD(v23) = 0;
    do
    {
      v32 = (unsigned int)v23;
      v23 = (unsigned int)(v23 + 8);
      *(_QWORD *)((char *)v37 + v32) = *(_QWORD *)((char *)v17 + v32);
    }
    while ( (unsigned int)v23 < (v22 & 0xFFFFFFF8) );
    goto LABEL_24;
  }
LABEL_36:
  v29 = 0;
  if ( (v22 & 4) != 0 )
  {
    *v20 = *v21;
    v29 = 4;
  }
  if ( (v22 & 2) != 0 )
  {
    *(_WORD *)((char *)v20 + v29) = *(_WORD *)((char *)v21 + v29);
    v29 += 2;
  }
  if ( (v22 & 1) != 0 )
    *((_BYTE *)v20 + v29) = *((_BYTE *)v21 + v29);
LABEL_11:
  *v16 = v17;
  v16[1] = 0;
  *((_BYTE *)v16 + 16) = 0;
  std::runtime_error::runtime_error();
  if ( v36 != v37 )
    operator delete(v36, v37[0] + 1LL);
  if ( v38 != v40 )
    operator delete(v38, v40[0] + 1LL);
  if ( v41[0] != &v42 )
    operator delete(v41[0], v42 + 1);
  if ( v43 != v45 )
    operator delete(v43, v45[0] + 1LL);
  a1[1] = _mm_loadu_si128(a2);
  a1->m128i_i64[0] = (__int64)off_444638;
  a1[2].m128i_i64[0] = a2[1].m128i_i64[0];
  return v46 - __readfsqword(0x28u);
}


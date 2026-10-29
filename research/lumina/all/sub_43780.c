__int64 __fastcall sub_43780(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  bool v4; // cc
  __int64 v8; // r9
  const char *v9; // r8
  __int64 v10; // rdi
  const char *v11; // rax
  __int64 result; // rax
  __int64 v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rax
  void *v16; // rsi
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+Fh] [rbp-71h]
  unsigned int buf; // [rsp+1Ch] [rbp-64h] BYREF
  void *ptr; // [rsp+20h] [rbp-60h] BYREF
  __int128 v21; // [rsp+28h] [rbp-58h]
  unsigned int v22; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]

  v4 = *(_QWORD *)(a3 + 8) <= 1u;
  v23 = __readfsqword(0x28u);
  if ( v4 || *(_QWORD *)(a4 + 8) <= 1u )
  {
    v13 = a2[2];
    if ( a2[4] <= 0x13u )
    {
      v15 = sub_1987B0(a2 + 2, v13, 20, 1);
      a2[2] = v15;
      v13 = v15;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B60);
    a2[3] = 20;
    *(__m128i *)v13 = si128;
    *(_DWORD *)(v13 + 15) = 1936482665;
    *(_BYTE *)(a2[2] + 19LL) = 0;
    return 0;
  }
  else
  {
    sub_1990C0(&buf, 4u);
    ptr = nullptr;
    v21 = 0;
    ptr = (void *)sub_1987B0(&ptr, 0, 32, 1);
    memset((char *)ptr + v21, 0, 32 - v21);
    v8 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)&v21 = 32;
    v9 = s1;
    if ( v8 )
    {
      v9 = *(const char **)a4;
      --v8;
    }
    v22 = buf;
    if ( (unsigned int)sub_19DEB0(ptr, 32, &v22, 4, v9, v8, 120000) )
    {
      v16 = (void *)a2[2];
      if ( a2[4] <= 0xDu )
      {
        v17 = sub_1987B0(a2 + 2, v16, 14, 1);
        a2[2] = v17;
        v16 = (void *)v17;
      }
      a2[3] = 14;
      qmemcpy(v16, "bad auth info", 13);
      *(_BYTE *)(a2[2] + 13LL) = 0;
      result = 0;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      v11 = s1;
      if ( *(_QWORD *)(a3 + 8) )
        v11 = *(const char **)a3;
      result = sub_33870(
                 v10,
                 (__int64)(a2 + 5),
                 nullptr,
                 "UPDATE users SET salt = ?, passhash = ?, passhash_nrounds = ?  WHERE user_name = ?",
                 (__int64)"iBis",
                 buf,
                 &ptr,
                 120000,
                 v11);
    }
    if ( ptr )
    {
      v18 = result;
      *(_QWORD *)&v21 = 0;
      j__free(ptr);
      return v18;
    }
  }
  return result;
}

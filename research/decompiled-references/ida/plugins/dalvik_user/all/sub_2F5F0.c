__int64 __fastcall sub_2F5F0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  int v4; // r12d
  char v5; // al
  const char *v6; // rdi
  unsigned int v7; // r15d
  char v9; // al
  unsigned int v10; // eax
  const char *v11; // rax
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // r8d
  const char *v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-B0h]
  int v20; // [rsp+1Ch] [rbp-94h] BYREF
  __int64 v21; // [rsp+20h] [rbp-90h] BYREF
  __int64 v22; // [rsp+28h] [rbp-88h] BYREF
  const char *v23; // [rsp+30h] [rbp-80h] BYREF
  __m128i v24; // [rsp+38h] [rbp-78h] BYREF
  _QWORD v25[12]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (_QWORD *)(a1 + 1040);
  v25[5] = __readfsqword(0x28u);
  v4 = a3;
  v23 = nullptr;
  v24 = 0;
  v5 = sub_2F010((_QWORD *)(a1 + 1040), (__int64)v25, a3);
  v6 = nullptr;
  if ( v5
    && (v9 = sub_2DB20(v3, &v20, &v21, &v22, v25), v6 = v23, v9)
    && (v10 = sub_4C170(a1 + 864, &v23, v25[1]), v6 = v23, v7 = v10, (_BYTE)v10) )
  {
    if ( a2 )
    {
      v11 = *(const char **)a2;
      v12 = _mm_loadu_si128(&v24);
      *(_QWORD *)a2 = v23;
      v13 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v14 = v21;
      v23 = v11;
      LODWORD(v11) = v20;
      *(__m128i *)(a2 + 8) = v12;
      *(_DWORD *)(a2 + 24) = (_DWORD)v11;
      v25[3] = v14;
      v18 = v14;
      v24 = v13;
      sub_2CA10(v3, (__int64 *)(a2 + 32), v25);
      v15 = *(_QWORD *)(a2 + 32);
      v16 = *(_DWORD *)(a2 + 24);
      v17 = nptr;
      *(_QWORD *)(a2 + 40) = 2 * (v22 - v18);
      if ( *(_QWORD *)(a2 + 8) )
        v17 = *(const char **)a2;
      sub_58110(a1, (unsigned int)"ea_source_ctx(%a): %s:%d %a..%a\n", v4, (_DWORD)v17, v16, v15);
      v6 = v23;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
  {
    v24.m128i_i64[0] = 0;
    qfree();
  }
  return v7;
}


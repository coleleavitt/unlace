unsigned __int64 __fastcall sub_2DD1A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v3; // zf
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-68h] BYREF
  __m128i v10; // [rsp+8h] [rbp-60h]
  int v11; // [rsp+18h] [rbp-50h]
  __m128i v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a2 + 16) == 0;
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v11 = v2;
  v4 = *(_DWORD *)(a1 + 48);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v13 = v4;
  v9 = off_4E2C10;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v3 )
LABEL_6:
    std::__throw_bad_function_call();
  v5 = a1 - 64;
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v9, v5) < 0 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v5 -= 64;
    *(_QWORD *)(v5 + 136) = v6;
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 80);
    *(_DWORD *)(v5 + 152) = *(_DWORD *)(v5 + 88);
    *(_QWORD *)(v5 + 160) = *(_QWORD *)(v5 + 96);
    *(_DWORD *)(v5 + 168) = *(_DWORD *)(v5 + 104);
    *(_DWORD *)(v5 + 176) = *(_DWORD *)(v5 + 112);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(v5 + 120);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_6;
  }
  v7 = v5 + 64;
  *(_QWORD *)(v7 + 8) = v10.m128i_i64[0];
  *(_DWORD *)(v7 + 16) = v10.m128i_i32[2];
  *(_DWORD *)(v7 + 24) = v11;
  *(_QWORD *)(v7 + 32) = v12.m128i_i64[0];
  *(_DWORD *)(v7 + 40) = v12.m128i_i32[2];
  *(_DWORD *)(v7 + 48) = v13;
  *(_QWORD *)(v7 + 56) = v14;
  return v15 - __readfsqword(0x28u);
}


unsigned __int64 __fastcall sub_CA30(__int64 a1, const __m128i *a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  const char *v6; // rsi
  _DWORD *v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  v2 = (_DWORD *)qvector_reserve(&v8, 0, 8, 1);
  v8 = v2;
  *(_QWORD *)&v9 = 8;
  *v2 = 1179211603;
  *(_DWORD *)((char *)v2 + 3) = 540693574;
  *((_BYTE *)v8 + 7) = 0;
  sub_C250((__int64 *)&v8, a1, a2, v3, v4, v5);
  v6 = s1;
  if ( (_QWORD)v9 )
    v6 = (const char *)v8;
  sub_7200((__int64)"%s", v6);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v10 - __readfsqword(0x28u);
}


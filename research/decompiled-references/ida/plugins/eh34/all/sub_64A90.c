__int64 __fastcall sub_64A90(__int64 a1, unsigned __int8 *a2, __int64 a3, const __m128i *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // rdx
  const char *v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v6 = *((_QWORD *)a2 + 1);
  v7 = *a2;
  v15 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  sub_FB10((__int64 *)&v13, (__int64)"EH%d[%a]: ", v7, v6);
  sub_10340((__int64 *)&v13, a3, a4, v8, v9, v10);
  v11 = s1;
  if ( (_QWORD)v14 )
    v11 = v13;
  sub_19A90(a1, (__int64)"%s", v11);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return a1;
}


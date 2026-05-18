__int64 __fastcall sub_8AF30(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // r13d
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+8h] [rbp-40h]
  int v13; // [rsp+Ch] [rbp-3Ch]
  bool v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v12 = 48;
  v13 = a3;
  v11 = off_238428;
  v3 = *(_QWORD *)(a1 + 40);
  v14 = a2 != nullptr;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v3 + 80))(a1 + 40, &v11);
  v7 = sub_8ACB0((_QWORD *)(a1 + 40), (__int64)v4, 49, nullptr, v5, v6);
  if ( !v7 && a2 )
  {
    v8 = *a2;
    v9 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v4[2];
    a2[1] = v4[3];
    a2[2] = v4[4];
    v4[2] = v8;
    *(__m128i *)(v4 + 3) = v9;
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  nullsub_45(&v11);
  return v7;
}

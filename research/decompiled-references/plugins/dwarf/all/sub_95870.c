unsigned __int64 __fastcall sub_95870(__int64 *a1, __m128i *a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rax
  void *exception; // r12
  char *v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  const char *v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v4 = *a1;
  v15 = __readfsqword(0x28u);
  v13 = 0;
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 24);
  v14 = nullptr;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *, const char **))(*(_QWORD *)(v6 + 88) + 88LL))(
         v7,
         (unsigned __int16)a3,
         &v13,
         &v14);
  if ( v8 )
  {
    if ( v8 == 1 )
      sub_943B0((_BYTE *)(v6 + 330), (__int64)"Error retrieving attribute %hu for DIE\n", a3);
LABEL_6:
    v14 = nullptr;
    (*(void (__fastcall **)(_QWORD, const char **))(a1[32] + 544))(a3, &v14);
    exception = __cxa_allocate_exception(0x18u);
    v12 = sub_81C40((__int64)a1);
    sub_95790((__int64)exception, (__int64)"Cannot get attribute: %s (%d) for DIE %s", v14, a3, v12);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'die_t::load_failure_t, (void (*)(void *))sub_52F60);
  }
  v9 = v13;
  *a2 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v6);
  if ( !v9 )
    goto LABEL_6;
  return v15 - __readfsqword(0x28u);
}

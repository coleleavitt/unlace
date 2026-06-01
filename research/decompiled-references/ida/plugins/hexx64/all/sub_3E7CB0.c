__int64 __fastcall sub_3E7CB0(__int64 a1, const char *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  __int64 v5; // rbp
  unsigned int v6; // r14d
  size_t v7; // rax
  size_t v8; // r15
  size_t v10; // rbp
  _BYTE *v11; // rax
  __int64 v12; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int64 v14; // [rsp+18h] [rbp-90h]
  _BYTE *v15; // [rsp+20h] [rbp-88h] BYREF
  __int128 v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int128 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  unsigned __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1204) )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = "cannot add new lvars in postactions";
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  if ( *(_BYTE *)(a1 + 1205) )
  {
    v3 = __cxa_allocate_exception(8u);
    *v3 = "cannot add new lvars in a condition";
    __cxa_throw(v3, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  if ( *(_BYTE *)(a1 + 1206) )
  {
    v2 = __cxa_allocate_exception(8u);
    *v2 = "cannot add new lvars in a typereq";
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  v5 = *(_QWORD *)(a1 + 1088);
  v12 = 0;
  v14 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v6 = *(_DWORD *)(v5 + 440);
  v15 = nullptr;
  v17 = 0;
  v19 = 0;
  v20 = 0xFFFFFFFF00000000LL;
  v21 = 0;
  v16 = 0;
  v18 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7;
    if ( v7 )
    {
      v10 = v7 + 1;
      v11 = (_BYTE *)qvector_reserve((__int64)&v15, 0, v7 + 1, 1);
      *(_QWORD *)&v16 = v10;
      v15 = v11;
      memmove(v11, a2, v8);
      v15[v8] = 0;
      v5 = *(_QWORD *)(a1 + 1088);
    }
  }
  sub_3CA710((__int64 *)(v5 + 432), (__int64)&v12);
  clear_tinfo_t();
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)v15);
  }
  cleanup_argloc();
  return v6;
}


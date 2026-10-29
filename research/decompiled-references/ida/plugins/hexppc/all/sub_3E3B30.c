__int64 __fastcall sub_3E3B30(__int64 a1, const char *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  __int64 v5; // rbp
  unsigned int v6; // r14d
  size_t v7; // rax
  size_t v8; // r15
  __int64 v10; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int64 v12; // [rsp+18h] [rbp-90h]
  void *v13; // [rsp+20h] [rbp-88h]
  __int128 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+38h] [rbp-70h]
  __int128 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  unsigned __int64 v18; // [rsp+58h] [rbp-50h]
  __int64 v19; // [rsp+60h] [rbp-48h]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v20 = __readfsqword(0x28u);
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
  v10 = 0;
  v12 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v6 = *(_DWORD *)(v5 + 440);
  v13 = nullptr;
  v15 = 0;
  v17 = 0;
  v18 = 0xFFFFFFFF00000000LL;
  v19 = 0;
  v14 = 0;
  v16 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)&v14 = v7 + 1;
      v13 = (void *)qvector_reserve();
      memmove(v13, a2, v8);
      *((_BYTE *)v13 + v8) = 0;
      v5 = *(_QWORD *)(a1 + 1088);
    }
  }
  sub_3C6590((__int64 *)(v5 + 432), (__int64)&v10);
  clear_tinfo_t();
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  cleanup_argloc();
  return v6;
}


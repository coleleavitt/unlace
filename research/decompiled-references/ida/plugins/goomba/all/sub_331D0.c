__int64 __fastcall sub_331D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, __int64 *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v5; // rbx
  _QWORD *exception; // rax
  size_t v8; // r12
  _QWORD *v9; // rbx
  void *v10; // rax
  void *v11; // rsi
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  int v13; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v14)(std::exception *); // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+20h] [rbp-58h]
  void *src; // [rsp+28h] [rbp-50h]
  size_t n[3]; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 56);
  v19 = __readfsqword(0x28u);
  v12 = 0;
  v13 = 1;
  v14 = off_4D788;
  v15 = 0;
  v16 = -1;
  src = nullptr;
  *(_OWORD *)n = 0;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(a1, a2, a3);
  if ( !hexdsp(623, a2, &v12, v3, &v14) )
  {
    exception = __cxa_allocate_exception(0x30u);
    v8 = n[0];
    *exception = off_4D788;
    v9 = exception;
    LODWORD(exception) = v15;
    *((_OWORD *)v9 + 2) = 0;
    *((_DWORD *)v9 + 2) = (_DWORD)exception;
    v9[2] = v16;
    v9[3] = 0;
    if ( v8 )
    {
      v10 = (void *)qalloc_or_throw(v8);
      v9[3] = v10;
      v11 = src;
      v9[5] = v8;
      memcpy(v10, v11, v8);
      v9[4] = v8;
    }
    __cxa_throw(v9, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
  }
  v5 = v12;
  v14 = off_4D788;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  std::exception::~exception((std::exception *)&v14);
  return v5;
}


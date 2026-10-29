__int64 __fastcall sub_33BF0(__int64 a1, __int64 a2)
{
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, __int64 *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v3; // r14
  _QWORD *exception; // rax
  size_t v6; // r12
  _QWORD *v7; // rbp
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall **v12)(std::exception *); // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+18h] [rbp-70h]
  __int64 v14; // [rsp+20h] [rbp-68h]
  void *src; // [rsp+28h] [rbp-60h]
  size_t n[3]; // [rsp+30h] [rbp-58h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v10 = 0;
  LODWORD(v11) = 1;
  v12 = off_4D788;
  v13 = 0;
  v14 = -1;
  src = nullptr;
  *(_OWORD *)n = 0;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(a1, a2);
  if ( !hexdsp(623, a1, &v10, a2, &v12) )
  {
    exception = __cxa_allocate_exception(0x30u);
    v6 = n[0];
    *exception = off_4D788;
    v7 = exception;
    LODWORD(exception) = v13;
    *((_OWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 2) = (_DWORD)exception;
    v7[2] = v14;
    v7[3] = 0;
    if ( v6 )
    {
      v8 = (void *)qalloc_or_throw(v6);
      v7[3] = v8;
      v9 = src;
      v7[5] = v6;
      memcpy(v8, v9, v6);
      v7[4] = v6;
    }
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
  }
  v3 = v10;
  v12 = off_4D788;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  std::exception::~exception((std::exception *)&v12);
  return v3;
}


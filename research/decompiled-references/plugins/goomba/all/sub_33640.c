__int64 __fastcall sub_33640(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, __int64 *, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, __int64); // rax
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64); // rax
  _QWORD *exception; // rax
  size_t v18; // rbp
  _QWORD *v19; // rbx
  void *v20; // rax
  void *v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-78h] BYREF
  int v23; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v24)(std::exception *); // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  void *src; // [rsp+28h] [rbp-50h]
  size_t n[3]; // [rsp+30h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-30h]

  v2 = *a1;
  v29 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 32))(a1, 0);
  v22 = 0;
  v23 = 1;
  v4 = v3;
  v24 = off_4D788;
  v25 = 0;
  v26 = -1;
  src = nullptr;
  *(_OWORD *)n = 0;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(a1, 0, v5);
  if ( !hexdsp(623, a2, &v22, v4, &v24) )
  {
    exception = __cxa_allocate_exception(0x30u);
    v18 = n[0];
    *exception = off_4D788;
    v19 = exception;
    LODWORD(exception) = v25;
    *((_OWORD *)v19 + 2) = 0;
    *((_DWORD *)v19 + 2) = (_DWORD)exception;
    v19[2] = v26;
    v19[3] = 0;
    if ( v18 )
    {
      v20 = (void *)qalloc_or_throw(v18);
      v19[3] = v20;
      v21 = src;
      v19[5] = v18;
      memcpy(v20, v21, v18);
      v19[4] = v18;
    }
    __cxa_throw(v19, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
  }
  v7 = v22;
  v24 = off_4D788;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  std::exception::~exception((std::exception *)&v24);
  if ( v4 )
  {
    v9 = (void (__fastcall *)(__int64, __int64))get_hexdsp(&v24, a2, v8);
    v9(276, v4 + 64);
    v11 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v4 + 64, v10);
    v11(276, v4 + 48);
    v13 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v4 + 48, v12);
    v13(276, v4 + 32);
    v15 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v4 + 32, v14);
    v15(130, v4);
  }
  return v7;
}

__int64 __fastcall sub_40540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int8 (__fastcall *hexdsp)(__int64, _QWORD *, __int64 (__fastcall ***)(std::exception *), __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 (__fastcall **v13)(std::exception *); // r12
  int v14; // r14d
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rbx
  void *exception; // r12
  __int64 v21; // [rsp+8h] [rbp-D8h]
  __int64 (__fastcall **v22)(std::exception *); // [rsp+18h] [rbp-C8h] BYREF
  int v23; // [rsp+20h] [rbp-C0h]
  __int64 v24; // [rsp+28h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-B0h]
  _QWORD v26[4]; // [rsp+48h] [rbp-98h] BYREF
  __int64 (__fastcall **v27)(std::exception *); // [rsp+68h] [rbp-78h] BYREF
  __int64 v28; // [rsp+70h] [rbp-70h]
  __int64 v29; // [rsp+78h] [rbp-68h]
  __int64 v30; // [rsp+80h] [rbp-60h]
  __int128 v31; // [rsp+88h] [rbp-58h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-40h]

  v3 = 0xCBF29CE484222325LL;
  v32 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 64);
  v25 = 0;
  v24 = 0;
  if ( v5 )
  {
    v8 = 0;
    v24 = qvector_reserve(&v24, 0, v5, 8);
    v9 = (__int64 *)v24;
    v10 = *(_QWORD *)(a1 + 56);
    v21 = v10 + 24LL * *(_QWORD *)(a1 + 64);
    if ( v21 == v10 )
    {
      v16 = (__int64 *)(v24 + 8 * v25);
    }
    else
    {
      do
      {
        v26[1] = v10;
        v26[0] = off_4DBF0;
        v26[2] = a3;
        v22 = nullptr;
        v23 = 1;
        v27 = off_4D788;
        v28 = 0;
        v29 = -1;
        v30 = 0;
        v31 = 0;
        hexdsp = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, __int64 (__fastcall ***)(std::exception *), __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v9, v8);
        if ( !hexdsp(623, v26, &v22, a2, &v27) )
        {
          exception = __cxa_allocate_exception(0x30u);
          sub_403A0((__int64)exception, (__int64)&v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
        }
        v13 = v22;
        v14 = v23;
        v27 = off_4D788;
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
        }
        std::exception::~exception((std::exception *)&v27);
        v15 = v25;
        v27 = v13;
        LODWORD(v28) = v14;
        v8 = v24;
        v9 = (__int64 *)(v25 + 1);
        if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
        {
          v9 = &v24;
          v24 = qvector_reserve(&v24, v24, v25 + 1, 8);
          v8 = v24;
          v15 = v25;
        }
        *(_QWORD *)(v8 + 8 * v15) = v13;
        v10 += 24;
        v11 = v25 + 1;
        *(_QWORD *)&v25 = v25 + 1;
      }
      while ( v21 != v10 );
      v9 = (__int64 *)v24;
      v16 = (__int64 *)(v24 + 8 * v11);
    }
    v3 = 0xCBF29CE484222325LL;
    if ( v9 != v16 )
    {
      v17 = v9;
      do
      {
        v18 = *v17++ ^ v3;
        v3 = 0x100000001B3LL * v18;
      }
      while ( v16 != v17 );
    }
    if ( v9 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v9);
    }
  }
  return v3;
}

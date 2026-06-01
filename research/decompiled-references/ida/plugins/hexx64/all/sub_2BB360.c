unsigned __int64 __fastcall sub_2BB360(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD *exception; // rbx
  __int64 v14; // [rsp+0h] [rbp-78h]
  __int64 v15; // [rsp+18h] [rbp-60h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      sub_332160(a2);
      if ( *(_QWORD *)(v2 + 8) )
      {
        v7 = 0;
        do
        {
          if ( !(unsigned __int8)append_argloc() )
          {
            exception = __cxa_allocate_exception(0x30u);
            *(_QWORD *)exception = off_4DBCD0;
            exception[2] = -22;
            *((_QWORD *)exception + 2) = -1;
            sub_81980((__int64)(exception + 6), "argloc too complex to serialize");
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
          }
          sub_332160(a2);
          v8 = a2[1];
          v9 = 0;
          if ( v8 )
            v9 = --v8;
          v10 = *a2;
          v11 = v9 + 1;
          if ( a2[2] < (unsigned __int64)(v9 + 1) )
          {
            v15 = v9;
            v14 = v9 + 1;
            v12 = qvector_reserve((__int64)a2, v10, v11, 1);
            v9 = v15;
            *a2 = v12;
            v10 = v12;
            v11 = v14;
          }
          a2[1] = v11;
          *(_BYTE *)(v10 + v9) = 0;
          memmove((void *)(v8 + *a2), nullptr, 0);
          ++v7;
          get_tinfo_size();
          sub_332160(a2);
          sub_2B6D70(a2);
        }
        while ( v7 < *(_QWORD *)(v2 + 8) );
      }
    }
    v4 = a2[1];
    if ( v4 <= 8 )
    {
      if ( (unsigned __int64)a2[2] <= 9 )
      {
        sub_2ADDE0(a2, 10);
        v4 = a2[1];
      }
      memset((void *)(*a2 + v4), 0, 10 - v4);
      v6 = *a2;
      a2[1] = 10;
      *(_BYTE *)(v6 + 9) = 0;
    }
  }
  return v16 - __readfsqword(0x28u);
}


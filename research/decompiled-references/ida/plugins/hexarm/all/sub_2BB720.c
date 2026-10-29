unsigned __int64 __fastcall sub_2BB720(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned int tinfo_size; // eax
  __int64 v10; // r12
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  _DWORD *exception; // rbx
  __int64 v16; // [rsp+0h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-60h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( v4 )
    {
      sub_3324A0(a2, v4);
      if ( *(_QWORD *)(v2 + 8) )
      {
        v8 = 0;
        do
        {
          if ( !(unsigned __int8)append_argloc() )
          {
            exception = __cxa_allocate_exception(0x30u);
            *(_QWORD *)exception = off_4D6390;
            exception[2] = -22;
            *((_QWORD *)exception + 2) = -1;
            sub_813C0((__int64)(exception + 6), "argloc too complex to serialize");
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
          }
          sub_3324A0(a2, 0);
          v10 = a2[1];
          v11 = 0;
          if ( v10 )
            v11 = --v10;
          v12 = *a2;
          v13 = v11 + 1;
          if ( a2[2] < (unsigned __int64)(v11 + 1) )
          {
            v17 = v11;
            v16 = v11 + 1;
            v14 = qvector_reserve();
            v11 = v17;
            *a2 = v14;
            v12 = v14;
            v13 = v16;
          }
          a2[1] = v13;
          *(_BYTE *)(v12 + v11) = 0;
          memmove((void *)(v10 + *a2), nullptr, 0);
          ++v8;
          tinfo_size = get_tinfo_size();
          sub_3324A0(a2, tinfo_size);
          sub_2B7130(a2);
        }
        while ( v8 < *(_QWORD *)(v2 + 8) );
      }
    }
    v5 = a2[1];
    if ( v5 <= 8 )
    {
      if ( (unsigned __int64)a2[2] <= 9 )
      {
        sub_2AE1A0(a2);
        v5 = a2[1];
      }
      memset((void *)(*a2 + v5), 0, 10 - v5);
      v7 = *a2;
      a2[1] = 10;
      *(_BYTE *)(v7 + 9) = 0;
    }
  }
  return v18 - __readfsqword(0x28u);
}


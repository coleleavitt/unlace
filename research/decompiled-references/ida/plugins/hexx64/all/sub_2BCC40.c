unsigned __int64 __fastcall sub_2BCC40(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rbp
  size_t v10; // r9
  __int64 v11; // r8
  const void *v12; // r10
  size_t v13; // r11
  __int64 v14; // rsi
  __int64 v15; // rdx
  size_t v16; // r8
  const void *v17; // r9
  __int64 v18; // rbp
  size_t v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r11
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *exception; // rbx
  __int64 v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+8h] [rbp-80h]
  __int64 v33; // [rsp+8h] [rbp-80h]
  size_t v34; // [rsp+10h] [rbp-78h]
  size_t v35; // [rsp+10h] [rbp-78h]
  const void *v36; // [rsp+18h] [rbp-70h]
  const void *v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  size_t v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  size_t v42; // [rsp+28h] [rbp-60h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_332160(a1);
    if ( *(_QWORD *)(a2 + 8) )
    {
      v8 = 0;
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
        sub_332160(a1);
        v22 = a1[1];
        v23 = 0;
        if ( v22 )
          v23 = --v22;
        v24 = *a1;
        v25 = v23 + 1;
        if ( a1[2] < (unsigned __int64)(v23 + 1) )
        {
          v41 = v23;
          v38 = v22;
          v31 = v23 + 1;
          v26 = qvector_reserve((__int64)a1, v24, v25, 1);
          v23 = v41;
          v22 = v38;
          *a1 = v26;
          v24 = v26;
          v25 = v31;
        }
        a1[1] = v25;
        *(_BYTE *)(v24 + v23) = 0;
        memmove((void *)(v22 + *a1), nullptr, 0);
        get_tinfo_size();
        sub_332160(a1);
        if ( a3 )
        {
          v9 = *a3 + 48 * v8;
          sub_332160(a1);
          v10 = *(_QWORD *)(v9 + 8);
          v11 = a1[1];
          v12 = *(const void **)v9;
          v13 = v10;
          if ( v11 )
          {
            --v11;
            v13 = v10 + v11;
          }
          v14 = *a1;
          v15 = v13 + 1;
          if ( a1[2] < v13 + 1 )
          {
            v42 = v13;
            v39 = v11;
            v36 = *(const void **)v9;
            v34 = *(_QWORD *)(v9 + 8);
            v32 = v13 + 1;
            v27 = qvector_reserve((__int64)a1, v14, v15, 1);
            v13 = v42;
            v11 = v39;
            v12 = v36;
            v10 = v34;
            *a1 = v27;
            v14 = v27;
            v15 = v32;
          }
          a1[1] = v15;
          *(_BYTE *)(v14 + v13) = 0;
          memmove((void *)(v11 + *a1), v12, v10);
          sub_332160(a1);
          v16 = *(_QWORD *)(v9 + 32);
          v17 = *(const void **)(v9 + 24);
          v18 = a1[1];
          v19 = v16;
          if ( v18 )
          {
            --v18;
            v19 = v16 + v18;
          }
          v20 = *a1;
          v21 = v19 + 1;
          if ( a1[2] < v19 + 1 )
          {
            v40 = v19;
            v37 = v17;
            v35 = v16;
            v33 = v19 + 1;
            v28 = qvector_reserve((__int64)a1, v20, v21, 1);
            v19 = v40;
            v17 = v37;
            v16 = v35;
            v21 = v33;
            *a1 = v28;
            v20 = v28;
          }
          a1[1] = v21;
          *(_BYTE *)(v20 + v19) = 0;
          memmove((void *)(v18 + *a1), v17, v16);
        }
        else
        {
          sub_2B6D70(a1);
        }
        ++v8;
      }
      while ( v8 < *(_QWORD *)(a2 + 8) );
    }
  }
  v5 = a1[1];
  if ( v5 <= 8 )
  {
    if ( (unsigned __int64)a1[2] <= 9 )
    {
      sub_2ADDE0(a1, 10);
      v5 = a1[1];
    }
    memset((void *)(*a1 + v5), 0, 10 - v5);
    v29 = *a1;
    a1[1] = 10;
    *(_BYTE *)(v29 + 9) = 0;
  }
  return v43 - __readfsqword(0x28u);
}


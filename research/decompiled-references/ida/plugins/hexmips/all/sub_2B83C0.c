unsigned __int64 __fastcall sub_2B83C0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v9; // r12
  unsigned int tinfo_size; // eax
  __int64 v11; // rbp
  size_t v12; // r9
  __int64 v13; // r8
  const void *v14; // r10
  size_t v15; // r11
  __int64 v16; // rsi
  __int64 v17; // rdx
  size_t v18; // r8
  const void *v19; // r9
  __int64 v20; // rbp
  size_t v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _DWORD *exception; // rbx
  __int64 v33; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+8h] [rbp-80h]
  size_t v36; // [rsp+10h] [rbp-78h]
  size_t v37; // [rsp+10h] [rbp-78h]
  const void *v38; // [rsp+18h] [rbp-70h]
  const void *v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+20h] [rbp-68h]
  size_t v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  size_t v44; // [rsp+28h] [rbp-60h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    sub_32D120(a1, v5);
    if ( *(_QWORD *)(a2 + 8) )
    {
      v9 = 0;
      do
      {
        if ( !(unsigned __int8)append_argloc() )
        {
          exception = __cxa_allocate_exception(0x30u);
          *(_QWORD *)exception = off_4BC450;
          exception[2] = -22;
          *((_QWORD *)exception + 2) = -1;
          sub_7D780((__int64)(exception + 6), "argloc too complex to serialize");
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_762C0);
        }
        sub_32D120(a1, 0);
        v24 = a1[1];
        v25 = 0;
        if ( v24 )
          v25 = --v24;
        v26 = *a1;
        v27 = v25 + 1;
        if ( a1[2] < (unsigned __int64)(v25 + 1) )
        {
          v43 = v25;
          v40 = v24;
          v33 = v25 + 1;
          v28 = qvector_reserve();
          v25 = v43;
          v24 = v40;
          *a1 = v28;
          v26 = v28;
          v27 = v33;
        }
        a1[1] = v27;
        *(_BYTE *)(v26 + v25) = 0;
        memmove((void *)(v24 + *a1), nullptr, 0);
        tinfo_size = get_tinfo_size();
        sub_32D120(a1, tinfo_size);
        if ( a3 )
        {
          v11 = *a3 + 48 * v9;
          sub_32D120(a1, *(unsigned int *)(v11 + 8));
          v12 = *(_QWORD *)(v11 + 8);
          v13 = a1[1];
          v14 = *(const void **)v11;
          v15 = v12;
          if ( v13 )
          {
            --v13;
            v15 = v12 + v13;
          }
          v16 = *a1;
          v17 = v15 + 1;
          if ( a1[2] < v15 + 1 )
          {
            v44 = v15;
            v41 = v13;
            v38 = *(const void **)v11;
            v36 = *(_QWORD *)(v11 + 8);
            v34 = v15 + 1;
            v29 = qvector_reserve();
            v15 = v44;
            v13 = v41;
            v14 = v38;
            v12 = v36;
            *a1 = v29;
            v16 = v29;
            v17 = v34;
          }
          a1[1] = v17;
          *(_BYTE *)(v16 + v15) = 0;
          memmove((void *)(v13 + *a1), v14, v12);
          sub_32D120(a1, *(unsigned int *)(v11 + 32));
          v18 = *(_QWORD *)(v11 + 32);
          v19 = *(const void **)(v11 + 24);
          v20 = a1[1];
          v21 = v18;
          if ( v20 )
          {
            --v20;
            v21 = v18 + v20;
          }
          v22 = *a1;
          v23 = v21 + 1;
          if ( a1[2] < v21 + 1 )
          {
            v42 = v21;
            v39 = v19;
            v37 = v18;
            v35 = v21 + 1;
            v30 = qvector_reserve();
            v21 = v42;
            v19 = v39;
            v18 = v37;
            v23 = v35;
            *a1 = v30;
            v22 = v30;
          }
          a1[1] = v23;
          *(_BYTE *)(v22 + v21) = 0;
          memmove((void *)(v20 + *a1), v19, v18);
        }
        else
        {
          sub_2B24F0(a1);
        }
        ++v9;
      }
      while ( v9 < *(_QWORD *)(a2 + 8) );
    }
  }
  v6 = a1[1];
  if ( v6 <= 8 )
  {
    if ( (unsigned __int64)a1[2] <= 9 )
    {
      sub_2A9560(a1);
      v6 = a1[1];
    }
    memset((void *)(*a1 + v6), 0, 10 - v6);
    v31 = *a1;
    a1[1] = 10;
    *(_BYTE *)(v31 + 9) = 0;
  }
  return v45 - __readfsqword(0x28u);
}


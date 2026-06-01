unsigned __int64 __fastcall sub_2EDE0(_QWORD *a1, __int64 a2)
{
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  size_t v11; // r13
  void *v12; // rdi
  void *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax
  void *v16; // r15
  void *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // [rsp+8h] [rbp-C8h]
  __int64 v20; // [rsp+8h] [rbp-C8h]
  __int128 v21; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23; // [rsp+28h] [rbp-A8h]
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-A0h] BYREF
  int v25; // [rsp+38h] [rbp-98h]
  void *dest; // [rsp+40h] [rbp-90h] BYREF
  __int128 v27; // [rsp+48h] [rbp-88h]
  __int64 v28; // [rsp+60h] [rbp-70h] BYREF
  __int128 v29; // [rsp+68h] [rbp-68h]
  void *src; // [rsp+80h] [rbp-50h] BYREF
  __int128 v31; // [rsp+88h] [rbp-48h]
  unsigned __int64 v32; // [rsp+98h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v21 = 0;
  if ( (unsigned __int8)sub_945B0(a2, &v21, 28) )
  {
    v22 = 0;
    v23 = 0;
    if ( (unsigned __int8)sub_96D10(a2, &v22, &v21) )
    {
      v24 = off_C78D8;
      v28 = 0;
      v25 = 0;
      dest = nullptr;
      v27 = 0;
      v29 = 0;
      sub_9D820(&dest, a2, &v24, &v28);
      src = nullptr;
      v19 = -1;
      v31 = 0;
      while ( 1 )
      {
        v5 = ::src;
        if ( (_QWORD)v27 )
          v5 = (const char *)dest;
        sub_9EF10(&src, v5, v19);
        v6 = ::src;
        if ( (_QWORD)v31 )
          v6 = (const char *)src;
        if ( (unsigned int)get_named_type(
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 144LL) + 8LL),
                             v6,
                             64,
                             0,
                             0,
                             0,
                             0,
                             0,
                             0) != 1 )
          break;
        ++v19;
      }
      v7 = v31;
      if ( (unsigned __int64)v31 > 1 )
      {
        v13 = src;
        v14 = dest;
        if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)v31 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v31, 1);
          v14 = dest;
        }
        *(_QWORD *)&v27 = v7;
        memmove(v14, v13, v7 - 1);
        *((char *)dest + v7 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v27 = 0;
      }
      v8 = a1[4];
      v9 = a1[3];
      if ( a1[5] < (unsigned __int64)(v8 + 1) )
      {
        v15 = qvector_reserve(a1 + 3, v9, v8 + 1, 56);
        a1[3] = v15;
        v8 = a1[4];
        v9 = v15;
      }
      v10 = v9 + 56 * v8;
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 8) = 0;
      *(_OWORD *)(v10 + 32) = 0;
      ++a1[4];
      if ( (void **)v10 != &dest )
      {
        v20 = v27;
        if ( (_QWORD)v27 && (v11 = v27 - 1, (_QWORD)v27 != 1) )
        {
          v16 = dest;
          v17 = *(void **)v10;
          if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)v27 )
          {
            v18 = qvector_reserve(v10, *(_QWORD *)v10, v27, 1);
            *(_QWORD *)v10 = v18;
            v17 = (void *)v18;
          }
          *(_QWORD *)(v10 + 8) = v20;
          memmove(v17, v16, v11);
          *(_BYTE *)(*(_QWORD *)v10 + v20 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v10 + 8) = 0;
        }
      }
      v12 = src;
      *(_QWORD *)(v10 + 48) = v22 & a1[10];
      if ( v12 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v12);
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v28);
      }
      if ( dest )
      {
        *(_QWORD *)&v27 = 0;
        qfree(dest);
      }
    }
  }
  sub_84A10(&v21);
  return v32 - __readfsqword(0x28u);
}


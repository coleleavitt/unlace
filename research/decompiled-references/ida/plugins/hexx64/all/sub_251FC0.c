unsigned __int64 __fastcall sub_251FC0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  size_t v13; // r15
  const char *numbered_type_name; // rax
  const char *v15; // r15
  size_t v16; // rax
  size_t v17; // r8
  void *v18; // rdi
  __int64 v19; // rdx
  const __m128i *v20; // rdi
  void *v21; // rax
  const void *v22; // rsi
  size_t v23; // [rsp+0h] [rbp-108h]
  __int64 v24; // [rsp+0h] [rbp-108h]
  size_t v25; // [rsp+8h] [rbp-100h]
  void *dest; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-E0h]
  _QWORD v28[5]; // [rsp+40h] [rbp-C8h] BYREF
  char v29; // [rsp+68h] [rbp-A0h]
  _QWORD *v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall **v32)(); // [rsp+80h] [rbp-88h] BYREF
  int v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int128 v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-58h]
  _QWORD *v38; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v33 = 0;
  v32 = (__int64 (__fastcall **)())&off_4DF8C8;
  v34 = 0;
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v38 = *(_QWORD **)(a1 + 8);
  sub_255A80((__int64 *)&v32, a1 + 16, 0);
  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1328LL);
  v2 = (_QWORD *)*v1;
  if ( *v1 && v1[1] )
  {
    v3 = (_QWORD *)v2[1];
LABEL_4:
    while ( v2 != v3 )
    {
      while ( 1 )
      {
        v4 = (unsigned int)*((char *)v3 + 44);
        v5 = v3 + 3;
        if ( (unsigned __int8)is_stroff() && (*((_BYTE *)v3 + 45) & 0x21) == 1 )
        {
          v13 = v3[7];
          dest = nullptr;
          v27 = 0;
          if ( v13 )
          {
            v21 = (void *)qalloc_or_throw(v13, v4, v6, v7);
            v22 = (const void *)v3[6];
            dest = v21;
            *((_QWORD *)&v27 + 1) = v13;
            memcpy(v21, v22, v13);
            *(_QWORD *)&v27 = v13;
          }
          if ( (unsigned __int8)is_ordinal_name() )
          {
            numbered_type_name = (const char *)get_numbered_type_name();
            v15 = numbered_type_name;
            if ( numbered_type_name && (v16 = strlen(numbered_type_name), (v17 = v16) != 0) )
            {
              v18 = dest;
              v19 = v16 + 1;
              if ( *((_QWORD *)&v27 + 1) < v16 + 1 )
              {
                v25 = v16;
                v24 = v16 + 1;
                dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v19, 1);
                v17 = v25;
                v18 = dest;
                v19 = v24;
              }
              *(_QWORD *)&v27 = v19;
              v23 = v17;
              memmove(v18, v15, v17);
              *((_BYTE *)dest + v23) = 0;
            }
            else
            {
              *(_QWORD *)&v27 = 0;
            }
          }
          v20 = (const __m128i *)sub_670B0((__int64)v38, *v5);
          if ( v20 )
          {
            memset(&v28[1], 0, 32);
            v29 = 0;
            v28[0] = &off_4DF908;
            v30 = v3 + 3;
            v31 = 0;
            sub_11F5B0(v20, (__int64)v28);
          }
          sub_FAAD0((__int64 *)&dest);
          sub_3311F0(v38, *v5, 0x21u, dest);
          if ( dest )
          {
            *(_QWORD *)&v27 = 0;
            qfree((__int64)dest);
          }
        }
        if ( (*v3 & 2) != 0 )
          break;
        v8 = (_QWORD *)v3[2];
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v10 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v11 = *v10;
          if ( (*v10 & 2) == 0 )
          {
            while ( (_QWORD *)v10[2] == v3 )
            {
              v3 = v10;
              v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
              v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v11 & 2) != 0 )
              {
                v3 = (_QWORD *)v12;
                goto LABEL_4;
              }
              v10 = (_QWORD *)v12;
            }
          }
          v3 = v10;
          goto LABEL_4;
        }
        do
        {
          v3 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( (*(_BYTE *)v8 & 2) == 0 );
        if ( v2 == v3 )
          goto LABEL_11;
      }
    }
  }
LABEL_11:
  v32 = off_4DBCF8;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return v39 - __readfsqword(0x28u);
}


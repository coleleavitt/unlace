__int64 __fastcall sub_322990(__int64 a1, char a2)
{
  const char *v4; // rsi
  char v5; // bl
  char v6; // bp
  int v7; // r12d
  int v8; // eax
  unsigned __int64 v9; // r9
  int v10; // r13d
  __m128i v11; // xmm0
  int v12; // eax
  char v13; // dl
  __int64 *v14; // rbx
  __int64 (*v15)(); // rdx
  char v16; // al
  int v17; // eax
  __m128i v18; // xmm0
  size_t v19; // rbx
  char *v20; // rbp
  void *v21; // rdi
  void (__fastcall ***v22)(_QWORD); // rdi
  unsigned int v23; // ebx
  unsigned int v25; // ebx
  int v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  char v32; // [rsp+0h] [rbp-88h]
  unsigned __int64 v33; // [rsp+0h] [rbp-88h]
  unsigned __int64 v34; // [rsp+0h] [rbp-88h]
  __m128i v35; // [rsp+20h] [rbp-68h] BYREF
  char *s1; // [rsp+30h] [rbp-58h]
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v35 = 0;
  getinf_buf();
  v4 = &byte_4;
  v5 = getinf_flag();
  v6 = getinf_flag();
  v32 = (getinf() & 0x1006) == 4098;
  s1 = nullptr;
  v7 = getinf();
  v37 = 0;
  get_abi_name();
  v8 = getinf();
  v9 = 0;
  v10 = v8;
  if ( !a2
    && *(_BYTE *)(a1 + 145) == v5
    && *(_BYTE *)(a1 + 144) == v6
    && *(_BYTE *)(a1 + 146) == v32
    && *(_DWORD *)(a1 + 152) == v7 )
  {
    v4 = ::s1;
    if ( *(_QWORD *)(a1 + 168) )
      v4 = *(const char **)(a1 + 160);
    if ( (_QWORD)v37 )
    {
      v17 = strcmp(s1, v4);
      v9 = v37;
      if ( v17 )
      {
        v18 = _mm_load_si128(&v35);
        *(_BYTE *)(a1 + 146) = v32;
        *(__m128i *)(a1 + 128) = v18;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(a1 + 128) != v35.m128i_i32[0] )
      {
        v30 = _mm_load_si128(&v35);
        *(_BYTE *)(a1 + 145) = v5;
        *(_BYTE *)(a1 + 144) = v6;
        *(_BYTE *)(a1 + 146) = v32;
        *(_DWORD *)(a1 + 152) = v7;
        *(__m128i *)(a1 + 128) = v30;
        goto LABEL_20;
      }
    }
    else
    {
      if ( *v4 )
      {
        *(__m128i *)(a1 + 128) = _mm_load_si128(&v35);
        *(_BYTE *)(a1 + 146) = v32;
        goto LABEL_4;
      }
      if ( *(_DWORD *)(a1 + 128) != v35.m128i_i32[0] )
      {
        v31 = _mm_load_si128(&v35);
        *(_BYTE *)(a1 + 145) = v5;
        *(_BYTE *)(a1 + 144) = v6;
        *(_BYTE *)(a1 + 146) = v32;
        *(_DWORD *)(a1 + 152) = v7;
        *(__m128i *)(a1 + 128) = v31;
        goto LABEL_4;
      }
    }
    if ( v35.m128i_i32[1] == *(_DWORD *)(a1 + 132)
      && v35.m128i_i16[4] == *(_WORD *)(a1 + 136)
      && *(_DWORD *)(a1 + 184) == v10 )
    {
      goto LABEL_34;
    }
  }
  v11 = _mm_load_si128(&v35);
  *(_BYTE *)(a1 + 145) = v5;
  *(_BYTE *)(a1 + 144) = v6;
  *(_BYTE *)(a1 + 146) = v32;
  *(_DWORD *)(a1 + 152) = v7;
  *(__m128i *)(a1 + 128) = v11;
  if ( !v9 )
  {
LABEL_4:
    *(_QWORD *)(a1 + 168) = 0;
    goto LABEL_5;
  }
LABEL_20:
  v19 = v9 - 1;
  if ( v9 == 1 )
    goto LABEL_4;
  v20 = s1;
  v21 = *(void **)(a1 + 160);
  if ( *(_QWORD *)(a1 + 176) < v9 )
  {
    v34 = v9;
    v29 = qvector_reserve();
    *(_QWORD *)(a1 + 160) = v29;
    v9 = v34;
    v21 = (void *)v29;
  }
  *(_QWORD *)(a1 + 168) = v9;
  v4 = v20;
  v33 = v9;
  memmove(v21, v20, v19);
  *(_BYTE *)(*(_QWORD *)(a1 + 160) + v33 - 1) = 0;
LABEL_5:
  v12 = getinf();
  if ( v12 == 176 || (v13 = 0, v12 == 256) )
  {
    v4 = &byte_4;
    if ( !(unsigned __int8)getinf_flag()
      || (netnode_check(), v4 = nullptr, v25 = netnode_altval(), v25 <= 0x74)
      || (v26 = *(_DWORD *)(get_ph() + 4), v13 = 2, v26)
      && ((v27 = (unsigned int)(v26 - 13), (unsigned int)v27 > 0x3B)
       || (v28 = 0x800000000000005LL, !_bittest64(&v28, v27))
       || v25 == 117) )
    {
      v13 = 1;
    }
  }
  v14 = *(__int64 **)(a1 + 112);
  *(_BYTE *)(a1 + 148) = v13;
  *(_DWORD *)(a1 + 184) = v10;
  v15 = *(__int64 (**)())(*v14 + 344);
  v16 = 0;
  if ( v15 != sub_3212B0 )
  {
    v16 = ((__int64 (__fastcall *)(__int64 *, const char *))v15)(v14, v4);
    v14 = *(__int64 **)(a1 + 112);
  }
  *(_BYTE *)(a1 + 147) = v16;
  if ( !(unsigned __int8)sub_5E2A0(v14 + 23, v14 + 33) || !(unsigned __int8)sub_310BC0(v14 + 35, (__int64)(v14 + 25)) )
  {
    if ( !under_debugger )
      sub_37B760(0);
    BUG();
  }
  v22 = *(void (__fastcall ****)(_QWORD))(a1 + 1152);
  if ( v22 )
    (**v22)(v22);
  v23 = *(unsigned __int8 *)(a1 + 147);
  if ( (_BYTE)v23 )
  {
    sub_337920(a1);
LABEL_34:
    v23 = *(unsigned __int8 *)(a1 + 147);
  }
  if ( s1 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v23;
}


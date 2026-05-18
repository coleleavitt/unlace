__int64 __fastcall sub_179860(unsigned __int8 *a1, __int64 a2, const char *a3, char a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // r14
  unsigned __int8 *v10; // rax
  __int64 v11; // r13
  size_t v12; // r15
  unsigned __int8 *v13; // r15
  __int64 v14; // rax
  __int32 v15; // r15d
  __m128i *v16; // rbx
  __int64 v17; // rdi
  __int32 v18; // ebp
  __m128i *v19; // rbx
  __int64 v20; // rax
  size_t v21; // r15
  const char *v22; // rsi
  size_t v23; // rax
  size_t v24; // r12
  size_t v25; // rbp
  const char *v26; // rsi
  void *v27; // [rsp+8h] [rbp-140h]
  void *v28; // [rsp+8h] [rbp-140h]
  __m128i *v29; // [rsp+18h] [rbp-130h] BYREF
  void *v30; // [rsp+20h] [rbp-128h] BYREF
  __int128 v31; // [rsp+28h] [rbp-120h]
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int128 v33; // [rsp+48h] [rbp-100h]
  unsigned __int8 v34; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+E8h] [rbp-60h]
  __int64 v36; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+108h] [rbp-40h]

  v29 = (__m128i *)a1;
  v37 = __readfsqword(0x28u);
  sub_19A520(qword_242890);
  v6 = sub_186950();
  if ( !a2 )
  {
    v9 = v6;
    v10 = (unsigned __int8 *)sub_187130(a3);
    if ( v10 )
    {
      if ( v29 )
      {
        v34 = 2;
        v35 = 0;
        v36 = 0;
        sub_176730(&v34, v10);
        sub_1723F0(v29, (__m128i *)&v34);
        sub_176520((__int64)&v34);
      }
    }
    else
    {
      v18 = sub_1872A0(v9, a3);
      if ( v18 == 0x7FFFFFFF )
      {
        v22 = a3;
        v7 = 1538;
        sub_18FAC0(0, v22);
        sub_19A570(qword_242890);
        goto LABEL_4;
      }
      v19 = v29;
      if ( v29 )
      {
        sub_176520((__int64)v29);
        v29->m128i_i8[0] = 6;
        v19->m128i_i32[2] = v18;
      }
    }
    goto LABEL_9;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v7 = 1532;
    sub_19A570(qword_242890);
LABEL_4:
    sub_18FA40(v7);
    return v7;
  }
  v11 = *(_QWORD *)(a2 + 8);
  ptr = nullptr;
  v33 = 0;
  if ( a3 )
  {
    v12 = strlen(a3);
    ptr = (void *)sub_1987B0(&ptr, 0, v12 + 1, 1);
    *(_QWORD *)&v33 = v12 + 1;
    memmove(ptr, a3, v12);
    *((_BYTE *)ptr + v12) = 0;
    v27 = ptr;
    v13 = (unsigned __int8 *)sub_1726E0(v11, (__int64)&ptr);
    if ( v27 )
    {
      *(_QWORD *)&v33 = 0;
      j__free(v27);
    }
    if ( v13 != (unsigned __int8 *)(v11 + 8) )
    {
LABEL_15:
      if ( v29 )
      {
        v34 = 2;
        v35 = 0;
        v36 = 0;
        sub_176730(&v34, v13 + 56);
        sub_1723F0(v29, (__m128i *)&v34);
        v7 = 0;
        sub_176520((__int64)&v34);
        sub_19A570(qword_242890);
        return v7;
      }
      goto LABEL_9;
    }
    v20 = sub_1871B0(*(int *)(v11 + 52));
    ptr = nullptr;
    v28 = (void *)v20;
    v33 = 0;
    v21 = strlen(a3);
    ptr = (void *)sub_1987B0(&ptr, 0, v21 + 1, 1);
    *(_QWORD *)&v33 = v21 + 1;
    memmove(ptr, a3, v21);
    *((_BYTE *)ptr + v21) = 0;
  }
  else
  {
    v13 = (unsigned __int8 *)sub_1726E0(v11, (__int64)&ptr);
    if ( v13 != (unsigned __int8 *)(v11 + 8) )
      goto LABEL_15;
    v14 = sub_1871B0(*(int *)(v11 + 52));
    ptr = nullptr;
    v28 = (void *)v14;
    v33 = 0;
  }
  v15 = sub_172480((__int64)v28, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    j__free(ptr);
  }
  if ( v15 != -1 )
  {
    v16 = v29;
    if ( v29 )
    {
      sub_176520((__int64)v29);
      v29->m128i_i8[0] = 6;
      v17 = qword_242890;
      v16->m128i_i32[2] = v15;
      v7 = 0;
      sub_19A570(v17);
      return v7;
    }
LABEL_9:
    sub_19A570(qword_242890);
    return 0;
  }
  sub_19A570(qword_242890);
  if ( a4 )
  {
    v30 = nullptr;
    v31 = 0;
    if ( a3 )
    {
      v23 = strlen(a3);
      v24 = v23 + 1;
      v25 = v23;
      v30 = (void *)sub_1987B0(&v30, 0, v23 + 1, 1);
      *(_QWORD *)&v31 = v24;
      memmove(v30, a3, v25);
      *((_BYTE *)v30 + v25) = 0;
    }
    sub_177980((__int64)&ptr, nullptr, 1u);
    if ( (unsigned __int8)sub_1796D0(&ptr, v11, (__int64)&v30, (unsigned __int8 **)&v29) )
    {
      sub_177AE0((__int64)&ptr);
      if ( v30 )
      {
        v7 = 0;
        *(_QWORD *)&v31 = 0;
        j__free(v30);
        return v7;
      }
      return 0;
    }
    sub_177AE0((__int64)&ptr);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      j__free(v30);
    }
  }
  ptr = nullptr;
  v33 = 0;
  sub_1871B0(*(int *)(v11 + 52));
  sub_299F0((char **)&ptr);
  v26 = s1;
  if ( (_QWORD)v33 )
    v26 = (const char *)ptr;
  sub_18FAC0(0, v26);
  v7 = sub_18FA40(1538);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    j__free(ptr);
  }
  return v7;
}

__int64 __fastcall sub_52980(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v6; // rdx
  __int64 v7; // rdi
  const char *v8; // rdi
  int v9; // r9d
  __int64 v10; // rbp
  const char *v11; // rcx
  const char *v12; // rdx
  size_t v13; // rax
  size_t v14; // r15
  size_t v15; // rbx
  unsigned int v16; // ebx
  const char *v17; // rdx
  void *v18; // rdi
  __int64 v20; // rdx
  __m128i v21; // xmm0
  char v22; // [rsp+0h] [rbp-10D8h]
  __int64 v25; // [rsp+20h] [rbp-10B8h]
  void *v27; // [rsp+30h] [rbp-10A8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-10A0h]
  void *v29; // [rsp+50h] [rbp-1088h] BYREF
  __m128i v30; // [rsp+58h] [rbp-1080h] BYREF
  void *ptr; // [rsp+70h] [rbp-1068h] BYREF
  __int128 v32; // [rsp+78h] [rbp-1060h]
  char s[4104]; // [rsp+90h] [rbp-1048h] BYREF
  unsigned __int64 v34; // [rsp+1098h] [rbp-40h]

  v6 = s1;
  v7 = a1[4];
  v34 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 8) )
    v6 = *(const char **)a3;
  sub_4BD60(v7, (__int64)"Looking for file with pattern \"%s\"\n", v6);
  if ( *(_QWORD *)(a3 + 8) <= 1u )
    return 0;
  v8 = *(const char **)a3;
  v27 = nullptr;
  v29 = nullptr;
  v28 = 0;
  v30 = 0;
  if ( (unsigned __int8)sub_197730(v8) )
  {
    v16 = sub_4F040((__int64)a1, a2, (__int64)&v27, (const char **)a3, a4);
    if ( !(_BYTE)v16 )
    {
      sub_299F0((char **)&v29);
      if ( (unsigned __int64)v28 <= 1 )
        goto LABEL_23;
LABEL_30:
      sub_2AAE0((__int64 *)&v29);
LABEL_23:
      if ( a5 )
      {
        v18 = *(void **)a5;
        v20 = *(_QWORD *)(a5 + 16);
        *(_QWORD *)a5 = v29;
        v16 = 0;
        v21 = _mm_loadu_si128(&v30);
        v29 = v18;
        v30.m128i_i64[1] = v20;
        *(__m128i *)(a5 + 8) = v21;
      }
      else
      {
        v18 = v29;
        v16 = 0;
      }
      goto LABEL_25;
    }
  }
  else
  {
    v10 = a1[1];
    v25 = v10 + 24LL * a1[2];
    if ( v25 == v10 )
    {
LABEL_29:
      sub_299F0((char **)&v29);
      if ( (unsigned __int64)v28 <= 1 )
        goto LABEL_23;
      goto LABEL_30;
    }
    while ( 1 )
    {
      v11 = s1;
      if ( *(_QWORD *)(a3 + 8) )
        v11 = *(const char **)a3;
      v12 = s1;
      if ( *(_QWORD *)(v10 + 8) )
        v12 = *(const char **)v10;
      sub_197540((unsigned int)s, 4096, (_DWORD)v12, (_DWORD)v11, 0, v9, v22);
      ptr = nullptr;
      v32 = 0;
      v13 = strlen(s);
      v14 = v13 + 1;
      v15 = v13;
      ptr = (void *)sub_1987B0(&ptr, 0, v13 + 1, 1);
      *(_QWORD *)&v32 = v14;
      memmove(ptr, s, v15);
      *((_BYTE *)ptr + v15) = 0;
      v16 = sub_4F040((__int64)a1, a2, (__int64)&v27, (const char **)&ptr, a4);
      if ( ptr )
      {
        *(_QWORD *)&v32 = 0;
        j__free(ptr);
      }
      if ( (_BYTE)v16 )
        break;
      v10 += 24;
      if ( v25 == v10 )
        goto LABEL_29;
    }
    v17 = s1;
    if ( a2[1] )
      v17 = (const char *)*a2;
    sub_4BD60(a1[4], (__int64)"Found license at path: \"%s\"\n", v17);
  }
  v18 = v29;
LABEL_25:
  if ( v18 )
  {
    v30.m128i_i64[0] = 0;
    j__free(v18);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    j__free(v27);
  }
  return v16;
}

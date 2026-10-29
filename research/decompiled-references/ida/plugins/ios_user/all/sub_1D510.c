__int64 __fastcall sub_1D510(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __m128i *v4; // rax
  char v5; // al
  char *v6; // rdi
  __int64 v7; // r13
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r13d
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rcx
  int i; // eax
  int v16; // eax
  unsigned __int64 v17; // r13
  const char *v18; // r14
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  const void *v22; // r15
  void *v23; // rdi
  size_t v24; // r14
  void *v25; // rax
  __int64 v26; // rax
  const char *na; // [rsp+8h] [rbp-1140h]
  size_t n; // [rsp+8h] [rbp-1140h]
  char *v29; // [rsp+10h] [rbp-1138h] BYREF
  __int128 v30; // [rsp+18h] [rbp-1130h]
  _QWORD v31[6]; // [rsp+30h] [rbp-1118h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10E8h]
  __int128 v33; // [rsp+68h] [rbp-10E0h]
  __int128 v34; // [rsp+78h] [rbp-10D0h]
  __int64 v35; // [rsp+88h] [rbp-10C0h]
  char *v36; // [rsp+90h] [rbp-10B8h] BYREF
  __int128 v37; // [rsp+98h] [rbp-10B0h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-10A0h]
  __int64 v39; // [rsp+B8h] [rbp-1090h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-1088h]
  __int64 v41; // [rsp+D0h] [rbp-1078h]
  __int64 v42; // [rsp+D8h] [rbp-1070h]
  __int128 v43; // [rsp+E0h] [rbp-1068h]
  int v44; // [rsp+F0h] [rbp-1058h]
  char s[4104]; // [rsp+100h] [rbp-1048h] BYREF
  unsigned __int64 v46; // [rsp+1108h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v2 = a1 + 1704;
  sub_290B0(a1 + 1704);
  v36 = nullptr;
  v3 = *(_QWORD *)(a1 + 864);
  v37 = 0;
  v4 = (__m128i *)qvector_reserve();
  v36 = (char *)v4;
  *(_QWORD *)&v37 = 33;
  *v4 = _mm_load_si128((const __m128i *)&xmmword_77400);
  v4[1] = _mm_load_si128((const __m128i *)&xmmword_77410);
  v36[32] = 0;
  v5 = sub_5B360(v3, &v36);
  v6 = v36;
  *(_BYTE *)(a1 + 2034) = v5;
  if ( v6 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( (unsigned __int8)qgetenv() )
    *(_BYTE *)(a1 + 2033) = 1;
  v7 = *(_QWORD *)(a1 + 864);
  v29 = nullptr;
  v36 = nullptr;
  v30 = 0;
  v37 = 0;
  v36 = (char *)qvector_reserve();
  *(_QWORD *)&v37 = 15;
  strcpy(v36, "qShlibInfoAddr");
  if ( (int)sub_5ABF0(v7, (unsigned int)&v36, v8, 1868983881, v9, v10) <= 0
    || !(unsigned __int8)sub_5ABB0(*(_QWORD *)(a1 + 864), &v29) )
  {
    if ( !v36 )
    {
LABEL_8:
      v11 = 0;
      goto LABEL_9;
    }
LABEL_7:
    *(_QWORD *)&v37 = 0;
    qfree();
    goto LABEL_8;
  }
  if ( (unsigned int)sub_59CB0(&v29, 0) != 1 )
  {
    if ( !v36 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  v13 = v30;
  if ( (_QWORD)v30 )
  {
    v14 = v29;
    v13 = 0;
    for ( i = *v29; *v14; i = (char)*v14 )
    {
      while ( 1 )
      {
        ++v14;
        if ( (unsigned __int8)(i - 48) > 9u )
          break;
        v13 = (i - 48) | (16 * v13);
        i = (char)*v14;
        if ( !*v14 )
          goto LABEL_27;
      }
      if ( (unsigned __int8)(i - 97) <= 5u )
      {
        v16 = i - 87;
      }
      else
      {
        if ( (unsigned __int8)(i - 65) > 5u )
        {
          v13 = -1;
          break;
        }
        v16 = i - 55;
      }
      v13 = v16 | (16 * v13);
    }
  }
LABEL_27:
  *(_QWORD *)(a1 + 1800) = v13;
  sub_1C950(a1, (__int64)"%a: dyld_all_image_infos\n", 0.0);
  v17 = *(_QWORD *)(a1 + 1944);
  if ( v17 > 1 )
  {
    v22 = *(const void **)(a1 + 1936);
    v23 = *(void **)(a1 + 1912);
    if ( *(_QWORD *)(a1 + 1928) < v17 )
    {
      v26 = qvector_reserve();
      *(_QWORD *)(a1 + 1912) = v26;
      v23 = (void *)v26;
    }
    *(_QWORD *)(a1 + 1920) = v17;
    memmove(v23, v22, v17 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 1912) + v17 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 1920) = 0;
  }
  *(_BYTE *)(a1 + 1729) = 1;
  if ( !(unsigned __int8)sub_29930(v2) )
    goto LABEL_8;
  v18 = *(const char **)(a1 + 1840);
  v11 = sub_315F0(v2, v18, s, 4096);
  if ( !(_BYTE)v11 )
    goto LABEL_8;
  sub_1C950(a1, (__int64)"%a: found dyld header and file %s\n", 0.0, v18);
  *(_QWORD *)(a1 + 1784) = v18;
  v39 = 0;
  v42 = 0;
  v37 = 0u;
  v41 = 0;
  v44 = 0;
  v36 = (char *)v18;
  v38 = 0;
  v40 = 0;
  v43 = 0;
  v19 = strlen(s);
  if ( v19 )
  {
    v24 = v19 + 1;
    n = v19;
    v25 = (void *)qvector_reserve();
    *(_QWORD *)&v38 = v24;
    *((_QWORD *)&v37 + 1) = v25;
    memmove(v25, s, n);
    *(_BYTE *)(*((_QWORD *)&v37 + 1) + n) = 0;
    v18 = v36;
  }
  sub_29370(v2, 0, &v37, &v39, v18);
  sub_4E160(a1, &v36);
  v20 = *(_QWORD *)a1;
  v33 = 0;
  v31[1] = 4;
  memset(&v31[2], 0, 32);
  v32 = 0;
  v31[0] = &off_8B840;
  v35 = a1;
  v34 = 0;
  (*(void (__fastcall **)(__int64, _QWORD *, char **))(v20 + 840))(a1, v31, &v36);
  if ( !*(_BYTE *)(a1 + 2033) )
  {
    v21 = *(_QWORD *)(a1 + 1832);
    if ( v21 )
    {
      na = *(const char **)(a1 + 1832);
      (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a1 + 312LL))(
        a1,
        0,
        4,
        v21,
        0xFFFFFFFFLL);
      sub_1C950(a1, (__int64)"%a: dyld_notify bpt: %s\n", 0.0, na);
    }
  }
  sub_34320(v2);
  v31[0] = off_8B7D0;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v37 + 1) )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
LABEL_9:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v11;
}


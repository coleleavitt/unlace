__int64 __fastcall sub_43DC0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  const char *v7; // rcx
  unsigned int v8; // ebx
  void (__fastcall ***v9)(_QWORD); // rdi
  bool v10; // zf
  void (__fastcall ***v11)(_QWORD); // rdi
  __int64 v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // edi
  const char *v18; // r8
  __int64 v19; // r9
  void *v20; // rdi
  __int64 v21; // rax
  void *v22; // rsi
  void *v23; // rdi
  __int64 v24; // rax
  void *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v30; // [rsp+10h] [rbp-A0h] BYREF
  int v31; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned int v32; // [rsp+18h] [rbp-98h] BYREF
  int v33; // [rsp+1Ch] [rbp-94h] BYREF
  __int64 v34; // [rsp+20h] [rbp-90h] BYREF
  __int64 v35; // [rsp+28h] [rbp-88h] BYREF
  void *v36; // [rsp+30h] [rbp-80h] BYREF
  __int128 v37; // [rsp+38h] [rbp-78h]
  void *ptr; // [rsp+50h] [rbp-60h] BYREF
  __int128 v39; // [rsp+58h] [rbp-58h]
  int v40; // [rsp+74h] [rbp-3Ch] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a4 + 80) > 1u )
  {
    v5 = (__int64)(a2 + 5);
    sub_318B0(
      (__int64)&v34,
      *(_QWORD *)(a1 + 8),
      "SELECT id, is_admin, salt, passhash, passhash_nrounds FROM users WHERE user_name = ? AND is_deleted = 0");
    if ( !v34 )
      return 0;
    v7 = s1;
    if ( *(_QWORD *)(a3 + 80) )
      v7 = *(const char **)(a3 + 72);
    if ( !(unsigned __int8)sub_2F9D0(v5, (__int64)&v34, (__int64)"s", v7) || (unk_241E60(&v35, &v34, v5), !v35) )
    {
      v8 = 0;
LABEL_13:
      v11 = (void (__fastcall ***)(_QWORD))v34;
      if ( v34 )
      {
        v10 = (*(_DWORD *)(v34 + 8))-- == 1;
        if ( v10 )
          (**v11)(v11);
      }
      return v8;
    }
    if ( !(unsigned __int8)unk_241E70(&v35, v5) )
      goto LABEL_8;
    v30 = 0;
    v36 = nullptr;
    v37 = 0;
    if ( (unsigned __int8)sub_2F910(v5, (__int64)&v35, (__int64)"uyiBi", &v30, &v33, &v31, &v36, &v32) )
    {
      v16 = *(_DWORD *)(a3 + 112) & 0xFFFFFFFE;
      if ( v33 )
        v16 = *(_DWORD *)(a3 + 112) | 1;
      v17 = v32;
      *(_DWORD *)(a3 + 112) = v16 | 2;
      if ( v17 <= 0 )
      {
        v25 = (void *)a2[2];
        if ( a2[4] <= 0xEu )
        {
          v28 = sub_1987B0(a2 + 2, v25, 15, 1);
          a2[2] = v28;
          v25 = (void *)v28;
        }
        a2[3] = 15;
        qmemcpy(v25, "bad login info", 14);
        v26 = a2[2];
        v8 = 0;
        v20 = v36;
        *(_BYTE *)(v26 + 14) = 0;
      }
      else
      {
        ptr = nullptr;
        v39 = 0;
        ptr = (void *)sub_1987B0(&ptr, 0, 32, 1);
        memset((char *)ptr + v39, 0, 32 - v39);
        *(_QWORD *)&v39 = 32;
        v18 = s1;
        v19 = *(_QWORD *)(a4 + 80);
        if ( v19 )
        {
          v18 = *(const char **)(a4 + 72);
          --v19;
        }
        v40 = v31;
        if ( (unsigned int)sub_19DEB0(ptr, 32, &v40, 4, v18, v19, v32) || (_QWORD)v39 != (_QWORD)v37 )
        {
LABEL_32:
          v22 = (void *)a2[2];
          if ( a2[4] <= 0xCu )
          {
            v27 = sub_1987B0(a2 + 2, v22, 13, 1);
            a2[2] = v27;
            v22 = (void *)v27;
          }
          a2[3] = 13;
          qmemcpy(v22, "login failed", 12);
          v23 = ptr;
          *(_BYTE *)(a2[2] + 12LL) = 0;
          if ( v23 )
          {
            *(_QWORD *)&v39 = 0;
            j__free(v23);
          }
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            j__free(v36);
          }
LABEL_8:
          v8 = 0;
LABEL_9:
          v9 = (void (__fastcall ***)(_QWORD))v35;
          if ( v35 )
          {
            v10 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v10 )
              (**v9)(v9);
          }
          goto LABEL_13;
        }
        v20 = v36;
        if ( (_QWORD)v39 )
        {
          v21 = 0;
          while ( *((_BYTE *)ptr + v21) == *((_BYTE *)v36 + v21) )
          {
            if ( (_QWORD)v39 == ++v21 )
              goto LABEL_45;
          }
          goto LABEL_32;
        }
LABEL_45:
        v8 = v30;
        if ( ptr )
        {
          *(_QWORD *)&v39 = 0;
          j__free(ptr);
          v20 = v36;
        }
      }
    }
    else
    {
      v20 = v36;
      v8 = 0;
    }
    if ( v20 )
    {
      *(_QWORD *)&v37 = 0;
      j__free(v20);
    }
    goto LABEL_9;
  }
  v13 = a2[2];
  if ( a2[4] <= 0x13u )
  {
    v24 = sub_1987B0(a2 + 2, v13, 20, 1);
    a2[2] = v24;
    v13 = v24;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B60);
  a2[3] = 20;
  *(__m128i *)v13 = si128;
  *(_DWORD *)(v13 + 15) = 1936482665;
  v15 = a2[2];
  v8 = 0;
  *(_BYTE *)(v15 + 19) = 0;
  return v8;
}

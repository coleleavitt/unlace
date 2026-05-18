__int64 __fastcall sub_4F560(__int64 a1, const char *a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // eax
  const char *v6; // rsi
  char *v7; // rsi
  _BYTE *v8; // rax
  const char *v9; // rsi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  int v12[4]; // [rsp+8h] [rbp-60h]
  int v13; // [rsp+20h] [rbp-48h] BYREF
  __int16 v14; // [rsp+24h] [rbp-44h]
  int v15[2]; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+34h] [rbp-34h]
  int v18[2]; // [rsp+38h] [rbp-30h]

  v3 = a3 | 1;
  *(_QWORD *)v18 = __readfsqword(0x28u);
  sub_4BC40((__int64 (__fastcall ***)(_QWORD))"%s\n", a2);
  ptr = nullptr;
  *(_OWORD *)v12 = 0;
  v4 = sub_4E5C0(a1, (char **)&ptr, v3);
  if ( !(_BYTE)v4 )
  {
LABEL_12:
    v9 = s1;
    if ( *(_QWORD *)v12 )
      v9 = (const char *)ptr;
    sub_4BC40((__int64 (__fastcall ***)(_QWORD))"Reconnecting: %s\n", v9);
    v4 = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 208) )
  {
    if ( !*(_BYTE *)(a1 + 352) )
    {
      v5 = *(_DWORD *)(a1 + 200);
      v17 = 0;
      v13 = v5;
      v14 = *(_WORD *)(a1 + 204);
      *(_QWORD *)v15 = *(_QWORD *)(a1 + 212);
      v16 = *(_DWORD *)(a1 + 220);
      if ( (unsigned int)sub_4F2F0(a1, (__int64)&v13, v3, (__int64 *)&ptr) )
      {
        v6 = s1;
        if ( *(_QWORD *)v12 )
          v6 = (const char *)ptr;
        sub_4BC40((__int64 (__fastcall ***)(_QWORD))"Failed to check out licenses: %s\n", v6);
        v7 = (char *)ptr;
        if ( *(_QWORD *)&v12[2] <= 0x2Fu )
        {
          ptr = (void *)sub_1987B0(&ptr, ptr, 48, 1);
          v7 = (char *)ptr;
        }
        *(_QWORD *)v12 = 48;
        *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_1B6C90);
        v8 = ptr;
        *((__m128i *)v7 + 1) = _mm_load_si128((const __m128i *)&xmmword_1B6CA0);
        *(__m128i *)(v7 + 31) = _mm_load_si128((const __m128i *)&xmmword_1B6CB0);
        v8[47] = 0;
        goto LABEL_12;
      }
    }
  }
  if ( (word_2439A4 & 0x200) != 0 )
    sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Reconnected to license server\n");
LABEL_15:
  if ( ptr )
  {
    *(_QWORD *)v12 = 0;
    j__free(ptr);
  }
  return v4;
}

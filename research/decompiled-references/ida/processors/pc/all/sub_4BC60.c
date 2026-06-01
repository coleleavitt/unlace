__int64 __fastcall sub_4BC60(__int64 a1, __int64 a2, _BYTE *a3)
{
  char **v5; // r15
  __m128i v6; // xmm1
  __int64 v7; // rdi
  char *v8; // rax
  __int64 (__fastcall **v9)(); // r15
  _BOOL4 v10; // r13d
  __m128i v11; // xmm3
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(); // rax
  __int64 result; // rax
  __m128i si128; // [rsp+0h] [rbp-1C8h] BYREF
  char *v16; // [rsp+18h] [rbp-1B0h]
  _BYTE v17[360]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int64 v18; // [rsp+188h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( !sub_471C0(a1, (__int64)a3) )
    return 0;
  if ( (a3[28] & 0x10) != 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_950A0);
LABEL_8:
    v9 = (__int64 (__fastcall **)())&off_16C710;
    v10 = get_auto_state() == 40;
    while ( 1 )
    {
      v11 = _mm_load_si128(&si128);
      v12 = *(_QWORD *)(a2 + 96);
      v13 = *v9;
      *(_DWORD *)a2 = 0x800000;
      *(_WORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 48) = 0;
      *(_QWORD *)(a2 + 56) = 0;
      *(_DWORD *)(a2 + 64) = -1;
      *(_BYTE *)(a2 + 68) = 0;
      *(_QWORD *)(a2 + 72) = 0;
      *(_DWORD *)(a2 + 80) = 2;
      *(_QWORD *)(a2 + 88) = -1;
      *(__m128i *)(a2 + 8) = v11;
      *(_OWORD *)(a2 + 24) = -1;
      if ( v12 )
      {
        *(_QWORD *)(a2 + 104) = 0;
        v16 = (char *)v13;
        qfree();
        v13 = (__int64 (__fastcall *)())v16;
      }
      *(_QWORD *)(a2 + 96) = 0;
      *(_OWORD *)(a2 + 104) = 0;
      result = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, _BOOL4))v13)(a1, a2, a3, v10);
      if ( (_DWORD)result )
        break;
      if ( off_16C720 == ++v9 )
        return 0;
    }
  }
  else
  {
    v5 = (char **)off_16C720;
    si128 = _mm_load_si128((const __m128i *)&xmmword_950A0);
    while ( 1 )
    {
      v6 = _mm_load_si128(&si128);
      v7 = *(_QWORD *)(a2 + 96);
      v8 = *v5;
      *(_DWORD *)a2 = 0x800000;
      *(_WORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 48) = 0;
      *(_QWORD *)(a2 + 56) = 0;
      *(_DWORD *)(a2 + 64) = -1;
      *(_BYTE *)(a2 + 68) = 0;
      *(_QWORD *)(a2 + 72) = 0;
      *(_DWORD *)(a2 + 80) = 2;
      *(_QWORD *)(a2 + 88) = -1;
      *(__m128i *)(a2 + 8) = v6;
      *(_OWORD *)(a2 + 24) = -1;
      if ( v7 )
      {
        *(_QWORD *)(a2 + 104) = 0;
        v16 = v8;
        qfree();
        v8 = v16;
      }
      *(_QWORD *)(a2 + 96) = 0;
      *(_OWORD *)(a2 + 104) = 0;
      qmemcpy(v17, a3, sizeof(v17));
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *))v8)(a1, a2, v17) )
        return 1;
      if ( off_16C740 == ++v5 )
        goto LABEL_8;
    }
  }
  return result;
}

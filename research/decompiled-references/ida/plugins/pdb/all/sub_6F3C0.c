__int64 __fastcall sub_6F3C0(__int64 *a1, _DWORD *a2, unsigned int a3, int a4)
{
  _DWORD *v7; // rax
  _QWORD *v8; // r11
  int v9; // ecx
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rbx
  unsigned int *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 (__fastcall **v22)(); // rax
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned __int64 v25; // xmm0_8
  __int64 *v26; // rax
  __int64 v28; // rax
  __m128i v29; // xmm5
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 *v32; // rax
  __m128i si128; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-98h]
  unsigned int *v35; // [rsp+28h] [rbp-90h]
  __int64 v36; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v37)(); // [rsp+38h] [rbp-80h]
  unsigned int v38; // [rsp+44h] [rbp-74h]
  _QWORD *v39; // [rsp+48h] [rbp-70h]
  unsigned __int8 v40; // [rsp+5Bh] [rbp-5Dh] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-5Ch] BYREF
  __int64 v42; // [rsp+60h] [rbp-58h] BYREF
  int v43; // [rsp+68h] [rbp-50h] BYREF
  __int64 v44[9]; // [rsp+70h] [rbp-48h] BYREF

  v44[1] = __readfsqword(0x28u);
  v7 = sub_5FD60(a1 + 45, a3);
  v9 = a4 ^ 1;
  if ( ((v7 != nullptr) & ((unsigned __int8)a4 ^ 1)) != 0 )
  {
    LOBYTE(v9) = (v7 != nullptr) & (a4 ^ 1);
    v24 = v9;
    if ( a2 )
      *a2 = **((_DWORD **)v7 + 2);
  }
  else
  {
    if ( (a3 & 0x700) == 0 )
    {
      v10 = a1[1];
      v14 = 16;
      v38 = -1;
      v34 = 0xFFFFFFFF00000001LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
      goto LABEL_5;
    }
    v12 = a3;
    v10 = a1[1];
    v11 = *a1;
    BYTE1(v12) = BYTE1(a3) & 0xF8;
    v13 = sub_5FD60(v8, v12);
    if ( v13 )
    {
      v14 = 14;
      v15 = **((_DWORD **)v13 + 2);
      si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
      v38 = v15;
      v34 = 0xFFFFFFFF00000001LL;
LABEL_5:
      v37 = off_B0650;
      v36 = 0xFFFFFFFFLL;
      v35 = &v41;
LABEL_6:
      v16 = (v10 - *a1) >> 3;
      LODWORD(v39) = v16;
      v17 = operator new(0x68u);
      v18 = _mm_load_si128(&si128);
      *(_DWORD *)(v17 + 16) = v16;
      v19 = v17;
      v20 = v35;
      *(_DWORD *)(v17 + 20) = v14;
      *(_QWORD *)(v17 + 24) = 0;
      *(_OWORD *)(v17 + 32) = 0;
      v21 = v34;
      *(_DWORD *)(v19 + 80) = -1;
      *(_QWORD *)(v19 + 48) = v21;
      *(_QWORD *)(v19 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v19 + 84) = -1;
      v22 = v37;
      *(_QWORD *)(v19 + 88) = 0;
      *(_QWORD *)v19 = v22;
      v23 = v36;
      *(_QWORD *)(v19 + 8) = a1;
      *(_QWORD *)(v19 + 96) = v23;
      *(__m128i *)(v19 + 64) = v18;
      v24 = sub_73420(v20, &v40, a3);
      if ( (_BYTE)v24 )
      {
        v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v41)).m128i_u64[0];
        *(_QWORD *)(v19 + 88) = v40;
        v26 = (__int64 *)a1[1];
        *(_QWORD *)(v19 + 96) = v25;
        if ( v26 == (__int64 *)a1[2] )
        {
          v44[0] = v19;
          sub_57F80((__int64)a1, v44);
          if ( v44[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v44[0] + 272LL))(v44[0]);
        }
        else
        {
          *v26 = v19;
          a1[1] += 8;
        }
        if ( !(_BYTE)a4 )
          sub_6F130(a1, a3, (int)v39);
        if ( a2 )
          *a2 = v16;
      }
      else
      {
        sub_244A0();
        if ( v19 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 272LL))(v19, a3);
      }
      return v24;
    }
    v28 = operator new(0x68u);
    v29 = _mm_load_si128((const __m128i *)&xmmword_94160);
    *(_OWORD *)(v28 + 32) = 0;
    *(_DWORD *)(v28 + 20) = 16;
    *(_DWORD *)(v28 + 16) = (v10 - v11) >> 3;
    *(_QWORD *)(v28 + 24) = 0;
    v38 = (v10 - v11) >> 3;
    v34 = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v28 + 48) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v28 + 56) = 0xFFFFFFFFLL;
    v37 = off_B0650;
    *(_QWORD *)v28 = off_B0650;
    *(_WORD *)(v28 + 84) = -1;
    *(_QWORD *)(v28 + 96) = 0xFFFFFFFFLL;
    *(_DWORD *)(v28 + 80) = -1;
    *(_QWORD *)(v28 + 88) = 0;
    *(_QWORD *)(v28 + 8) = a1;
    v36 = 0xFFFFFFFFLL;
    *(__m128i *)(v28 + 64) = v29;
    v44[0] = v28;
    v39 = (_QWORD *)v28;
    v35 = &v41;
    si128 = v29;
    v30 = sub_73420(&v43, &v41, v12);
    v31 = (__int64)v39;
    v24 = v30;
    if ( (_BYTE)v30 )
    {
      v44[0] = 0;
      v39[11] = (unsigned __int8)v41;
      *(_DWORD *)(v31 + 100) = v43;
      v32 = (__int64 *)a1[1];
      if ( v32 == (__int64 *)a1[2] )
      {
        v42 = v31;
        sub_57F80((__int64)a1, &v42);
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 272LL))(v42);
      }
      else
      {
        *v32 = v31;
        a1[1] += 8;
      }
      sub_6F130(a1, v12, v38);
      v10 = a1[1];
      v14 = 14;
      goto LABEL_6;
    }
    sub_244A0();
    if ( v39 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v39 + 272LL))(v39, v12);
  }
  return v24;
}


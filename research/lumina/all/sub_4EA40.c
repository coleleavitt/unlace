__int64 __fastcall sub_4EA40(__int64 a1, int *a2)
{
  int v2; // r11d
  __m128i v3; // xmm0
  void *v4; // r13
  _DWORD *v6; // rax
  void *v7; // [rsp+10h] [rbp-80h] BYREF
  __m128i v8; // [rsp+18h] [rbp-78h]
  void *ptr; // [rsp+30h] [rbp-60h] BYREF
  __m128i v10; // [rsp+38h] [rbp-58h] BYREF
  int v11; // [rsp+56h] [rbp-3Ah]
  __int16 v12; // [rsp+5Ah] [rbp-36h]
  int v13; // [rsp+5Ch] [rbp-34h]
  __int16 v14; // [rsp+60h] [rbp-30h]
  int v15; // [rsp+62h] [rbp-2Eh]
  __int16 v16; // [rsp+66h] [rbp-2Ah]
  unsigned __int64 v17; // [rsp+68h] [rbp-28h]

  v2 = *a2;
  v17 = __readfsqword(0x28u);
  v7 = nullptr;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v11 = 0;
  v12 = 0;
  v8 = 0;
  if ( v2 || *((_WORD *)a2 + 2) )
  {
    ptr = nullptr;
    v10 = 0;
    sub_299F0((char **)&ptr);
    v3 = _mm_loadu_si128(&v10);
    v10 = 0;
    v4 = ptr;
    ptr = nullptr;
    v7 = v4;
    v8 = v3;
  }
  else
  {
    v6 = (_DWORD *)sub_1987B0(&v7, 0, 8, 1);
    v7 = v6;
    v8.m128i_i64[0] = 8;
    *v6 = 1886217512;
    *(_DWORD *)((char *)v6 + 3) = 695825520;
    *((_BYTE *)v7 + 7) = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_299F0((char **)a1);
  if ( v7 )
  {
    v8.m128i_i64[0] = 0;
    j__free(v7);
  }
  return a1;
}

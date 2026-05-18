__int64 __fastcall sub_5E210(__int64 a1, int *a2, __int64 *a3, __int64 a4)
{
  _QWORD *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+8h] [rbp-40h]
  int v13; // [rsp+9h] [rbp-3Fh]
  __int16 v14; // [rsp+Dh] [rbp-3Bh]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v12 = 18;
  v11 = off_236AA0;
  v13 = *a2;
  v14 = *((_WORD *)a2 + 2);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v11);
  v7 = sub_5E7B0(a1, v6, 23, a4, 0);
  if ( !v7 )
  {
    v8 = *a3;
    v9 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    *a3 = v6[2];
    a3[1] = v6[3];
    a3[2] = v6[4];
    v6[2] = v8;
    *(__m128i *)(v6 + 3) = v9;
  }
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  nullsub_19(&v11);
  return v7;
}

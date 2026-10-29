unsigned __int64 __fastcall sub_19640(__int64 a1, _QWORD *a2, unsigned __int8 *a3, __int16 a4, char a5)
{
  unsigned __int64 v7; // rbx
  __int16 v9; // ax
  _QWORD *outctx; // r12
  _QWORD *v12; // rdi
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v7 = a2[1];
  v16 = __readfsqword(0x28u);
  v13 = 0;
  v15 = 0;
  v14 = 0;
  sub_6FF0(a1, (__int64)&v13, (__int64)a3);
  v9 = *a3;
  LOBYTE(v15) = 0;
  WORD4(v14) = a4;
  WORD5(v14) = v9;
  if ( v9 == 7 )
    WORD1(v14) = ((a3[1] & 0x10) != 0) + 11;
  outctx = (_QWORD *)create_outctx(-1, 0, 0);
  (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*outctx + 224LL))(outctx, a2, 1000);
  sub_10E20(outctx, 0);
  sub_10F40(outctx, &v13, 1u);
  (*(void (__fastcall **)(_QWORD *, __int64))(*outctx + 128LL))(outctx, 0xFFFFFFFFLL);
  if ( a5 )
  {
    while ( v7 < a2[1] )
    {
      v12 = (_QWORD *)(*a2 + 24 * v7);
      if ( v12[1] > 1u )
        tag_remove(v12, *v12, 0);
      ++v7;
    }
  }
  if ( outctx )
    (*(void (__fastcall **)(_QWORD *))(*outctx + 8LL))(outctx);
  return v16 - __readfsqword(0x28u);
}

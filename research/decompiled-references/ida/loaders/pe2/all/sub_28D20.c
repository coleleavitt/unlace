__int64 __fastcall sub_28D20(__int64 a1, _DWORD **a2, int a3, _DWORD *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v11; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-D0h]
  unsigned int v18; // [rsp+14h] [rbp-C4h]
  unsigned int v19; // [rsp+3Ch] [rbp-9Ch] BYREF
  __m128i v20; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-88h]
  int v22; // [rsp+58h] [rbp-80h]
  int v23; // [rsp+60h] [rbp-78h] BYREF
  __int64 v24; // [rsp+64h] [rbp-74h]
  __int128 v25; // [rsp+70h] [rbp-68h]
  __int64 v26; // [rsp+80h] [rbp-58h]
  __int64 v27; // [rsp+90h] [rbp-48h]
  unsigned __int64 v28; // [rsp+98h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a6 )
  {
    *a6 = 0;
    v11 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v11 + 392) || !*(_BYTE *)(v11 + 312) )
      return 1;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v11 + 392) || !*(_BYTE *)(v11 + 312) )
      return 1;
  }
  v17 = v11 + 312;
  v18 = (a3 & 0xFFFFFF) - 1;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_27CB0(a1, v11 + 312, v18, 4u, &v20) )
    return 2147500037LL;
  if ( v20.m128i_i64[1] < v21 )
  {
    v13 = 0;
    if ( (unsigned int)(v21 - v20.m128i_i32[2]) <= 1 )
      goto LABEL_8;
    sub_282A0((__int64)&v20, &v23, 1);
    if ( (v23 & 0x10) != 0 )
      sub_28300((__int64)&v20);
    v13 = sub_28300((__int64)&v20);
    LOBYTE(v23) = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v25 = 0;
    if ( (unsigned __int8)sub_28400(&v20, (__int64)&v23) )
    {
      sub_22A90((__int64)&v23);
      goto LABEL_8;
    }
    sub_22A90((__int64)&v23);
    return 2147500037LL;
  }
  v13 = 0;
LABEL_8:
  v14 = *(_QWORD *)(a1 + 8);
  v19 = 0;
  v15 = sub_239A0(v14, &v19, v17, v18, 5u);
  v16 = v19;
  if ( v15 )
    v16 = v19 | 0x8000000;
  else
    v13 = 0;
  return sub_22950(*(_QWORD *)(a1 + 8), v16, v13, a2, a4, a5, a6);
}


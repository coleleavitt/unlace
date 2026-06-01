__int64 __fastcall sub_27B80(__int64 a1, _DWORD **a2, int a3, _DWORD *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v11; // rax
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-C8h]
  unsigned int v17; // [rsp+10h] [rbp-B8h]
  unsigned int v18; // [rsp+14h] [rbp-B4h]
  unsigned int v19; // [rsp+2Ch] [rbp-9Ch] BYREF
  __m128i v20; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+54h] [rbp-74h]
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int64 v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+80h] [rbp-48h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v27 = __readfsqword(0x28u);
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
  v21 = 0;
  v17 = (a3 & 0xFFFFFF) - 1;
  v16 = v11 + 312;
  v20 = 0;
  if ( !(unsigned __int8)sub_26B30(a1, v11 + 312, v17, 4u, &v20) )
    return 2147500037LL;
  sub_27120((__int64)&v20, &v22, 1);
  if ( (v22 & 0x10) != 0 )
    sub_27180((__int64)&v20);
  v18 = sub_27180((__int64)&v20);
  LOBYTE(v22) = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v24 = 0;
  if ( !(unsigned __int8)sub_27280(&v20, (__int64)&v22) )
  {
    sub_21A20((__int64)&v22);
    return 2147500037LL;
  }
  sub_21A20((__int64)&v22);
  v13 = *(_QWORD *)(a1 + 8);
  v19 = 0;
  v14 = sub_22900(v13, &v19, v16, v17, 5u);
  v15 = v19;
  if ( v14 )
    v15 = v19 | 0x8000000;
  else
    v18 = 0;
  return sub_218E0(*(_QWORD *)(a1 + 8), v15, v18, a2, a4, a5, a6);
}

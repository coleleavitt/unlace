unsigned __int64 __fastcall sub_7190(
        __int64 *a1,
        unsigned int a2,
        const char *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int *a8,
        __int64 *a9)
{
  __int64 v10; // rsi
  __int64 v12; // r8
  const char *v13; // r10
  __int64 v14; // rbx
  int v15; // r11d
  unsigned int v16; // r8d
  void (*v17)(); // rax
  int v20; // [rsp+10h] [rbp-68h]
  unsigned __int8 v21; // [rsp+18h] [rbp-60h]
  __m128i v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v10 = a5;
  v12 = a1[5];
  v23 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(v12 + 64) )
    return v23 - __readfsqword(0x28u);
  v20 = -1;
  v13 = a3;
  v14 = *(_QWORD *)(v12 + 56) + 24LL * a2;
  v15 = *a8;
  v16 = *(unsigned __int8 *)(v14 + 23);
  if ( *a8 >= v16 )
    goto LABEL_11;
  v21 = a6;
  do
  {
    while ( 1 )
    {
      if ( (*(_WORD *)(v14 + 20) & 0xF) == 0 && v16 - v15 == 1 )
      {
        v20 = sub_65E0((__int64)a1, a2, a4, a8);
        goto LABEL_5;
      }
      if ( (*(_WORD *)(v14 + 20) & 0x30) == 0x20 )
        break;
      sub_6570(a1[5], a2, &v22, a8);
LABEL_5:
      v15 = *a8;
      v16 = *(unsigned __int8 *)(v14 + 23);
      if ( *a8 >= v16 )
        goto LABEL_10;
    }
    sub_6EF0((__int64)a1, a2, a3, a4, a8, 1, a9);
    v15 = *a8;
    v16 = *(unsigned __int8 *)(v14 + 23);
  }
  while ( *a8 < v16 );
LABEL_10:
  v13 = a3;
  v10 = (unsigned int)v10;
  a6 = v21;
LABEL_11:
  if ( a4 != -1 )
    return sub_5BC0((__int64)a1, v10, a4, v13, v20, a6, a7);
  if ( *(_DWORD *)(v14 + 16) == 0xFFFF )
    return v23 - __readfsqword(0x28u);
  v17 = *(void (**)())(*a1 + 16);
  if ( v17 == nullsub_1 )
    return v23 - __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64 *, __int64, const char *, _QWORD, bool, __int64))v17)(
           a1,
           v10,
           v13,
           a6,
           (*(_WORD *)(v14 + 20) & 0x30) == 32,
           -1);
}

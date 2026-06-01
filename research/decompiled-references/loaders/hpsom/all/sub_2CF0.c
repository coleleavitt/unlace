__int64 __fastcall sub_2CF0(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v5; // edx
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // esi
  __int64 v10; // rax
  const char *v11; // rdx
  _DWORD *v12; // rsi
  __int64 v13; // rax
  unsigned int v14[32]; // [rsp+0h] [rbp-B8h] BYREF
  char v15; // [rsp+80h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  qlseek(a3, 0, 0);
  if ( qlread(a3, v14, 128) != 128 )
    return 0;
  v5 = 0;
  v6 = v14;
  do
  {
    v7 = *v6++;
    v8 = v5;
    v5 ^= v7;
  }
  while ( v6 != (unsigned int *)&v15 );
  if ( v7 != v8 )
    return 0;
  sub_1760(v14);
  v10 = HIWORD(v14[0]);
  if ( SHIWORD(v14[0]) <= 270 )
  {
    if ( SHIWORD(v14[0]) > 259 )
    {
      LOWORD(v10) = HIWORD(v14[0]) - 260;
      switch ( v10 )
      {
        case 0LL:
          v11 = "Executable Library";
          goto LABEL_10;
        case 2LL:
          v11 = "Relocatable";
          goto LABEL_10;
        case 3LL:
          v11 = "Non-sharable, executable";
          goto LABEL_10;
        case 4LL:
          v11 = "Sharable, executable";
          goto LABEL_10;
        case 7LL:
          v11 = "Sharable, demand-loadable executable";
          goto LABEL_10;
        case 9LL:
          v11 = "Dynamic Load Library";
          goto LABEL_10;
        case 10LL:
          v11 = "Shared Library";
          goto LABEL_10;
        default:
          return 0;
      }
    }
    return 0;
  }
  v11 = "Relocatable Library";
  if ( HIWORD(v14[0]) != 1561 )
    return 0;
LABEL_10:
  sub_2C30(a1, (__int64)"HP-UX SOM (%s)", v11);
  v12 = (_DWORD *)*a2;
  if ( (unsigned __int64)a2[2] <= 4 )
  {
    v13 = qvector_reserve(a2, v12, 5, 1);
    *a2 = v13;
    v12 = (_DWORD *)v13;
  }
  a2[1] = 5;
  *v12 = 1634758760;
  *(_BYTE *)(*a2 + 4) = 0;
  return 1;
}

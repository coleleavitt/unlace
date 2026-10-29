unsigned __int64 __fastcall sub_11D690(_DWORD *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v8; // rdi
  char *v9; // rbp
  __m128i *v10; // r12
  int v11; // r14d
  __int64 v12; // r15
  int v13; // r10d
  __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD v21[17]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp-40h]

  v8 = *a4;
  v22 = __readfsqword(0x28u);
  v9 = (char *)sub_D9DB0(v8, 1u, a2, (__int64)a4, a5, a6, a7);
  v10 = *(__m128i **)(*(_QWORD *)a1 + 24LL);
  if ( !v9 )
    v9 = "";
  v11 = v10[2].m128i_i32[2];
  if ( v11 <= 0 )
  {
LABEL_8:
    sub_E89C0(128, (__int64)v21, "no such database: %s", v9);
LABEL_9:
    v17 = *(_QWORD *)a1;
    a1[9] = 1;
    sub_F11D0(v17, v21, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v16);
    return __readfsqword(0x28u) ^ v22;
  }
  v12 = v10[2].m128i_i64[0];
  v13 = 0;
  v14 = v12;
  while ( !*(_QWORD *)(v14 + 8) || !(unsigned int)sub_CF2D0((__int64)v10, v13, (unsigned __int8 *)v9) )
  {
    ++v13;
    v14 += 32;
    if ( v13 == v11 )
      goto LABEL_8;
  }
  if ( v13 <= 1 )
  {
    sub_E89C0(128, (__int64)v21, "cannot detach database %s", v9);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(v15 + 16) || *(_DWORD *)(v15 + 24) )
  {
    sub_E89C0(128, (__int64)v21, "database %s is locked", v9);
    goto LABEL_9;
  }
  v19 = *(_QWORD **)(*(_QWORD *)(v12 + 56) + 64LL);
  if ( v19 )
  {
    do
    {
      while ( 1 )
      {
        v20 = v19[2];
        if ( *(_QWORD *)(v20 + 48) == *(_QWORD *)(v14 + 24) )
          break;
        v19 = (_QWORD *)*v19;
        if ( !v19 )
          goto LABEL_20;
      }
      *(_QWORD *)(v20 + 48) = *(_QWORD *)(v20 + 40);
      v19 = (_QWORD *)*v19;
    }
    while ( v19 );
LABEL_20:
    v15 = *(_QWORD *)(v14 + 8);
  }
  sub_11C990(v15);
  *(_QWORD *)(v14 + 8) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  sub_CF460(v10);
  return __readfsqword(0x28u) ^ v22;
}

unsigned __int64 __fastcall sub_22C60(__int64 *a1, __int64 *a2, __int64 a3)
{
  const char *v5; // rdx
  const char *v6; // rcx
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+0h] [rbp-70h] BYREF
  char *v13; // [rsp+8h] [rbp-68h] BYREF
  __int128 v14; // [rsp+10h] [rbp-60h]
  const char *v15; // [rsp+28h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h]
  unsigned __int64 v17; // [rsp+40h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  v12 = *(_QWORD *)(a3 + 32);
  v13 = (char *)qvector_reserve(&v13, 0, 2, 1);
  *(_QWORD *)&v14 = 2;
  *v13 = 63;
  v13[1] = 0;
  if ( a3 && a1[22] > 0 && a1[24] )
    sub_20460(a1[20], (__int64 *)&v13, a1 + 22, *(_DWORD *)a3);
  v15 = nullptr;
  v5 = src;
  v16 = 0;
  if ( (_QWORD)v14 )
    v5 = v13;
  sub_20160((__int64 *)&v15, (__int64)"Size of %s", v5);
  v6 = src;
  if ( (_QWORD)v16 )
    v6 = v15;
  sub_1FCD0(*(_QWORD *)(a1[20] + 472), &v12, 1u, (__int64)v6, *(_QWORD *)(a3 + 24), -1);
  v7 = v12;
  v8 = a2[1];
  if ( v8 < v12 )
  {
    v10 = *a2;
    if ( a2[2] < v12 )
    {
      v11 = qvector_reserve(a2, v10, v12, 1);
      *a2 = v11;
      v8 = a2[1];
      v10 = v11;
    }
    memset((void *)(v10 + v8), 0, v7 - v8);
    a2[1] = v7;
  }
  else if ( v12 != v8 )
  {
    a2[1] = v12;
  }
  qlseek(*(_QWORD *)(a1[20] + 472), *(_QWORD *)(a3 + 24) + *(_QWORD *)(a1[20] + 480), 0);
  sub_182A0(a1[20], *a2, v7, 0);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v17 - __readfsqword(0x28u);
}

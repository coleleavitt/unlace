unsigned __int64 __fastcall sub_2EA7A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  void *v8; // rax
  const void *v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  __int128 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v4 = *a1;
  v5 = a1[2];
  v15 = __readfsqword(0x28u);
  v12 = 0;
  v10 = v4;
  v11 = 0;
  if ( v5 )
  {
    v8 = (void *)qalloc_or_throw(v5, a2, a3, a4);
    v9 = (const void *)a1[1];
    *((_QWORD *)&v12 + 1) = v5;
    v11 = (__int64)v8;
    memcpy(v8, v9, v5);
    *(_QWORD *)&v12 = v5;
  }
  v13 = a1[4];
  v14 = *((_DWORD *)a1 + 10) | 0xAC0100;
  sub_2EA5E0((__int64)&v10, a2, (__int64)"IFLAGS", 1);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v15 - __readfsqword(0x28u);
}


unsigned __int64 __fastcall sub_48610(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // edx
  const char *v7; // rdx
  const char *v8; // rcx
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  struct _Unwind_Exception *v14; // rbx
  unsigned __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  const char *v16; // [rsp+10h] [rbp-68h] BYREF
  __int128 v17; // [rsp+18h] [rbp-60h]
  const char *v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    v14 = (struct _Unwind_Exception *)sub_30AE0();
    if ( v18 )
    {
      v19 = 0;
      qfree(v18);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    _Unwind_Resume(v14);
  }
  v3 = *(_QWORD *)(a3 + 32);
  v5 = *(_DWORD *)a3;
  v16 = nullptr;
  v15 = v3;
  v17 = 0;
  sub_47D00((__int64)&v18, a1, v5);
  v7 = &s1;
  if ( v19 )
    v7 = v18;
  sub_2B240((__int64 *)&v16, (__int64)"Size of %s", v7);
  if ( v18 )
  {
    v19 = 0;
    qfree(v18);
  }
  v8 = &s1;
  if ( (_QWORD)v17 )
    v8 = v16;
  sub_45A20(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), &v15, 1u, v8, *(_QWORD *)(a3 + 8), -1);
  v9 = v15;
  v10 = a2[1];
  if ( v10 < v15 )
  {
    v12 = *a2;
    if ( a2[2] < v15 )
    {
      v13 = qvector_reserve(a2, v12, v15, 1);
      *a2 = v13;
      v10 = a2[1];
      v12 = v13;
    }
    memset((void *)(v12 + v10), 0, v9 - v10);
    a2[1] = v9;
  }
  else if ( v15 != v10 )
  {
    a2[1] = v15;
  }
  qlseek(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), *(_QWORD *)(a3 + 8) + *(_QWORD *)(*(_QWORD *)(a1 + 64) + 480LL), 0);
  sub_396B0(*(_QWORD *)(a1 + 64), *a2, v9, 0);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v20 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_2C380(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // edx
  const char *v7; // rcx
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  struct _Unwind_Exception *v13; // rbx
  unsigned __int64 v14; // [rsp+8h] [rbp-70h] BYREF
  const char *v15; // [rsp+10h] [rbp-68h] BYREF
  __int128 v16; // [rsp+18h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    v13 = (struct _Unwind_Exception *)sub_25E00();
    if ( v17 )
    {
      v18 = 0;
      qfree();
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    _Unwind_Resume(v13);
  }
  v3 = *(_QWORD *)(a3 + 32);
  v5 = *(_DWORD *)a3;
  v15 = nullptr;
  v14 = v3;
  v16 = 0;
  sub_2BEF0((__int64)&v17, a1, v5);
  sub_BF00((__int64 *)&v15);
  if ( v17 )
  {
    v18 = 0;
    qfree();
  }
  v7 = s;
  if ( (_QWORD)v16 )
    v7 = v15;
  sub_2A8C0(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), &v14, 1u, v7, *(_QWORD *)(a3 + 8), -1);
  v8 = v14;
  v9 = a2[1];
  if ( v9 < v14 )
  {
    v11 = *a2;
    if ( a2[2] < v14 )
    {
      v12 = qvector_reserve();
      *a2 = v12;
      v9 = a2[1];
      v11 = v12;
    }
    memset((void *)(v11 + v9), 0, v8 - v9);
    a2[1] = v8;
  }
  else if ( v14 != v9 )
  {
    a2[1] = v14;
  }
  qlseek();
  sub_27030(*(_QWORD *)(a1 + 64), *a2, v8);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v19 - __readfsqword(0x28u);
}


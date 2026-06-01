bool __fastcall sub_A11C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  bool result; // al
  __int64 v6; // r15
  void *v7; // rax
  const void *v8; // rsi
  bool v9; // [rsp+Fh] [rbp-89h]
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-88h] BYREF
  __int64 v11; // [rsp+18h] [rbp-80h]
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h]
  void *v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+48h] [rbp-50h]
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 605LL) & 0x40) == 0 )
    return 0;
  v3 = *(_QWORD *)(a3 + 8);
  result = 0;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v15 = a2;
    v17 = 0;
    v10 = off_4C9038;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v16 = nullptr;
    v7 = (void *)qalloc_or_throw();
    v8 = *(const void **)a3;
    v16 = v7;
    *((_QWORD *)&v17 + 1) = v3;
    memcpy(v7, v8, 8 * v3);
    *(_QWORD *)&v17 = v3;
    v11 = v6;
    sub_11BDF0(a1, &v10);
    v10 = off_4C9038;
    result = (_QWORD)v17 != 0;
    if ( v16 )
    {
      v9 = (_QWORD)v17 != 0;
      *(_QWORD *)&v17 = 0;
      qfree();
      return v9;
    }
  }
  return result;
}


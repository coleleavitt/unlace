unsigned __int64 __fastcall sub_1029D0(__int64 *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // [rsp+0h] [rbp-48h] BYREF
  __int128 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v5 = (_QWORD *)a1[1];
  v22 = __readfsqword(0x28u);
  v7 = v5[17];
  if ( (__int64)v7 <= (__int64)a2 )
    v7 = v5[16];
  v8 = a2 + a3;
  if ( v8 > v7 )
    v8 = v7;
  if ( a2 < v8 )
  {
    v10 = v8;
    v11 = v5[187];
    v20 = nullptr;
    v12 = v10 - a2;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL) & (v5[180] + a2);
    v21 = 0;
    v14 = v13;
    if ( v12 + v13 - 1 >= v13 )
    {
      v20 = (__int64 *)qvector_reserve((__int64)&v20, 0, 1, 16);
      v16 = 16 * v21;
      v17 = &v20[2 * v21];
      *v17 = v14;
      v17[1] = v12;
      *(_QWORD *)&v21 = v21 + 1;
      if ( (_QWORD)v21 )
      {
        switch ( a4 )
        {
          case 1:
            sub_316CB0(a1 + 12, &v20, v16, v15);
            break;
          case 2:
            sub_316CB0(a1 + 17, &v20, v16, v15);
            break;
          case 0:
            sub_317C60((__int64 *)&v20, (__int64)(a1 + 12));
            sub_316CB0(a1 + 9, &v20, v18, v19);
            break;
        }
      }
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree((__int64)v20);
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}


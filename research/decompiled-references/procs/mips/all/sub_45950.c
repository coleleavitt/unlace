__int64 __fastcall sub_45950(__int64 a1, __int64 a2, char a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  _QWORD v13[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v14; // [rsp+10h] [rbp-98h]
  __int64 v15; // [rsp+18h] [rbp-90h]
  __int128 v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int128 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  __int128 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int128 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+78h] [rbp-30h]
  __int64 v24; // [rsp+80h] [rbp-28h]
  __int64 v25; // [rsp+88h] [rbp-20h]
  __int64 v26; // [rsp+90h] [rbp-18h]
  unsigned __int64 v27; // [rsp+98h] [rbp-10h]

  v27 = __readfsqword(0x28u);
  v13[0] = a1;
  v13[1] = a2;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = -1;
  v26 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v19 = qvector_reserve(&v19, 0, 1, 16);
  v7 = 16 * v20;
  *(_QWORD *)&v20 = v20 + 1;
  v8 = v7 + v19;
  *(_WORD *)(v8 + 8) = 29;
  *(_QWORD *)v8 = 0;
  v11 = sub_45280((__int64)v13, a3, 0.0, a5, a6, 29, v7, v9, v10);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v11;
}

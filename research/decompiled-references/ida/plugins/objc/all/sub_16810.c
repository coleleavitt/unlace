__int64 __fastcall sub_16810(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD **v4; // rbx
  void *v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-B0h] BYREF
  _QWORD v8[3]; // [rsp+8h] [rbp-A8h] BYREF
  int v9; // [rsp+20h] [rbp-90h] BYREF
  void *v10; // [rsp+28h] [rbp-88h]
  int *v11; // [rsp+30h] [rbp-80h]
  int *v12; // [rsp+38h] [rbp-78h]
  __int64 v13; // [rsp+40h] [rbp-70h]
  __int64 v14; // [rsp+48h] [rbp-68h]
  __int128 v15; // [rsp+50h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-50h]
  int v17; // [rsp+68h] [rbp-48h]
  __int64 *v18; // [rsp+70h] [rbp-40h]
  __int64 *v19; // [rsp+78h] [rbp-38h]
  __int64 v20; // [rsp+80h] [rbp-30h]
  unsigned __int64 v21; // [rsp+90h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v20 = a3;
  v11 = &v9;
  v12 = &v9;
  v8[1] = 2;
  v9 = 0;
  v10 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  v17 = -1;
  v8[0] = &off_3C660;
  v18 = a1;
  v19 = &v7;
  v15 = 0;
  v3 = -1;
  if ( (unsigned int)sub_15BC0(a1, (__int64)v8, a2) == 1 )
    v3 = v7;
  v8[0] = &unk_3CB00;
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  v4 = (_QWORD **)v10;
  if ( v10 )
  {
    do
    {
      sub_10FE0(v4[3]);
      v5 = v4;
      v4 = (_QWORD **)v4[2];
      operator delete(v5, 0x28u);
    }
    while ( v4 );
  }
  return v3;
}

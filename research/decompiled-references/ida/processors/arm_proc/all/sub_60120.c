__int64 __fastcall sub_60120(__int64 a1, __int64 a2, char a3, double a4, double a5, __m128 a6)
{
  unsigned int v7; // ebp
  _QWORD **v8; // rbx
  void *v9; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v12; // [rsp+10h] [rbp-158h]
  __int128 v13; // [rsp+18h] [rbp-150h]
  int v14; // [rsp+28h] [rbp-140h]
  __int64 v15; // [rsp+30h] [rbp-138h]
  __int64 v16; // [rsp+38h] [rbp-130h]
  __int128 v17; // [rsp+40h] [rbp-128h]
  __int64 v18; // [rsp+50h] [rbp-118h]
  int v19; // [rsp+58h] [rbp-110h]
  __int128 v20; // [rsp+60h] [rbp-108h]
  __int128 v21; // [rsp+70h] [rbp-F8h]
  __int128 v22; // [rsp+80h] [rbp-E8h]
  __int64 v23; // [rsp+90h] [rbp-D8h]
  __int64 v24; // [rsp+98h] [rbp-D0h]
  int v25; // [rsp+A8h] [rbp-C0h] BYREF
  void *v26; // [rsp+B0h] [rbp-B8h]
  int *v27; // [rsp+B8h] [rbp-B0h]
  int *v28; // [rsp+C0h] [rbp-A8h]
  __int64 v29; // [rsp+C8h] [rbp-A0h]
  __int64 v30; // [rsp+D0h] [rbp-98h]
  __int128 v31; // [rsp+D8h] [rbp-90h]
  __int64 v32; // [rsp+E8h] [rbp-80h]
  int v33; // [rsp+F0h] [rbp-78h]
  __int64 v34; // [rsp+F8h] [rbp-70h]
  __int128 v35; // [rsp+100h] [rbp-68h]
  __int64 v36; // [rsp+110h] [rbp-58h]
  int v37; // [rsp+118h] [rbp-50h]
  __int64 v38; // [rsp+120h] [rbp-48h]
  __int128 v39; // [rsp+128h] [rbp-40h]
  char v40; // [rsp+138h] [rbp-30h]
  unsigned __int64 v41; // [rsp+148h] [rbp-20h]

  v41 = __readfsqword(0x28u);
  v11[0] = a1;
  v11[1] = a2;
  v12 = 0;
  v14 = 8;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 112;
  v23 = 0;
  v24 = -1;
  v25 = 0;
  v26 = nullptr;
  v27 = &v25;
  v28 = &v25;
  v29 = 0;
  v30 = 0;
  v13 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v31 = 0;
  v33 = 8;
  v32 = 0x8800000081LL;
  v30 = qvector_reserve();
  v34 = 0;
  v36 = 0xAA000000A3LL;
  v37 = 16;
  v35 = 0;
  v34 = qvector_reserve();
  v38 = 0;
  v40 = 0;
  v39 = 0;
  v7 = sub_5F940((__int64)v11, a3, 0.0, a5, a6);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  v8 = (_QWORD **)v26;
  if ( v26 )
  {
    do
    {
      sub_5E170(v8[3]);
      v9 = v8;
      v8 = (_QWORD **)v8[2];
      operator delete(v9, 0x28u);
    }
    while ( v8 );
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v7;
}


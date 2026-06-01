__int64 __fastcall sub_5DA40(__int64 a1, __int64 a2, unsigned __int8 a3, double a4, double a5, __m128 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  _QWORD v14[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-E8h]
  __int128 v16; // [rsp+18h] [rbp-E0h]
  int v17; // [rsp+28h] [rbp-D0h]
  __int64 v18; // [rsp+30h] [rbp-C8h]
  __int64 v19; // [rsp+38h] [rbp-C0h]
  __int128 v20; // [rsp+40h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-A8h]
  int v22; // [rsp+58h] [rbp-A0h]
  __int128 v23; // [rsp+60h] [rbp-98h]
  __int128 v24; // [rsp+70h] [rbp-88h]
  _QWORD *v25; // [rsp+80h] [rbp-78h]
  __int64 v26; // [rsp+88h] [rbp-70h]
  __int64 v27; // [rsp+90h] [rbp-68h]
  __int64 v28; // [rsp+98h] [rbp-60h]
  char v29; // [rsp+A0h] [rbp-58h]
  __int64 v30; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+B0h] [rbp-48h]
  __int64 v32; // [rsp+B8h] [rbp-40h]
  __int64 v33; // [rsp+C0h] [rbp-38h]
  __int64 v34; // [rsp+C8h] [rbp-30h]
  unsigned __int64 v35; // [rsp+D8h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  v14[0] = a1;
  v14[1] = a2;
  v15 = 0;
  v17 = 8;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 112;
  v28 = 0;
  v29 = 0;
  v30 = -1;
  v31 = 0x8000000000000000LL;
  v16 = 0;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v7 = (_QWORD *)qvector_reserve();
  qfree();
  v25 = v7;
  v27 = 0;
  v7[1] = 0;
  *v7 = 0xD0000000DLL;
  ++v26;
  v32 = 0;
  v33 = -1;
  v34 = 0xFFFFFFFFLL;
  v12 = sub_5D380((__int64)v14, a3, 0.0, a5, a6, v8, v9, v10, v11);
  if ( v25 )
  {
    v26 = 0;
    qfree();
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v12;
}

